using UnityEngine;
using System.Collections;

public class UIManager : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
	//event must be public! 
	public void StartGame() {
		Application.LoadLevel("RocketMouse");
	}

}
