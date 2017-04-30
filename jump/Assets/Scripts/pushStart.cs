using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class pushStart : MonoBehaviour {

	private RaycastHit hit;
	private Ray ray;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		if (Input.GetMouseButtonDown(0)){
			ray = Camera.main.ScreenPointToRay(Input.mousePosition);
			if (Physics.Raycast(ray, out hit, 100f)){
				if (hit.collider.CompareTag ("start")) {
					SceneManager.LoadScene ("main");
				}
			}       
		}
	}
}
