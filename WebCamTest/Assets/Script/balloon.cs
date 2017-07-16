using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class balloon : MonoBehaviour {


	[SerializeField]
	private float speed;
	[SerializeField]
	private float bigger;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		transform.position = new Vector3 (transform.position.x, transform.position.y + speed * Time.deltaTime, transform.position.z);
		if (transform.localScale.x < 20) {
			transform.localScale = transform.localScale + new Vector3(Time.deltaTime, Time.deltaTime, Time.deltaTime) * bigger;
		}
		if (transform.position.y > 500)
			Destroy (this.gameObject);
	}

	void OnTriggerEnter (Collider col){
		if (col.gameObject.CompareTag ("beem")) {
			Destroy (this.gameObject);
		}
	}
}
