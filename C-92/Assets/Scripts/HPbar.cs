using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HPbar : MonoBehaviour {

	private int HP;
	private Transform camera;
	[SerializeField]
	private Enemy master;
	private float viewed;
	private float velocity = 0;
	private float smoothTime = 0.3f;

	private Slider slider;

	// Use this for initialization
	void Start () {
		camera = GameObject.FindGameObjectWithTag ("MainCamera").transform;
		slider = GetComponentInChildren<Slider> ();
		slider.maxValue = master.HP;
	}
	
	// Update is called once per frame
	void Update () {
		transform.LookAt (camera.position);
		HP = master.HP;
		viewed = Mathf.SmoothDamp (viewed, HP, ref velocity, smoothTime);

		slider.value = viewed;
	}
}
