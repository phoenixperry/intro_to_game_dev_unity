using UnityEngine;
using System.Collections;

public class testScript : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		SpringJoint2D sp = gameObject.GetComponent<SpringJoint2D> (); 
		float randPoint = Random.Range (0.0f, 10.0f); 
		sp.anchor = new Vector2(randPoint, 20.0f); 
	}
}
 