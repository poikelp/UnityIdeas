using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour {

	public bool turn;

	// Use this for initialization
	void Start () {
		turn = true;
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void TurnChange () {
		if (turn)
			turn = false;
		else
			turn = true;
	}
}
