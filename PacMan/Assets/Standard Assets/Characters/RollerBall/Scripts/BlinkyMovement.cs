﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BlinkyMovement : ghostMovement {
    
    public Vector3 dest;
    public Vector3 lastDest;
    Vector3[] blinkyScatterTiles;
    public Color red;
    public bool ghostEaten;
    public Vector3 startLocation;

    
    /*
     * void Start ():
     * Start is called once when the game object is initialized.
     * gives Blinky a inital destination, so when update is called it is not null.
     */
    void Start () {
        startLocation = new Vector3(-2.27f, 3.01f, -41.2f);
        lastDest = base.vects[69];
        ghostEaten = false;
        red = gameObject.GetComponent<Renderer>().material.color;
        this.dest = new Vector3(-2.11f, 3.01f, -44.33f);
        this.lastDest = this.dest;
        Vector3[] vects = base.board.getVects();
        blinkyScatterTiles = new[] { vects[5], vects[6], vects[13], vects[12] };
    }

    /*
     * void Update ():
     * Update is called once per frame
     * this function takes care of moving blinky around the board.
     * no logic for choosing where he moves is done here.
     */
    void Update () {
        if (base.stopGhost(gameObject.name) == true) return;
        
        if(GameManager.GMinstance.isPacmanAlive == true)
        {
            if ((this.dest == vects[28] && this.lastDest == this.vects[33]) ||
                    (this.dest == vects[33] && this.lastDest == this.vects[28]))
            {
                transform.position = this.dest;
            }
            else
            {
                transform.position = Vector3.MoveTowards(transform.position, this.dest, 0.3f);
            }

            if (Vector3.Distance(transform.position, this.dest) <= 0.1f)
            {
                if (base.pacmanGameObject == null || base.pacmanGameObject.Equals(null))
                {
                    GameManager.GMinstance.blinkyLocked = true;
                }
                else if (ghostEaten == true)
                {
                    this.dest = base.goToCenter(this.dest, ref this.lastDest, base.board);
                }
                else
                {
                    this.dest = getNextMove(this.dest, base.pacmanGameObject.GetComponent<pacmanTempMove>().dest, base.board, blinkyScatterTiles, ref this.lastDest);
                }
            }
        }
        else if(GameManager.GMinstance.isPacmanAlive ==  false)
        {
            transform.position = startLocation;
        }
        else
        {
            Debug.Log("Unsure if pacman is alive or dead.");
        }

    }

    public Color getColor()
    {
        return red;
    }
    /*
     * public Vector3 getNextMove(Vector3 currVect, Vector3 pacmanLoc, BoardData board):
     * Makes a call to the ghostAI to get blinky's next move.
     * I seperated this out so that BlinkyMovement only deals with moving blinky around the board,
     * so there is no logic in choosing his destination here that is taken care of by the ghostAI.
     */
    public Vector3 getNextMove(Vector3 currVect, Vector3 pacmanLoc, BoardData board, Vector3[] ScatterTiles, ref Vector3 lastMove)
    {
        return base.ghostAI.BlinkyMove(currVect, pacmanLoc, board, ScatterTiles, ref lastMove);
    }
}
