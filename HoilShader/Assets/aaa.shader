Shader "Custom/aaa" {
	Properties {
		_Color ("Color", Color) = (1,1,1,1)
		_MainTex ("Albedo (RGB)", 2D) = "white" {}
		_SubTex ("subTex", 2D) = "white" {}
		_RedTex ("RedTex", 2D) = "white" {}
		_GreTex ("GreTex", 2D) = "white" {}
		_Cutoff     ("Cutoff"      , Range(0, 1)) = 0.5
		_FlowG    ("Flow SpeedG", Float) = 1
		_EmissionG ("EmissionG", Color) = (1,1,1,1)
		_FlowR    ("Flow SpeedR", Float) = 1
		_EmissionR ("EmissionR", Color) = (1,1,1,1)

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
		sampler2D _RedTex;
		half _FlowG;
		half4 _EmissionG;
		half _FlowR;
		half4 _EmissionR;

		struct Input {
			float2 uv_MainTex;
			float2 uv_SubTex;
			float2 uv_GreTex;
			float2 uv_RedTex;
		};


		half _Glossiness;
		half _Metallic;
		fixed4 _Color;


		UNITY_INSTANCING_CBUFFER_START(Props)
		UNITY_INSTANCING_CBUFFER_END

		void surf (Input IN, inout SurfaceOutputStandard o) {
			fixed4 main = tex2D(_MainTex, IN.uv_MainTex);
			fixed4 c = tex2D (_SubTex, IN.uv_SubTex);
			fixed4 gre = tex2D(_GreTex, IN.uv_GreTex + half2(_Time.x * _FlowG, _Time.x * _FlowG))
				+ tex2D(_GreTex, IN.uv_GreTex + half2(_Time.x * 2 * _FlowG + 1, _Time.x * 2 * _FlowG - 1));
			fixed4 red = tex2D(_RedTex, IN.uv_RedTex + half2(_Time.x * _FlowR,0))
				+ tex2D(_RedTex, IN.uv_RedTex + half2(_Time.x * 2 * _FlowR, _FlowR));

			fixed4 blu = c;
			blu.r = blu.b;
			blu.g = blu.b;
			blu *= main;


			//gre.g += c.g;
			//c.rgb = lerp(c.rgb, gr.rgb, gr.g);
			//gre.rgb = lerp(gre.rgb, c.rgb, 0.5);

			gre.r = 0;
			gre.b = 0;

			gre.rgb *= c.rgb;
			gre.r = gre.g;
			gre.b = gre.g;
			red.rgb *= c.rgb;
			red.g = red.r;
			red.b = red.r;
			fixed4 emi = gre * _EmissionG + red * _EmissionR ;

			//if(gre.g < 0.6){
			//	gre.g = 0;
			//};

			o.Emission = emi;
			//o.Albedo = c.g;
			o.Albedo = lerp(main.rgb, blu.rgb, 0.1);

			o.Alpha = main.a;
		}
		ENDCG
	}
	FallBack "Diffuse"
}
