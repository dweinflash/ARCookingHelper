using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TimerSlider : MonoBehaviour
{
    Slider timerSlider;
    Text timerText;
    public float time = 10;
    Image fillImage;
    public Color32 normalFillColor;
    public Color32 warningFillColor;
    public Color32 doneFillColor;
    public float warningLimit;

    public bool stopTimer;

    Text timerDoneText;
    // Start is called before the first frame update
    void Start()
    {
        Debug.Log("Test");
        timerSlider = GameObject.FindGameObjectWithTag("TimerSlider").GetComponent<Slider>();
        timerText = GameObject.FindGameObjectWithTag("TimerText").GetComponent<Text>();
        timerText.gameObject.SetActive(false);
        timerDoneText = GameObject.FindGameObjectWithTag("DoneText").GetComponent<Text>();
        timerDoneText.gameObject.SetActive(false);

        fillImage = GameObject.FindGameObjectWithTag("SliderFill").GetComponent<Image>();
        fillImage.color = normalFillColor;
    }

    public void Init(float maxTimeSec)
    {
        Debug.Log("Button Clicked");
        stopTimer = false;
        timerDoneText.gameObject.SetActive(false);
        time = maxTimeSec;
        warningLimit = maxTimeSec * 0.1f;
        timerSlider.maxValue = time;
        timerSlider.value = time;
        timerText.gameObject.SetActive(true);
        fillImage.color = normalFillColor;
    }

    // Update is called once per frame
    void Update()
    {

        time -= Time.deltaTime;
        int minutes = Mathf.FloorToInt(time / 60F);
        int seconds = Mathf.FloorToInt(time - minutes * 60);
        string niceTime = string.Format("{0:0}:{1:00}", minutes, seconds);

        string textTime = "Time left: " + niceTime;

        if (stopTimer == false)
        {
            timerText.text = textTime;
            timerSlider.value = time;
        }

        if(time < warningLimit)
        {
            fillImage.color = warningFillColor;
        }

        if (time <= 0)
        {
            stopTimer = true;
            timerText.gameObject.SetActive(false);
            timerDoneText.gameObject.SetActive(true);
            timerSlider.value = timerSlider.maxValue;
            fillImage.color = doneFillColor;
        }
    }
}
