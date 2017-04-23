using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class move : MonoBehaviour {

	private Vector2 oldTapPos;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		float hori = Input.GetAxis ("Horizontal");
		float vert = Input.GetAxis ("Vertical");

		if (Input.GetMouseButtonDown (0)) {
			
		}

	}
}
