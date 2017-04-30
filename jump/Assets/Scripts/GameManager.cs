using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour {

	public GameObject[] heat = new GameObject[4];

	public float life;
	public GameObject lifeBar;

	public GameObject player;

	private GameObject pop;

	private float timeCounter;

	private GameObject over;

	private RaycastHit hit;
	private Ray ray;

	// Use this for initialization
	void Start () {
		heat[0] = GameObject.Find ("Cube");
		heat[1] = GameObject.Find ("Cube (1)");
		heat[2] = GameObject.Find ("Cube (2)");
		heat[3] = GameObject.Find ("Cube (3)");
		lifeBar = GameObject.Find ("Cube (5)");
		player = GameObject.Find ("corn");
		pop = (GameObject)Resources.Load ("Prefab/pop");
		over = GameObject.Find ("Cube (6)");
		over.SetActive (false);

		for (int i = 0; i < heat.Length; i++) {
			heat [i].SetActive (false);
		}
		life = 0.0f;
	}
	
	// Update is called once per frame
	void Update () {
		timeCounter += Time.deltaTime;
		if (timeCounter > 1.0f) {
			heat [Random.Range (0, 4)].SetActive (false);
			heat [Random.Range (0, 4)].SetActive (true);
			timeCounter = 0.0f;
		}
		lifeBar.transform.position = new Vector3 (-0.5f + life / 2.0f, 1.0478f, 0.73f);
		lifeBar.transform.localScale = new Vector3 (life, 0.01f, 0.1f);

		if (life > 1.0f) {
			var inst = Instantiate (pop, player.transform.position, player.transform.rotation);
			inst.GetComponent<Rigidbody> ().AddForce (new Vector3(0.0f, 300.0f, 0.0f));
			over.SetActive (true);
		}

		if (Input.GetMouseButtonDown(0)){
			ray = Camera.main.ScreenPointToRay(Input.mousePosition);
			if (Physics.Raycast(ray, out hit, 100f)){
				if (hit.collider.gameObject.Equals (over)) {
					SceneManager.LoadScene ("start");
				}
			}  

		}


	}
}
