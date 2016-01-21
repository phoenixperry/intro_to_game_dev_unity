using UnityEngine;
using System.Collections;


public class PlayerInput : MonoBehaviour {
	public float moveSpeed = 4.0f; 
	public GameObject bullet; 


	// Use this for initialization
	void Start () {
	}
	
	// Update is called once per frame
	void Update () {
		float xPos = Input.GetAxis ("Horizontal"); 

		if (Input.GetKeyUp (KeyCode.Space)) {
			//Debug.Log ("Space hit"); 
			//adjust for player height 
			Vector3 spawnPoint = this.transform.position;
			spawnPoint.y = spawnPoint.y + 0.5f; 
			Instantiate (bullet, spawnPoint, transform.rotation); 
		}

		
		if (Input.GetKey (KeyCode.LeftArrow)) {
			transform.Translate (new Vector3 (xPos, 0.0f, 0.0f) * moveSpeed * Time.deltaTime); 
		} else if (Input.GetKey (KeyCode.RightArrow)) {
			transform.Translate (new Vector3 (xPos, 0.0f, 0.0f) * moveSpeed * Time.deltaTime); 
		}
	}

}
