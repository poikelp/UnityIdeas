using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Stairs : MonoBehaviour {
	private Vector3 pos;
	private Manager manage;
	// Use this for initialization
	void Start () {
		manage = GameObject.FindGameObjectWithTag ("Manager").GetComponent<Manager> ();
		pos = transform.position;
		pos.y = Mathf.RoundToInt (pos.y + 1);
	}
	
	// Update is called once per frame
	void Update () {
		if (pos == manage.pPos) {
			Debug.Log ("goaled");
		}
	}
}
