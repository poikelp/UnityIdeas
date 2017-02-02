using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class scoreSet : MonoBehaviour {

	public int score = 0;
	private Text mytext;

	// Use this for initialization
	void Start () {
		mytext = GetComponent<Text> ();
	}
	
	// Update is called once per frame
	void Update () {
		textSet ();
	}

	public void textSet(){
		mytext.text = score.ToString();
	}
}
