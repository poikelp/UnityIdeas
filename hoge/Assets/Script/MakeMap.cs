using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class MakeMap : MonoBehaviour {

	//シード
	private float _seedX, _seedZ;

	//マップのサイズ
	[SerializeField][Header("------実行中に変えれない------")]
	private float _width = 50;
	[SerializeField]
	private float _depth = 50;

	//高さの最大値
	[SerializeField][Header("------実行中に変えられる------")]
	private float _maxHeight = 10;

	//起伏の激しさ
	[SerializeField]
	private float _relief = 15f;

	[SerializeField]
	private GameObject player;

	[SerializeField]
	private Material mat;

	public GameObject myCube;

	private void Awake () {
		//マップサイズ設定
		//transform.localScale = new Vector3(_mapSize, _mapSize, _mapSize);

		//同じマップにならないようにシード生成
		_seedX = Random.value * 100f;
		_seedZ = Random.value * 100f;

		//キューブ生成
		for (int x = 0; x < _width; x++) {
			for (int z = 0; z < _depth; z++) {

				//新しいキューブ作成、平面に置く

				GameObject cube = (GameObject)(Instantiate(myCube,transform.position,transform.rotation));
				cube.transform.localPosition = new Vector3 (x, 0, z);
				cube.transform.SetParent (transform);

				//高さ設定
				SetY (cube);

				//cube.GetComponent<MeshRenderer> ().material = mat;

				if (x == 5 && z == 5) {
					player.transform.localPosition = cube.transform.position + new Vector3(0.0f, 0.6f, 0.0f);
					//camera.transform.localPosition = cube.transform.position + new Vector3(0.0f, 0.6f, 0.0f);
				}
			}
		}
	}

	//キューブのY座標を設定する
	private void SetY(GameObject cube){
		float y = 0;

		//パーリンノイズを使って高さを決める場合
		float xSample = (cube.transform.localPosition.x + _seedX) / _relief;
		float zSample = (cube.transform.localPosition.z + _seedZ) / _relief;

		float noise = Mathf.PerlinNoise(xSample, zSample);

		y = _maxHeight * noise;

		y = Mathf.Round (y);

		//位置設定
		cube.transform.localPosition = new Vector3 (cube.transform.localPosition.x, y, cube.transform.localPosition.z);


	}
}
