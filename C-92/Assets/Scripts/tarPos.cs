using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class tarPos : MonoBehaviour {

	private Transform master;
	public float smoothTime = 0.3f;
	private Vector3 velocity = Vector3.zero;

	// Use this for initialization
	void Start () {
		master = GameObject.FindGameObjectWithTag ("PlayerModel").transform;
	}
	
	// Update is called once per frame
	void FixedUpdate () {
		Vector3 pos = master.position;
		pos.y += 1;
		transform.position = Vector3.SmoothDamp (transform.position, pos, ref velocity, smoothTime);
	}
}
