using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CornBomb : MonoBehaviour {

	private float life;
	private GameObject pop;

	// Use this for initialization
	void Start () {
		life = Random.Range (5.0f, 120.0f); 
		pop = (GameObject)Resources.Load ("Prefab/pop");
	}
	
	// Update is called once per frame
	void Update () {
		life -= Time.deltaTime;
		if (life < 0.0f) {
			var inst = Instantiate (pop, transform.position, transform.rotation);
			inst.GetComponent<Rigidbody> ().AddForce (new Vector3(0.0f, 300.0f, 0.0f));
			Destroy (this.gameObject);
		}
	}
}
