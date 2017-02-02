using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyRandomMove : MonoBehaviour {
	private CharacterController eCon;
	private GameObject player;
	// Use this for initialization
	void Start () {
		eCon = GetComponent<CharacterController> ();
		player = GameObject.FindWithTag ("Player");
	}
	
	// Update is called once per frame
	void Update () {
		Vector3 pPos = player.transform.position;
		transform.LookAt (pPos);
		eCon.Move (transform.forward * Time.deltaTime * 5.0f);
	}
}
