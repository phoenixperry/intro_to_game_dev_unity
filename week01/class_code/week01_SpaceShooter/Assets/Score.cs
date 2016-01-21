using UnityEngine;
using System.Collections;

public class Score : MonoBehaviour {
	private int _score = 0; 

	// Use this for initialization
	void Start () {
		_score = 0; 
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void UpdateScore(){
		_score++; 
		Debug.Log ("point"); 
	}

	public int score{
		get {return _score;} 
	}
}
