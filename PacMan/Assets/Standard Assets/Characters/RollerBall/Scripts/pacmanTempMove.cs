using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class pacmanTempMove : MonoBehaviour {

    public Vector3 dest;
    public Vector3 lastMove;
    public BoardData board;
    public Vector3[] boardVects;
    public Hashtable vectHash;
    private Vector3[] demoMoves;
    private Vector3[] demoMoves2;
    private Vector3[] teleportTest;
    private Vector3[] teleportTest2;
    private GhostAI gAI;
    public Vector3 startPosition;
    public string lastKey;
    public CharacterController controller;
    public Rigidbody rb;
    public GameObject pacman;


    //Used for movement
    public float speed2 = 2f;
    public float speed = 0.2f;
    public float jumpSpeed = .0f;
    public float gravity = 20.0f;
    public float maxSpeed = 100.0f;
    private Vector3 moveDirection = Vector3.zero;
    public bool onCooldown;

    // Use this for initialization
    void Start()
    {
        this.pacman = GameObject.Find("pacman");
        this.rb = GetComponent<Rigidbody>();
        this.controller = GetComponent<CharacterController>();
        this.onCooldown = false;
        this.lastKey = "";
        this.gAI = new GhostAI();
        this.dest = new Vector3(-2.34f, 3.01f, -2.45f);
        this.lastMove = this.dest;
        this.board = new BoardData();
        this.vectHash = board.getHash();
        this.boardVects = this.board.getVects();
        Vector3[] vects = this.board.getVects();
        this.demoMoves = new[] { vects[12], vects[13], vects[5] };

        this.demoMoves2 = new[] {vects[68], vects[48], vects[47], vects[57], vects[58], vects[65], vects[64], vects[54], vects[55], vects[45], vects[44],
                                 vects[36], vects[37], vects[38], vects[34], vects[35], vects[41], vects[40], vects[49], vects[50], vects[51], vects[61], vects[62],
                                 vects[52], vects[53], vects[43], vects[42], vects[32], vects[21], vects[22], vects[13], vects[6], vects[5], vects[12],
                                 vects[11], vects[10], vects[14], vects[9], vects[8], vects[7], vects[1], vects[2], vects[8]};

        this.teleportTest = new[] { vects[42], vects[32], vects[33], vects[28], vects[29], vects[30] };
        this.teleportTest2 = new[] { vects[37], vects[29], vects[28], vects[33], vects[32] };
        this.startPosition = new Vector3(-2.34f, 3.01f, -2.45f);
    }

    void pacmanPlayerMoveContinious()
    {
        if (GameManager.GMinstance.isPacmanAlive == false)
        {
            transform.position = startPosition;
        }

        if (GetComponent<Rigidbody>().velocity.magnitude > maxSpeed)
        {
            GetComponent<Rigidbody>().velocity = GetComponent<Rigidbody>().velocity.normalized * maxSpeed;
        }

        if (Input.GetKeyDown(KeyCode.UpArrow))
        {
            //transform.Translate(Vector3.forward * Time.deltaTime);
            lastKey = "u";
            GetComponent<Rigidbody>().velocity = Vector3.zero;
            //GetComponent<Rigidbody>().AddForce(new Vector3(0f, 0f, 1f), ForceMode.VelocityChange);
        }

        else if (Input.GetKeyDown(KeyCode.DownArrow))
        {
            lastKey = "d";
            GetComponent<Rigidbody>().velocity = Vector3.zero;
            //transform.Translate(Vector3.forward * Time.deltaTime);
            //GetComponent<Rigidbody>().AddForce(new Vector3(0f, 0f, -1f), ForceMode.VelocityChange);
        }

        else if (Input.GetKeyDown(KeyCode.LeftArrow))
        {
            lastKey = "l";
            GetComponent<Rigidbody>().velocity = Vector3.zero;
            //transform.Translate(Vector3.forward * Time.deltaTime);
            //GetComponent<Rigidbody>().AddForce(new Vector3(1f, 0f, 1f), ForceMode.VelocityChange);
        }

        else if (Input.GetKeyDown(KeyCode.RightArrow))
        {
            lastKey = "r";
            GetComponent<Rigidbody>().velocity = Vector3.zero;
            //transform.Translate(Vector3.forward * Time.deltaTime);
            //GetComponent<Rigidbody>().AddForce(new Vector3(-1f, 0f, 1f), ForceMode.VelocityChange);
        }

        if (lastKey == "r")
        {
            GetComponent<Rigidbody>().AddForce(new Vector3(-10f, 0f, 0f), ForceMode.VelocityChange);
        }
        else if (lastKey == "l")
        {
            GetComponent<Rigidbody>().AddForce(new Vector3(10f, 0f, 0f), ForceMode.VelocityChange);
        }
        else if (lastKey == "d")
        {
            GetComponent<Rigidbody>().AddForce(new Vector3(0f, 0f, 10f), ForceMode.VelocityChange);
        }
        else if (lastKey == "u")
        {
            GetComponent<Rigidbody>().AddForce(new Vector3(0f, 0f, -10f), ForceMode.VelocityChange);
        }
    }

    // Update is called once per frame
    void Update()
    {
        //pacmanComputer();
        //pacmanPlayerMove();
        pacmanPlayerMoveContinious();
    }

    public Vector3 getDest()
    {
        return this.dest;
    }

    public void setDest(Vector3 newDest)
    {
        this.dest = newDest;
    }

    public Vector3 getLastMove()
    {
        return this.lastMove;
    }

    public void setLastMove(Vector3 newLastMove)
    {
        this.lastMove = newLastMove;
    }

    void pacmanPlayerMove()
    {
        if (GameManager.GMinstance.isPacmanAlive == false)
        {
            transform.position = startPosition;
        }
        else if (AudioManager.AMinstance.audioSources[0].isPlaying == false)
        {
            if (!lastKey.Equals(Input.inputString))
            {
                lastKey = Input.inputString;

                    if (controller.isGrounded)
                    {
                        //moveDirection = new Vector3(1, 0, 1);
                        //moveDirection = new Vector3(Input.GetAxis("Horizontal"), 0, Input.GetAxis("Vertical"));

                        if (Input.GetKeyDown(KeyCode.A))
                        {
                            moveDirection = new Vector3(0.5f, 0, 0);
                        }
                        else if (Input.GetKeyDown(KeyCode.D))
                        {
                            moveDirection = new Vector3(-0.5f, 0, 0);
                        }

                        else if (Input.GetKeyDown(KeyCode.W))
                        {
                            moveDirection = new Vector3(0, 0, -0.5f);
                        }
                        else if (Input.GetKeyDown(KeyCode.S))
                        {
                            moveDirection = new Vector3(0, 0, 0.5f);
                        }

                        moveDirection = transform.TransformDirection(moveDirection);
                        moveDirection *= speed;

                    }
            }
                

            float zz = Time.deltaTime;

            moveDirection.y -= (gravity * Time.deltaTime);
            controller.Move(moveDirection * zz);
                
        }
    }

    void pacmanComputer()
    {
        if (GameManager.GMinstance.isPacmanAlive == true)
        {
            if (AudioManager.AMinstance.audioSources[0].isPlaying == false)
            {
                //Unsure if this will work.
                //I want it to teleport pacman to the other side.
                if ((this.dest == boardVects[28] && this.lastMove == this.boardVects[33]) ||
                    (this.dest == boardVects[33] && this.lastMove == this.boardVects[28]))
                {
                    transform.position = this.dest;
                }
                else
                {
                    transform.position = Vector3.MoveTowards(transform.position, this.dest, 0.29f);
                }

                if (Vector3.Distance(transform.position, this.dest) <= 0.1f)
                {
                    this.dest = getRandomNextMove(this.dest);
                    //this.dest = getNextDemoMove(this.dest, demoMoves);
                    //this.dest = getNextDemoMove(this.dest, teleportTest);
                }
            }
        }
        else if (GameManager.GMinstance.isPacmanAlive == false)
        {
            transform.position = startPosition;
        }

    }

    Vector3 getRandomNextMove(Vector3 currVect)
    {
        Hashtable Vecthash = this.board.getHash();
        float key = this.board.getKey(currVect);
        ArrayList vectArr = (ArrayList)Vecthash[key];
        Vector3[] vects = board.getVects();

        int ranNum = Random.Range(0, vectArr.Count);

        //Don't allow the last position pacman moves to be selected.
        while ((Vector3)vectArr[ranNum] == this.lastMove || (Vector3)vectArr[ranNum] == (Vector3)vects[69])
        {
            ranNum = Random.Range(0, vectArr.Count);
        }

        this.lastMove = this.dest;

        return (Vector3)vectArr[ranNum];

    }

    Vector3 getNextDemoMove(Vector3 currPos, Vector3[] demoMoves)
    {
        for (int i = 0; i < demoMoves.Length; i++)
        {
            if (demoMoves[i] == currPos && i != demoMoves.Length - 1)
            {
                return gAI.AStar(currPos, demoMoves[i + 1], ref this.lastMove, this.board);
            }
        }

        return gAI.AStar(currPos, demoMoves[0], ref this.lastMove, this.board);
    }
}
