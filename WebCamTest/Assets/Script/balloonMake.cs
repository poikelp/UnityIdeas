using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class balloonMake : MonoBehaviour {


	[SerializeField]
	private float interval;
	private float hoge;
	private float circleScale;

	[SerializeField]
	private GameObject balloon;

	// Use this for initialization
	void Start () {
		hoge = 0.0f;
		circleScale = 300.0f;
		balloon = (GameObject)Resources.Load ("Prefab/balloon");
	}
	
	// Update is called once per frame
	void Update () {
		hoge += Time.deltaTime;
		if (hoge > interval) {
			Instantiate (balloon, transform.position, transform.localRotation);
			float rand = Random.Range (0.0f, 2.0f);
			transform.position = new Vector3 (circleScale * Mathf.Sin (rand * Mathf.PI), transform
				.position.y, circleScale * Mathf.Cos (rand * Mathf.PI));
			hoge = 0.0f;
		}

	}
}
