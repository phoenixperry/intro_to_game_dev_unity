using UnityEngine;
using System.Collections;

public class Spawner : MonoBehaviour {
	Vector3 size; 
	public GameObject player; 
	public GameObject enemy; 
	public GameObject background; 
	public ArrayList enemies; 
	// Use this for initialization
	void Start () {
		enemies = new ArrayList (); 
//		size = GameObject.Find ("Background").GetComponent<Renderer>().bounds.size; 
//		Debug.Log ("The x size is " + size.x + " The y is " + size.y); 
//		//this is the total size of the background 
//
//		float w = Camera.main.pixelWidth; 
//		float h = Camera.main.pixelHeight; 
//		Debug.Log("The size in pixels is w: "+ w + " h:" +h);  
//		//if you need the size in units 
//		Debug.Log(Camera.main.orthographicSize + "Gives us the middle of the screen's height in units"); //gives us the bang on middle of the screen 
//		//this is a really nice thing about working in orthographic view 
//		Debug.Log(Screen.width + " is the width " + Screen.height +  " is the height"); 
//		float leftSideOfScreen = Camera.main.transform.position.x - Camera.main.orthographicSize * Screen.width / Screen.height;
//		Debug.Log (leftSideOfScreen + " is the left size of the screen"); 
//
	}
	
	// Update is called once per frame
	void Update () {
		
		if (player.GetComponent<PlayerControl> ().count >= 8) {
			spawnNewEnemies (); 
		} 
	}
	void spawnNewEnemies (){
		player.GetComponent<PlayerControl> ().count = 0; 
		float angle = 0.0f; 
		//float offset = .2f; 
		for(int i = 0; i < 8; i++) 
		{
			angle += 2 * Mathf.PI / 8;  
			float x = Camera.main.orthographicSize * Mathf.Cos (angle) *0.5f; 
			float y = Camera.main.orthographicSize * Mathf.Sin (angle) * 0.5f;
			Debug.Log(x + "is a possible spawn point"  + y); 

			Vector3 spawnPoint = 
				new Vector3 (x, y, 0.0f); 
			GameObject enemy_ = Instantiate (enemy, spawnPoint, transform.rotation) as GameObject;  
			enemy_.tag = "PickUp"; 
			enemy_.GetComponent<Renderer> ().sortingLayerName = "Pickups"; 
			enemy_.transform.SetParent (GameObject.Find("Pickups").GetComponent<Transform>()); 
		} 
	} 

}
