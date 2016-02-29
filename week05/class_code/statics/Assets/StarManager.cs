using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class StarManager : MonoBehaviour {
	public static int Score =0; 
	public GameObject star; 
	public Text scoreText; 
	ArrayList stars; 
	// Use this for initialization
	void Start () {
		stars = new ArrayList(); 
		//get width of screen 
	
		//get width of star 

		//make 10 rows each with 10 stars 
		for(int i = 0; i < 20; i++) 
		{
			Vector3 randomPos = new Vector3(Random.Range(-10.0f, 10.0f),Random.Range(-10.0f, 10.0f),Random.Range(-10.0f, 10.0f)); 
			GameObject star_ = Instantiate(star, randomPos, transform.rotation) as GameObject; 
			stars.Add (star_); 
		}
	}
	
	// Update is called once per frame
	void Update () {
		foreach (GameObject s in stars){
		if (s.GetComponent<Play_behavior>().HitState) {
			if (OnClicked != null) {
				OnClicked (); 
			}
			s.GetComponent<Play_behavior> ().HitState = false; 
		}
	}
		scoreText.text = "Score: " + StarManager.Score.ToString (); 
		Debug.Log ("hi!" + StarManager.Score.ToString()); 
	}
		

	public delegate void ClickAction();
	public static event ClickAction OnClicked;


}
