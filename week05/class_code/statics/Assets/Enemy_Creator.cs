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
			Vector3 rand = new Vector3((float)Random.Range(-10, 10),0.0f, 0.0f); 
			GameObject new_enemy = Instantiate (enemy, rand, transform.rotation) as GameObject;
			int x = Static_counter.num_created; 
			Debug.Log (x); 
		}
	}

}
