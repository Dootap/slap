using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerController : MonoBehaviour
{
    Image _player;

    [SerializeField] PlayerTextureScriptableObject _playerTexture;
    [SerializeField] Transform _slapCount;
    [SerializeField] Button _actionButton;
    [SerializeField] Image _hitImage;
    [SerializeField] Bar _bar;

    [SerializeField] Sprite _slapButtonImage;
    [SerializeField] Sprite _dodgeButtonImage;
    [SerializeField] Sprite _dodgeSuccess;

    bool _isCurrentTurn = false;
    bool _isStartCountingDodge = false;
    float _reactionTime = 0;
    float _maximumReactionTime = 0;

    bool _isReady = true;

    bool _isExposed = false;

    int _winTurn = 0;
    public int winTurn => _winTurn;

    public static event Action<int> OnSlapped;
    public static event Action<int> OnDodge;
    public static event Action OnDodgeSuccess;

    private void OnEnable()
    {
        //OnDodge += ResetPosition;
        OnSlapped += EndTurn;
    }
    private void OnDisable()
    {
        //OnDodge -= ResetPosition;
        OnSlapped -= EndTurn;
    }
    // Start is called before the first frame update
    void Start()
    {
        _player = GetComponent<Image>();
    }

    // Update is called once per frame
    void Update()
    {
        if (_isStartCountingDodge)
        {
            _reactionTime += Time.deltaTime;
            if(_reactionTime >= _maximumReactionTime)
            {
                BeingSlapped();
            }
        }
    }

    public void Init(bool isCurrentTurn)
    {
        _isCurrentTurn = isCurrentTurn;
        _actionButton.gameObject.SetActive(true);
        _actionButton.onClick.RemoveAllListeners();
        if (isCurrentTurn)
        {
            _actionButton.GetComponent<Image>().sprite = _slapButtonImage;
            _actionButton.onClick.AddListener(() => Action());
            _bar.gameObject.SetActive(true);
        }
        else
        {
            _actionButton.GetComponent<Image>().sprite = _dodgeButtonImage;
            _actionButton.onClick.AddListener(() => Action());
            _bar.gameObject.SetActive(false);
        }
    }


    public void Action()
    {
        if (_isReady)
        {
            _isReady = false;
            _actionButton.interactable = false;
            StartCoroutine(CoolDownCoroutine());

            if (_isCurrentTurn)
            {
                StartCoroutine(SlapCoroutine(_bar.GetValue()));
            }
            else
            {
                StartCoroutine(DodgeCoroutine());
            }
        }
    }
    public void IsGettingSlap(float delayValue)
    {
        _isStartCountingDodge = true;
        _maximumReactionTime = 0.15f + delayValue;
        _reactionTime = 0;
        if (_isExposed)
        {
            BeingSlapped(true, delayValue);
        }
    }
    public void BeingSlapped(bool isExposedSlap = false, float delayValue = 0)
    {
        _isStartCountingDodge = false;
        if (isExposedSlap)
        {
            StartCoroutine(SlapWait(delayValue));
        }
        else
        {
            _hitImage.gameObject.SetActive(true);
        }
        OnSlapped?.Invoke(0);
    }

    public void SetWinTurn()
    {
        ++_winTurn;
        foreach (Transform child in _slapCount)
        {
            if(child.GetComponent<Image>().color.a < 1)
            {
                child.GetComponent<Image>().color = Color.white;
                if(_isCurrentTurn == false)
                {
                    child.GetComponent<Image>().sprite = _dodgeSuccess;
                }
                return;
            }
        }
    }
    IEnumerator SlapWait(float delayValue)
    {
        yield return new WaitForSeconds(0.15f + delayValue);
        _hitImage.gameObject.SetActive(true);
    }
    public void IsDodged()
    {
        OnDodge?.Invoke(1);
    }
    IEnumerator CoolDownCoroutine()
    {
        yield return new WaitForSeconds(GameConst.COOL_DOWN_TIME);
        _isExposed = false;
        _isReady = true;
        _actionButton.interactable = true;
        StopAllCoroutines();
    }
    IEnumerator SlapCoroutine(float boost)
    {
        float delayValue = 0.05f * (1 - boost);
        GameManager.instance.GetOpponent(this).IsGettingSlap(delayValue);
        _player.sprite = _playerTexture.playerSprite[3];
        yield return new WaitForSeconds(0.1f + delayValue);
        _player.sprite = _playerTexture.playerSprite[4];
        yield return new WaitForSeconds(0.04f + delayValue);
        _player.sprite = _playerTexture.playerSprite[6];
        transform.parent.GetComponent<Canvas>().sortingOrder = 1;
        //yield return new WaitForSeconds(0.02f + delayValue);
        //transform.parent.GetComponent<Canvas>().sortingOrder = 1;
        //_player.sprite = _playerTexture.playerSprite[6];
    }

    public void ResetPosition()
    {
        StopAllCoroutines();
        _isReady = false;
        _actionButton.interactable = false;
        StartCoroutine(CoolDownCoroutine());
        transform.parent.GetComponent<Canvas>().sortingOrder = 0;
        _player.sprite = _playerTexture.playerSprite[7];
        _hitImage.gameObject.SetActive(false);
    }
    public void EndTurn(int x)
    {
        //StopAllCoroutines();
        _actionButton.gameObject.SetActive(false);
    }

    IEnumerator DodgeCoroutine()
    {
        _player.sprite = _playerTexture.playerSprite[0];
        if (_isStartCountingDodge)
        {
            _isStartCountingDodge = false;
            _reactionTime = 0;
            IsDodged();
        }
        else
        {
            yield return new WaitForSeconds(0.26f);
            _isExposed = true;
            _player.sprite = _playerTexture.playerSprite[7];
        }
    }

    public void SetEndGamePose(bool isWin)
    {
        _player.sprite = isWin ? _playerTexture.playerSprite[8] : _playerTexture.playerSprite[2];
        _actionButton.gameObject.SetActive(false);
        _bar.gameObject.SetActive(false);
    }
}
