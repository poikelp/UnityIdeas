using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Kimagure : MonoBehaviour {

	private GameObject player;
	private GameObject akabei;

	[SerializeField]
	UnityEngine.AI.NavMeshAgent agent;

	// Use this for initialization
	void Start () {
		player = GameObject.Find ("player");
		akabei = GameObject.Find ("akabei");


	}

	// Update is called once per frame
	void Update () {
		Vector3 target =  player.transform.position * 2.0f - akabei.transform.position;
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
	}

	void OnCollisionEnter(Collision col){
		if(col.gameObject.CompareTag("Player")){
			Destroy(col.gameObject);
		}
	}
}
