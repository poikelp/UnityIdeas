using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class hoge : MonoBehaviour {

	[SerializeField]
	private float speed;

	private Rigidbody rigi;

	private Vector3 velo;

	// Use this for initialization
	void Start () {
		rigi = GetComponent<Rigidbody> ();
	}
	
	// Update is called once per frame
	void Update () {
		float vert = Input.GetAxis ("Vertical");
		float hori = Input.GetAxis ("Horizontal");

		velo.x += vert * Time.deltaTime * speed;
		velo.y += hori * Time.deltaTime * speed;

		rigi.AddForce (velo);
		Debug.Log (vert);
	}
}
