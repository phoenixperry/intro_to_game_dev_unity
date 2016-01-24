using UnityEngine;
using System.Collections;

public class RandomChild : MonoBehaviour {
	public GameObject pickups; 
	void Start () {

	}
	
	// Update is called once per frame
	void Update () {
		if(Input.GetKeyDown(KeyCode.C)){
			
			Transform[] allChildren = pickups.GetComponentsInChildren<Transform>(); 
			int num = Random.Range (0, allChildren.Length-1); 
			Transform got = allChildren[num] as Transform; 
			got.localScale= new Vector3(0.5f, 0.5f, 0.0f); 
			Debug.Log (pickups.GetComponent<Transform>().childCount + "Num of children"); 
		}
	}
}
