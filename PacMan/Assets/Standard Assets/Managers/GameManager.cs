using System.Collections;
using System.Collections.Generic;
using UnityEngine;



public class GameManager : MonoBehaviour {

    public static GameManager GMinstance;
    public int PelletsOnBoard;
    public float timer;
    public float scatterTimer;
    public int timePoint;
    public float oldTimer;
    public float releaseTimer;

    public bool isPacmanAlive;

    //these are used for the timers so far.
    public bool EnergizerActive;
    public bool ScatterMode;
    public bool ChaseMode;

    public GameObject blinky;
    public GameObject pinky;
    public GameObject inky;
    public GameObject clyde;

    //True means can't move, false means can move.
    public bool blinkyLocked;
    public bool pinkyLocked;
    public bool inkyLocked;
    public bool clydeLocked;
    public int inkyMode;
    // true == chase mode, false == scatter mode.

    public bool blinkyMode;
    public bool pinkyMode;
    public bool InkyMode;
    public bool clydeMode;

    public int[] ghostEatScore = new int[] { 0, 200, 400, 800, 1600 };
    public int numGhostsEaten = 0;

    public GameObject pacmanGO;
    public int pacLives;

    public GameObject cherry;

    /*
     * void Awake():
     * I'm taking care of the initialization of the singleton in the Awake function
     * because the order in which functions call start is unclear. If I need the GM
     * in a start function there is a chance it will get me a null reference exception
     * so initializing the instance in Awake() is safer.
     */
    void Awake()
    {
        if (GMinstance != null && GMinstance != this)
        {
            Destroy(this.gameObject);
            return;
        }
        else
        {
            GMinstance = this;
        }

        //Board starts with 240 pellets
        PelletsOnBoard = 239;
        timer = 0;
        blinkyMode = false;
        pinkyMode = false;
        InkyMode = false;
        clydeMode = false;
        isPacmanAlive = true;
        pacLives = 3;
    }

    /*
     * Start ():
     * The locked functions for the ghosts are booleans
     * that if turned false will not allow the ghosts to move.
     * I decided to put them in the GM so that they are at a central piece
     * in the code, and can be accessed in any class.
     */
    void Start ()
    {
        pacmanGO = GameObject.Find("pacman");
        blinkyLocked = false;
        pinkyLocked = true;
        inkyLocked = true;
        clydeLocked = true;
        timePoint = 0;
        oldTimer = 0;
        EnergizerActive = false;
        ScatterMode = true;
        ChaseMode = false;
        releaseTimer = 0;

        blinky = GameObject.Find("Blinky");
        pinky = GameObject.Find("Pinky");
        inky = GameObject.Find("Inky");
        clyde = GameObject.Find("Clyde");
        cherry = GameObject.Find("Cherry");
    }

    /*
     * void Update ():
     * Currently the update for the gameManager is checking for inflexion points in the game.
     * for example when there are a certain number of pellets remaining on the board I am releasing
     * another ghost to chase after pacman. I'm also changing inky's chase mode from blinky to pinky in this update
     * As well as checking for the win condition. This all needs to be done in an update function because update is called
     * 60 times a second (once per frame).
     */
    void Update ()
    {
        //Kept here incase you want to lock ghosts to test things.
        //blinkyLocked = true;
        //pinkyLocked = true;
        //inkyLocked = true;
        //clydeLocked = true;

        timerControl();
        ghostHouseRelease();
        ghostTimeModeSwitch();
        scatterTime();
        switchInkyAttackMode();

        if (169 <= PelletsOnBoard && PelletsOnBoard <= 170)
        {
            cherry.GetComponent<Transform>().position = new Vector3(-1.36f, 3.1f, -22.42f);
        }

        ResetBoard();

        if ( pacLives < 1)
        {
            isPacmanAlive = false;
            blinkyLocked = true;
            clydeLocked = true;
            inkyLocked = true;
            pinkyLocked = true;
            Debug.Log("GAME OVER");
        }

        checkForWin();
	}

    void ResetBoard()
    {
        if (isPacmanAlive == false && AudioManager.AMinstance.audioSources[2].isPlaying == false)
        {
            if (AudioManager.AMinstance.audioSources[0].isPlaying == false && pacLives > 1)
            {
                AudioManager.AMinstance.playIntroSong();
                isPacmanAlive = true;
            }

            releaseTimer = 0;
            timer = 0;

            //Lock all ghost movement except blinky.
            pinkyLocked = true;
            inkyLocked = true;
            clydeLocked = true;
            blinkyLocked = false;
            //Reset scatterMode to scatter (true)
            ScatterMode = true;
            //Reset chaseMode to not chasing (false)
            ChaseMode = false;
            //Reset EnergizerActive to no energizer eaten (false)
            EnergizerActive = false;
            //Reset mode to not chasing (false)
            blinkyMode = false;
            pinkyMode = false;
            InkyMode = false;
            clydeMode = false;
            //Reset ghost eaten state to not eaten (False)
            blinky.GetComponent<BlinkyMovement>().ghostEaten = false;
            pinky.GetComponent<PinkyMovement>().ghostEaten = false;
            inky.GetComponent<InkyMovement>().ghostEaten = false;
            clyde.GetComponent<ClydeMovement>().ghostEaten = false;
            //Reset pacman last and curr move.
            pacmanGO.GetComponent<pacmanTempMove>().dest = new Vector3(-2.34f, 3.01f, -2.45f);
            pacmanGO.GetComponent<pacmanTempMove>().lastMove = pacmanGO.GetComponent<pacmanTempMove>().dest;
            //Reset blinky last and curr move.
            blinky.GetComponent<BlinkyMovement>().dest = new Vector3(-2.11f, 3.01f, -44.33f);
            blinky.GetComponent<BlinkyMovement>().lastDest = blinky.GetComponent<BlinkyMovement>().dest;
            //Reset pinky last and curr move.
            pinky.GetComponent<PinkyMovement>().dest = new Vector3(-2.11f, 3.01f, -44.33f);
            pinky.GetComponent<PinkyMovement>().lastDest = pinky.GetComponent<PinkyMovement>().vects[69];
            //Reset inky last and curr move.
            inky.GetComponent<InkyMovement>().dest = new Vector3(-2.11f, 3.01f, -44.33f);
            inky.GetComponent<InkyMovement>().lastDest = inky.GetComponent<InkyMovement>().vects[69];
            //Rest cylde last and curr move.
            clyde.GetComponent<ClydeMovement>().dest = new Vector3(-2.11f, 3.01f, -44.33f);
            clyde.GetComponent<ClydeMovement>().lastDest = clyde.GetComponent<ClydeMovement>().vects[69];
            //Reset all ghosts color to original.
            blinky.GetComponent<Renderer>().material.color = blinky.GetComponent<BlinkyMovement>().red;
            inky.GetComponent<Renderer>().material.color = inky.GetComponent<InkyMovement>().lightBlue;
            pinky.GetComponent<Renderer>().material.color = pinky.GetComponent<PinkyMovement>().pink;
            clyde.GetComponent<Renderer>().material.color = clyde.GetComponent<ClydeMovement>().orange;
            //Reset num ghosts eaten to 0
            numGhostsEaten = 0;
            pacLives--;
        }
    }

    void timerControl()
    {
        if (AudioManager.AMinstance.audioSources[0].isPlaying == false && EnergizerActive == false)
        {
            timer += Time.deltaTime;
        }
        if (AudioManager.AMinstance.audioSources[0].isPlaying == false)
        {
            releaseTimer += Time.deltaTime;
        }
    }

    void ghostHouseRelease()
    {
        if ((int)releaseTimer > 3 && (int)releaseTimer < 9)
        {
            //Debug.Log("Releasing Pinky at 220 pellets left.");
            pinkyLocked = false;
        }
        if ((int)releaseTimer > 5 && (int)releaseTimer < 9)
        {
            //Debug.Log("Releasing Inky at 200 pellets left.");
            inkyLocked = false;
        }
        if ((int)releaseTimer > 7 && (int)releaseTimer < 9)
        {
            //Debug.Log("Releasing Clyde at 180 pellets left.");
            clydeLocked = false;
        }
    }

    void ghostTimeModeSwitch()
    {
        if (EnergizerActive == false)
        {
            if (timer >= oldTimer + 7 && ScatterMode == true)
            {
                //go chase mode
                ChaseMode = true;
                ScatterMode = false;
                oldTimer = timer;
                blinkyMode = true;
                pinkyMode = true;
                InkyMode = true;
                clydeMode = true;
                Debug.Log("Entering 20 seconds of chase mode.");
            }
            else if (timer >= oldTimer + 20 && ChaseMode == true)
            {
                //go scatter mode
                ChaseMode = false;
                ScatterMode = true;
                oldTimer = timer;
                blinkyMode = false;
                pinkyMode = false;
                InkyMode = false;
                clydeMode = false;
                Debug.Log("Entering 7 seconds of Scatter mode.");
            }
        }
    }

    void checkForWin()
    {
        if (checkForDidWin() == true)
        {
            blinkyLocked = true;
            pinkyLocked = true;
            inkyLocked = true;
            clydeLocked = true;
            Application.LoadLevel("Winner");
        }
    }

    void switchInkyAttackMode()
    {
        if (GameManager.GMinstance.getGameTime() % 15 == 0 && this.inkyMode == 0)
        {
            this.inkyMode = 1;
        }
        else if (GameManager.GMinstance.getGameTime() % 15 == 0 && this.inkyMode == 1)
        {
            this.inkyMode = 0;
        }
    }

    void scatterTime()
    {
        if ((blinkyMode == false ||
            pinkyMode == false ||
            InkyMode == false ||
            clydeMode == false )&&
            this.EnergizerActive == true)
        {
            //Debug.Log("Energizer Active, scatter mode enabled.");
            scatterTimer += Time.deltaTime;
            if (scatterTimer > timePoint + 12)
            {
                //Debug.Log("Energizer Deactive, chase mode enabled.");
                setGhostColorOrig();
                EnergizerActive = false;
                if (blinky.GetComponent<BlinkyMovement>().ghostEaten == false)
                {
                    blinkyMode = true;
                }
                if (pinky.GetComponent<PinkyMovement>().ghostEaten == false)
                {
                    pinkyMode = true;
                }
                if (inky.GetComponent<InkyMovement>().ghostEaten == false)
                {
                    InkyMode = true;
                }
                if (clyde.GetComponent<ClydeMovement>().ghostEaten == false)
                {
                    clydeMode = true;
                }
            }
            else if(scatterTimer > timePoint + 11.5)
            {
                if (blinky.GetComponent<BlinkyMovement>().ghostEaten == false && blinkyMode == false)
                {
                    blinky.GetComponent<Renderer>().material.color = Color.blue;
                }
                if (pinky.GetComponent<PinkyMovement>().ghostEaten == false && pinkyMode == false)
                {
                    pinky.GetComponent<Renderer>().material.color = Color.blue;
                }
                if (inky.GetComponent<InkyMovement>().ghostEaten == false && InkyMode == false)
                {
                    inky.GetComponent<Renderer>().material.color = Color.blue;
                }
                if (clyde.GetComponent<ClydeMovement>().ghostEaten == false && clydeMode == false)
                {
                    clyde.GetComponent<Renderer>().material.color = Color.blue;
                }
            }
            else if (scatterTimer > timePoint + 11)
            {
                if (blinky.GetComponent<BlinkyMovement>().ghostEaten == false && blinkyMode == false)
                {
                    blinky.GetComponent<Renderer>().material.color = Color.white;
                }
                if (pinky.GetComponent<PinkyMovement>().ghostEaten == false && pinkyMode == false)
                {
                    pinky.GetComponent<Renderer>().material.color = Color.white;
                }
                if (inky.GetComponent<InkyMovement>().ghostEaten == false && InkyMode == false)
                {
                    inky.GetComponent<Renderer>().material.color = Color.white;
                }
                if (clyde.GetComponent<ClydeMovement>().ghostEaten == false && clydeMode == false)
                {
                    clyde.GetComponent<Renderer>().material.color = Color.white;
                }
            }
            else if( scatterTimer > timePoint + 10.5)
            {
                if (blinky.GetComponent<BlinkyMovement>().ghostEaten == false && blinkyMode == false)
                {
                    blinky.GetComponent<Renderer>().material.color = Color.blue;
                }
                if (pinky.GetComponent<PinkyMovement>().ghostEaten == false && pinkyMode == false)
                {
                    pinky.GetComponent<Renderer>().material.color = Color.blue;
                }
                if (inky.GetComponent<InkyMovement>().ghostEaten == false && InkyMode == false)
                {
                    inky.GetComponent<Renderer>().material.color = Color.blue;
                }
                if (clyde.GetComponent<ClydeMovement>().ghostEaten == false && clydeMode == false)
                {
                    clyde.GetComponent<Renderer>().material.color = Color.blue;
                }
            }
            else if (scatterTimer > timePoint + 10)
            {
                if (blinky.GetComponent<BlinkyMovement>().ghostEaten == false && blinkyMode == false)
                {
                    blinky.GetComponent<Renderer>().material.color = Color.white;
                }
                if (pinky.GetComponent<PinkyMovement>().ghostEaten == false && pinkyMode == false)
                {
                    pinky.GetComponent<Renderer>().material.color = Color.white;
                }
                if (inky.GetComponent<InkyMovement>().ghostEaten == false && InkyMode == false)
                {
                    inky.GetComponent<Renderer>().material.color = Color.white;
                }
                if (clyde.GetComponent<ClydeMovement>().ghostEaten == false && clydeMode == false)
                {
                    clyde.GetComponent<Renderer>().material.color = Color.white;
                }
            }
            else if (scatterTimer > timePoint + 9.5)
            {
                if (blinky.GetComponent<BlinkyMovement>().ghostEaten == false && blinkyMode == false)
                {
                    blinky.GetComponent<Renderer>().material.color = Color.blue;
                }
                if (pinky.GetComponent<PinkyMovement>().ghostEaten == false && pinkyMode == false)
                {
                    pinky.GetComponent<Renderer>().material.color = Color.blue;
                }
                if (inky.GetComponent<InkyMovement>().ghostEaten == false && InkyMode == false)
                {
                    inky.GetComponent<Renderer>().material.color = Color.blue;
                }
                if (clyde.GetComponent<ClydeMovement>().ghostEaten == false && clydeMode == false)
                {
                    clyde.GetComponent<Renderer>().material.color = Color.blue;
                }
            }
            else if (scatterTimer > timePoint + 9)
            {
                if (blinky.GetComponent<BlinkyMovement>().ghostEaten == false && blinkyMode == false)
                {
                    blinky.GetComponent<Renderer>().material.color = Color.white;
                }
                if (pinky.GetComponent<PinkyMovement>().ghostEaten == false && pinkyMode == false)
                {
                    pinky.GetComponent<Renderer>().material.color = Color.white;
                }
                if (inky.GetComponent<InkyMovement>().ghostEaten == false && InkyMode == false)
                {
                    inky.GetComponent<Renderer>().material.color = Color.white;
                }
                if (clyde.GetComponent<ClydeMovement>().ghostEaten == false && clydeMode == false)
                {
                    clyde.GetComponent<Renderer>().material.color = Color.white;
                }
            }
        }
    }

    void setGhostColorOrig()
    {
        if(blinky.GetComponent<BlinkyMovement>().ghostEaten == false)
        {
            blinky.GetComponent<Renderer>().material.color = blinky.GetComponent<BlinkyMovement>().red;
        }
        if(pinky.GetComponent<PinkyMovement>().ghostEaten == false)
        {
            pinky.GetComponent<Renderer>().material.color = pinky.GetComponent<PinkyMovement>().pink;
        }
        if(inky.GetComponent<InkyMovement>().ghostEaten == false)
        {
            inky.GetComponent<Renderer>().material.color = inky.GetComponent<InkyMovement>().lightBlue;
        }
        if(clyde.GetComponent<ClydeMovement>().ghostEaten == false)
        {
            clyde.GetComponent<Renderer>().material.color = clyde.GetComponent<ClydeMovement>().orange;
        } 
    }

    /*
     * public bool checkForDidWin():
     * Checks for a win condition on the board.
     */
    public bool checkForDidWin()
    {
        if (this.PelletsOnBoard == 0)
            return true;
        else
            return false;
    }

    /*
     * public int getGameTime():
     * Returns the timer variable as an int.
     * the timer variable can't be declared as an int, because I'm adding the delta
     * between frames, and if it's an int, the additions will be truncated.
     */
    public int getGameTime()
    {
        return (int)timer;
    }
}
