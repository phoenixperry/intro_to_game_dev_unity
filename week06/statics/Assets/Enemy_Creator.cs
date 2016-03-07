using UnityEngine;
using System.Collections;

public class Enemy_Creator : MonoBehaviour {
	public GameObject enemy; 
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		if (Input.GetKeyUp (KeyCode.S)) {
			//if s is pressed 
			Vector3 rand = new Vector3((float)Random.Range(-10, 10),0.0f, 0.0f); //create a random position on the x axis
			GameObject new_enemy = Instantiate (enemy, rand, transform.rotation) as GameObject; //create a enemy 
			//raise the number of created objects by 1  
			Debug.Log (Static_counter.num_created); //print out that number 
		}
	}

}
