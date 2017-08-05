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
	private Animator anim;
	public Vector3 oldGoal;

	private float eulerY = 0;
	private float rotaSp = 0.3f;
	private float rotaVe = 0;
	// Use this for initialization
	void Start () {
		agent = GetComponent<UnityEngine.AI.NavMeshAgent> ();
		manage = GameObject.FindGameObjectWithTag ("Manager").GetComponent<Manager> ();
		agent.acceleration = 8;
		if(CompareTag("Player")) anim = GetComponentInChildren<Animator> ();
		oldGoal = goal = transform.position;

		//test
		//agent.SetDestination(new Vector3(3f, 0.5f, -15f ));
	}
	
	// Update is called once per frame
	void Update () {
		if (anim != null) {
			anim.SetBool ("mooving", Input.GetAxis("Horizontal") != 0 || Input.GetAxis("Vertical") != 0);
		}

		transform.eulerAngles = new Vector3 (0, Mathf.SmoothDampAngle (transform.eulerAngles.y, eulerY, ref rotaVe, rotaSp), 0);
	}

	public void Move(int direction){

		//目的地（仮）を設定
//		goal = transform.position;
		oldGoal = goal;
		goal.x = Mathf.RoundToInt (goal.x);
		goal.y = Mathf.RoundToInt (goal.y);
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

		eulerY = (direction - 1) * 90;
//		transform.LookAt (goal);
//		transform.LookAt (new Vector3(goal.x, transform.position.y, goal.z));


		//段差補正
		Vector3 stPos = goal;
		stPos.y += 1;
		RaycastHit hit;
		Vector3 botom = new Vector3 (0, -1, 0);
		if (Physics.Raycast (stPos, botom, out hit, 10)) {
			goal = hit.point;
			goal.x = Mathf.RoundToInt (goal.x);
			goal.y = Mathf.RoundToInt (goal.y);
			goal.z = Mathf.RoundToInt (goal.z);
			goal.y += 1;
		} else {
//			goal = transform.position;
			goal = oldGoal;
		}



		foreach (Vector3 ene in manage.lastPos) {
			if (goal.Equals (ene)) {
				goal = oldGoal;
				return;
			}
		}
		if (goal.Equals (manage.pPos)) {
			goal = oldGoal;
			return;
		}

		return;
	}

	public void NavStart () {
		agent.SetDestination (goal);
	}
}
