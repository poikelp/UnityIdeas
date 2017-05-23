using UnityEngine;
using System.Collections;
using UnityEditor;

public class FoilShaderCustomEditor : MaterialEditor {

	// マテリアルへのアクセス
	Material material{
		get{
			return (Material)target;
		}
	}

	static bool isDistortion = false;
	static bool isRed1 = false;
	static bool isRed2 = false;
	static bool isGreen1 = false;
	static bool isGreen2 = false;

	// Inspectorに表示される内容
	public override void OnInspectorGUI () 
	{
		// マテリアルを閉じた時に非表示にする
		if (isVisible == false ) { return; }

		// 入力内容が変更されたかチェック
		EditorGUI.BeginChangeCheck ();

		// InspectorのGUIを定義
		Texture mainTex = EditorGUILayout.ObjectField (
			"main texture", 
			material.GetTexture ("_MainTex"), 
			typeof(Texture),
			false) as Texture;

		Texture subTex = EditorGUILayout.ObjectField (
			"mask texture",
			material.GetTexture ("_SubTex"),
			typeof(Texture),
			false) as Texture;



		// 更新されたら内容を反映
		if (EditorGUI.EndChangeCheck ()) {
			material.SetTexture ("_MainTex", mainTex);
			material.SetTexture ("_SubTex", subTex);
		}

		// 見たくない場合は非表示にする
		isDistortion = EditorGUILayout.Foldout (isDistortion, "Distortion");
		if (isDistortion) {

			// 1段下げてUIを表示
			EditorGUI.indentLevel = 1;
			EditorGUI.BeginChangeCheck ();

			Texture distortion = EditorGUILayout.ObjectField (
				"texture",
				material.GetTexture ("_WaveTex"),
				typeof(Texture),
				false) as Texture;

			if (EditorGUI.EndChangeCheck ()) {
				material.SetTexture ("_WaveTex", distortion);
			}
			EditorGUI.indentLevel = 0;
		}

		isRed1 = EditorGUILayout.Foldout (isRed1, "Red1");
		if (isRed1) {
			EditorGUI.indentLevel = 1;
			EditorGUI.BeginChangeCheck ();

			EditorGUI.indentLevel = 0;
		}
		isRed2 = EditorGUILayout.Foldout (isRed2, "Red2");
		if (isRed2) {
			EditorGUI.indentLevel = 1;
			EditorGUI.BeginChangeCheck ();

			EditorGUI.indentLevel = 0;
		}
		isGreen1 = EditorGUILayout.Foldout (isGreen1, "Green1");
		if (isGreen2) {
			EditorGUI.indentLevel = 1;
			EditorGUI.BeginChangeCheck ();

			EditorGUI.indentLevel = 0;
		}
		isGreen2 = EditorGUILayout.Foldout (isGreen2, "Green2");
		if (isGreen2) {
			EditorGUI.indentLevel = 1;
			EditorGUI.BeginChangeCheck ();

			EditorGUI.indentLevel = 0;
		}
	}
}