using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Character : MonoBehaviour {
	public int HP;
	private int pow;
	public Vector3 goal;
//	public Vector3 start;
//	public bool isMoving = false;
//	private float startTime;
//	private float time = 0.4f;
	public Manager manage;
	public UnityEngine.AI.NavMeshAgent agent;
	public Vector2 goV2;
	// Use this for initialization
	void Start () {
		agent = GetComponent<UnityEngine.AI.NavMeshAgent> ();
		manage = GameObject.FindGameObjectWithTag ("Manager").GetComponent<Manager> ();
		agent.acceleration = 25;
		//test
		//agent.SetDestination(new Vector3(3f, 0.5f, -15f ));
	}
	
	// Update is called once per frame
	void Update () {

	}

	public void Move(int direction){

		//目的地（仮）を設定
		goal = transform.position;
		goal.x = Mathf.RoundToInt (goal.x);
		goal.z = Mathf.RoundToInt (goal.z);
		switch (direction) {
		case 0:
			goal.x -= 1;
			break;
		case 1:
			goal.z += 1;
			break;
		case 2: 
			goal.x += 1;
			break;
		case 3:
			goal.z -= 1;
			break;
		default:
			break;
		}
		transform.LookAt (goal);
		goal.y += 1;

		goV2 = new Vector2 (goal.x, goal.z);
		foreach (Vector2 ene in manage.lastPos) {
			if (goV2.Equals (ene)) {
				goal = transform.position;
				goV2.x = transform.position.x;
				goV2.y = transform.position.z;
				return;
			}
		}
		if (goV2.Equals (manage.pPos)) {
			goal = transform.position;
			goV2.x = transform.position.x;
			goV2.y = transform.position.z;
			return;
		}

		//段差補正
		RaycastHit hit;
		Vector3 botom = new Vector3 (0, -1, 0);
		if (Physics.Raycast (goal, botom, out hit, 10)) {
			goal = hit.point;
			goal.x = Mathf.RoundToInt (goal.x);
			goal.z = Mathf.RoundToInt (goal.z);
		} else {
			goal = transform.position;
			goal.x = Mathf.RoundToInt (goal.x);
			goal.z = Mathf.RoundToInt (goal.z);
		}
		goV2 = new Vector2 (goal.x, goal.z);

		return;
	}

	public void NavStart () {
		agent.SetDestination (goal);
	}
}
