using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PlayerMove : MonoBehaviour {

	private UnityEngine.AI.NavMeshAgent agent;
	private RaycastHit hit;
	private Ray ray;

	private GameObject over;

	// Use this for initialization
	void Start () {
		agent = GetComponent<UnityEngine.AI.NavMeshAgent> ();
		over = GameObject.Find ("Cube (6)");
	}
	
	// Update is called once per frame
	void Update () {
		if (Input.GetMouseButtonDown(0)){
			ray = Camera.main.ScreenPointToRay(Input.mousePosition);
			if (Physics.Raycast(ray, out hit, 100f)){
				agent.SetDestination(hit.point);
				if (hit.collider.gameObject.Equals (over)) {
					SceneManager.LoadScene ("start");
				}
			}  

		}
	}
}
