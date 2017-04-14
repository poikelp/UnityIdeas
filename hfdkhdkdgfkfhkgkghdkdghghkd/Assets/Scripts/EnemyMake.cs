using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyMake : MonoBehaviour {

	private GameObject enemy;

	private float time;

	// Use this for initialization
	void Start () {

		enemy = (GameObject)Resources.Load ("Prefab/enemy");

	}
	
	// Update is called once per frame
	void Update () {

		time += Time.deltaTime;

		if (time > 0.2f) {

			Instantiate (enemy, new Vector3 (Random.Range (0.1f, 9.9f) - 5.0f, transform.position.y, 0.0f), Quaternion.Euler (0.0f, 90.0f, 0.0f));
//			e.gameObject.GetComponent<EnemyType1> ().speed = Random.Range(0.1f, 1.5f);

			time = 0.0f;

		}

	}
}
