using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

// Spawn X objects onto valid planes detected by camera
// Spawned object based on recipe selected by user

// Include ARRaycastManager class with this object
[RequireComponent(typeof(ARRaycastManager))]
public class SpawnObjectOnPlane : MonoBehaviour
{
    private ARRaycastManager raycastManager;
    private GameObject spawnedObject;

    [SerializeField]
    private Dropdown recipeDropDown;

    [SerializeField]
    private int maxPrefabSpawnCount = 0;
    private int placedPrefabCount;

    [SerializeField]
    private GameObject meatballPrefab;
    private double meatballX = 0.1933;
    private double meatballY = -0.0594;
    private double meatballZ = 0.1017;

    static List<ARRaycastHit> s_Hits = new List<ARRaycastHit>();

    private void Awake()
    {
        raycastManager = GetComponent<ARRaycastManager>();
    }

    bool TryGetTouchPosition(out Vector2 touchPosition)
    {
        if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
        {
            touchPosition = Input.GetTouch(0).position;
            return true;
        }

        touchPosition = default;
        return false;
    }

    private void Update()
    {
        // user not touching screen
        if (!TryGetTouchPosition(out Vector2 touchPosition))
        {
            return;
        }

        // Cast a Ray against trackables, i.e., detected features such as planes
        // s_Hits contents are replaced with the raycast results, if successful
        if (raycastManager.Raycast(touchPosition, s_Hits, TrackableType.PlaneWithinPolygon))
        {
            var hitPose = s_Hits[0].pose;
            string dropDownText = recipeDropDown.options[recipeDropDown.value].text;

            if (dropDownText != "Recipe" && placedPrefabCount < maxPrefabSpawnCount)
            {
                SpawnPrefab(hitPose, dropDownText);
            }
        }
    }

    private void SpawnPrefab(Pose hitPose, string dropDownText)
    {
        Vector3 position = hitPose.position;

        if (dropDownText == "Spaghetti")
        {
            position.x = (float)(position.x + meatballX);
            position.y = (float)(position.y + meatballY);
            position.z = (float)(position.z + meatballZ);
            spawnedObject = Instantiate(meatballPrefab, position, hitPose.rotation);
        }

        placedPrefabCount++;
    }
}
