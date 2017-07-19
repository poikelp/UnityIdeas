using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Manager : MonoBehaviour {

//	public List<var> unit;
	private float hori;
	private float vert;
	private bool left;
	private bool right;
	private GameObject player;
	private Character PC;
	public Vector3 pGoal;
	private bool canMove = false;
	public GameObject[] enemys;

	// Use this for initialization
	void Start () {
		player = GameObject.FindGameObjectWithTag ("Player");
		PC = player.GetComponent<Character> ();
		pGoal = player.transform.position;
		enemys = GameObject.FindGameObjectsWithTag ("Enemy");

		StartCoroutine (Coroutine ());
	}
	
	// Update is called once per frame
	void Update () {
		hori = Input.GetAxis ("Horizontal");
		vert = Input.GetAxis ("Vertical");
	}

	IEnumerator Coroutine() {
		var cor = StartCoroutine (WateInput ());
		yield return cor;
		while (!canMove) {
			cor = StartCoroutine (WateInput ());
			yield return cor;
		}
		cor = StartCoroutine (EnemyThink ());
		yield return cor;
		cor = StartCoroutine (UnitMove ());
		yield return cor;
		cor = StartCoroutine (EnemyAttack ());
		yield return cor;
		StartCoroutine (Coroutine ());
	}

	IEnumerator WateInput (){
		Debug.Log ("WI");
		while (!left && !right && hori == 0 && vert == 0) {
			yield return null;
		}
		if (hori > 0) {
			canMove = PC.Move (0);
		} else if (vert > 0) {
			canMove = PC.Move (1);
		} else if (hori < 0) {
			canMove = PC.Move (2);
		} else if (vert < 0) {
			canMove = PC.Move (3);
		}
		pGoal = PC.goal;
/*		入力情報を取得
 *		if(攻撃)
 *			StartCoroutine (PlayerAttack ());
 */

	}
	IEnumerator PlayerAttack () {
		yield return new WaitForSeconds(0.1f);
	}
	IEnumerator EnemyThink () {
		Debug.Log ("ET");
		foreach (GameObject ene in enemys) {
			ene.GetComponent<Enemy> ().Think (pGoal);
		}
		yield return new WaitForSeconds(0.0f);
	}
	IEnumerator UnitMove (){
		Debug.Log ("UM");
		PC.isMoving = true;
		foreach (GameObject ene in enemys) {
			ene.GetComponent<Enemy> ().isMoving = true;
		}
		yield return new WaitForSeconds(0.4f);
	}
	IEnumerator EnemyAttack () {
		Debug.Log ("EA");
		yield return new WaitForSeconds(0.0f);
	}
}
