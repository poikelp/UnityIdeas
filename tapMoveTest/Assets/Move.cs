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
	private float nowRange;


	public float smoothTime = 0.3F;
	private float ranVelocity = 0.0F;

	void Start () {
		agent = GetComponent<UnityEngine.AI.NavMeshAgent>();
		movRanTra = GameObject.Find ("moveRange").transform;
		moveRange = defRange;
		nowRange = 0.0f;
		SetRangeSprite ();
	}

	void Update () {
		if (Input.GetMouseButtonDown(0)){
			ray = Camera.main.ScreenPointToRay(Input.mousePosition);
			if (Physics.Raycast(ray, out hit, 100f)){
				if (!hit.collider.gameObject.Equals(this.gameObject)) {
					float dist = Vector3.Distance (new Vector3(movRanTra.position.x, 0.0f, movRanTra.position.z), hit.point);
					if (dist < moveRange) {
						agent.SetDestination (hit.point);
						moveRange -= dist;

					}
				}
			}       
		}
		if (Input.GetMouseButtonDown (1)) {
			ResetRange ();
		}
		nowRange = Mathf.SmoothDamp(nowRange, moveRange, ref ranVelocity, smoothTime);
		SetRangeSprite ();
	}

	void SetRangeSprite () {
		movRanTra.localScale = new Vector3 (nowRange * 2.0f, 0.00001f, nowRange * 2.0f );

	}

	public void ResetRange () {
		moveRange = defRange;
		SetRangeSprite ();
	}
}