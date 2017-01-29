using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Hammer : MonoBehaviour {

	private Rigidbody rigi;
	private bool swinging = false;
	[SerializeField]
	private float torque;

	// Use this for initialization
	void Start () {
		rigi = GetComponent<Rigidbody> ();
	}
	
	// Update is called once per frame
	void Update () {
		float nextPos = Mathf.PingPong (Time.time, 4.0f) - 0.5f;
		transform.position = new Vector3 (-1.5f, nextPos, -1.5f);

		if (Input.GetButtonDown ("Fire1") && !swinging) {
			swinging = true;
//			transform.eulerAngles = Vector3.Lerp(transform.eulerAngles, new Vector3(0.0f, 30.0f, 0.0f), Time.deltaTime);
			rigi.AddTorque(0.0f, torque, 0.0f);
		}
		if (transform.eulerAngles.y > 50.0f) {
			rigi.angularVelocity = Vector3.zero;
			transform.eulerAngles = Vector3.zero;
			swinging = false;
		}
	}
		
}
