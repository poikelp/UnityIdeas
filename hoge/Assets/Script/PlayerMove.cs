using UnityEngine;
using System.Collections;

public class PlayerMove : MonoBehaviour {

	private CharacterController cCon;
	private Vector3 velocity = new Vector3();
	public float speed;
	public float jumpPower;
//	private Animator animator;
	private Vector3 pprev;	//前のフレームでのposition
	private Transform watch;

	void Start(){

		cCon = GetComponent<CharacterController>();
		pprev = transform.position;
		watch = GameObject.FindWithTag("MainCamera").transform;
//		animator = GetComponent<Animator>();
	}

	void FixedUpdate(){

		velocity.x = 0;
		velocity.z = 0;
		//進行方向の決定
		float angle = Mathf.Atan((transform.position.z-watch.position.z)/(transform.position.x-watch.position.x));
		if(transform.position.x < watch.position.x){
			angle += Mathf.PI;
		}
		if(Mathf.Abs(Input.GetAxis("Horizontal")) > 0.01){
			velocity.x -= Input.GetAxis("Horizontal") * Mathf.Cos(angle + 0.5f * Mathf.PI);
			velocity.z -= Input.GetAxis("Horizontal") * Mathf.Sin(angle + 0.5f * Mathf.PI);
		}
		if(Mathf.Abs(Input.GetAxis("Vertical")) > 0.01){
			velocity.x += Input.GetAxis("Vertical") * Mathf.Cos(angle);
			velocity.z += Input.GetAxis("Vertical") * Mathf.Sin(angle);
		}
			
		if (Mathf.Abs (Input.GetAxis ("Horizontal")) > 0.01 || Mathf.Abs (Input.GetAxis ("Vertical")) > 0.01) {
//			animator.SetBool ("run", true);
		} else {
//			animator.SetBool ("run", false);
		}


		//ジャンプ
		if(cCon.isGrounded) {
			velocity.y = 0;
			if(Input.GetButtonDown("Jump")){
				velocity.y += jumpPower;
//				animator.SetTrigger("jump");
			}
		}

		//移動
		velocity.y += -9.81f * Time.fixedDeltaTime;
		cCon.Move(velocity * speed * Time.deltaTime);

		//キャラクターの向きを変える
		Vector3 diff = transform.position - pprev;
		if(Mathf.Abs(diff.x) > 0.01 || Mathf.Abs(diff.z) > 0.01){
			
			transform.LookAt (transform.position + diff - new Vector3(0.0f, diff.y, 0.0f));
		}
		pprev = transform.position;
	}

	void Update(){

	}
}
