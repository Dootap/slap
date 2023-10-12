using UnityEngine;
using System.Collections.Generic;
using System.Collections;
using System;
using System.IO;
using UnityEngine.UI;

[CreateAssetMenu(fileName = "PlayerTexture", menuName = "ScriptableObjects/PlayerTexture", order = 1)]
public class PlayerTextureScriptableObject : ScriptableObject
{
    public List<Sprite> playerSprite = new List<Sprite>();
}
