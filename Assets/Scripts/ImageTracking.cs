using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

[RequireComponent(typeof(ARTrackedImageManager))]
public class ImageTracking : MonoBehaviour
{
    [SerializeField]
    private Dropdown recipeDropDown;
    private List<string> recipeList;
    private AnimDropdown recipeDropDownAnim;

    [SerializeField]
    private Text itemsText;
    private string itemsString;

    private int numSeenObjects;
    private Dictionary<string, bool> seenObjects;

    private IReferenceImageLibrary refLibrary;
    private ARTrackedImageManager trackedImageManager;

    [SerializeField]
    private GameObject[] placeablePrefabs;

    private Dictionary<string, GameObject> spawnedPrefabs = new Dictionary<string, GameObject>();

    private void Awake()
    {
        recipeList = new List<string>();
        recipeDropDownAnim = recipeDropDown.GetComponent<AnimDropdown>();

        numSeenObjects = 0;
        itemsString = "Items:\n";
        itemsText.text = itemsString;

        trackedImageManager = FindObjectOfType<ARTrackedImageManager>();
        refLibrary = trackedImageManager.referenceLibrary;

        seenObjects = new Dictionary<string, bool>();
        for (int i = 0; i < refLibrary.count; i++)
        {
            seenObjects.Add(refLibrary[i].name, false);
        }

        foreach(GameObject prefab in placeablePrefabs)
        {
            GameObject newPrefab = Instantiate(prefab, Vector3.zero, Quaternion.identity);
            newPrefab.name = prefab.name;
            spawnedPrefabs.Add(prefab.name, newPrefab);
        }
    }

    private void OnEnable()
    {
        trackedImageManager.trackedImagesChanged += ImageChanged;
    }

    private void OnDisable()
    {
        trackedImageManager.trackedImagesChanged -= ImageChanged;
    }

    // Functionality based on which trackedImages are being added/updated
    private void ImageChanged(ARTrackedImagesChangedEventArgs eventArgs)
    {
        int prevSeenObjects = numSeenObjects;

        foreach(ARTrackedImage trackedImage in eventArgs.added)
        {
            UpdateImage(trackedImage);
        }
        foreach (ARTrackedImage trackedImage in eventArgs.updated)
        {
            UpdateImage(trackedImage);
        }
        foreach (ARTrackedImage trackedImage in eventArgs.removed)
        {
            spawnedPrefabs[trackedImage.name].SetActive(false);
        }

        if (prevSeenObjects < numSeenObjects)
        {
            setItemsText();
            setRecipes();
        }
    }

    private void setItemsText()
    {
        string name;

        for (int i = 0; i < refLibrary.count; i++)
        {
            name = refLibrary[i].name;
            if (seenObjects[name] == true && !itemsString.Contains(name))
            {
                itemsString += name + "\n";
            }
        }

        itemsText.text = itemsString;
    }

    // Update recipe list based on seenObjects
    private void setRecipes()
    {
        // Spaghetti
        if (seenObjects["Pasta"] && seenObjects["Pot"])
        {
            if (!recipeList.Contains("Spaghetti"))
            {
                recipeList.Add("Spaghetti");
                recipeDropDown.options.Add(new Dropdown.OptionData() { text = "Spaghetti" });
                recipeDropDownAnim.playAnimation();
            }
        }
    }

    // Update seenObjects based on trackedImage detected in camera
    private void UpdateImage(ARTrackedImage trackedImage)
    {
        string name = trackedImage.referenceImage.name;
        seenObjects[name] = true;
        numSeenObjects += 1;

        Vector3 position = trackedImage.transform.position;

        GameObject prefab = spawnedPrefabs[name];
        prefab.transform.position = position;
        prefab.SetActive(true);
    }
}
