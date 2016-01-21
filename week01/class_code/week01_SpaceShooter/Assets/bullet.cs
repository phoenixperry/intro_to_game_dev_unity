using UnityEngine;
using System.Collections;

public class bullet : MonoBehaviour {
	public float speed = 10.0f;

	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		//animate the bullet  
		transform.Translate (Vector3.up * speed * Time.deltaTime);

		//if it is off screen 
		if (transform.position.y > 7)
			Destroy (this.gameObject); //delete it. 
	}

	//if you hit something 
	void OnCollisionEnter2D(Collision2D col){
		//tell me what you hit  
		//Debug.Log (col.gameObject.name); 
		//if it is the enemy 
		if (col.gameObject.tag == "enemy") {
			//find the main manager and change the text to game over
			GameObject.Find ("MainManager").GetComponent<MainManager>().scoreManager.GetComponent<Score>().UpdateScore(); 
			//destroy the object you hit  
			Destroy (col.gameObject); 
			//destroy yourself 
			Destroy (this.gameObject);

		}
	}
}
