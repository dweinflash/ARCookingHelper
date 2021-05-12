using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnimDropdown : MonoBehaviour
{
    private Animator anim;
    private AudioSource audioSource;

    // Start is called before the first frame update
    void Start()
    {
        anim = GetComponent<Animator>();
        audioSource = GetComponent<AudioSource>();
        anim.enabled = false;
    }

    public void playAnimation()
    {
        anim.enabled = true;
        anim.Play("DropdownAnimation");
        audioSource.Play();
    }
}
