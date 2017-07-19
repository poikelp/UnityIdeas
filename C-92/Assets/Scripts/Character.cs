using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Character : MonoBehaviour {
	public int HP;
	private int pow;
	public Vector3 goal;
	public Vector3 start;
	public bool isMoving = false;
	private float startTime;
	private float time = 0.4f;
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

		}
	}

	public bool Move(int direction){

		//目的地（仮）を設定
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

		//目的地の方向に障害物があるどうか
		RaycastHit hit;
		if (Physics.Raycast (transform.position, transform.forward, out hit, 1)) {
			//キャラクタがいる場合
			if (hit.collider.tag == "Enemy" || hit.collider.tag == "Player") {
				goal = transform.position;
				return false;
			}
			//その上に上ることができるか？
			Vector3 lookPos = transform.position;
			lookPos.y += 1;
			if (!Physics.Raycast (lookPos, transform.forward, 1)) {
//				isMoving = true;
				goal.y += 1;
				start = transform.position;
				startTime = Time.timeSinceLevelLoad;
			} else {
				goal = transform.position;
				return false;
			}
		} else {
			Vector3 down = new Vector3 (0, -1, 0);
			//眼下にキャラクタがいるかどうか
			if (Physics.Raycast (goal, down, out hit, 10)) {
				if (hit.collider.tag == "Enemy" || hit.collider.tag == "Player") {
					goal = transform.position;
					return false;
				}
			}
			int lookCount = 0;
			while(!Physics.Raycast (goal, down, 1) && lookCount < 2){
				goal.y -= 1;
				lookCount += 1;
			}

//			isMoving = true;
			start = transform.position;
			startTime = Time.timeSinceLevelLoad;
		}
		return true;
	}
}
