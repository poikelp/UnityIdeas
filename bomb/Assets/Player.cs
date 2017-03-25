using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour {

	private CharacterController cCon;

	[SerializeField]
	private float speed;

	private GameObject preBom;

	// Use this for initialization
	void Start () {
		cCon = GetComponent<CharacterController> ();
		preBom = (GameObject)Resources.Load ("Prefab/Bom");
	}
	
	// Update is called once per frame
	void Update () {
		float hori = Input.GetAxis ("Horizontal") * Time.deltaTime * speed;
		float vert = Input.GetAxis ("Vertical") * Time.deltaTime * speed;

		Vector3 motion = new Vector3 (hori, 0.0f, vert);

		if (Input.GetButtonDown ("Fire1")) {
			Instantiate (preBom, transform.position, Quaternion.Euler(0.0f, 0.0f, 0.0f));
		}

		cCon.Move (motion);
		
	}
}
