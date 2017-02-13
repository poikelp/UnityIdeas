using UnityEngine;
using System.Collections;

public class Move : MonoBehaviour {
	private UnityEngine.AI.NavMeshAgent agent;

	private RaycastHit hit;
	private Ray ray;

	[SerializeField]
	private float defRange;
	private Transform movRanTra;
	private float moveRange;

	void Start () {
		agent = GetComponent<UnityEngine.AI.NavMeshAgent>();
		movRanTra = GameObject.Find ("moveRange").transform;
		moveRange = defRange;
		SetRangeSprite ();
	}

	void Update () {
		if (Input.GetMouseButtonDown(0)){
			ray = Camera.main.ScreenPointToRay(Input.mousePosition);
			if (Physics.Raycast(ray, out hit, 100f)){
				if (!hit.collider.gameObject.Equals(this.gameObject)) {
					float dist = Vector3.Distance (transform.position, hit.point);
					if (dist < moveRange) {
						agent.SetDestination (hit.point);
						moveRange -= dist;
						SetRangeSprite ();
					}
				}
			}       
		}
		if (Input.GetMouseButtonDown (1)) {
			ResetRange ();
		}
	}

	void SetRangeSprite () {
		movRanTra.localScale = new Vector3 (moveRange, 0.00001f, moveRange);
	}

	void ResetRange () {
		moveRange = defRange;
		SetRangeSprite ();
	}
}