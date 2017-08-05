using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class tarPos : MonoBehaviour {

	private Transform master;
	public float smoothTime = 0.3f;
	private Vector3 velocity = Vector3.zero;

	// Use this for initialization
	void Start () {
		master = GameObject.FindGameObjectWithTag ("Player").transform;
	}
	
	// Update is called once per frame
	void Update () {
		transform.position = Vector3.SmoothDamp (transform.position, master.position, ref velocity, smoothTime);
	}
}
