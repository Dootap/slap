using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Dootap
{
    public class Logger : MonoBehaviour
    {
        public static void Log(string str)
        {
            Debug.Log(str);
        }
        public static void LogWarning(string str)
        {
            Debug.LogWarning(str);
        }
        public static void LogError(string str)
        {
            Debug.LogError(str);
        }
    }
}
