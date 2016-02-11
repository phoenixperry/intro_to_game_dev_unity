using UnityEngine;
using System.Collections;

public class Adding_torque : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void FixedUpdate(){

		if (Input.GetKeyDown (KeyCode.RightArrow)) {
			gameObject.GetComponent<Rigidbody2D>().AddTorque (-1.0f); 
		} else if (Input.GetKeyDown (KeyCode.LeftArrow)) {
			gameObject.GetComponent<Rigidbody2D>().AddTorque (1.0f); 
		} else if (Input.GetKeyDown (KeyCode.UpArrow)) {
			gameObject.GetComponent<Rigidbody2D>().AddForce (new Vector3(0.0f, 0.5f,0.0f)); 
		} else if (Input.GetKeyDown (KeyCode.DownArrow)) {
			GetComponent<Rigidbody2D> ().AddForce (new Vector3 (0.0f, -0.5f, 0.0f));
		}
	} 
}
