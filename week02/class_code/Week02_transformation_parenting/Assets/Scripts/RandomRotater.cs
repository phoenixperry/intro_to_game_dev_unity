using UnityEngine;
using System.Collections;

public class RandomRotater : MonoBehaviour {
	GameObject pickups; 
	// Use this for initialization
	void Start () {
		 pickups = GameObject.Find ("Pickups");
	}
	float angle = 0.0f; 
	// Update is called once per frame
	void Update () {
		if (Input.GetKey(KeyCode.R)) {
			pickups.GetComponent<Transform> ().Rotate(0.0f, 0.0f, angle * Time.deltaTime);
			angle ++; 

		} 
	}
}
