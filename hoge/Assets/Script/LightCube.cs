using UnityEngine;
using System.Collections;

public class LightCube : MonoBehaviour {
	[SerializeField]
	private Material cubeMat;

	[SerializeField][Header("’l‚ğ‘‚â‚·‚Ù‚Ç‚ä‚Á‚­‚è•Ï‰»‚·‚é")]
	public float changeSpeed;

	

	// Use this for initialization
	void Start () {
		Shader hoge = cubeMat.shader;
	}
	
	// Update is called once per frame
	void Update () {
		float emissionColor = Mathf.Repeat (Time.time, 1.0f * changeSpeed);
		//Time.time‚ğ0‚©‚çchangeSpeed‚Ì’l‚Ì’†‚ÅŒJ‚è•Ô‚µ‚Ä•Ô‚·
		cubeMat.SetColor ("_EmissionColor", Color.HSVToRGB(emissionColor / changeSpeed, 1.0f, 0.1f));
	}
}
