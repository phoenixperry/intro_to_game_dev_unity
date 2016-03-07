using UnityEngine;
using System.Collections;

public class Static_counter : MonoBehaviour {

	public static int num_created = 0;  // keep track of all objects in the game 
	public static int score = 0; 
	// Use this for initialization
	void Start () {
		Static_counter.num_created++;  // every time the object this script is attached to spawns just add 1 to the number of 
		//object created in num_created 
	}
		
	
	// Update is called once per frame
	void Update () {
		
	}
}
