using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class eatPellets : MonoBehaviour {

    bool callOnce;
    AudioSource[] sounds;
    AudioSource chomp;
    AudioSource pacDie;
    private GameObject pacmanGO;
    public BoardData board;
    public Vector3[] vects;
    private int score;
    public Text scoreText;
    public int count;
    private GameObject life;

    private void Awake()
    {
        callOnce = true;
        pacmanGO = pacmanGO = GameObject.Find("pacman");
        this.board = new BoardData();
    }

    /*
     * void Start ()
     * 
     */
    void Start ()
    {
        //chomp = AudioManager.AMinstance.audioSources[1];
        //pacDie = AudioManager.AMinstance.audioSources[2];
        //sounds = GetComponents<AudioSource>();
        //chomp = sounds[0];
        //pacDie = AudioManager.AMinstance.audioSources[2];
        vects = this.board.getVects();
        score = 0;
        scoreText.text = "Score: " + score.ToString();
        count = 0;
    }

    private void OnTriggerStay(Collider other)
    {
        callOnce = true;
    }

    /*
     * void OnTriggerEnter(Collider other)
     * Checks to see what object pacman has collided with
     * and then takes the appropriate action.
     */
    void OnTriggerEnter(Collider other)
    {
        if( callOnce == true)
        {
            if (other.gameObject.name.Contains("Pellet") == true)
            {
                callOnce = false;
                pelletCollision(other);
            }

            if (other.gameObject.name == "Cherry")
            {
                callOnce = false;
                fruitCollision(other);
            }
        }
        

        if (other.gameObject.name.Contains("Energizer") == true)
        {
            energizerCollision(other);
        }
        
        if (other.gameObject.name == "Blinky" || other.gameObject.name == "Pinky" ||
            other.gameObject.name == "Clyde" || other.gameObject.name == "Inky")
        {
            ghostCollision(other);
        }

        if (other.gameObject.name.Contains("intersection") == true)
        {
            intersectionCollision(other);
        }
    }

    void fruitCollision(Collider fruit)
    {
        Destroy(fruit.gameObject);
        score += 100;
        setScoreText();
    }

    void intersectionCollision(Collider other)
    {
        //Debug.Log("Intersection collision");
        string intersection;
        for (int i = 1; i <= 69; i++)
        {
            intersection = "intersection";
            intersection = string.Concat(intersection, i.ToString());

            if (other.name == intersection)
            {
                pacmanGO.GetComponent<pacmanTempMove>().lastMove = pacmanGO.GetComponent<pacmanTempMove>().dest;
                pacmanGO.GetComponent<pacmanTempMove>().dest = vects[i];

                if (pacmanGO.GetComponent<pacmanTempMove>().dest == vects[28] && pacmanGO.GetComponent<pacmanTempMove>().lastMove == vects[29])
                {
                    pacmanGO.GetComponent<pacmanTempMove>().transform.position = vects[33];
                }
                if (pacmanGO.GetComponent<pacmanTempMove>().dest == vects[33] && pacmanGO.GetComponent<pacmanTempMove>().lastMove == vects[32])
                {
                    pacmanGO.GetComponent<pacmanTempMove>().transform.position = vects[28];
                }

                break;
            }
        }
    }

    /*
     * void pelletCollision(Collider pellet)
     * Pacman has collided with a pellet, logic and
     * game object management takes place here.
     */
    void pelletCollision(Collider pellet)
    {
        Destroy(pellet.gameObject);

        score += 10;
        if (AudioManager.AMinstance.audioSources[1].isPlaying == false)
        {
            //Pac chomp
            AudioManager.AMinstance.audioSources[1].Play();
        }

        //Subtract one pellet from the GameManager.
        GameManager.GMinstance.PelletsOnBoard -= 1;
        //Debug.Log(GameManager.GMinstance.PelletsOnBoard); 

        setScoreText();
    }

    /*
     * void energizerCollision(Collider energizer)
     * Pacman has collided with a energizer, logic and
     * game object management takes place here.
     */
    void energizerCollision(Collider energizer)
    {
        //Debug.Log("Energizer Collision");
        score += 40;
        setScoreText();
        GameManager.GMinstance.EnergizerActive = true;
        GameManager.GMinstance.numGhostsEaten = 0;
        GameManager.GMinstance.timePoint = 0;
        GameManager.GMinstance.scatterTimer = 0;
        GameManager.GMinstance.blinkyMode = false;
        GameManager.GMinstance.pinkyMode = false;
        GameManager.GMinstance.InkyMode = false;
        GameManager.GMinstance.clydeMode = false;
        setGhostsColorBlue();

        Destroy(energizer.gameObject);
    }

    void setGhostsColorBlue()
    {
        Debug.Log("In set color blue");
        if(GameManager.GMinstance.blinky.GetComponent<BlinkyMovement>().ghostEaten == false)
        {
            GameManager.GMinstance.blinky.GetComponent<Renderer>().material.color = Color.blue;
        }
        if (GameManager.GMinstance.pinky.GetComponent<PinkyMovement>().ghostEaten == false)
        {
            GameManager.GMinstance.pinky.GetComponent<Renderer>().material.color = Color.blue;
        }
        if(GameManager.GMinstance.inky.GetComponent<InkyMovement>().ghostEaten == false)
        {
            GameManager.GMinstance.inky.GetComponent<Renderer>().material.color = Color.blue;
        }
        if (GameManager.GMinstance.clyde.GetComponent<ClydeMovement>().ghostEaten == false)
        {
            GameManager.GMinstance.clyde.GetComponent<Renderer>().material.color = Color.blue;
        }
    }

    /*
     * void pacmanCollision()
     * Pacman has collided with a ghost, logic and
     * game object management takes place here.
     */
    void ghostCollision(Collider other)
    {
        //Find out which ghost it is.
        //check which mode that ghost is in.
        //Do the appropriate action.
        if (other.name == "Blinky")
        {
            if (GameManager.GMinstance.blinkyMode == false && GameManager.GMinstance.EnergizerActive == true && other.GetComponent<BlinkyMovement>().ghostEaten == false)
            {
                other.gameObject.GetComponent<BlinkyMovement>().ghostEaten = true;
                GameManager.GMinstance.blinky.GetComponent<Renderer>().material.color = Color.white;
                GameManager.GMinstance.numGhostsEaten += 1;
                score += GameManager.GMinstance.ghostEatScore[GameManager.GMinstance.numGhostsEaten];
                setScoreText();
                AudioManager.AMinstance.audioSources[4].Play();
            }
            else if(GameManager.GMinstance.EnergizerActive == false && GameManager.GMinstance.blinkyMode == true)
            {
                ghostDie();
            }
            else
            {
                Debug.Log("Something went wrong, Blinky ghost Collision");
            }
        }
        else if(other.name == "Pinky")
        {
            if(GameManager.GMinstance.pinkyMode == false && GameManager.GMinstance.EnergizerActive == true && other.GetComponent<PinkyMovement>().ghostEaten == false)
            {
                other.gameObject.GetComponent<PinkyMovement>().ghostEaten = true;
                GameManager.GMinstance.pinky.GetComponent<Renderer>().material.color = Color.white;
                score += GameManager.GMinstance.ghostEatScore[GameManager.GMinstance.numGhostsEaten];
                setScoreText();
                AudioManager.AMinstance.audioSources[4].Play();
            }
            else if(GameManager.GMinstance.EnergizerActive == false && GameManager.GMinstance.pinkyMode == true)
            {
                ghostDie();
            }
            else
            {
                Debug.Log("Something went wrong, pinky ghost collision");
            }
        }
        else if(other.name == "Inky")
        {
            if (GameManager.GMinstance.InkyMode == false && GameManager.GMinstance.EnergizerActive == true && other.GetComponent<InkyMovement>().ghostEaten == false)
            {
                other.gameObject.GetComponent<InkyMovement>().ghostEaten = true;
                GameManager.GMinstance.inky.GetComponent<Renderer>().material.color = Color.white;
                score += GameManager.GMinstance.ghostEatScore[GameManager.GMinstance.numGhostsEaten];
                setScoreText();
                AudioManager.AMinstance.audioSources[4].Play();
            }
            else if (GameManager.GMinstance.EnergizerActive == false && GameManager.GMinstance.InkyMode == true)
            {
                ghostDie();
            }
            else
            {
                Debug.Log("Something went wrong, inky ghost collision");
            }
        }
        else if(other.name == "Clyde")
        {
            if(GameManager.GMinstance.clydeMode == false && GameManager.GMinstance.EnergizerActive == true && other.GetComponent<ClydeMovement>().ghostEaten == false)
            {
                other.gameObject.GetComponent<ClydeMovement>().ghostEaten = true;
                GameManager.GMinstance.clyde.GetComponent<Renderer>().material.color = Color.white;
                score += GameManager.GMinstance.ghostEatScore[GameManager.GMinstance.numGhostsEaten];
                setScoreText();
                AudioManager.AMinstance.audioSources[4].Play();
            }
            else if(GameManager.GMinstance.EnergizerActive == false && GameManager.GMinstance.clydeMode == true)
            {
                ghostDie();
            }
            else
            {
                Debug.Log("Something went wrong, clyde ghost collision");
            }
        }
        else
        {
            Debug.Log("Something went wrong, couldn't select ghost in ghost collision");
        }
    }

    void ghostDie()
    {
        GameManager.GMinstance.isPacmanAlive = false;

        if (GameManager.GMinstance.pacLives == 3)
        {
            life = GameObject.Find("life3");
            Destroy(life);
        }
        else if (GameManager.GMinstance.pacLives == 2)
        {
            life = GameObject.Find("life2");
            Destroy(life);
        }
        else if (GameManager.GMinstance.pacLives == 1)
        {
            life = GameObject.Find("life1");
            Destroy(life);
        }
        else
        {
            Debug.Log("Life deleting error.");
        }

        AudioManager.AMinstance.audioSources[2].Play();
    }

    /*
     * void setScoreText()
     * Sets the score in the UI of the game.
     */
    void setScoreText()
    {
        scoreText.text = "Score: " + score.ToString();
    }
}
