using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TaniRecycle : MonoBehaviour {

	private Rigidbody rigi;

	// Use this for initialization
	void Start () {
		rigi = GetComponent<Rigidbody> ();
	}
	
	// Update is called once per frame
	void Update () {
		if (transform.position.y < -10.0f) {
			rigi.velocity = Vector3.zero;
			rigi.angularVelocity = Vector3.zero;
			transform.position = new Vector3 (0.0f, 10.0f, 0.0f);
			transform.eulerAngles = new Vector3 (0.0f, transform.eulerAngles.y, 0.0f);
		}
	}
}
