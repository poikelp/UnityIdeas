using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StageMake : MonoBehaviour {

	public int[][] stage;

	private GameObject wall;

	private GameObject player;

	// Use this for initialization

	void Awake () {

		stage = new int[][]{
			new int[]{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
			new int[]{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
			new int[]{ 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1 },
			new int[]{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
			new int[]{ 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1 },
			new int[]{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
			new int[]{ 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1 },
			new int[]{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
			new int[]{ 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1 },
			new int[]{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
			new int[]{ 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1 },
			new int[]{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
			new int[]{ 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1 },
			new int[]{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
			new int[]{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }
		};

		
		wall = (GameObject)Resources.Load ("Prefab/Wall");
		player = (GameObject)Resources.Load ("Prefab/Player");
	}
	void Start () {
		for (int i = 0; i < stage.Length; i++) {
			for (int j = 0; j < stage [i].Length; j++) {
				if (stage [i] [j] == 1) {
					Instantiate (wall, new Vector3(i, 0, j), Quaternion.Euler(0.0f, 0.0f, 0.0f));
				}
			}
		}

		var p1 = Instantiate (player, new Vector3(1, 0, 11), Quaternion.Euler(0.0f, 0.0f, 0.0f));
		p1.GetComponent<Player>().num = 1;
		var p2 = Instantiate (player, new Vector3(13, 0, 1), Quaternion.Euler(0.0f, 0.0f, 0.0f));
		p2.GetComponent<Player>().num = 2;
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
