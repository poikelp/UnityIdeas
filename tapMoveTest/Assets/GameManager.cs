using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour {

	[SerializeField]
	private Move P1;

	[SerializeField]
	private EnemyMoveTest E1;

	private bool turn;
	public bool Turn{
		set {
			turn = value;

			P1.ResetRange ();
			if (!turn)
				E1.SetTarget ();

		}

		get { return turn;}
	}

	// Use this for initialization
	void Start () {
		turn = true;
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void TurnChange () {
		if (turn)
			Turn = false;
		else
			Turn = true;
	}
}
