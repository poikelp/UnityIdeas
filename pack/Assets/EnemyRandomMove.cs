using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyRandomMove : MonoBehaviour {
	
	private GameObject player;

	[SerializeField]
	UnityEngine.AI.NavMeshAgent agent;

	// Use this for initialization
	void Start () {
		player = GameObject.Find ("player");


	}
	
	// Update is called once per frame
	void Update () {
		Vector3 target =  player.transform.position;
		agent.SetDestination (target);

	}
}
