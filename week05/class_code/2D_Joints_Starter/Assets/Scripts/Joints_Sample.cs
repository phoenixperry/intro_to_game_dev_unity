using UnityEngine;
using System.Collections;
using System.Linq;

public class Joints_Sample : MonoBehaviour {
	
	// Use this for initialization
	void Start () {

	}

	// Update is called once per frame
	void Update () {

	}

    void OnGUI()
    {
        GUI.Label(new Rect(2, 2, 300, 300), "Distance Joint 2D\nUse the mouse to move");
        GUI.Label(new Rect(300, 2, 300, 300), "Spring Joint 2D\nUse the mouse to move");
        GUI.Label(new Rect(550, 10, 300, 300), "Wheel Joint 2D");
        GUI.Label(new Rect(200, 250, 300, 300), "Hinge Joint 2D");
        GUI.Label(new Rect(570, 270, 300, 300), "Slider Joint 2D");
    }
}
