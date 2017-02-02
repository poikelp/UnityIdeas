using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Machibuse : MonoBehaviour {

	private GameObject player;
	private Vector3 oldPos;

	[SerializeField]
	UnityEngine.AI.NavMeshAgent agent;

	// Use this for initialization
	void Start () {
		player = GameObject.Find ("player");
		oldPos = Vector3.zero;

	}

	// Update is called once per frame
	void Update () {
		Vector3 target =  (player.transform.position - oldPos) * Time.deltaTime / 2.0f + player.transform.position;
		agent.SetDestination (target);

		if (transform.position.x > 10.0f) {
			Vector3 pos = transform.position;
			pos.x -= 20.0f;
			transform.position = pos;
		} else if (transform.position.x < -10.0f) {
			Vector3 pos = transform.position;
			pos.x += 20.0f;
			transform.position = pos;
		}

		oldPos = player.transform.position;
	}
	void OnCollisionEnter(Collision col){
		if(col.gameObject.CompareTag("Player")){
			Destroy(col.gameObject);
		}
	}
}
