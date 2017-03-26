using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour {

	private CharacterController cCon;

	[SerializeField]
	private float speed;

	private GameObject preBom;

	public int num;

	// Use this for initialization
	void Start () {
		cCon = GetComponent<CharacterController> ();
		preBom = (GameObject)Resources.Load ("Prefab/Bom");
	}
	
	// Update is called once per frame
	void Update () {
		float hori = 0;
		float vert = 0;
		if (num == 1) {
			hori = Input.GetAxis ("Horizontal") * Time.deltaTime * speed;
			vert = Input.GetAxis ("Vertical") * Time.deltaTime * speed;
		} else if (num == 2) {
			hori = Input.GetAxis ("Horizontal2") * Time.deltaTime * speed;
			vert = Input.GetAxis ("Vertical2") * Time.deltaTime * speed;
		}
		Vector3 motion = new Vector3 (hori, 0.0f, vert);

		if (num == 1) {
			if (Input.GetButtonDown ("Fire1")) {
				Instantiate (preBom, this.transform.position, Quaternion.Euler (0.0f, 0.0f, 0.0f));
			}
		} else if (num == 2) {
			if (Input.GetButtonDown ("Fire2")) {
				Instantiate (preBom, this.transform.position, Quaternion.Euler (0.0f, 0.0f, 0.0f));
			}
		}
		cCon.Move (motion);
		
	}

	void OnTriggerEnter(Collider collider){
		if (collider.gameObject.CompareTag ("Fire")) {
			Destroy (this.gameObject);
		}
	}
}
