Shader "Custom/aaa" {
	Properties {
		_Color ("Color", Color) = (1,1,1,1)
		_MainTex ("Albedo (RGB)", 2D) = "white" {}
		_SubTex ("subTex", 2D) = "white" {}
		_RedTex ("RedTex", 2D) = "white" {}
		_GreTex ("GreTex", 2D) = "white" {}
		_Cutoff     ("Cutoff"      , Range(0, 1)) = 0.5
		_Flow    ("Flow Speed", Float) = 1
		_Emission ("Emission", Color) = (1,1,1,1)

	}
	SubShader {
		Tags {	//"Queue"      = "AlphaTest"
				//"RenderType" = "TransparentCutout"
				"Queue"      = "Transparent"
				"RenderType" = "Transparent"}
		LOD 200

		Cull Off
		
		CGPROGRAM
		//#pragma surface surf Standard fullforwardshadows alpha:fade
		#pragma surface surf Standard fullforwardshadows alphatest:_Cutoff

		#pragma target 3.0

		sampler2D _MainTex;
		sampler2D _SubTex;
		sampler2D _GreTex;
		half _Flow;
		half4 _Emission;

		struct Input {
			float2 uv_MainTex;
			float2 uv_SubTex;
			float2 uv_GreTex;
		};

		half _Glossiness;
		half _Metallic;
		fixed4 _Color;


		UNITY_INSTANCING_CBUFFER_START(Props)
		UNITY_INSTANCING_CBUFFER_END

		void surf (Input IN, inout SurfaceOutputStandard o) {
			fixed4 main = tex2D(_MainTex, IN.uv_MainTex);
			fixed4 c = tex2D (_SubTex, IN.uv_SubTex);
			fixed4 gre = tex2D(_GreTex, IN.uv_GreTex + half2(_Time.x * _Flow, _Time.x * _Flow));

			//gre.g += c.g;
			//c.rgb = lerp(c.rgb, gr.rgb, gr.g);
			gre.rgb = lerp(gre.rgb, c.rgb, 0.5);

			gre.r = 0;
			gre.b = 0;

			if(gre.g < 0.6){
				gre.g = 0;
			};

			o.Emission = gre.g * _Emission.rgb;
			//o.Albedo = c.g;
			o.Albedo = main.rgb;

			o.Alpha = main.a;
		}
		ENDCG
	}
	FallBack "Diffuse"
}
