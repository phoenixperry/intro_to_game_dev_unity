using UnityEngine;
using System.Collections;

public class MainManager : MonoBehaviour {
	//use this output the text  
	public GUIText textOutput; 
	public GameObject scoreManager; 
	public GameObject enemy; 
	public GameObject player; 
	bool gameOver = false; 
	float spawnTime = 1.0f; 
	// Use this for initialization
	void Start () {
		InvokeRepeating("spawnEnemy", 0.5f, spawnTime); 
	
	}
	
	// Update is called once per frame
	void Update () {
		if (!gameOver) {
			textOutput.text = "Score: " + scoreManager.GetComponent<Score>().score; 
		}
		if (gameOver) {		
			textOutput.text = "Game Over!"; 
			CancelInvoke (); 
		}

	}

	public void GameOver(){
		gameOver = true; 
	} 

	public void spawnEnemy(){
		Vector3 pos = new Vector3 (0, 10, 0); 
		Instantiate(enemy, pos, transform.rotation); 
	
	}
}
