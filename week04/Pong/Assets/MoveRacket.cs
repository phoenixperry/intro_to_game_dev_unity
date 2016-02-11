using UnityEngine;
using System.Collections;

public class MoveRacket : MonoBehaviour {

	public float speed = 30; 
	public string axis =""; 
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {

	}

	void FixedUpdate(){
		moveBall (axis); 
	} 

	void moveBall(string axis_){
		float v = Input.GetAxis (axis_); 
		gameObject.GetComponent<Rigidbody2D> ().velocity = new Vector2 (0.0f, v) * speed; 
		
	} 
}
