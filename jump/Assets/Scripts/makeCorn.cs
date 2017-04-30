using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class makeCorn : MonoBehaviour {

	private GameObject corn;

	// Use this for initialization
	void Start () {
		corn = (GameObject)Resources.Load ("Prefab/corn");

		for (int i = 0; i < 300; i++) {
			Instantiate (corn, transform.position, transform.rotation);
		}
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
