using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Camera : MonoBehaviour {

	[SerializeField]
	private Transform target;
	[SerializeField]
	private float spinSpeed = 1.0f;
//	private Vector3 nowPos;
	private Vector3 pos = Vector3.zero;
	private Vector2 mouse;
	private float range = 5.0f;
	private float wheel;

	// Use this for initialization
	void Start () {
//		nowPos = transform.position;
		if (target == null) {
			target = GameObject.Find ("camTarget").transform;
		}
		mouse.y = 0.3f;
		
	}
	
	// Update is called once per frame
	void Update () {
		mouse += new Vector2 (Input.GetAxis ("Mouse X") * -1, Input.GetAxis ("Mouse Y") * 0.3f) * Time.deltaTime * spinSpeed;

		mouse.y = Mathf.Clamp (mouse.y, -0.4f + 0.5f, 0.3f + 0.5f);
		pos.x = range * Mathf.Sin (mouse.y * Mathf.PI) * Mathf.Cos (mouse.x * Mathf.PI);
		pos.y = range * Mathf.Cos (mouse.y * Mathf.PI);
		pos.z = range * Mathf.Sin (mouse.y * Mathf.PI) * Mathf.Sin (mouse.x * Mathf.PI);

		transform.position = pos + target.position;
		transform.LookAt (target.position);

		wheel = Input.GetAxis ("Mouse ScrollWheel");
		range = Mathf.Clamp (range - wheel * 5.0f, 3.0f, 20.0f);
	}
}
