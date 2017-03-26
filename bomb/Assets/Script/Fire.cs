using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Fire : MonoBehaviour {
	private float life = 2.0f;
	private BoxCollider coll;
	// Use this for initialization
	void Start () {
		coll = GetComponent<BoxCollider> ();
	}
	
	// Update is called once per frame
	void Update () {
		life -= Time.deltaTime;
		if (life <= 0.0f) {
			Destroy (this.gameObject);
		} else if(life <= 1.0f){
			Destroy (coll);
		}
	}
}
