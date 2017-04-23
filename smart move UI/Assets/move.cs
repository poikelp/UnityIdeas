using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class move : MonoBehaviour {

	private Vector2 oldTapPos/* = new Vector2(0.0f, 0.0f)*/;
	[SerializeField]
	private float speed = 5.0f;
	private float oldHori = 0;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		float hori = Input.GetAxis ("Horizontal");
		float vert = Input.GetAxis ("Vertical");

		//クリックしたときの座標を取得
		if (Input.GetMouseButtonDown (0)) {
			oldTapPos = Input.mousePosition;
		}

		if (Input.GetMouseButton (0)) {
			if (oldTapPos.x > Input.mousePosition.x) {
				hori = -1.0f;
				oldHori = hori;
			} else if (oldTapPos.x < Input.mousePosition.x) {
				hori = 1.0f;
				oldHori = hori;
			} else if (oldTapPos.x == Input.mousePosition.x) {
				hori = oldHori;
			}
			oldTapPos = Input.mousePosition;
		}

		Vector3 velo = new Vector3 (hori * speed * Time.deltaTime, 0.0f, vert * speed * Time.deltaTime);
		transform.position += velo;
	}
}
