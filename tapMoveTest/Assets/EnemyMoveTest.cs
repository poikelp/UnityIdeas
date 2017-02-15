using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyMoveTest : MonoBehaviour {

	private UnityEngine.AI.NavMeshAgent agent;

	[SerializeField]
	private GameManager manager; 

	[SerializeField]
	private Transform target;

	// Use this for initialization
	void Start () {
		agent = GetComponent<UnityEngine.AI.NavMeshAgent>();

	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void SetTarget () {
		
		agent.SetDestination (target.position);
		Invoke ("StopMove", 1.0f);

	}

	void StopMove () {
		agent.ResetPath ();
		manager.Turn = true;
	}
}
