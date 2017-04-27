using System.Collections;
using UnityEngine;

public class Ball : MonoBehaviour {

	private Paddle paddle;

	public Rigidbody2D rigid2D;
	public Vector2 velocity;

	private Vector3 paddleToBallVector;
	private bool hasStarted = false;

	// Use this for initialization
	void Start () {
		paddle = GameObject.FindObjectOfType<Paddle>();
		paddleToBallVector = this.transform.position - paddle.transform.position;
	}
	
	// Update is called once per frame
	void Update () {
		if(!hasStarted) {
			this.transform.position = paddle.transform.position + paddleToBallVector;

			if (Input.GetMouseButtonDown(0)) {
				hasStarted = true;
				print("launced");
				this.rigid2D.velocity = new Vector2 (2f, 10f);
			}
		}
	}

	void OnCollisionEnter2D(Collision2D collision) {
		Vector2 tweak = new Vector2 (Random.Range(0f, 0.2f), Random.Range(0f, 0.2f));

		if (hasStarted) {
			AudioSource audio = GetComponent<AudioSource>();
			audio.Play();
			rigid2D.velocity += tweak;
		}
	}
}
	