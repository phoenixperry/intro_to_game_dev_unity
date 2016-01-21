using UnityEngine;
using System.Collections;

public class enemy : MonoBehaviour {
	
	float xpos; 
	float ypos = 6.0f; 
	float zpos = 0.0f; 
	float speed =0.010f; 

	// Use this for initialization
	void Start () {
		//randomly pick an x position 
		xpos = Random.Range(-4.5f, 4.5f); 
		//move to the drop position 
		transform.position = new Vector3(xpos, ypos, zpos); 
	}	
	
	// Update is called once per frame
	void Update () {
		//every frame, update by moving down one frame Times speed times delta time
		this.transform.Translate (Vector3.down*Time.deltaTime); 

		//if the position is less that -7, this object is off screen, destroy it 
		if (transform.position.y < -7) {
			Destroy (this.gameObject); 
		}

	}	
	//if you hit something 
	void OnCollisionEnter2D(Collision2D col){
		///if it is the player 
		if (col.gameObject.name == "player") {
			//log out the player took a hit 
			Debug.Log ("The player has been hit."); 
			//tell the player on screen that the game is over 
			GameObject.Find("MainManager").GetComponent<MainManager>().GameOver(); 
			Destroy (col.gameObject); 
		}
	}
}
