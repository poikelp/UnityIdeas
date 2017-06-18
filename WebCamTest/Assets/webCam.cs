using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class webCam : MonoBehaviour {

	WebCamTexture cam;

	// Use this for initialization
	void Start () {
		cam = new WebCamTexture (1280, 720, 35);
		gameObject.GetComponent<Renderer> ().material.mainTexture = cam;
		cam.Play ();
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
