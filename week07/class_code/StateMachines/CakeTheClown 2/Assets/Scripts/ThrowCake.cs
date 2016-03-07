/*
 * Copyright (c) 2015 Razeware LLC
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

using UnityEngine;
using System.Collections;

public class ThrowCake : MonoBehaviour {
  float timeOfLastThrow;
  public GameObject cakePrefab;
  public float throwingDelay = 0.5f;

  public float yImpulse;
  public float zImpulse;

  GameObject cake;

  // Use this for initialization
  void Start () {
    timeOfLastThrow = Time.time - throwingDelay;
  }
	
  // Update is called once per frame
  void Update () {
    if (Input.GetMouseButtonUp (0) && Time.time - timeOfLastThrow > throwingDelay) {
      timeOfLastThrow = Time.time;

      cake = Instantiate(cakePrefab);
      Rigidbody cakeBody = cake.GetComponent<Rigidbody>();
      cakeBody.AddForce(new Vector3(0, yImpulse, zImpulse));
      cakeBody.AddTorque(new Vector3(Random.Range(-15, 15), Random.Range(-15, 15), Random.Range(-15, 15)));
    }
  }

}