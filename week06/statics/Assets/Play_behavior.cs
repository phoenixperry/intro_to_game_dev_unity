using UnityEngine;
using System.Collections;

public class Play_behavior : MonoBehaviour {
	

	public bool HitState = false;  // this is a state machine 


	void StarClicked(){
		gameObject.GetComponent<Animate> ().speed *= -1.0f;
		Debug.Log (gameObject.GetComponent<Animate> ().speed); 
	}

	//this is for Unity's event system  
	void OnEnable()
	{
		StarManager.Pickles += StarClicked;
	}

	//event system  
	void OnDisable(){
		StarManager.Pickles -= StarClicked;
	}

	void OnMouseDown(){
		Debug.Log ("fired"); 
		HitState = true; 
		StarManager.Score++; 
	}

}
