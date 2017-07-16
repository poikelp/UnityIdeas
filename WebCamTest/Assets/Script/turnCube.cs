using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class turnCube : MonoBehaviour {
	Rigidbody rigi;
	[SerializeField]
	Vector3 pow;
	// Use this for initialization
	void Start () {
		rigi = GetComponent<Rigidbody> ();
	}
	
	// Update is called once per frame
	void Update () {
		rigi.AddTorque (pow);
	}
}
