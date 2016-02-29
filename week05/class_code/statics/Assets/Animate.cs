using UnityEngine;
using System.Collections;

public class Animate : MonoBehaviour {
	float angle = 0.0f; 
	public float speed = 0.2f; 
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		angle+=speed; 
		transform.Rotate(new Vector3(0.0f, 0.0f, angle) *Time.deltaTime); }
}
