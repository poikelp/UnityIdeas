using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : Character {

	private Manager man;

	// Use this for initialization
	void Start () {
		man = GameObject.FindGameObjectWithTag ("Manager").GetComponent<Manager> ();
	}

	public void Think (Vector3 pGoal) {
		Vector3 dire = transform.position - pGoal;
		bool hoge;
		if (Mathf.Abs (dire.x) > Mathf.Abs (dire.z)) {
			if (dire.x > 1)
				hoge = Move (2);
			else if (dire.x < -1)
				hoge = Move (0);
		} else {
			if (dire.z > 1)
				hoge = Move (3);
			else if (dire.z < -1)
				hoge = Move (1);
		}
	}
}
