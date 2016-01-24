/// <summary>
/// this tutorial is thanks via the Unity site here  -> https://www.youtube.com/watch?v=jTtCsOjNwJQ&list=PLX2vGYjWbI0RZ3M5zSs-cegtIzv-FBi4q
/// </summary>
using UnityEngine;
using System.Collections;

public class CameraController : MonoBehaviour {
	public GameObject player; //Public variable to store a reference to the player game object

	private Vector3 offset; //Private variable to store the offset distance between the player and camera


	// Use this for initialization
	void Start () {
		offset = transform.position - player.transform.position; 
	}
	
	// Update is called once per frame
	void Update () {
	
	}
	// LateUpdate is called after Update each frame
	void LateUpdate () 
	{
		// Set the position of the camera's transform to be the same as the player's, but offset by the calculated offset distance.
		transform.position = player.transform.position + offset;
		//good for procedural animation - this way we know the player has already moved 

	}
}
