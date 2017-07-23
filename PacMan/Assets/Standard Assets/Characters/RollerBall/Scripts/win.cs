using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class win : MonoBehaviour {

    float t;
    Vector3 startPosition;
    Vector3 target;
    float timeToReachTarget;
    GameObject plane;

    // Use this for initialization
    void Start()
    {
        plane = GameObject.Find("Plane");
        startPosition = transform.position;
        target = new Vector3(24.5f, 25.2f, -13.69f);
        timeToReachTarget = 5.204f;
    }

    // Update is called once per frame
    void Update()
    {
        t += Time.deltaTime / timeToReachTarget;
        transform.position = Vector3.Lerp(startPosition, target, t);
    }

    public void SetDestination(Vector3 destination, float time)
    {
        t = 0;
        startPosition = transform.position;
        timeToReachTarget = time;
        target = destination;
    }
}
