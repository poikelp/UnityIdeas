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

			Texture red1 = EditorGUILayout.ObjectField (
				"texture",
				material.GetTexture ("_Red1Tex"),
				typeof(Texture),
				false) as Texture;
			EditorGUILayout.LabelField ("Vector");
			EditorGUI.indentLevel += 3;
			float x = EditorGUILayout.Slider (
				          "X",
				          material.GetFloat ("_FlowR1X"),
				          -1,
				          1);
			float y = EditorGUILayout.Slider (
				"Y",
				material.GetFloat ("_FlowR1Y"),
				-1,
				1);
			EditorGUI.indentLevel -= 3;
			float speed = EditorGUILayout.Slider (
				"Speed",
				material.GetFloat ("_SpeedR1"),
				0,
				10);
			bool flash = EditorGUILayout.Toggle(
				"Flash",
				(material.GetFloat ("_FlashR1") != 0) ? true:false);


			if (EditorGUI.EndChangeCheck ()) {
				material.SetTexture ("_Red1Tex", red1);
				material.SetFloat ("_FlowR1X", x);
				material.SetFloat ("_FlowR1Y", y);
				material.SetFloat ("_SpeedR1", speed);
				material.SetFloat ("_FlashR1", flash ? 1:0);
			}
			EditorGUI.indentLevel = 0;
		}
		isRed2 = EditorGUILayout.Foldout (isRed2, "Red2");
		if (isRed2) {
			EditorGUI.indentLevel = 1;
			EditorGUI.BeginChangeCheck ();

			Texture red2 = EditorGUILayout.ObjectField (
				"texture",
				material.GetTexture ("_Red2Tex"),
				typeof(Texture),
				false) as Texture;
			EditorGUILayout.LabelField ("Vector");
			EditorGUI.indentLevel += 3;
			float x = EditorGUILayout.Slider (
				"X",
				material.GetFloat ("_FlowR2X"),
				-1,
				1);
			float y = EditorGUILayout.Slider (
				"Y",
				material.GetFloat ("_FlowR2Y"),
				-1,
				1);
			EditorGUI.indentLevel -= 3;
			float speed = EditorGUILayout.Slider (
				"Speed",
				material.GetFloat ("_SpeedR2"),
				0,
				10);
			
			if (EditorGUI.EndChangeCheck ()) {
				material.SetTexture ("_Red2Tex", red2);
				material.SetFloat ("_FlowR2X", x);
				material.SetFloat ("_FlowR2Y", y);
				material.SetFloat ("_SpeedR2", speed);
			}
			EditorGUI.indentLevel = 0;
		}
		isGreen1 = EditorGUILayout.Foldout (isGreen1, "Green1");
		if (isGreen1) {
			EditorGUI.indentLevel = 1;
			EditorGUI.BeginChangeCheck ();

			Texture green1 = EditorGUILayout.ObjectField (
				"texture",
				material.GetTexture ("_Gre1Tex"),
				typeof(Texture),
				false) as Texture;
			EditorGUILayout.LabelField ("Vector");
			EditorGUI.indentLevel += 3;
			float x = EditorGUILayout.Slider (
				"X",
				material.GetFloat ("_FlowG1X"),
				-1,
				1);
			float y = EditorGUILayout.Slider (
				"Y",
				material.GetFloat ("_FlowG1Y"),
				-1,
				1);
			EditorGUI.indentLevel -= 3;
			float speed = EditorGUILayout.Slider (
				"Speed",
				material.GetFloat ("_SpeedG1"),
				0,
				10);
			
			if (EditorGUI.EndChangeCheck ()) {
				material.SetTexture ("_Gre1Tex", green1);
				material.SetFloat ("_FlowG1X", x);
				material.SetFloat ("_FlowG1Y", y);
				material.SetFloat ("_SpeedG1", speed);
			}
			EditorGUI.indentLevel = 0;
		}
		isGreen2 = EditorGUILayout.Foldout (isGreen2, "Green2");
		if (isGreen2) {
			EditorGUI.indentLevel = 1;
			EditorGUI.BeginChangeCheck ();

			Texture green2 = EditorGUILayout.ObjectField (
				"texture",
				material.GetTexture ("_Gre2Tex"),
				typeof(Texture),
				false) as Texture;
			EditorGUILayout.LabelField ("Vector");
			EditorGUI.indentLevel += 3;
			float x = EditorGUILayout.Slider (
				"X",
				material.GetFloat ("_FlowG2X"),
				-1,
				1);
			float y = EditorGUILayout.Slider (
				"Y",
				material.GetFloat ("_FlowG2Y"),
				-1,
				1);
			EditorGUI.indentLevel -= 3;
			float speed = EditorGUILayout.Slider (
				"Speed",
				material.GetFloat ("_SpeedG2"),
				0,
				10);
			
			if (EditorGUI.EndChangeCheck ()) {
				material.SetTexture ("_Gre2Tex", green2);
				material.SetFloat ("_FlowG2X", x);
				material.SetFloat ("_FlowG2Y", y);
				material.SetFloat ("_SpeedG2", speed);
			}
			EditorGUI.indentLevel = 0;
		}
	}
}