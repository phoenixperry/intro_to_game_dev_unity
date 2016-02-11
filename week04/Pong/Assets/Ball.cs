using UnityEngine;
using System.Collections;

public class Ball : MonoBehaviour {
	public float speed = 30; 
	// Use this for initialization
	void Start () {
		gameObject.GetComponent<Rigidbody2D> ().velocity = Vector2.right * speed; 
	}

	void OnCollisionEnter2D(Collision2D col) {
		Vector2 dir = calcuateBallHitPosition (col);  
		// Set Velocity with dir * speed
		GetComponent<Rigidbody2D> ().velocity = dir * speed; 
	}

	Vector2 calcuateBallHitPosition(Collision2D col){
		//calculate the hit factor 
		float y = hitFactor(transform.position, col.transform.position, col.collider.bounds.size.y); 
		if (col.gameObject.name == "leftRacket") {
			Vector2 dir = new Vector2 (1, y).normalized; 
			return(dir); 
		}

		else {
			Vector2 dir = new Vector2 (-1, y).normalized; 
			return(dir); 
		}
	} 
	float hitFactor(Vector2 ballPos, Vector2 racketPos, float racketHeight) {


		// ascii art:
		// ||  1 <- at the top of the racket
		// ||
		// ||  0 <- at the middle of the racket
		// ||
		// || -1 <- at the bottom of the racket
		//Note: we subtract the racketPos.y from the ballPos.y to have a relative position.
		return (ballPos.y - racketPos.y) / racketHeight;

		
	} 
}
