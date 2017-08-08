using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ModelsMove : MonoBehaviour {

	[SerializeField]
	private GameObject master;
	public float smoothTime = 0.3f;
	private Vector3 velocity = Vector3.zero;
	private float turnVelo = 0;
	private Animator anim;
	private Vector3 oldPos;

	private float jumpTime = 0;

	// Use this for initialization
	void Start () {
		anim = GetComponent<Animator> ();
		oldPos = transform.position;
	}
	
	// Update is called once per frame
	void Update () {
		Vector3 goal = master.transform.position;
		goal.y -= 0.5f;
		if (jumpTime < 0.0f) {
			if (Mathf.Abs (goal.y - transform.position.y) > 0.8f) {
				anim.SetTrigger ("jump");
				jumpTime = smoothTime;
			}
		} else {
			jumpTime -= Time.deltaTime;
		}
		transform.position = Vector3.SmoothDamp (transform.position, goal, ref velocity, smoothTime);

		transform.eulerAngles = new Vector3 (0, 
								Mathf.SmoothDampAngle (	transform.eulerAngles.y, 
									master.transform.eulerAngles.y, 
									ref turnVelo, smoothTime), 
								0); 
		anim.SetBool ("mooving", (transform.position - oldPos).sqrMagnitude > 0.00001f);
		oldPos = transform.position;
		if (transform.position.y < -1) {
			gameObject.SetActive (false);
		}
	}

	public void Attack () {
		anim.SetTrigger ("attack");
	}
}
