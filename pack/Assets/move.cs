using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class move : MonoBehaviour {
	[SerializeField]
	private float speed;
	private CharacterController cCon;
	// Use this for initialization
	void Start () {
		cCon = GetComponent<CharacterController> ();
	}
	
	// Update is called once per frame
	void Update () {
		float hori = Input.GetAxis ("Horizontal");
		float vert = Input.GetAxis ("Vertical");

		Vector3 velocity = new Vector3 (hori, 0.0f, vert);

		cCon.Move (velocity * speed * Time.deltaTime);

		if (transform.position.x > 10.0f) {
			Vector3 pos = transform.position;
			pos.x -= 20.0f;
			transform.position = pos;
		} else if (transform.position.x < -10.0f) {
			Vector3 pos = transform.position;
			pos.x += 20.0f;
			transform.position = pos;
		}
		
	}
}
