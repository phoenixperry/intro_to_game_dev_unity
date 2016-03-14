using UnityEngine;
using System.Collections;

public class Space : MonoBehaviour {
	public GameObject enemy; 
	// Use this for initialization
	void Start () {
		//this is how to get access to the pixel location
		Debug.Log(Camera.main.WorldToScreenPoint(transform.position)); 

		//this is how to get the size of the screen. 

	
	}
	
	// Update is called once per frame
	void Update () {
		if (Input.GetKeyDown (KeyCode.R)) {
			Camera camera = GetComponent<Camera> ();
			//note the offset for the camera z position in space 
			Vector3 p = camera.ViewportToWorldPoint (new Vector3 (1, 1, 10));
			enemy.GetComponent<Transform> ().position = p; 
		}
		if (Input.GetKeyDown (KeyCode.M)) {
			
			Camera camera = GetComponent<Camera> ();

			//note the offset for the width of granny 
			Vector3 sizeOfGranny = enemy.GetComponent<SpriteRenderer> ().bounds.center; 

			Debug.Log (camera.WorldToViewportPoint (sizeOfGranny)+ "is where granny's center is at in the world"); 

			Vector3 size = enemy.GetComponent<SpriteRenderer> ().bounds.size; 

			Debug.Log (size.x + "is how wide granny is in units"); 
				
		}
	}

}
