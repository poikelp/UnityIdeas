using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class animControll : MonoBehaviour {

	private Animator anim;

	// Use this for initialization
	void Start () {
		anim = GetComponent<Animator> ();
	}
	
	// Update is called once per frame
	void Update () {
		if (Input.GetAxis ("Horizontal") != 0.0f || Input.GetAxis ("Vertical") != 0.0f) {
			anim.SetBool ("Running", true);
		} else {
			anim.SetBool ("Running", false);
		}
	}
}
