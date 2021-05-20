using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TestButton : MonoBehaviour
{
    public Button button;
    TimerSlider slider;
    // Start is called before the first frame update
    void Start()
    {
        slider = GameObject.FindGameObjectWithTag("TimerSlider").GetComponent<TimerSlider>();
        Button btn = GameObject.FindGameObjectWithTag("TestButton").GetComponent<Button>();
        btn.onClick.AddListener(TaskOnClick);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void TaskOnClick()
    {
        slider.Init(120f);
    }
}
