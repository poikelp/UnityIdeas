using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class beem : MonoBehaviour {

	private float life;

	[SerializeField]
	private float speed;

	// Use this for initialization
	void Start () {
		life = 3.0f;
	}
	
	// Update is called once per frame
	void Update () {
		life -= Time.deltaTime;

		if (life < 0.0f)
			Destroy (this.gameObject);

		transform.position += new Vector3(0.0f, Time.deltaTime * speed, 0.0f);
	}
}
