using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Fish : MonoBehaviour {

	private Vector3 vect;
	[SerializeField]
	private float speed;
	private Vector3 cent;
	private GameObject[] friends;
	private GameObject nearFriend;

	private Vector3 lastPos;

	// Use this for initialization
	void Start () {
		friends = GameObject.FindGameObjectsWithTag ("fish");
		lastPos = transform.position;
	}
	
	// Update is called once per frame
	void FixedUpdate () {
		friends = GameObject.FindGameObjectsWithTag ("fish");

		nearFriend = getNearFriend ();
		cent = getCenterPos();

		vect = (cent - lastPos) + nearFriend.GetComponent<Rigidbody>().velocity + gameObject.GetComponent<Rigidbody>().velocity * 0.5f;
		vect *= 0.9f;


		lastPos = transform.position;
//		transform.position = transform.position + vect * Time.deltaTime * 0.1f;
		gameObject.GetComponent<Rigidbody>().AddForce(vect);

		if(transform.position.x > 8 || transform.position.x < -8 || transform.position.y > 4 || transform.position.y < -4 || transform.position.z > 4 || transform.position.z < -4){
			Destroy (this.gameObject);
		}

	}
		

	GameObject getNearFriend(){
		float tmpDis = 0;           //距離用一時変数
		float nearDis = 0;          //最も近いオブジェクトの距離
		//string nearObjName = "";    //オブジェクト名称
		GameObject targetObj = null; //オブジェクト

		//タグ指定されたオブジェクトを配列で取得する
		foreach (GameObject obs in  friends){
			//自身と取得したオブジェクトの距離を取得
			tmpDis = Vector3.Distance(obs.transform.position, transform.position);

			//オブジェクトの距離が近いか、距離0であればオブジェクト名を取得
			//一時変数に距離を格納
			if (nearDis == 0 || nearDis > tmpDis){
				nearDis = tmpDis;
				//nearObjName = obs.name;
				targetObj = obs;
			}

		}
		//最も近かったオブジェクトを返す
		//return GameObject.Find(nearObjName);
		return targetObj;
	}

	Vector3 getCenterPos(){
		Vector3 sum = Vector3.zero;
		foreach (GameObject obs in friends) {
			sum += obs.transform.position;

		}
		Vector3 ave = sum / (friends.Length);

		return ave;
	}

	void OnCollisionEnter(Collision col){
		vect *= -1;
	}
}
