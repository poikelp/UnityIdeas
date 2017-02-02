using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class foods : MonoBehaviour {


	[SerializeField]
	private GameObject scoreText;
	// Use this for initialization
	void Start () {
		scoreText = GameObject.Find ("Text");
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void OnTriggerEnter(Collider col){
		if(col.gameObject.CompareTag("Player")){
			scoreText.GetComponent<scoreSet>().score += 100;
			scoreText.GetComponent<scoreSet>().textSet ();
			Destroy (this.gameObject);
		}
	}
}
