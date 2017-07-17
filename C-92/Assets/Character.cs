using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Character : MonoBehaviour {
	public int HP;
	private int pow;
	private Vector3 goal;
	private Vector3 start;
	private bool isMoving = false;
	private float startTime;
	public float time;
	// Use this for initialization
	void Start () {
	}
	
	// Update is called once per frame
	void Update () {
		if (isMoving) {
			//移動
			float diff = Time.timeSinceLevelLoad - startTime;
			if (diff > time) {
				transform.position = goal;
				isMoving = false;
			}
			float rate = diff / time;
			transform.position = Vector3.Lerp (start, goal, rate);
		} else {
			float hori = Input.GetAxis ("Horizontal");
			float vert = Input.GetAxis ("Vertical");
			if (hori > 0)
				Move (0);
			else if (vert > 0)
				Move (1);
			else if (hori < 0)
				Move (2);
			else if (vert < 0)
				Move (3);
		}
	}

	void Move(int direction){
		goal = transform.position;
		switch (direction) {
		case 0:
			goal.x += 1;
			break;
		case 1:
			goal.z += 1;
			break;
		case 2: 
			goal.x -= 1;
			break;
		case 3:
			goal.z -= 1;
			break;
		default:
			break;
		}
		transform.LookAt (goal);
		if (Physics.Raycast (transform.position, transform.forward, 1)) {
			goal.y += 1;
			Vector3 lookPos = transform.position;
			lookPos.y += 1;
			if (!Physics.Raycast (lookPos, transform.forward, 1)) {
				isMoving = true;
				start = transform.position;
				startTime = Time.timeSinceLevelLoad;
			}
		} else {
			isMoving = true;
			start = transform.position;
			startTime = Time.timeSinceLevelLoad;
		}
	}
}
