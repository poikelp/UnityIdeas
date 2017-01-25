using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class animControll : MonoBehaviour {

	private Animator anim;
	private Rigidbody rigi;

	// Use this for initialization
	void Start () {
		anim = GetComponent<Animator> ();
		rigi = GameObject.Find ("Sphere").GetComponent<Rigidbody> ();
	}
	
	// Update is called once per frame
	void Update () {
		anim.SetFloat ("Speed", rigi.velocity.magnitude);

	}
}
