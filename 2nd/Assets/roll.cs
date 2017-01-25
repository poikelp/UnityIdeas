using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class roll : MonoBehaviour {

	private Rigidbody rigi;

	[SerializeField]
	private float speed;

	// Use this for initialization
	void Start () {
		rigi = GetComponent<Rigidbody> ();
	}
	
	// Update is called once per frame
	void Update () {
		float hori = Input.GetAxis ("Horizontal");
		float vert = Input.GetAxis ("Vertical");

		Vector3 addPow = new Vector3 (hori * Time.deltaTime * speed, 0.0f, vert * Time.deltaTime * speed);
		rigi.AddForce (addPow);

	}
}
