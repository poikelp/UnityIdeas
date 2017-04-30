using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HeatDamage : MonoBehaviour {

	public GameObject manager;

	// Use this for initialization
	void Start () {
		manager = GameObject.Find ("manager");
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void OnTriggerStay(Collider other){
		if (other.CompareTag ("Player")) {
			manager.GetComponent<GameManager> ().life += Time.deltaTime / 10.0f;
		}
	}
}
