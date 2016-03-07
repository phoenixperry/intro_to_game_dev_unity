using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement; 
public class StarManager : MonoBehaviour {

	public static int Score =0; // keeps track of the score over all - 


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

	//this creates an event 
	public delegate void ClickAction();
	public static event ClickAction Pickles;

	// Update is called once per frame
	void Update () {
		foreach (GameObject s in stars){
			//let's go through our array list and pull out each star 1 by 1 
		if (s.GetComponent<Play_behavior>().HitState) {
					
			if (Pickles != null) {
					Pickles (); 
			}
				//this is how to load a level! :D 
				//Application.LoadLevel ("SwitchScene"); 

			s.GetComponent<Play_behavior> ().HitState = false; 
		}
	}
		scoreText.text = "Score: " + StarManager.Score.ToString (); 
	//	Debug.Log ("hi!" + StarManager.Score.ToString()); 
	}
		

}
