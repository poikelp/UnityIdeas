using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class Character : MonoBehaviour {

	[SerializeField]
	private GameObject model;
	public int HP = 3;
	private int pow = 1;
	public Vector3 goal;
	public Manager manage;
//	public UnityEngine.AI.NavMeshAgent agent;
//	private Animator anim;
	public Vector3 oldGoal;
	public int maxHP;

	// Use this for initialization
	void Start () {
//		agent = GetComponent<UnityEngine.AI.NavMeshAgent> ();
		manage = GameObject.FindGameObjectWithTag ("Manager").GetComponent<Manager> ();
//		agent.acceleration = 8;
//		if(CompareTag("Player")) anim = model.GetComponent<Animator> ();
		oldGoal = goal = transform.position;
		oldGoal.x = goal.x = Mathf.RoundToInt (goal.x);
		oldGoal.y = goal.y = Mathf.RoundToInt (goal.y + 0.1f);
		oldGoal.z = goal.z = Mathf.RoundToInt (goal.z);
		transform.position = goal;
		maxHP = HP;
		//test
	}
	
	// Update is called once per frame
//	void Update () {
//		if (anim != null) {
//			anim.SetBool ("mooving", Input.GetAxis("Horizontal") != 0 || Input.GetAxis("Vertical") != 0);
//		}

//	}

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
		transform.LookAt (new Vector3(goal.x, transform.position.y, goal.z));


		//段差補正
		Vector3 stPos = goal;
		stPos.y += 1;
		RaycastHit hit;
		if (Physics.Raycast (stPos, Vector3.down, out hit, 10)) {
			goal = hit.point;
			goal.y -= 0.01f;
			goal.x = Mathf.RoundToInt (goal.x);
			goal.y = Mathf.RoundToInt (goal.y);
			goal.z = Mathf.RoundToInt (goal.z);
			goal.y += 1;
		} else {
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
		if (HP <= 0)
			return;
		transform.position = goal;
	}

	public void Attack () {
		model.GetComponent<ModelsMove> ().Attack ();
		if (CompareTag ("Player")) {
			int i = 0;
			Vector3 hoge = goal;
			hoge.y += 1;
			foreach (Vector3 ene in manage.lastPos) {
				if (((goal + transform.forward) - ene).sqrMagnitude < 1.0f || ((hoge + transform.forward) - ene).sqrMagnitude < 1.0f) {
					manage.enemys [i].GetComponent<Enemy> ().Damaged (pow);
					break;
				}
				i++;
			}
		} else {
			manage.PC.Damaged (pow);
		}
	}

	public void Damaged (int dame){
		HP -= dame;
		if (HP <= 0)
			StartCoroutine (Dead ());
	}

	public IEnumerator Dead () {
		if (CompareTag ("Player")) {
			SceneManager.LoadScene (0);
		}
		goal.y = -100;
		oldGoal.y = -100;
		yield return new WaitForSeconds (0.5f);

		Vector3 pos = transform.position;
		pos.y = -100;
		transform.position = pos;
//		gameObject.SetActive (false);
	}


}
