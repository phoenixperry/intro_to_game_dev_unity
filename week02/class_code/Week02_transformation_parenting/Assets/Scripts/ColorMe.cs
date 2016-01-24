using UnityEngine;
using System.Collections;

public class ColorMe : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}

	// Update is called once per frame
	void Update () {
		if (Input.GetKeyDown(KeyCode.Space)) {

			GameObject pickups = GameObject.Find ("Pickups"); 
			Transform[] allChildren = pickups.GetComponentsInChildren<Transform>();
			Debug.Log (allChildren.Length); 
			foreach (Transform child in allChildren) {
				if(child.tag == "PickUp")
					child.gameObject.GetComponent<SpriteRenderer>().color = Random.ColorHSV(0f, 1f, 1f, 1f, 0.5f, 1f);; 
			}
		
		} 
			
	}
}
