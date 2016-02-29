using UnityEngine;
using System.Collections;

public class RandomTint : MonoBehaviour {

	// Use this for initialization
	void Start () {
		GetComponent<Renderer>().material.color = Random.ColorHSV(0f, 1.0f, 0.5f, 0.8f, 0.8f, 1.0f, 1.0f, 1.0f); 
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void OnEnable()
	{
		StarManager.OnClicked += RandomColor;
	}

	void OnDisable(){
		StarManager.OnClicked -= RandomColor;
	}

	void RandomColor(){
		GetComponent<Renderer>().material.color = Random.ColorHSV(0f, 1.0f, 0.5f, 0.8f, 0.8f, 1.0f, 1.0f, 1.0f); 
	}

}
