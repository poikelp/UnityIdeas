using UnityEngine;
using System.Collections;

public class Move : MonoBehaviour {

	[SerializeField]
	private GameManager manager;


	private UnityEngine.AI.NavMeshAgent agent;

	private RaycastHit hit;
	private Ray ray;

	[SerializeField]
	private float defRange;
	private Transform movRanTra;
	private float moveRange;
	private float nowRange;

	private UnityEngine.AI.NavMeshPath path;

	[SerializeField]
	LineRenderer line;


	public float smoothTime = 0.3F;
	private float ranVelocity = 0.0F;

	void Start () {

		agent = GetComponent<UnityEngine.AI.NavMeshAgent>();
		movRanTra = GameObject.Find ("moveRange").transform;
		moveRange = defRange;
		nowRange = 0.0f;
		SetRangeSprite ();

		path = new UnityEngine.AI.NavMeshPath ();

	}

	void Update () {
		ray = Camera.main.ScreenPointToRay(Input.mousePosition);

		if (Input.GetMouseButtonDown(0)){
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
		if (Physics.Raycast (ray, out hit, 100f)) {
			agent.CalculatePath (hit.point, path);
		}
		line.SetVertexCount (path.corners.Length);
		line.SetPositions (path.corners);

/*
*		if (Input.GetMouseButtonDown (1)) {
*			ResetRange ();
*		}
*
*
*/


		nowRange = Mathf.SmoothDamp(nowRange, moveRange, ref ranVelocity, smoothTime);
		SetRangeSprite ();
	}

	void SetRangeSprite () {
		movRanTra.localScale = new Vector3 (nowRange * 2.0f, 0.00001f, nowRange * 2.0f );

	}

	public void ResetRange () {

		if (manager.Turn) {
			moveRange = defRange;
		} else {
			moveRange = 0.0f;

		}

	}
}