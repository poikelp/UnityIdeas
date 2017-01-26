using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class chaseCamera : MonoBehaviour {

	private Transform tage;

	public float velo = 0.0f;

	// Use this for initialization
	void Start () {
		tage = GameObject.FindWithTag ("Player").GetComponent<Transform> ();
	}
	
	// Update is called once per frame
	void FixedUpdate () {
		float newPos = Mathf.Clamp (Mathf.SmoothDamp(transform.position.x, tage.position.x, ref velo, 0.5f), 0.0f, 10.0f);
		transform.position = new Vector3 (newPos, transform.position.y, transform.position.z);
	}
}
