using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AttackRange : MonoBehaviour {


	private RaycastHit hit;
	private Ray ray;


	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		ray = Camera.main.ScreenPointToRay(Input.mousePosition);
		if (Physics.Raycast(ray, out hit, 100f)){
//			if (hit.collider.tag == "range") {
				transform.position = hit.point;
//			}
		}
	}
}
