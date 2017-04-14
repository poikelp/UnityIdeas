using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyType1 : MonoBehaviour {

	private float xPos;
	private float yPos;

	private float defXPos;

	public float speed;

	private GameObject parti;

	// Use this for initialization
	void Start () {
		yPos = transform.position.y;
		defXPos = transform.position.x;

		speed = Random.Range (0.1f, 3.0f);

		parti = (GameObject)Resources.Load ("Prefab/tanniparticle");

	}
	
	// Update is called once per frame
	void Update () {
		xPos = Mathf.PingPong (defXPos + Time.time * speed * 5.0f, 10.0f) - 5.0f;
		yPos -= Time.deltaTime * speed;

		transform.position = new Vector3 (xPos, yPos, 0.0f);

		if (transform.position.y < -8.0f) {
			Destroy (this.gameObject);
		}
	}

	void OnTriggerEnter (Collider col){

		if (col.gameObject.CompareTag ("beem") && transform.position.y < 5.0f) {
			var p = Instantiate (parti, this.transform.position, Quaternion.Euler (0.0f, 0.0f, 0.0f));
			Destroy (p, 3.0f);
			Destroy (col.gameObject);
			Destroy (this.gameObject);
		}

	}
}
