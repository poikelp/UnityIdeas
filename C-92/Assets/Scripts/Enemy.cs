using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : Character {

//	private Manager man;

	// Use this for initialization
//	void Start () {
//		man = GameObject.FindGameObjectWithTag ("Manager").GetComponent<Manager> ();
//	}

	public void Think (Vector3 pPos) {
		
		Vector3 dire = transform.position - pPos;
		if (dire.sqrMagnitude > 100)
			return;
		if (HP <= 0)
			return;
		if (dire.sqrMagnitude <= 1.1f) {
			transform.LookAt (pPos);
			Attack ();
			return;
		}
//		if(

		if (Mathf.Abs (dire.x) >= Mathf.Abs (dire.z)) {
			if (dire.x >= 1)
				Move (0);
			else if (dire.x <= -1)
				Move (2);
		} else {
			if (dire.z >= 1)
				Move (3);
			else if (dire.z <= -1)
				Move (1);
		}
	}
}
