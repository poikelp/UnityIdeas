using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Stairs : MonoBehaviour {
	[SerializeField]
	private Vector3 pos;
	private Manager manage;

	[SerializeField]
	private int nextScene;
	// Use this for initialization
	void Start () {
		manage = GameObject.FindGameObjectWithTag ("Manager").GetComponent<Manager> ();
		pos = transform.position;
		pos.x = Mathf.RoundToInt (pos.x);
		pos.y = Mathf.RoundToInt (pos.y + 1);
		pos.z = Mathf.RoundToInt (pos.z);
	}
	
	// Update is called once per frame
	void Update () {
		if (pos == manage.pPos) {
			SceneManager.LoadScene (nextScene);
		}
	}
}
