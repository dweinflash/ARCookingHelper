using System;
using System.IO;
using UnityEditor.Build;
using UnityEditor.Build.Reporting;
using UnityEngine;
using UnityEngine.XR.ARKit;
using UnityEngine.XR.ARSubsystems;

namespace UnityEditor.XR.ARKit
{
    static class ARKitReferenceObjectLibraryBuildProcessor
    {
        [Flags]
        enum Warnings
        {
            None = 0,
            MissingEntry = 1 << 0,
            EmptyLibrary = 1 << 1,
            MissingName = 1 << 2,
            All =
                MissingEntry |
                EmptyLibrary |
                MissingName
        }

        static void SetupReferenceObjects(Warnings warnings)
        {
            foreach (var library in ARKitBuildHelper.AssetsOfType<XRReferenceObjectLibrary>())
            {
                var resourceCount = 0;

                foreach (var referenceObject in library)
                {
                    if (string.IsNullOrEmpty(referenceObject.name) && (warnings & Warnings.MissingName) != 0)
                    {
                        Debug.LogWarning($"Reference object {library.IndexOf(referenceObject)} named '{referenceObject.name}' in library {AssetDatabase.GetAssetPath(library)} does not have a name. The reference object will still work, but you will not be able to refer to it by name.");
                    }

                    var arkitEntry = referenceObject.FindEntry<ARKitReferenceObjectEntry>();
                    if (arkitEntry == null)
                    {
                        if ((warnings & Warnings.MissingEntry) != 0)
                        {
                            Debug.LogWarning($"The ARKit variant for reference object {library.IndexOf(referenceObject)} named '{referenceObject.name}' in library {AssetDatabase.GetAssetPath(library)} is missing. This reference object will omitted from the library.");
                        }
                    }
                    else
                    {
                        var assetPath = AssetDatabase.GetAssetPath(arkitEntry);
                        if (string.IsNullOrEmpty(assetPath))
                            throw new BuildFailedException($"The ARKit variant for reference object {library.IndexOf(referenceObject)} named '{referenceObject.name}' in reference object library {AssetDatabase.GetAssetPath(library)} does not refer to a valid asset file.");

                        var info = ARObjectImporter.ReadInfo(assetPath);
                        if (!info.HasValue)
                            throw new BuildFailedException($"The ARKit variant for reference object {library.IndexOf(referenceObject)} named '{referenceObject.name}' in reference object library {AssetDatabase.GetAssetPath(library)} could not be read. The arobject file may be corrupt.");

                        if (string.IsNullOrEmpty(info.Value.trackingDataReference))
                            throw new BuildFailedException($"The ARKit variant for reference object {library.IndexOf(referenceObject)} named '{referenceObject.name}' in reference object library {AssetDatabase.GetAssetPath(library)} is missing tracking data (the 3D object scan data). The arobject file may be corrupt.");

                        arkitEntry.SetReferenceObjectBytes(File.ReadAllBytes(assetPath));
                        resourceCount++;
                    }
                }

                if (resourceCount == 0 && (warnings & Warnings.EmptyLibrary) != 0)
                {
                    Debug.LogWarning($"Reference object library at {AssetDatabase.GetAssetPath(library)} does not contain any ARKit reference objects. The library will be empty.");
                }
            }
        }

        class Preprocessor : IPreprocessBuildWithReport
        {
            public int callbackOrder => 1;

            static bool ARKitEnabled(BuildReport report)
            {
#if UNITY_XR_ARKIT_LOADER_ENABLED
                return report.summary.platform == BuildTarget.iOS;
#else
                return false;
#endif
            }

            // Validates the ARKit reference objects
            public void OnPreprocessBuild(BuildReport report)
            {
                if (ARKitEnabled(report))
                {
                    SetupReferenceObjects(Warnings.All);
                }
                else
                {
                    foreach (var library in ARKitBuildHelper.AssetsOfType<XRReferenceObjectLibrary>())
                    {
                        foreach (var referenceObject in library)
                        {
                            var arkitEntry = referenceObject.FindEntry<ARKitReferenceObjectEntry>();
                            if (arkitEntry)
                            {
                                arkitEntry.SetReferenceObjectBytes(null);
                            }
                        }
                    }
                }
            }
        }
    }
}
