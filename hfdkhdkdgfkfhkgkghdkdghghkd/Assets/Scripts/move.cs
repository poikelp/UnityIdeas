using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class move : MonoBehaviour {

	[SerializeField]
	private float speed;

	private GameObject beem;
	// Use this for initialization
	void Start () {
		beem = (GameObject)Resources.Load ("Prefab/beem");
	}
	
	// Update is called once per frame
	void Update () {

		float hori = Input.GetAxis ("Horizontal");
		float vert = Input.GetAxis ("Vertical");

		if (Mathf.Abs (hori * Time.deltaTime * speed + transform.position.x) > 5.0f) {
			hori = 0.0f;
		}

		if (Mathf.Abs (vert * Time.deltaTime * speed + transform.position.y) > 5.0f) {
			vert = 0.0f;
		}

		Vector3 move = new Vector3 (hori, vert, 0.0f);

		transform.position += move * Time.deltaTime * speed;

		if (Input.GetButtonDown ("Fire1")) {
			Instantiate (beem, this.transform.position, Quaternion.Euler (0.0f, 0.0f, 0.0f));
		}
	}
}
