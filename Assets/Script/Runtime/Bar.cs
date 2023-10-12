using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class Bar : MonoBehaviour
{
    [SerializeField] Transform _arrow;
    [SerializeField] Transform _startPos;
    [SerializeField] Transform _endPos;

    Sequence _movingTween;
    private void OnEnable()
    {
        PlayerController.OnSlapped += StopMoving;
        PlayerController.OnDodge += StopMoving;
        GameManager.OnStartTurn += RestartMoving;
    }
    private void OnDisable()
    {
        PlayerController.OnSlapped -= StopMoving;
        PlayerController.OnDodge -= StopMoving;
        GameManager.OnStartTurn -= RestartMoving;

        _arrow.position = _startPos.position;
    }
    // Start is called before the first frame update
    void Start()
    {
        //_movingTween = Move();
    }

    // Update is called once per frame
    void Update()
    {
    }

    void StopMoving(int x)
    {
        _movingTween.Kill();
    }
    void RestartMoving()
    {
        _movingTween = Move();
    }
    Sequence Move()
    {
        _arrow.position = _startPos.position;

        Sequence seq = DOTween.Sequence();

        seq.Append(_arrow.DOMove(_endPos.position, 1).SetEase(Ease.InOutSine));
        seq.Append(_arrow.DOMove(_startPos.position, 1).SetEase(Ease.InOutSine));
        seq.SetLoops(-1);

        return seq;
    }

    public float GetValue()
    {
        float currentY = Mathf.Abs(_arrow.position.y);
        float startY = Mathf.Abs(_startPos.position.y);
        float endY = Mathf.Abs(_endPos.position.y);

        float value = endY > startY ? (currentY - startY) / (endY - startY) : (startY - currentY) / (startY - endY);
        return value;
    }
}
