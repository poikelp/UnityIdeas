using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TaniRecycle : MonoBehaviour {

	private Rigidbody rigi;

	// Use this for initialization
	void Start () {
		rigi = GetComponent<Rigidbody> ();
	}
	
	// Update is called once per frame
	void Update () {
		if (transform.position.y < -10.0f) {
			rigi.velocity = Vector3.zero;
			rigi.angularVelocity = Vector3.zero;
			transform.position = new Vector3 (0.0f, 10.0f, 0.0f);
			transform.eulerAngles = new Vector3 (0.0f, transform.eulerAngles.y, 0.0f);
			float rand = Random.Range (0, 20);
			if (rand <= 1.0) {
				this.transform.localScale = new Vector3 (1.2f, 1.2f, 1.2f);
			}else if(rand <= 2.0) {
				this.transform.localScale = new Vector3 (1.4f, 1.4f, 1.4f);

			} else {
				this.transform.localScale = new Vector3 (1.0f, 1.0f, 1.0f);

			}
		}
	}
}
