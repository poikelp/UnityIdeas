using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LightSet : MonoBehaviour {

	[SerializeField]
	private Material origin;

	private Material neoMat;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		if(Input.GetButton("Fire1")){
			CreateMaterial ();
		}
	}

	void CreateMaterial () {
		neoMat = new Material (origin.shader);
		GetComponent<Renderer> ().material = neoMat;
	}
}
