using UnityEngine;
using System.Collections;
using UnityEngine.UI; 

public class PlayerControl : MonoBehaviour {

	public float speed; 
	public Text countText; 
	public Text winText; 

	private Rigidbody2D rb2d; 
	public int count; 

	// Use this for initialization
	void Start () {
		rb2d = GetComponent<Rigidbody2D> ();
		count = 0; 
		winText.text = ""; 
	}

	void Awake(){
	
		SetCountText(); 
	}
	// Update is called once per frame
	void Update () {
	
	}

	void FixedUpdate() {
		float moveHorizontal = Input.GetAxis ("Horizontal"); 
		float moveVertical = Input.GetAxis ("Vertical"); 

		Vector2 movement = new Vector2 (moveHorizontal, moveVertical); 
		 
		rb2d.AddForce (movement * speed); 
	} 

	void OnTriggerEnter2D(Collider2D other){
		if (other.gameObject.CompareTag ("PickUp")) {
			other.gameObject.SetActive (false); 
			count = count + 1; 
			SetCountText (); 
		}
	} 

	void SetCountText() 
	{
		countText.text = "Count: " + count.ToString (); 
		if (count >= 8)
			winText.text = "You Win!"; 

	} 
}
