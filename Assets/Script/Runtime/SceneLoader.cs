using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using DG.Tweening;
using System;
using TMPro;
using System.Threading.Tasks;

public class SceneLoader : MonoBehaviour
{
    [SerializeField] Image fadeBackground;
    [SerializeField] CanvasGroup loadingCanvas;
    [SerializeField] Slider loadingBarSlider;
    [SerializeField] TMP_Text loadingText;

    [SerializeField] GameObject shrinkGroup;
    [SerializeField] Transform shrinkMask;
    [SerializeField] GameObject bgPattern;
    [SerializeField] GameObject luluCanvas;

    [SerializeField] TMP_Text _tips;

    float _loadingTime = 0;
    bool _startCountingLoadingTime;

    public bool isLoading = false;
    public bool onLoaded;
    public static SceneLoader Instance;
    

    Vector3 initPos;

    Tween fadingTween;
    float fadeTime = 0.5f;

    SceneConst.Scene _cachedScene;
    bool _isCached;

    bool _isFading = false;
    public bool IsFading => _isFading;

    float _loadingBarPercentage;
    private void OnEnable()
    {
    }
    private void OnDisable()
    {
    }

    private void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(gameObject);
        }
    }

    private void Update()
    {
        //if (_startCountingLoadingTime)
        //{
        //    _loadingTime += Time.deltaTime;

        //    if(_loadingTime > GameConst.TIMEOUT)
        //    {
        //        _startCountingLoadingTime = false;
        //        _loadingTime = 0;

        //        OpenPopup<WarningPopup>("Popups/CustomPopup/WarningPopup",
        //                    popup => popup.Init("Something went wrong.", () =>
        //                    {
        //                        _isFading = false;

        //                        if (AuthenticationManager.instance.isSignedIn)
        //                        {
        //                            Load(SceneConst.Scene.Map);
        //                        }
        //                        else
        //                        {
        //                            Load(SceneConst.Scene.Login);
        //                        }
        //                    }));
        //    }
        //}
    }

    public void Load(SceneConst.Scene scene, bool isCached = false, int loadingType = 1)
    {
        StartCoroutine(LoadScene((int)scene, loadingType));

        if (isCached)
        {
            _cachedScene = (SceneConst.Scene)SceneManager.GetActiveScene().buildIndex;
            _isCached = isCached;
        }

        _startCountingLoadingTime = true;
        _loadingTime = 0;
    }

    public void Back(int loadingType = 0)
    {
        if (_isCached)
        {
            StartCoroutine(LoadScene((int)_cachedScene, loadingType));
            _isCached = false;
        }
        else
        {
            StartCoroutine(LoadScene((int)SceneConst.HomeScene, loadingType));
        }
    }

    /*** loadingType = 0: Loading with tips, 1: fade in loading, 2: circle shrink loading ***/
    IEnumerator LoadScene(int index, int loadingType)
    {
        if (_isFading)
        {
            yield break;
        }
        else
        {
            _isFading = true;
            ResetLoadingBar();
        }
        float startTime = Time.time;
        onLoaded = true;
        if (loadingType == 0)
        {
            loadingCanvas.gameObject.SetActive(true);
            luluCanvas.SetActive(true);
            if (loadingCanvas.alpha != 1)
            {
                //_tips.text = LocalizationManager.instance.GetLocalizationText(_tipsScriptableObject.GetRandomTips());
                fadingTween = loadingCanvas.DOFade(1, fadeTime).SetEase(Ease.OutQuad);
                yield return new WaitForSeconds(fadeTime);
            }
        }
        else if (loadingType == 1)
        {
            fadeBackground.gameObject.SetActive(true);
            if (fadeBackground.color != new Color(0, 0, 0, 1))
            {

                fadingTween = fadeBackground.DOColor(new Color(0, 0, 0, 1), fadeTime).SetEase(Ease.OutQuad);
                yield return new WaitForSeconds(fadeTime);
            }
        }else if(loadingType == 2)
        {
            shrinkGroup.SetActive(true);
            if (shrinkMask.localScale.x != 0 || shrinkMask.localScale.y != 0)
            {
                fadingTween = shrinkMask.DOScale(Vector2.zero, fadeTime * 1.5f).SetEase(Ease.OutQuad);
                yield return new WaitForSeconds(fadeTime * 1.5f);
            }
        }

        //Begin to load the Scene you specify
        AsyncOperation asyncOperation = SceneManager.LoadSceneAsync(index);
        //Don't let the Scene activate until you allow it to
        asyncOperation.allowSceneActivation = false;
        // Debug.Log("Pro :" + asyncOperation.progress);

        while (!asyncOperation.isDone)
        {
            //Output the current progress
            // m_Text.text = "Loading progress: " + (asyncOperation.progress * 100) + "%";

            // Check if the load has finished
            if (asyncOperation.progress < 0.9f)
            {
                SetLoadingBarPercentage(0.3f + asyncOperation.progress * 0.35f);
            }
            else
            {
                //Change the Text to show the Scene is ready
                //Wait to you press the space key to activate the Scene
                // if (Input.GetKeyDown(KeyCode.Space))
                asyncOperation.allowSceneActivation = true;
                yield return new WaitUntil(() => asyncOperation.isDone);
                yield return new WaitUntil(() => onLoaded);
                _startCountingLoadingTime = false;
                _loadingTime = 0;
                bool isComplete = false;
                SetLoadingBarPercentage(1).OnComplete(() => isComplete = true);
                yield return new WaitUntil(() => isComplete);
                if (loadingType == 0)
                {
                    fadingTween = loadingCanvas.DOFade(0, fadeTime).SetEase(Ease.OutQuad);
                    yield return new WaitForSeconds(fadeTime);
                }
                else if (loadingType == 1)
                {
                    fadingTween = fadeBackground.DOColor(new Color(0, 0, 0, 0), fadeTime).SetEase(Ease.OutQuad);
                    yield return new WaitForSeconds(fadeTime);
                }
                else if(loadingType == 2)
                {
                    yield return new WaitForSeconds(fadeTime);
                    fadingTween = shrinkMask.DOScale(Vector2.one, fadeTime * 2).SetEase(Ease.OutQuad);
                    yield return new WaitForSeconds(fadeTime * 2);
                }
                if (loadingType == 0)
                {
                    loadingCanvas.gameObject.SetActive(false);
                    luluCanvas.SetActive(false);
                }
                else if(loadingType == 1)
                {
                    fadeBackground.gameObject.SetActive(false);
                }else if(loadingType == 2)
                {
                    shrinkGroup.SetActive(false);
                }
                _isFading = false;
            }

            yield return null;
        }

        float loadingTime = Time.time - startTime;
        string sceneName = SceneManager.GetActiveScene().name;
        // LuLogger.Log("Loaded To " + scene.name + "." + " Loading Time: " + loadingTime + "s");
        Debug.Log($"Loaded To {sceneName}. Loading Time: {loadingTime}s.");
    }

    public void ToggleLoadingCanvas(bool isShow)
    {
        if (isShow)
        {
            luluCanvas.SetActive(true);
            ResetLoadingBar();
            loadingCanvas.gameObject.SetActive(true);
            loadingCanvas.alpha = 1;
            //_tips.text = LocalizationManager.instance.GetLocalizationText(_tipsScriptableObject.GetRandomTips());
        }
        else
        {
            loadingCanvas.alpha = 0;
            loadingCanvas.gameObject.SetActive(false);
            luluCanvas.SetActive(false);
        }
    }


    public Task<bool> ToggleFadingCanvas(bool isShow)
    {
        var tcs = new TaskCompletionSource<bool>();
        if (isShow)
        {
            if (_isFading)
            {
                tcs.SetResult(true);
            }
            else
            {
                _isFading = true;
            }

            fadeBackground.gameObject.SetActive(true);
            if (fadeBackground.color != new Color(0, 0, 0, 1))
            {

                fadingTween = fadeBackground.DOColor(new Color(0, 0, 0, 1), fadeTime).SetEase(Ease.OutQuad).OnComplete(
                    () =>
                    {
                        _isFading = false;
                        tcs.SetResult(true);
                    }
                );
            }
        }
        else
        {
            fadingTween = fadeBackground.DOColor(new Color(0, 0, 0, 0), fadeTime).SetEase(Ease.OutQuad).OnComplete(
                () =>
                {
                    fadeBackground.gameObject.SetActive(false);
                    _isFading = false;
                    tcs.SetResult(true);
                }
            );
        }

        return tcs.Task;
    }

    public float GetLoadingBarPercentage()
    {
        return _loadingBarPercentage;
    }
    public Tween SetLoadingBarPercentage(float newPercentage)
    {
        float currentPercentage = _loadingBarPercentage;
        _loadingBarPercentage = newPercentage;

        Tween textTween = DOTween.To(() => currentPercentage, x => { loadingText.text = "Loading... (" + (x*100).ToString("00") + "%)"; }, _loadingBarPercentage, 0.3f);

        Tween sliderTween = loadingBarSlider.DOValue(newPercentage, 0.3f);

        Sequence Seq = DOTween.Sequence();
        Seq.Append(textTween).Join(sliderTween);

        return Seq;
    }

    void ResetLoadingBar()
    {
        //_loadingBarPercentage = 0;
        //loadingBarSlider.value = 0;
        //loadingText.text = "Loading... (0%)";
    }
}
