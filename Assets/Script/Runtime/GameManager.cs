using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    [SerializeField] Image _status;

    [SerializeField] Sprite _ready;
    [SerializeField] Sprite _fight;

    [SerializeField] Canvas _readyCanvas;

    [SerializeField] PlayerController _player1;
    [SerializeField] PlayerController _player2;

    [SerializeField] GameObject _restartButton;

    bool _isLeftPlayerTurn;

    int _round = 0;

    public static event Action OnStartTurn;
    public static GameManager instance;

    private void OnEnable()
    {
        PlayerController.OnSlapped += RestartTurn;
        PlayerController.OnDodge += RestartTurn;
    }
    private void OnDisable()
    {
        PlayerController.OnSlapped -= RestartTurn;
        PlayerController.OnDodge -= RestartTurn;
    }
    private void Awake()
    {
        if(instance == null)
        {
            instance = this;
        }
        else
        {
            Destroy(gameObject);
        }
    }
    // Start is called before the first frame update
    void Start()
    {
        //RestartTurn();
        StartCoroutine(StartGameCoroutine()); 
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void RestartTurn(int actionIndex)
    {
        StartCoroutine(EndTurnCoroutine(actionIndex));
    }

    public PlayerController GetOpponent(PlayerController player)
    {
        return _player1 == player ? _player2 : _player1;
    }

    IEnumerator EndTurnCoroutine(int actionIndex)
    {
        yield return new WaitForSeconds(1);
        PlayerController targetPlayer;
        if (actionIndex == 0)
        {
            targetPlayer = _isLeftPlayerTurn ? _player1 : _player2;
        }
        else
        {
            targetPlayer = _isLeftPlayerTurn ? _player2 : _player1;
        }
        targetPlayer.SetWinTurn();
        StartCoroutine(StartGameCoroutine());
    }
    IEnumerator StartGameCoroutine()
    {
        yield return new WaitForSeconds(1);
        _player1.ResetPosition();
        _player2.ResetPosition();
        bool isContinue = StartTurn();
        if(isContinue == false)
        {
            yield break;
        }
        _readyCanvas.gameObject.SetActive(true);
        _status.sprite = _ready;
        yield return new WaitForSeconds(1);
        _status.sprite = _fight;
        yield return new WaitForSeconds(1);
        _readyCanvas.gameObject.SetActive(false);

        OnStartTurn?.Invoke();
    }
    bool StartTurn()
    {
        _isLeftPlayerTurn = _round % 2 == 0;
        if(_player1.winTurn >= 3 || _player2.winTurn >= 3)
        {
            EndGame();
            return false;
        }
        ++_round;
        _player1.Init(_isLeftPlayerTurn);
        _player2.Init(_isLeftPlayerTurn == false);
        return true;
    }
    void EndGame()
    {
        bool isPlayer1Win = _player1.winTurn >= 3;
        _player1.SetEndGamePose(isPlayer1Win);
        _player2.SetEndGamePose(isPlayer1Win == false);
        StartCoroutine(ShowRestartButtonCoroutine());
    }
    IEnumerator ShowRestartButtonCoroutine()
    {
        yield return new WaitForSeconds(2);
        _restartButton.SetActive(true);
    }
    public void Restart()
    {
        SceneLoader.Instance.Load(SceneConst.Scene.Game);
    }
}
