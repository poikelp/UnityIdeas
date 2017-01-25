using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ReStand : MonoBehaviour {

	private Vector3 oldPos;

	// Use this for initialization
	void Start () {
		oldPos = transform.position;
	}
	
	// Update is called once per frame
	void Update () {
		Vector3 diff = transform.position - oldPos;
		if((Mathf.Abs(diff.x) > 0.0f || Mathf.Abs(diff.z) > 0.0f) && (Input.GetAxis("Horizontal") != 0.0f || Input.GetAxis("Vertical") != 0.0f)){
			diff = new Vector3 (diff.x, 0.0f, diff.z);
			transform.rotation = Quaternion.LookRotation(diff);
		}

		oldPos = transform.position;
	}
}
