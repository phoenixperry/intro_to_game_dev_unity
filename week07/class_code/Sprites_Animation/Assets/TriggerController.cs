using UnityEngine;
using System.Collections;

public class TriggerController : MonoBehaviour {
	Animator zombieAnimator; 

	// Use this for initialization
	void Start () {
		zombieAnimator = gameObject.GetComponent<Animator> (); 
	}
	
	// Update is called once per frame
	void Update () {

		if (Input.GetKeyDown (KeyCode.A)) {
			zombieAnimator.SetTrigger ("spin"); 
		}
	}
}
