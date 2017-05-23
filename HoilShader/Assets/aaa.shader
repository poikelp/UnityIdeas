Shader "Custom/aaa" {
	Properties {
		_Color ("Color", Color) = (1,1,1,1)
		_MainTex ("Albedo (RGB)", 2D) = "white" {}
		_SubTex ("subTex", 2D) = "white" {}
		_RedTex ("RedTex", 2D) = "white" {}
		_GreTex ("GreTex", 2D) = "white" {}
		_WaveTex ("WaveTex", 2D) = "white" {}
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
		Pass{
			CGPROGRAM
		//#pragma surface surf Standard fullforwardshadows alpha:fade

			#pragma vertex vert
			#pragma fragment frag

			#pragma target 3.0

			sampler2D _MainTex;
			sampler2D _SubTex;
			sampler2D _GreTex;
			sampler2D _RedTex;
			sampler2D _WaveTex;
			half _FlowG;
			half4 _EmissionG;
			half _FlowR;
			half4 _EmissionR;

			half _Glossiness;
			half _Metallic;
			fixed4 _Color;

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
	
				fixed4 gre = tex2D(_GreTex, i.main + half2(_Time.x * _FlowG, _Time.x * _FlowG))
					+ tex2D(_GreTex, i.main + half2(_Time.x * 2 * _FlowG + 1, _Time.x * 2 * _FlowG - 1));
				fixed4 red = tex2D(_RedTex, i.main + half2(_Time.x * _FlowR,0))
					+ tex2D(_RedTex, i.main + half2(_Time.x * 2 * _FlowR, _FlowR));

				

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
}
