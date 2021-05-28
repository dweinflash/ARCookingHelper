using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Text.RegularExpressions;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Video;
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
    private Text toggleButtonText;

    [SerializeField]
    private Text actionText;

    [SerializeField]
    private GameObject meatballPrefab;
    private double meatballX = 0.1933;
    private double meatballY = -0.0594;
    private double meatballZ = 0.1017;

    [SerializeField]
    private GameObject videoScreenPrefab;
    private GameObject spawnedVideoScreen;

    [SerializeField]
    private VideoClip[] videos;
    private VideoPlayer videoPlayer;
    private int videoNumPlays = 0;

    static List<ARRaycastHit> s_Hits = new List<ARRaycastHit>();

    private void Awake()
    {
        raycastManager = GetComponent<ARRaycastManager>();
        actionText.text = "";
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
        if (!TryGetTouchPosition(out Vector2 touchPosition)  || toggleButtonText.text == "Enable")
        {
            return;
        }

        // Cast a Ray against trackables, i.e., detected features such as planes
        // s_Hits contents are replaced with the raycast results, if successful
        if (raycastManager.Raycast(touchPosition, s_Hits, TrackableType.PlaneWithinPolygon))
        {
            var hitPose = s_Hits[0].pose;
            string dropDownText = recipeDropDown.options[recipeDropDown.value].text;
            SpawnPrefab(hitPose, dropDownText);
        }
    }

    private void SpawnPrefab(Pose hitPose, string dropDownText)
    {
        Vector3 position = hitPose.position;

        if (dropDownText == "Cooking Helper")
        {
            if (spawnedVideoScreen == null)
            {
                spawnedVideoScreen = Instantiate(videoScreenPrefab, position, hitPose.rotation);
                spawnedVideoScreen.transform.Rotate(0.0f, 180.0f, 0.0f, Space.Self);
                videoPlayer = spawnedVideoScreen.AddComponent<UnityEngine.Video.VideoPlayer>();
                videoPlayer.isLooping = true;
                videoPlayer.playOnAwake = false;
            }
            else
            {
                spawnedVideoScreen.transform.position = hitPose.position;
                spawnedVideoScreen.transform.rotation = hitPose.rotation;
                spawnedVideoScreen.transform.Rotate(0.0f, 180.0f, 0.0f, Space.Self);
            }
        }

        if (dropDownText == "Spaghetti")
        {
            position.x = (float)(position.x + meatballX);
            position.y = (float)(position.y + meatballY);
            position.z = (float)(position.z + meatballZ);
            spawnedObject = Instantiate(meatballPrefab, position, hitPose.rotation);
        }
    }

    public void playVideoScreen()
    {
        if (spawnedVideoScreen == null)
        {
            return;
        }

        if (videoNumPlays == videos.Length)
        {
            videoPlayer.Stop();
            videoNumPlays = 0;
            actionText.text = "";
        }
        else
        {
            videoPlayer.clip = videos[videoNumPlays];
            string instruction = videos[videoNumPlays].ToString();
            instruction = instruction.ToUpper();
            instruction = instruction.Replace("_", " ");
            instruction = instruction.Trim(new Char[] { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' });
            actionText.text = instruction;

            //actionText.text = videos[videoNumPlays].ToString();

            videoNumPlays++;
            videoPlayer.Play();
        }
    }
}
