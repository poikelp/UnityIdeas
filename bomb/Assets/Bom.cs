using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bom : MonoBehaviour {
	private float life = 2.0f;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		life -= Time.deltaTime;
		if (life <= 0.0f) {
			Destroy (this.gameObject);
		}
	}
}
