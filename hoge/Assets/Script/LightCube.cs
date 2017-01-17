using UnityEngine;
using System.Collections;

public class LightCube : MonoBehaviour {
	[SerializeField]
	private Material cubeMat;

	[SerializeField][Header("値を増やすほどゆっくり変化する")]
	private float changeSpeed;


	// Use this for initialization
	void Start () {
		Shader hoge = cubeMat.shader;
		Debug.Log(Shader.PropertyToID (hoge.name));


	}
	
	// Update is called once per frame
	void Update () {
		float emissionColor = Mathf.Repeat (Time.time, 1.0f * changeSpeed);
		cubeMat.SetColor ("_EmissionColor", Color.HSVToRGB(emissionColor / changeSpeed, 1.0f, 0.9268723f));
		Debug.Log (emissionColor);
	}
}
