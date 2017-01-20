using UnityEngine;
using System.Collections;

public class LightCube : MonoBehaviour {
	[SerializeField]
	private Material cubeMat;

	[SerializeField][Header("値を増やすほどゆっくり変化する")]
	public float changeSpeed;

	

	// Use this for initialization
	void Start () {
		Shader hoge = cubeMat.shader;
	}
	
	// Update is called once per frame
	void Update () {
		float emissionColor = Mathf.Repeat (Time.time, 1.0f * changeSpeed);
		//Time.timeを0からchangeSpeedの値の中で繰り返して返す
		cubeMat.SetColor ("_EmissionColor", Color.HSVToRGB(emissionColor / changeSpeed, 1.0f, 0.1f));
	}
}
