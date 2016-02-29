using UnityEngine;
using System.Collections;

public class Play_behavior : MonoBehaviour {
	

	public bool HitState = false; 
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	}

	void StarClicked(){
		gameObject.GetComponent<Animate> ().speed = (float)gameObject.GetComponent<Animate> ().speed * -1.0f;
		Debug.Log (gameObject.GetComponent<Animate> ().speed); 
	}

	void OnEnable()
	{
		StarManager.OnClicked += StarClicked;
	}

	void OnDisable(){
		StarManager.OnClicked -= StarClicked;
	}

	void OnMouseDown(){
		Debug.Log ("fired"); 
		HitState = true; 
		StarManager.Score++; 
	}
}
