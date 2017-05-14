using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LightSet : MonoBehaviour {

	[SerializeField]
	private Material origin;

	private Material neoMat;

	private float emisV = 0.1f;

	private float changeSpeed;

	private float matTrigger;
	private float timeOut;

	private LightCube lig;

	// Use this for initialization
	void Start () {
		lig = GameObject.Find ("LightChanger").GetComponent<LightCube> ();
		this.changeSpeed = lig.changeSpeed;
		timeOut = 0.3f;
	}
	
	// Update is called once per frame
	void Update () {
		this.changeSpeed = lig.changeSpeed;

		if (emisV > 0.1f) {
			emisV -= Time.deltaTime * 0.2f;		//光を弱める
			float emissionColor = Mathf.Repeat (Time.time, 1.0f * changeSpeed);	//色を変える
			neoMat.SetColor ("_EmissionColor", Color.HSVToRGB(emissionColor / changeSpeed, 1.0f, emisV));
			if (emisV <= 0.1f) {
				GetComponent<Renderer> ().material = origin;
				//一定より弱くなったとき元のマテリアルに戻す
			}
		}

		if (Time.time > matTrigger) {
			if (Random.value < 0.005f) {
				CreateMaterial ();
			}
			matTrigger = Time.time + timeOut;
		}
	}
		
	void OnCollisionEnter(Collision collision){		//プレイヤーと接触したとき
		if (collision.gameObject.CompareTag ("Player")) {
			CreateMaterial ();

		}
	}

	void CreateMaterial () {	//新しいマテリアルを複製、適応
		neoMat = new Material (origin);

		emisV = 1.0f;

		GetComponent<Renderer> ().material = neoMat;
	}
}
