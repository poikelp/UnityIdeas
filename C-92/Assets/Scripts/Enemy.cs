using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : Character {

//	private Manager man;

	// Use this for initialization
//	void Start () {
//		man = GameObject.FindGameObjectWithTag ("Manager").GetComponent<Manager> ();
//	}

	public void Think (Vector2 pPos) {
		Vector2 dire = new Vector2(transform.position.x, transform.position.z) - pPos;
		if (Mathf.Abs (dire.x) > Mathf.Abs (dire.y)) {
			if (dire.x > 1)
				Move (0);
			else if (dire.x < -1)
				Move (2);
		} else {
			if (dire.y > 1)
				Move (3);
			else if (dire.y < -1)
				Move (1);
		}
	}
}
