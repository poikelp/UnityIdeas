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
	public Vector2 pPos;
//	private bool canMove = false;
	public GameObject[] enemys;
	public Vector2[] lastPos;
	public Transform p;
	private Transform cam;

	// Use this for initialization
	void Start () {
		player = GameObject.FindGameObjectWithTag ("Player");
		PC = player.GetComponent<Character> ();
		enemys = GameObject.FindGameObjectsWithTag ("Enemy");
		int i = 0;
		lastPos = new Vector2[enemys.Length];
		foreach(GameObject ene in enemys){
			Debug.Log ("hoge");
			lastPos[i] = new Vector2(ene.transform.position.x, ene.transform.position.z);
			i++;
		}
		p = GameObject.FindGameObjectWithTag ("Player").transform;
		pPos = new Vector2 (p.position.x, p.position.z);

		cam = GameObject.FindGameObjectWithTag ("MainCamera").transform;

		StartCoroutine (Coroutine ());
	}
	
	// Update is called once per frame
	void Update () {
		hori = Input.GetAxis ("Horizontal");
		vert = Input.GetAxis ("Vertical");
	}

	IEnumerator Coroutine() {
		while (true) {
			var cor = StartCoroutine (WateInput ());
			yield return cor;
//		while (!canMove) {
//			cor = StartCoroutine (WateInput ());
//			yield return cor;
//		}
			cor = StartCoroutine (EnemyThink ());
			yield return cor;
			cor = StartCoroutine (UnitMove ());
			yield return cor;
			cor = StartCoroutine (EnemyAttack ());
			yield return cor;
//			StartCoroutine (Coroutine ());
		}
	}

	IEnumerator WateInput (){
		Debug.Log ("WI");
		while (!left && !right && hori == 0 && vert == 0) {
			yield return null;
		}
		int dire = 0;
		dire += (int)(cam.eulerAngles.y + 45) / 90;
		if (hori < 0) {
			PC.Move (dire);
		} else if (vert > 0) {
			PC.Move ((dire + 1) % 4);
		} else if (hori > 0) {
			PC.Move ((dire + 2) % 4);
		} else if (vert < 0) {
			PC.Move ((dire + 3) % 4);
		}

		yield return null;
		pPos = PC.goV2;
/*		入力情報を取得
 *		if(攻撃)
 *			StartCoroutine (PlayerAttack ());
 */

	}
	IEnumerator PlayerAttack () {
		yield return new WaitForSeconds(0.1f);
	}
	IEnumerator EnemyThink () {
//		Debug.Log ("ET");
		int i = 0;
		foreach (GameObject ene in enemys) {
			ene.GetComponent<Enemy> ().Think (pPos);
			yield return null;
			lastPos [i] = ene.GetComponent<Enemy> ().goV2;
			i++;
		}
	}
	IEnumerator UnitMove (){
//		Debug.Log ("UM");
		PC.NavStart ();
		foreach (GameObject ene in enemys) {
			ene.GetComponent<Enemy> ().NavStart ();
			yield return null;
		}

		while (PC.agent.hasPath) {
			yield return null;
		}

	}
	IEnumerator EnemyAttack () {
//		Debug.Log ("EA");
		yield return new WaitForSeconds(0.0f);
	}
}
