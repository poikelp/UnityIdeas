using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class cubeSup : MonoBehaviour {
	private Rigidbody rigi;
	// Use this for initialization
	void Start () {
		rigi = GetComponent<Rigidbody> ();
	}
	
	// Update is called once per frame
	void Update () {
		float hori = Input.GetAxis ("Horizontal");
		float vert = Input.GetAxis ("Vertical");
		if (rigi.IsSleeping()) {
			if (Mathf.Abs (hori) > 0.0f || Mathf.Abs (vert) > 0.0f) {
				rigi.WakeUp();
			}
		}
	}
}
