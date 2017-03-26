using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bom : MonoBehaviour {
	private float life = 2.0f;
	private GameObject fire;
	private Vector2 pos;
	private GameObject maker;
	private int[][] stage;
	// Use this for initialization
	void Start () {
		maker = GameObject.Find ("StageMaker");
		stage = maker.GetComponent<StageMake> ().stage;
		fire = (GameObject)Resources.Load ("Prefab/Fire");
		pos = new Vector3 (Mathf.RoundToInt (transform.position.x), Mathf.RoundToInt (transform.position.z));
	}
	
	// Update is called once per frame
	void Update () {
		life -= Time.deltaTime;
		if (life <= 0.0f) {
			Fire ();
			Destroy (this.gameObject);
		}
	}

	void Fire (){
		for (int i = (int)pos.x; i > 0; i--) {
			if (stage [i] [(int)pos.y] == 0) {
				Instantiate (fire, new Vector3 (i, 0, pos.y), Quaternion.Euler (0.0f, 0.0f, 0.0f));
			} else {
				break;
			}
		}

		for(int i = (int)pos.x; i < stage.Length; i++){
			if (stage [i] [(int)pos.y] == 0) {
				Instantiate (fire, new Vector3 (i, 0, pos.y), Quaternion.Euler (0.0f, 0.0f, 0.0f));
			} else {
				break;
			}
		}

		for (int i = (int)pos.y; i > 0; i--) {
			if (stage [(int)pos.x] [i] == 0) {
				Instantiate (fire, new Vector3 (pos.x, 0, i), Quaternion.Euler (0.0f, 0.0f, 0.0f));
			} else {
				break;
			}
		}

		for(int i = (int)pos.y; i < stage.Length; i++){
			if (stage [(int)pos.x] [i] == 0) {
				Instantiate (fire, new Vector3 (pos.x, 0, i), Quaternion.Euler (0.0f, 0.0f, 0.0f));
			} else {
				break;
			}
		}
	}
}
