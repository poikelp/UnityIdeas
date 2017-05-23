Shader "Custom/aaa" {
	Properties {
		_MainTex ("BaseTexture", 2D) = "white" {}
		_SubTex ("SubTexture", 2D) = "black" {}
		_WaveTex ("WaveTex", 2D) = "gray" {}
		_Red1Tex ("Red1Tex", 2D) = "black" {}
		_FlowR1X  ("VectorX", Range(-1.0, 1.0)) = 0 
		_FlowR1Y ("VectorY", Range(-1.0, 1.0)) = 0 
		_SpeedR1 ("Speed", Range(0, 20)) = 0
		_Red2Tex ("Red2Tex", 2D) = "black" {}
		_FlowR2X  ("VectorX", Range(-1.0, 1.0)) = 0
		_FlowR2Y  ("VectorY", Range(-1.0, 1.0)) = 0
		_SpeedR2 ("Speed", Range(0, 20)) = 0
		_EmissionR ("EmissionR", Color) = (1,1,1,1)
		_Gre1Tex ("Gre1Tex", 2D) = "black" {}
		_FlowG1X  ("VectorX", Range(-1.0, 1.0)) = 0
		_FlowG1Y  ("VectorY", Range(-1.0, 1.0)) = 0
		_SpeedG1 ("Speed", Range(0, 20)) = 0
		_Gre2Tex ("Gre2Tex", 2D) = "black" {}
		_FlowG2X  ("VectorX", Range(-1.0, 1.0)) = 0 
		_FlowG2Y  ("VectorY", Range(-1.0, 1.0)) = 0 
		_SpeedG2 ("Speed", Range(0, 20)) = 0
		_EmissionG ("EmissionG", Color) = (1,1,1,1)
	}
	SubShader {
		Tags {	//"Queue"      = "AlphaTest"
				//"RenderType" = "TransparentCutout"
				"Queue"      = "Transparent"
				"RenderType" = "Transparent"}
		LOD 200

		Cull Off
		Pass{
			CGPROGRAM
		//#pragma surface surf Standard fullforwardshadows alpha:fade

			#pragma vertex vert
			#pragma fragment frag

			#pragma target 3.0

			sampler2D _MainTex;
			sampler2D _SubTex;
			sampler2D _Gre1Tex;
			sampler2D _Gre2Tex;
			sampler2D _Red1Tex;
			sampler2D _Red2Tex;
			sampler2D _WaveTex;
			half _FlowG1X;
			half _FlowG1Y;
			half _SpeedG1;
			half _FlowG2X;
			half _FlowG2Y;
			half _SpeedG2;
			half4 _EmissionG;
			half _FlowR1X;
			half _FlowR1Y;
			half _SpeedR1;
			half _FlowR2X;
			half _FlowR2Y;
			half _SpeedR2;
			half4 _EmissionR;


			struct appdata_t{
				float4 vertex : POSITION;
				float2 main : TEXCOORD0;

			};

			struct v2f{
				float4 vertex : SV_POSITION;
				float2 main : TEXCOORD0;

			};

			fixed4 wind(fixed4 sub){

				fixed4 o = tex2D(_SubTex, sub);
				return o;
			}

			v2f vert(appdata_t v)
	        {
	        	v2f o;
	            float amp = 0.5*sin(_Time*100 + v.vertex.x * 100);
	            //v.vertex.xyz = float3(v.vertex.x, v.vertex.y+amp, v.vertex.z);   
	            o.vertex = UnityObjectToClipPos(v.vertex);
	            o.main = v.main;

	            return o;         
	            //v.normal = normalize(float3(v.normal.x+offset_, v.normal.y, v.normal.z));
	        }	

			fixed4 frag (v2f i) : SV_Target{
				fixed4 main = tex2D(_MainTex, i.main);
				fixed4 sub = tex2D (_SubTex, i.main);
	
				fixed4 gre = tex2D(_Gre1Tex, i.main + half2(_Time.x * _FlowG1X * -1 * _SpeedG1, _Time.x * _FlowG1Y * -1 * _SpeedG1))
					+ tex2D(_Gre2Tex, i.main + half2(_Time.x * _FlowG2X * -1 * _SpeedG2, _Time.x * _FlowG2Y * -1 * _SpeedG2));
				fixed4 red = tex2D(_Red1Tex, i.main + half2(_Time.x * _FlowR1X * -1 * _SpeedR1, _Time.x * _FlowR1Y * -1 * _SpeedR1))
					+ tex2D(_Red2Tex, i.main + half2(_Time.x * _FlowR2X * -1 * _SpeedR2, _Time.x * _FlowR2Y * -1 * _SpeedR2));

				

				gre.rgb *= sub.rgb;
				gre.r = gre.g;
				gre.b = gre.g;
				red.rgb *= sub.rgb;
				red.g = red.r;
				red.b = red.r;
				fixed4 emi = gre * _EmissionG + red * _EmissionR ;
	
				fixed2 wave = tex2D(_WaveTex, i.main + half2(-_Time.x*5, -_Time.x*5)).rg;
				float2 hoge = wave * 0.03 + i.main - (0.02, 0.02);
				fixed4 waved = tex2D(_MainTex, hoge);
				main = lerp(main, waved, sub.b);
				main += emi;

	
				return main;
			}


	



		ENDCG
		}
	}
	FallBack "Diffuse"
	CustomEditor "FoilShaderCustomEditor"
}
