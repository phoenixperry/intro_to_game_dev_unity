using UnityEngine;
using System.Collections;

public class MoveIt : MonoBehaviour { 
	// Use this for initialization
	Rigidbody2D rigidbody2D; 
	float maxSpeed = 10.0f; 
	void Start () {
		rigidbody2D = gameObject.GetComponent<Rigidbody2D>(); 
	}	
	
	// Update is called once per frame
	void Update () {
		
	}

	void FixedUpdate()
	{
		

		if(rigidbody2D.velocity.magnitude > maxSpeed)
		{
			rigidbody2D.velocity = rigidbody2D.velocity.normalized * maxSpeed;
		}
	
	}
}
