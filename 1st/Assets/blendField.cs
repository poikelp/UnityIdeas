using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class blendField : MonoBehaviour {

	[SerializeField]
	private float blendSpeed;

	// Use this for initialization
	void Start () {
		
		
	}
	
	// Update is called once per frame
	void Update () {
		float hori = Input.GetAxis ("Horizontal");
		float vert = Input.GetAxis ("Vertical");

		if (Mathf.Abs (hori) > 0.0f) {
			transform.Rotate (0.0f, 0.0f, hori * Time.deltaTime * blendSpeed * -1.0f);
			if (Mathf.Abs (transform.rotation.eulerAngles.z) > 45.0f && Mathf.Abs (transform.rotation.eulerAngles.z) < 315.0f) {
				transform.Rotate (0.0f, 0.0f, hori * Time.deltaTime * blendSpeed);
			}
		}
		if (Mathf.Abs (vert) > 0.0f) {
			transform.Rotate (vert * Time.deltaTime * blendSpeed, 0.0f, 0.0f);
			if (Mathf.Abs (transform.rotation.eulerAngles.x) > 45.0f && Mathf.Abs (transform.rotation.eulerAngles.x) < 315.0f) {
				transform.Rotate (vert * Time.deltaTime * blendSpeed * -1.0f, 0.0f, 0.0f);
			}
		}

		if (Mathf.Abs (transform.rotation.eulerAngles.y) > 0.01f) {
			transform.Rotate (0.0f, transform.rotation.eulerAngles.y * -1, 0.0f);
		}		
	}
}
