using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraFP : MonoBehaviour {

    Vector3 myPos;
    Transform myPlay;

	// Use this for initialization
	void Start () {
        myPlay = GameObject.Find("pacman").GetComponent<Transform>();
        myPos =  new Vector3(-2.34f, 2.5f, -2.45f);
	}
	
	// Update is called once per frame
	void Update () {
        transform.position = myPlay.position + myPos;
	}
}
