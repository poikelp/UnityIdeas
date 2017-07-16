using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class beem : MonoBehaviour {

	private GameObject cyl;

	[SerializeField]
	private Transform tr;
	[SerializeField]
	private Transform ar;

	private Color fire;
	private Color hide;
	[SerializeField]
	private Renderer mat;

	private Vector3 lastMarker;

	// Use this for initialization
	void Start () {
		cyl = GameObject.Find ("Cylinder");
		lastMarker = tr.localPosition;
		fire = new Color (mat.material.color.r, mat.material.color.g, mat.material.color.b, 64);
		hide = new Color (mat.material.color.r, mat.material.color.g, mat.material.color.b, 0);
	}
	
	// Update is called once per frame
	void Update () {
		transform.position = new Vector3(
			tr.position.x + ar.localPosition.x,
			tr.position.y + ar.localPosition.y,
			tr.position.z + ar.localPosition.z
		)/5;

		transform.eulerAngles = new Vector3(
			tr.eulerAngles.x,
			tr.eulerAngles.y, 
			tr.eulerAngles.z
		);

		if ((lastMarker - tr.localPosition).magnitude < 0.001)
			mat.material.color = hide;
		else
			mat.material.color = fire;

		lastMarker = tr.localPosition;
	}
}
