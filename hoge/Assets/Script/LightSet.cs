using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LightSet : MonoBehaviour {

	[SerializeField]
	private Material origin;

	private Material neoMat;

	private float emisV = 0.1f;

	private float changeSpeed;

	// Use this for initialization
	void Start () {
		this.changeSpeed = GameObject.Find("LightChanger").GetComponent<LightCube>().changeSpeed;
	}
	
	// Update is called once per frame
	void Update () {
		if (Input.GetButton ("Fire1")) {
			CreateMaterial ();
		}
		if (Input.GetButton ("Fire2")) {
			GetComponent<Renderer> ().material = origin;
		}

		if (emisV > 0.1f) {
			emisV -= Time.deltaTime * 0.2f;
			float emissionColor = Mathf.Repeat (Time.time, 1.0f * changeSpeed);
			neoMat.SetColor ("_EmissionColor", Color.HSVToRGB(emissionColor / changeSpeed, 1.0f, emisV));
			if (emisV <= 0.1f) {
				GetComponent<Renderer> ().material = origin;
			}
		}
	}

	void OnCollisionStay(Collision collision){
		Debug.Log ("hoge");
		if (collision.gameObject.CompareTag ("Player")) {
			CreateMaterial ();

		}
	}

	void CreateMaterial () {
		neoMat = new Material (origin);

		emisV = 1.0f;

		GetComponent<Renderer> ().material = neoMat;
	}
}
