/// <summary>
/// this tutorial is thanks via the Unity site here  -> https://www.youtube.com/watch?v=jTtCsOjNwJQ&list=PLX2vGYjWbI0RZ3M5zSs-cegtIzv-FBi4q
/// </summary>
using UnityEngine;
using System.Collections;

public class Rotate : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
		transform.Rotate (new Vector3 (0, 0, 45) * Time.deltaTime); 
	}
}
