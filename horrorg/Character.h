#pragma once
//functions for the character
class Character
{
    using UnityEngine;
    using System.Collections;

    public class Walking : MonoBehaviour {
        public float WalkSpeed;
        // Use this for initialization
        void Start()
        {

        }

        // Update is called once per frame
        void Update()
        {
            if (Input.GetKey(KeyCode.LeftArrow))
            {
            };
            public float speed;
            private float move;
            void Update() {
                move = Input.GetAxis("Horizontal");
                rigidbody3D.velocity = new Vector2(move * speed, rigidbody3D.velocity.y);
            }
        }
    }