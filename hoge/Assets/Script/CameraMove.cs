using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraMove : MonoBehaviour {

	[SerializeField]
	Transform target;
	[SerializeField]
	float spinSpeed = 1.0f;
	private Vector3 nowPos;
	private Vector3 pos = Vector3.zero;
	private Vector2 input;
	[SerializeField]
	private float range = 10.0f;

	// Use this for initialization
	void Start () {
		nowPos = transform.localPosition;
		if (target == null) {
			target = GameObject.FindWithTag ("cameratarget").transform;
		}
		input.y = 0.5f;
	}
	
	// Update is called once per frame
	void Update () {
		
		if (Physics.Raycast (transform.position, transform.forward)) {
			if (transform.position.y < target.position.y - 1 && range > 0.4f && Input.GetAxis ("Vertical2") < 0) {
				range -= Time.deltaTime * spinSpeed * 10.0f;
			} else {
				if (range < 1.0f && Input.GetAxis ("Vertical2") > 0.0f) {
					range += Time.deltaTime * spinSpeed * 10.0f;
				}
			}
		}
		//Get MouseMove
		input += new Vector2(Input.GetAxis("Horizontal2") , Input.GetAxis("Vertical2")) * Time.deltaTime * spinSpeed;
		input.y = Mathf.Clamp (input.y, -0.49f + 0.5f, 0.2f + 0.5f);
		pos.x = range * Mathf.Sin (input.y * Mathf.PI) * Mathf.Cos (input.x * Mathf.PI);
		pos.y = range * Mathf.Cos (input.y * Mathf.PI);
		pos.z = range * Mathf.Sin (input.y * Mathf.PI) * Mathf.Sin (input.x * Mathf.PI);
		pos *= nowPos.z;
		pos.y += nowPos.y;

		transform.position = pos + target.position + new Vector3(0.0f, 0.6f, 0.0f);
		transform.LookAt (target.position + new Vector3(0.0f, 1.2f, 0.0f));
		
	}
}
