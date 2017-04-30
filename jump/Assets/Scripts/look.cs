using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class look : MonoBehaviour {

	private GameObject target;

	// Use this for initialization
	void Start () {
		target = GameObject.Find ("corn");
	}
	
	// Update is called once per frame
	void Update () {
		transform.LookAt (target.transform);
	}
}
