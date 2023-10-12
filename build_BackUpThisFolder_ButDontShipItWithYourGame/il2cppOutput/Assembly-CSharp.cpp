#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>
struct ABSTweenPlugin_3_tC26278B0CA053BAF4547345679D3E8D1F748AC12;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>
struct ABSTweenPlugin_3_t60F4DE5120CFD5986925189A0E775FAEAB4C59B9;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct ABSTweenPlugin_3_tE5A78BE46D046C07A6356B8AB596B2D00F9295E7;
// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Color>
struct DOGetter_1_t4DFFF7454A1BCD259676FED36CCF2114E34B5B95;
// DG.Tweening.Core.DOGetter`1<System.Single>
struct DOGetter_1_tE8B39477E96408653D0242624F4D7E48ABFD1B03;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>
struct DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Color>
struct DOSetter_1_t5E2B8A5C7040616545D7D029D20C4BF5F3E6DA89;
// DG.Tweening.Core.DOSetter`1<System.Single>
struct DOSetter_1_t48D41DB8CE0BFC91A1844C4CC49A8A7222A69200;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>
struct DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.List`1<DG.Tweening.Core.ABSSequentiable>
struct List_1_t0C6BF1E3B166E9D2A63FC3291C519D61B950BFDC;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Sprite>
struct List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206;
// System.Collections.Generic.List`1<DG.Tweening.Tween>
struct List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>
struct TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043;
// DG.Tweening.TweenCallback`1<System.Int32>
struct TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>
struct TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3;
// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>
struct TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// Bar
struct Bar_t84F39029FCBDBB865D524A9ACDF9640189A117DF;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// DG.Tweening.EaseFunction
struct EaseFunction_t0F945D9D726B0915C5FBF30862E987EC3AC12A04;
// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// MenuController
struct MenuController_t17F68C6A3294916109B163214554B7F97C7E8427;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95;
// PlayerTextureScriptableObject
struct PlayerTextureScriptableObject_t5CADF591CB56FE8B1B029B86DE70F40103DA73D2;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// SceneConst
struct SceneConst_tE6E612D398EE2A5C6E0CE044A323728B698EC89B;
// SceneLoader
struct SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// DG.Tweening.Sequence
struct Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// DG.Tweening.Tween
struct Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C;
// DG.Tweening.TweenCallback
struct TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.WaitUntil
struct WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// GameManager/<EndTurnCoroutine>d__20
struct U3CEndTurnCoroutineU3Ed__20_t88A8628872FD0D51A0511853E9F794940C40488A;
// GameManager/<ShowRestartButtonCoroutine>d__24
struct U3CShowRestartButtonCoroutineU3Ed__24_t0A04A1E13FB87595EB832D01C5BA3220B44B5224;
// GameManager/<StartGameCoroutine>d__21
struct U3CStartGameCoroutineU3Ed__21_tB149D4F0EB800A85E7092B0617ABE9620BFBE796;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// PlayerController/<CoolDownCoroutine>d__38
struct U3CCoolDownCoroutineU3Ed__38_t64C991479A831CD52C64A84FB3E00171D6A84473;
// PlayerController/<DodgeCoroutine>d__42
struct U3CDodgeCoroutineU3Ed__42_tACA0979995EBAD116A0E1F9F24B2C5418306BE62;
// PlayerController/<SlapCoroutine>d__39
struct U3CSlapCoroutineU3Ed__39_tF119661E38F225548FA0198213DF9A261369DAA2;
// PlayerController/<SlapWait>d__36
struct U3CSlapWaitU3Ed__36_t11E864610F796DF4A38808564C2243CD7264DA35;
// SceneLoader/<>c__DisplayClass29_0
struct U3CU3Ec__DisplayClass29_0_tC2F627E49F1CC5EDA9D9E0F448859B52019AD716;
// SceneLoader/<>c__DisplayClass29_1
struct U3CU3Ec__DisplayClass29_1_t213D4F0827FE343FA1A43EC5A2B5C8A85DFB6D59;
// SceneLoader/<>c__DisplayClass31_0
struct U3CU3Ec__DisplayClass31_0_t0BD794A68DFD630095604F9544A29B36B0C517D1;
// SceneLoader/<>c__DisplayClass33_0
struct U3CU3Ec__DisplayClass33_0_tBB107A3FB9FAA79248C6ED3374A4F26520B72697;
// SceneLoader/<LoadScene>d__29
struct U3CLoadSceneU3Ed__29_t4CA44A34A1C776DA1E94505179635CB680F0DBC9;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DOGetter_1_tE8B39477E96408653D0242624F4D7E48ABFD1B03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DOSetter_1_t48D41DB8CE0BFC91A1844C4CC49A8A7222A69200_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCoolDownCoroutineU3Ed__38_t64C991479A831CD52C64A84FB3E00171D6A84473_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDodgeCoroutineU3Ed__42_tACA0979995EBAD116A0E1F9F24B2C5418306BE62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CEndTurnCoroutineU3Ed__20_t88A8628872FD0D51A0511853E9F794940C40488A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadSceneU3Ed__29_t4CA44A34A1C776DA1E94505179635CB680F0DBC9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CShowRestartButtonCoroutineU3Ed__24_t0A04A1E13FB87595EB832D01C5BA3220B44B5224_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSlapCoroutineU3Ed__39_tF119661E38F225548FA0198213DF9A261369DAA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSlapWaitU3Ed__36_t11E864610F796DF4A38808564C2243CD7264DA35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartGameCoroutineU3Ed__21_tB149D4F0EB800A85E7092B0617ABE9620BFBE796_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass29_0_tC2F627E49F1CC5EDA9D9E0F448859B52019AD716_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass29_1_t213D4F0827FE343FA1A43EC5A2B5C8A85DFB6D59_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass31_0_t0BD794A68DFD630095604F9544A29B36B0C517D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass33_0_tBB107A3FB9FAA79248C6ED3374A4F26520B72697_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralB19170937BB19AE756B569F20FAA6D3EC8E752E0;
IL2CPP_EXTERN_C String_t* _stringLiteralC0F389439B8D37095DCB823699F5BCCDEE6C690C;
IL2CPP_EXTERN_C String_t* _stringLiteralD8C5FAD3982D14A1FB7F0EB6D010076BE49A4C70;
IL2CPP_EXTERN_C String_t* _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73;
IL2CPP_EXTERN_C const RuntimeMethod* Bar_RestartMoving_m369E9A00782944A72D5CBEA0899D52FBE09B3977_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Bar_StopMoving_m39A08CCFBF742186B77015851CDAC5F1B174695E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameManager_RestartTurn_m64FE4CC2EDE734891257543CEE2AFF2D27F83217_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC8A044C0E3A50C1EA1BF3DF15150A942C3E86DC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerController_EndTurn_m5CB7CF6EEE8DCBF26C65DAE0A36AD2A3BFB7668B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerController_U3CInitU3Eb__31_0_m5CA4EB05347BA9A5968D8C5DE53A5869869D1277_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerController_U3CInitU3Eb__31_1_m508440DDFF8BC77AE247813ADF6A8BB0582A3CDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetResult_mA4C94A8605B8E4A2646C0C2B08A3D373E1174448_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_OnComplete_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mBE711AE994C1480385AE49921B1DE8D773AC0F6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_OnComplete_TisTweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3_mE0198286069BCC9A37B43FB54AB01A71A7731766_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetEase_TisTweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1_mC938BE0C4068DBE3763250E39EF3BB0570E9AB7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetEase_TisTweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3_m3605060ADD85D4E33C9F7D03BE6A676211A4A40B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mEACEF6A6E654DEDDB2620CD0BE1DA29C023F4E2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetLoops_TisSequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C_m0625306E6FF96E1DD8498C997644113A0BD34297_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoolDownCoroutineU3Ed__38_System_Collections_IEnumerator_Reset_m4DAFFBEE1C563C7F791AC17339A33EACDB8030C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDodgeCoroutineU3Ed__42_System_Collections_IEnumerator_Reset_m7CF5108F23ED09DD03320D135631D66DE8296F8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CEndTurnCoroutineU3Ed__20_System_Collections_IEnumerator_Reset_mA61CA1307FEE4D38060726E0096DA9D348C2133E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadSceneU3Ed__29_System_Collections_IEnumerator_Reset_mF822A02E8E8B8A5361EDA67137CEFFAC49782CC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CShowRestartButtonCoroutineU3Ed__24_System_Collections_IEnumerator_Reset_m73BF6542167131FAAF5DFEF73476552C78929312_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSlapCoroutineU3Ed__39_System_Collections_IEnumerator_Reset_m408243C9F681921470B91884366F79969D25F381_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSlapWaitU3Ed__36_System_Collections_IEnumerator_Reset_m1E88CBD9FBBA267E3B01D634FF7962BF05A05B59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartGameCoroutineU3Ed__21_System_Collections_IEnumerator_Reset_m05374242A6D54E32394A67E3B547483C2B6BAEB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass29_0_U3CLoadSceneU3Eb__0_mA91AC0D3816784060E78184987F88C6D5DB933FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass29_0_U3CLoadSceneU3Eb__1_m509F1FBB1FCEA53E0A48FB40EA0ED2589AE0F8EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass29_1_U3CLoadSceneU3Eb__2_mE3332541DB5F687F60AF90AAD532FAA0412AF8EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass29_1_U3CLoadSceneU3Eb__3_mCF38E29D9415E53186AAF499BA3D8D8C6693C49C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass31_0_U3CToggleFadingCanvasU3Eb__0_mEE2B8F4F7D1E8E6CCF8910C22786F8B96C807555_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass31_0_U3CToggleFadingCanvasU3Eb__1_mCAF65F53688D99F2E88965317A1FB2D1888DA4B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass33_0_U3CSetLoadingBarPercentageU3Eb__0_mE14A6A0C2D49656F45785774B61BF06A18A19678_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass33_0_U3CSetLoadingBarPercentageU3Eb__1_mF170B8D7B23B2888B1811D9EE599DD2BF0799747_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<UnityEngine.Sprite>
struct List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___s_emptyArray_5;
};

// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>
struct TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ____task_0;
};

// DG.Tweening.Core.ABSSequentiable
struct ABSSequentiable_t05DF85FC63E3650D2D4CF6ABBA0F43263EB8CE89  : public RuntimeObject
{
	// DG.Tweening.TweenType DG.Tweening.Core.ABSSequentiable::tweenType
	int32_t ___tweenType_0;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedPosition
	float ___sequencedPosition_1;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedEndPosition
	float ___sequencedEndPosition_2;
	// DG.Tweening.TweenCallback DG.Tweening.Core.ABSSequentiable::onStart
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onStart_3;
};
struct Il2CppArrayBounds;

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// GameConst
struct GameConst_t30C222CEAAE33351D77014ED1468EB14B2F188FA  : public RuntimeObject
{
};

// SceneConst
struct SceneConst_tE6E612D398EE2A5C6E0CE044A323728B698EC89B  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_8;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_9;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_11;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_14;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_15;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_16;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_17;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_18;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_20;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_21;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// GameManager/<EndTurnCoroutine>d__20
struct U3CEndTurnCoroutineU3Ed__20_t88A8628872FD0D51A0511853E9F794940C40488A  : public RuntimeObject
{
	// System.Int32 GameManager/<EndTurnCoroutine>d__20::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager/<EndTurnCoroutine>d__20::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Int32 GameManager/<EndTurnCoroutine>d__20::actionIndex
	int32_t ___actionIndex_2;
	// GameManager GameManager/<EndTurnCoroutine>d__20::<>4__this
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___U3CU3E4__this_3;
};

// GameManager/<ShowRestartButtonCoroutine>d__24
struct U3CShowRestartButtonCoroutineU3Ed__24_t0A04A1E13FB87595EB832D01C5BA3220B44B5224  : public RuntimeObject
{
	// System.Int32 GameManager/<ShowRestartButtonCoroutine>d__24::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager/<ShowRestartButtonCoroutine>d__24::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GameManager GameManager/<ShowRestartButtonCoroutine>d__24::<>4__this
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___U3CU3E4__this_2;
};

// GameManager/<StartGameCoroutine>d__21
struct U3CStartGameCoroutineU3Ed__21_tB149D4F0EB800A85E7092B0617ABE9620BFBE796  : public RuntimeObject
{
	// System.Int32 GameManager/<StartGameCoroutine>d__21::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager/<StartGameCoroutine>d__21::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GameManager GameManager/<StartGameCoroutine>d__21::<>4__this
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___U3CU3E4__this_2;
};

// PlayerController/<CoolDownCoroutine>d__38
struct U3CCoolDownCoroutineU3Ed__38_t64C991479A831CD52C64A84FB3E00171D6A84473  : public RuntimeObject
{
	// System.Int32 PlayerController/<CoolDownCoroutine>d__38::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerController/<CoolDownCoroutine>d__38::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PlayerController PlayerController/<CoolDownCoroutine>d__38::<>4__this
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* ___U3CU3E4__this_2;
};

// PlayerController/<DodgeCoroutine>d__42
struct U3CDodgeCoroutineU3Ed__42_tACA0979995EBAD116A0E1F9F24B2C5418306BE62  : public RuntimeObject
{
	// System.Int32 PlayerController/<DodgeCoroutine>d__42::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerController/<DodgeCoroutine>d__42::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PlayerController PlayerController/<DodgeCoroutine>d__42::<>4__this
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* ___U3CU3E4__this_2;
};

// PlayerController/<SlapCoroutine>d__39
struct U3CSlapCoroutineU3Ed__39_tF119661E38F225548FA0198213DF9A261369DAA2  : public RuntimeObject
{
	// System.Int32 PlayerController/<SlapCoroutine>d__39::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerController/<SlapCoroutine>d__39::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Single PlayerController/<SlapCoroutine>d__39::boost
	float ___boost_2;
	// PlayerController PlayerController/<SlapCoroutine>d__39::<>4__this
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* ___U3CU3E4__this_3;
	// System.Single PlayerController/<SlapCoroutine>d__39::<delayValue>5__2
	float ___U3CdelayValueU3E5__2_4;
};

// PlayerController/<SlapWait>d__36
struct U3CSlapWaitU3Ed__36_t11E864610F796DF4A38808564C2243CD7264DA35  : public RuntimeObject
{
	// System.Int32 PlayerController/<SlapWait>d__36::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerController/<SlapWait>d__36::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Single PlayerController/<SlapWait>d__36::delayValue
	float ___delayValue_2;
	// PlayerController PlayerController/<SlapWait>d__36::<>4__this
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* ___U3CU3E4__this_3;
};

// SceneLoader/<>c__DisplayClass29_0
struct U3CU3Ec__DisplayClass29_0_tC2F627E49F1CC5EDA9D9E0F448859B52019AD716  : public RuntimeObject
{
	// UnityEngine.AsyncOperation SceneLoader/<>c__DisplayClass29_0::asyncOperation
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___asyncOperation_0;
	// SceneLoader SceneLoader/<>c__DisplayClass29_0::<>4__this
	SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* ___U3CU3E4__this_1;
	// System.Func`1<System.Boolean> SceneLoader/<>c__DisplayClass29_0::<>9__0
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___U3CU3E9__0_2;
	// System.Func`1<System.Boolean> SceneLoader/<>c__DisplayClass29_0::<>9__1
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___U3CU3E9__1_3;
};

// SceneLoader/<>c__DisplayClass29_1
struct U3CU3Ec__DisplayClass29_1_t213D4F0827FE343FA1A43EC5A2B5C8A85DFB6D59  : public RuntimeObject
{
	// System.Boolean SceneLoader/<>c__DisplayClass29_1::isComplete
	bool ___isComplete_0;
};

// SceneLoader/<>c__DisplayClass31_0
struct U3CU3Ec__DisplayClass31_0_t0BD794A68DFD630095604F9544A29B36B0C517D1  : public RuntimeObject
{
	// SceneLoader SceneLoader/<>c__DisplayClass31_0::<>4__this
	SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* ___U3CU3E4__this_0;
	// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean> SceneLoader/<>c__DisplayClass31_0::tcs
	TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* ___tcs_1;
};

// SceneLoader/<>c__DisplayClass33_0
struct U3CU3Ec__DisplayClass33_0_tBB107A3FB9FAA79248C6ED3374A4F26520B72697  : public RuntimeObject
{
	// System.Single SceneLoader/<>c__DisplayClass33_0::currentPercentage
	float ___currentPercentage_0;
	// SceneLoader SceneLoader/<>c__DisplayClass33_0::<>4__this
	SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* ___U3CU3E4__this_1;
};

// SceneLoader/<LoadScene>d__29
struct U3CLoadSceneU3Ed__29_t4CA44A34A1C776DA1E94505179635CB680F0DBC9  : public RuntimeObject
{
	// System.Int32 SceneLoader/<LoadScene>d__29::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SceneLoader/<LoadScene>d__29::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SceneLoader SceneLoader/<LoadScene>d__29::<>4__this
	SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* ___U3CU3E4__this_2;
	// System.Int32 SceneLoader/<LoadScene>d__29::loadingType
	int32_t ___loadingType_3;
	// SceneLoader/<>c__DisplayClass29_0 SceneLoader/<LoadScene>d__29::<>8__1
	U3CU3Ec__DisplayClass29_0_tC2F627E49F1CC5EDA9D9E0F448859B52019AD716* ___U3CU3E8__1_4;
	// System.Int32 SceneLoader/<LoadScene>d__29::index
	int32_t ___index_5;
	// SceneLoader/<>c__DisplayClass29_1 SceneLoader/<LoadScene>d__29::<>8__2
	U3CU3Ec__DisplayClass29_1_t213D4F0827FE343FA1A43EC5A2B5C8A85DFB6D59* ___U3CU3E8__2_6;
	// System.Single SceneLoader/<LoadScene>d__29::<startTime>5__2
	float ___U3CstartTimeU3E5__2_7;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	bool ___m_result_22;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// DG.Tweening.Plugins.Options.ColorOptions
struct ColorOptions_t9F2151E3A21F3FE2A41BEEF7D288D670C2685F39 
{
	// System.Boolean DG.Tweening.Plugins.Options.ColorOptions::alphaOnly
	bool ___alphaOnly_0;
};
// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.ColorOptions
struct ColorOptions_t9F2151E3A21F3FE2A41BEEF7D288D670C2685F39_marshaled_pinvoke
{
	int32_t ___alphaOnly_0;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.ColorOptions
struct ColorOptions_t9F2151E3A21F3FE2A41BEEF7D288D670C2685F39_marshaled_com
{
	int32_t ___alphaOnly_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// DG.Tweening.Plugins.Options.FloatOptions
struct FloatOptions_t8A9B05DB7CF6CC90A27F300C2977D91A48B3FEF5 
{
	// System.Boolean DG.Tweening.Plugins.Options.FloatOptions::snapping
	bool ___snapping_0;
};
// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.FloatOptions
struct FloatOptions_t8A9B05DB7CF6CC90A27F300C2977D91A48B3FEF5_marshaled_pinvoke
{
	int32_t ___snapping_0;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.FloatOptions
struct FloatOptions_t8A9B05DB7CF6CC90A27F300C2977D91A48B3FEF5_marshaled_com
{
	int32_t ___snapping_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// DG.Tweening.Tween
struct Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C  : public ABSSequentiable_t05DF85FC63E3650D2D4CF6ABBA0F43263EB8CE89
{
	// System.Single DG.Tweening.Tween::timeScale
	float ___timeScale_4;
	// System.Boolean DG.Tweening.Tween::isBackwards
	bool ___isBackwards_5;
	// System.Boolean DG.Tweening.Tween::isInverted
	bool ___isInverted_6;
	// System.Object DG.Tweening.Tween::id
	RuntimeObject* ___id_7;
	// System.String DG.Tweening.Tween::stringId
	String_t* ___stringId_8;
	// System.Int32 DG.Tweening.Tween::intId
	int32_t ___intId_9;
	// System.Object DG.Tweening.Tween::target
	RuntimeObject* ___target_10;
	// DG.Tweening.UpdateType DG.Tweening.Tween::updateType
	int32_t ___updateType_11;
	// System.Boolean DG.Tweening.Tween::isIndependentUpdate
	bool ___isIndependentUpdate_12;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPlay
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onPlay_13;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPause
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onPause_14;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onRewind
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onRewind_15;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onUpdate
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onUpdate_16;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onStepComplete
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onStepComplete_17;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onComplete
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onComplete_18;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onKill
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onKill_19;
	// DG.Tweening.TweenCallback`1<System.Int32> DG.Tweening.Tween::onWaypointChange
	TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67* ___onWaypointChange_20;
	// System.Boolean DG.Tweening.Tween::isFrom
	bool ___isFrom_21;
	// System.Boolean DG.Tweening.Tween::isBlendable
	bool ___isBlendable_22;
	// System.Boolean DG.Tweening.Tween::isRecyclable
	bool ___isRecyclable_23;
	// System.Boolean DG.Tweening.Tween::isSpeedBased
	bool ___isSpeedBased_24;
	// System.Boolean DG.Tweening.Tween::autoKill
	bool ___autoKill_25;
	// System.Single DG.Tweening.Tween::duration
	float ___duration_26;
	// System.Int32 DG.Tweening.Tween::loops
	int32_t ___loops_27;
	// DG.Tweening.LoopType DG.Tweening.Tween::loopType
	int32_t ___loopType_28;
	// System.Single DG.Tweening.Tween::delay
	float ___delay_29;
	// System.Boolean DG.Tweening.Tween::<isRelative>k__BackingField
	bool ___U3CisRelativeU3Ek__BackingField_30;
	// DG.Tweening.Ease DG.Tweening.Tween::easeType
	int32_t ___easeType_31;
	// DG.Tweening.EaseFunction DG.Tweening.Tween::customEase
	EaseFunction_t0F945D9D726B0915C5FBF30862E987EC3AC12A04* ___customEase_32;
	// System.Single DG.Tweening.Tween::easeOvershootOrAmplitude
	float ___easeOvershootOrAmplitude_33;
	// System.Single DG.Tweening.Tween::easePeriod
	float ___easePeriod_34;
	// System.String DG.Tweening.Tween::debugTargetId
	String_t* ___debugTargetId_35;
	// System.Type DG.Tweening.Tween::typeofT1
	Type_t* ___typeofT1_36;
	// System.Type DG.Tweening.Tween::typeofT2
	Type_t* ___typeofT2_37;
	// System.Type DG.Tweening.Tween::typeofTPlugOptions
	Type_t* ___typeofTPlugOptions_38;
	// System.Boolean DG.Tweening.Tween::<active>k__BackingField
	bool ___U3CactiveU3Ek__BackingField_39;
	// System.Boolean DG.Tweening.Tween::isSequenced
	bool ___isSequenced_40;
	// DG.Tweening.Sequence DG.Tweening.Tween::sequenceParent
	Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* ___sequenceParent_41;
	// System.Int32 DG.Tweening.Tween::activeId
	int32_t ___activeId_42;
	// DG.Tweening.Core.Enums.SpecialStartupMode DG.Tweening.Tween::specialStartupMode
	int32_t ___specialStartupMode_43;
	// System.Boolean DG.Tweening.Tween::creationLocked
	bool ___creationLocked_44;
	// System.Boolean DG.Tweening.Tween::startupDone
	bool ___startupDone_45;
	// System.Boolean DG.Tweening.Tween::<playedOnce>k__BackingField
	bool ___U3CplayedOnceU3Ek__BackingField_46;
	// System.Single DG.Tweening.Tween::<position>k__BackingField
	float ___U3CpositionU3Ek__BackingField_47;
	// System.Single DG.Tweening.Tween::fullDuration
	float ___fullDuration_48;
	// System.Int32 DG.Tweening.Tween::completedLoops
	int32_t ___completedLoops_49;
	// System.Boolean DG.Tweening.Tween::isPlaying
	bool ___isPlaying_50;
	// System.Boolean DG.Tweening.Tween::isComplete
	bool ___isComplete_51;
	// System.Single DG.Tweening.Tween::elapsedDelay
	float ___elapsedDelay_52;
	// System.Boolean DG.Tweening.Tween::delayComplete
	bool ___delayComplete_53;
	// System.Int32 DG.Tweening.Tween::miscInt
	int32_t ___miscInt_54;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9 
{
	// DG.Tweening.AxisConstraint DG.Tweening.Plugins.Options.VectorOptions::axisConstraint
	int32_t ___axisConstraint_0;
	// System.Boolean DG.Tweening.Plugins.Options.VectorOptions::snapping
	bool ___snapping_1;
};
// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_marshaled_pinvoke
{
	int32_t ___axisConstraint_0;
	int32_t ___snapping_1;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_marshaled_com
{
	int32_t ___axisConstraint_0;
	int32_t ___snapping_1;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.WaitUntil
struct WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// System.Func`1<System.Boolean> UnityEngine.WaitUntil::m_Predicate
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___m_Predicate_0;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// DG.Tweening.Sequence
struct Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C  : public Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C
{
	// System.Collections.Generic.List`1<DG.Tweening.Tween> DG.Tweening.Sequence::sequencedTweens
	List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD* ___sequencedTweens_55;
	// System.Collections.Generic.List`1<DG.Tweening.Core.ABSSequentiable> DG.Tweening.Sequence::_sequencedObjs
	List_1_t0C6BF1E3B166E9D2A63FC3291C519D61B950BFDC* ____sequencedObjs_56;
	// System.Single DG.Tweening.Sequence::lastTweenInsertTime
	float ___lastTweenInsertTime_57;
};

// DG.Tweening.Tweener
struct Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140  : public Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C
{
	// System.Boolean DG.Tweening.Tweener::hasManuallySetStartValue
	bool ___hasManuallySetStartValue_55;
	// System.Boolean DG.Tweening.Tweener::isFromAllowed
	bool ___isFromAllowed_56;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>
struct TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	ColorOptions_t9F2151E3A21F3FE2A41BEEF7D288D670C2685F39 ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t4DFFF7454A1BCD259676FED36CCF2114E34B5B95* ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t5E2B8A5C7040616545D7D029D20C4BF5F3E6DA89* ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_tC26278B0CA053BAF4547345679D3E8D1F748AC12* ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t* ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t* ____color32Type_66;
};

// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>
struct TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	float ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	float ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	float ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	FloatOptions_t8A9B05DB7CF6CC90A27F300C2977D91A48B3FEF5 ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_tE8B39477E96408653D0242624F4D7E48ABFD1B03* ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t48D41DB8CE0BFC91A1844C4CC49A8A7222A69200* ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t60F4DE5120CFD5986925189A0E775FAEAB4C59B9* ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t* ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t* ____color32Type_66;
};

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9 ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338* ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358* ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_tE5A78BE46D046C07A6356B8AB596B2D00F9295E7* ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t* ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t* ____color32Type_66;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404  : public MulticastDelegate_t
{
};

// DG.Tweening.Core.DOGetter`1<System.Single>
struct DOGetter_1_tE8B39477E96408653D0242624F4D7E48ABFD1B03  : public MulticastDelegate_t
{
};

// DG.Tweening.Core.DOSetter`1<System.Single>
struct DOSetter_1_t48D41DB8CE0BFC91A1844C4CC49A8A7222A69200  : public MulticastDelegate_t
{
};

// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// PlayerTextureScriptableObject
struct PlayerTextureScriptableObject_t5CADF591CB56FE8B1B029B86DE70F40103DA73D2  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Collections.Generic.List`1<UnityEngine.Sprite> PlayerTextureScriptableObject::playerSprite
	List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* ___playerSprite_4;
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// DG.Tweening.TweenCallback
struct TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields
{
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
};

// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Bar
struct Bar_t84F39029FCBDBB865D524A9ACDF9640189A117DF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform Bar::_arrow
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____arrow_4;
	// UnityEngine.Transform Bar::_startPos
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____startPos_5;
	// UnityEngine.Transform Bar::_endPos
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____endPos_6;
	// DG.Tweening.Sequence Bar::_movingTween
	Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* ____movingTween_7;
};

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Image GameManager::_status
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ____status_4;
	// UnityEngine.Sprite GameManager::_ready
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ____ready_5;
	// UnityEngine.Sprite GameManager::_fight
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ____fight_6;
	// UnityEngine.Canvas GameManager::_readyCanvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ____readyCanvas_7;
	// PlayerController GameManager::_player1
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* ____player1_8;
	// PlayerController GameManager::_player2
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* ____player2_9;
	// UnityEngine.GameObject GameManager::_restartButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____restartButton_10;
	// System.Boolean GameManager::_isLeftPlayerTurn
	bool ____isLeftPlayerTurn_11;
	// System.Int32 GameManager::_round
	int32_t ____round_12;
};

struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields
{
	// System.Action GameManager::OnStartTurn
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnStartTurn_13;
	// GameManager GameManager::instance
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___instance_14;
};

// MenuController
struct MenuController_t17F68C6A3294916109B163214554B7F97C7E8427  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Image PlayerController::_player
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ____player_4;
	// PlayerTextureScriptableObject PlayerController::_playerTexture
	PlayerTextureScriptableObject_t5CADF591CB56FE8B1B029B86DE70F40103DA73D2* ____playerTexture_5;
	// UnityEngine.Transform PlayerController::_slapCount
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____slapCount_6;
	// UnityEngine.UI.Button PlayerController::_actionButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ____actionButton_7;
	// UnityEngine.UI.Image PlayerController::_hitImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ____hitImage_8;
	// Bar PlayerController::_bar
	Bar_t84F39029FCBDBB865D524A9ACDF9640189A117DF* ____bar_9;
	// UnityEngine.Sprite PlayerController::_slapButtonImage
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ____slapButtonImage_10;
	// UnityEngine.Sprite PlayerController::_dodgeButtonImage
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ____dodgeButtonImage_11;
	// UnityEngine.Sprite PlayerController::_dodgeSuccess
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ____dodgeSuccess_12;
	// System.Boolean PlayerController::_isCurrentTurn
	bool ____isCurrentTurn_13;
	// System.Boolean PlayerController::_isStartCountingDodge
	bool ____isStartCountingDodge_14;
	// System.Single PlayerController::_reactionTime
	float ____reactionTime_15;
	// System.Single PlayerController::_maximumReactionTime
	float ____maximumReactionTime_16;
	// System.Boolean PlayerController::_isReady
	bool ____isReady_17;
	// System.Boolean PlayerController::_isExposed
	bool ____isExposed_18;
	// System.Int32 PlayerController::_winTurn
	int32_t ____winTurn_19;
};

struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields
{
	// System.Action`1<System.Int32> PlayerController::OnSlapped
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___OnSlapped_20;
	// System.Action`1<System.Int32> PlayerController::OnDodge
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___OnDodge_21;
	// System.Action PlayerController::OnDodgeSuccess
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnDodgeSuccess_22;
};

// SceneLoader
struct SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Image SceneLoader::fadeBackground
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___fadeBackground_4;
	// UnityEngine.CanvasGroup SceneLoader::loadingCanvas
	CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ___loadingCanvas_5;
	// UnityEngine.UI.Slider SceneLoader::loadingBarSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___loadingBarSlider_6;
	// TMPro.TMP_Text SceneLoader::loadingText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___loadingText_7;
	// UnityEngine.GameObject SceneLoader::shrinkGroup
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___shrinkGroup_8;
	// UnityEngine.Transform SceneLoader::shrinkMask
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___shrinkMask_9;
	// UnityEngine.GameObject SceneLoader::bgPattern
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___bgPattern_10;
	// UnityEngine.GameObject SceneLoader::luluCanvas
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___luluCanvas_11;
	// TMPro.TMP_Text SceneLoader::_tips
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ____tips_12;
	// System.Single SceneLoader::_loadingTime
	float ____loadingTime_13;
	// System.Boolean SceneLoader::_startCountingLoadingTime
	bool ____startCountingLoadingTime_14;
	// System.Boolean SceneLoader::isLoading
	bool ___isLoading_15;
	// System.Boolean SceneLoader::onLoaded
	bool ___onLoaded_16;
	// UnityEngine.Vector3 SceneLoader::initPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___initPos_18;
	// DG.Tweening.Tween SceneLoader::fadingTween
	Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___fadingTween_19;
	// System.Single SceneLoader::fadeTime
	float ___fadeTime_20;
	// SceneConst/Scene SceneLoader::_cachedScene
	int32_t ____cachedScene_21;
	// System.Boolean SceneLoader::_isCached
	bool ____isCached_22;
	// System.Boolean SceneLoader::_isFading
	bool ____isFading_23;
	// System.Single SceneLoader::_loadingBarPercentage
	float ____loadingBarPercentage_24;
};

struct SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF_StaticFields
{
	// SceneLoader SceneLoader::Instance
	SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* ___Instance_17;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void System.Action`1<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87_gshared (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetEase<System.Object>(T,DG.Tweening.Ease)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetEase_TisRuntimeObject_m28E0D61D2E7C5417FB6048D549C4A02BCABF3F46_gshared (RuntimeObject* ___t0, int32_t ___ease1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetLoops<System.Object>(T,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetLoops_TisRuntimeObject_m30FF346B469255E3C33C49622A4B5171078C99BD_gshared (RuntimeObject* ___t0, int32_t ___loops1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Int32>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_gshared_inline (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, int32_t ___obj0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646_gshared (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetResult_mA4C94A8605B8E4A2646C0C2B08A3D373E1174448_gshared (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, bool ___result0, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::OnComplete<System.Object>(T,DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_OnComplete_TisRuntimeObject_mC014D07E92193DA79B257C4508B6DF208FE502A6_gshared (RuntimeObject* ___t0, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___action1, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_gshared_inline (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, const RuntimeMethod* method) ;
// System.Void DG.Tweening.Core.DOGetter`1<System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOGetter_1__ctor_mD5E79861254E8BFB1618B3AB0B9755D18F553CFA_gshared (DOGetter_1_tE8B39477E96408653D0242624F4D7E48ABFD1B03* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void DG.Tweening.Core.DOSetter`1<System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOSetter_1__ctor_mCCAB2BA262A8DC16B8C5A6FD561BADA9160E7D2E_gshared (DOSetter_1_t48D41DB8CE0BFC91A1844C4CC49A8A7222A69200* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87 (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87_gshared)(__this, ___object0, ___method1, method);
}
// System.Void PlayerController::add_OnSlapped(System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_add_OnSlapped_mD05D41B43B68CB79FEA33E738CC29B365D216788 (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___value0, const RuntimeMethod* method) ;
// System.Void PlayerController::add_OnDodge(System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_add_OnDodge_m53110C3765ED75BA829C955CF66A35FA09FB0A0E (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___value0, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void GameManager::add_OnStartTurn(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_add_OnStartTurn_m8541E4F18BBD8027E8C42C33B6A17CADF385EC6E (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// System.Void PlayerController::remove_OnSlapped(System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_remove_OnSlapped_m47FD5B59BC9A1F2341A022CE446A824642B6830D (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___value0, const RuntimeMethod* method) ;
// System.Void PlayerController::remove_OnDodge(System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_remove_OnDodge_mAB797EFDC8A590414E221AFA64A14D490F267D67 (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___value0, const RuntimeMethod* method) ;
// System.Void GameManager::remove_OnStartTurn(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_remove_OnStartTurn_mDC7C210ACCA2453397492C6649D2DBC8BC3429D0 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void DG.Tweening.TweenExtensions::Kill(DG.Tweening.Tween,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenExtensions_Kill_mFFDE4DE45D8A91C357ABFF2F8FA95D412924F466 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, bool ___complete1, const RuntimeMethod* method) ;
// DG.Tweening.Sequence Bar::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* Bar_Move_mB697ADB8889C7EBD6F34EB15E15F8DDB516AC9FA (Bar_t84F39029FCBDBB865D524A9ACDF9640189A117DF* __this, const RuntimeMethod* method) ;
// DG.Tweening.Sequence DG.Tweening.DOTween::Sequence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* DOTween_Sequence_mC3AE53A08EC5DFD7DB9AE18A2FD11226A6611F89 (const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.ShortcutExtensions::DOMove(UnityEngine.Transform,UnityEngine.Vector3,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* ShortcutExtensions_DOMove_m82274FDC0216A91A1FAF16844805D06BF9A287FF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue1, float ___duration2, bool ___snapping3, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetEase<DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>>(T,DG.Tweening.Ease)
inline TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mEACEF6A6E654DEDDB2620CD0BE1DA29C023F4E2F (TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* ___t0, int32_t ___ease1, const RuntimeMethod* method)
{
	return ((  TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* (*) (TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77*, int32_t, const RuntimeMethod*))TweenSettingsExtensions_SetEase_TisRuntimeObject_m28E0D61D2E7C5417FB6048D549C4A02BCABF3F46_gshared)(___t0, ___ease1, method);
}
// DG.Tweening.Sequence DG.Tweening.TweenSettingsExtensions::Append(DG.Tweening.Sequence,DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* TweenSettingsExtensions_Append_mAFF074C9F7DE2BC8FF383C7729B13E732345F28F (Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* ___s0, Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetLoops<DG.Tweening.Sequence>(T,System.Int32)
inline Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* TweenSettingsExtensions_SetLoops_TisSequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C_m0625306E6FF96E1DD8498C997644113A0BD34297 (Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* ___t0, int32_t ___loops1, const RuntimeMethod* method)
{
	return ((  Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* (*) (Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C*, int32_t, const RuntimeMethod*))TweenSettingsExtensions_SetLoops_TisRuntimeObject_m30FF346B469255E3C33C49622A4B5171078C99BD_gshared)(___t0, ___loops1, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator GameManager::StartGameCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_StartGameCoroutine_m42BAC71BF03B34E515502DCB43DE227E4D341896 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator GameManager::EndTurnCoroutine(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_EndTurnCoroutine_m9850FF53A505BEE3FE336EEC551C142F7294E3FC (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, int32_t ___actionIndex0, const RuntimeMethod* method) ;
// System.Void GameManager/<EndTurnCoroutine>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEndTurnCoroutineU3Ed__20__ctor_mC9E376D953580AF526ED4E2FC1409F5DE09F430E (U3CEndTurnCoroutineU3Ed__20_t88A8628872FD0D51A0511853E9F794940C40488A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void GameManager/<StartGameCoroutine>d__21::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartGameCoroutineU3Ed__21__ctor_m110CB51E472E7DACF8994882E13448885B09559A (U3CStartGameCoroutineU3Ed__21_tB149D4F0EB800A85E7092B0617ABE9620BFBE796* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Int32 PlayerController::get_winTurn()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PlayerController_get_winTurn_mB7BC824E46552B8341CCD247704F5681AD3CD2D2_inline (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Void GameManager::EndGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_EndGame_m280CB4AB8F3243752E42BBAE128D1ABC092E6D62 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void PlayerController::Init(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Init_m721BCEF84F15CC4805040737453B2CD9FDE72D8C (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, bool ___isCurrentTurn0, const RuntimeMethod* method) ;
// System.Void PlayerController::SetEndGamePose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_SetEndGamePose_m86D76CBF4CAD01B98DC6CF65071D6A46A093A320 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, bool ___isWin0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator GameManager::ShowRestartButtonCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_ShowRestartButtonCoroutine_m314F190792ACDB4FD787A05CE70E49E86BF2CBCA (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void GameManager/<ShowRestartButtonCoroutine>d__24::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowRestartButtonCoroutineU3Ed__24__ctor_m2AE8425C57BDE9F9B990C3E254503BDCEE0EB870 (U3CShowRestartButtonCoroutineU3Ed__24_t0A04A1E13FB87595EB832D01C5BA3220B44B5224* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void SceneLoader::Load(SceneConst/Scene,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader_Load_m8C1F1145746BDB412298997A114098CA9D2F397A (SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* __this, int32_t ___scene0, bool ___isCached1, int32_t ___loadingType2, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void PlayerController::SetWinTurn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_SetWinTurn_m296379C68233F954D1EAA9A4C9601AD7836D5B46 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void PlayerController::ResetPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_ResetPosition_mA929647F2F1D0D3EFE9E66F7E8D2284390990470 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Boolean GameManager::StartTurn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameManager_StartTurn_mE819F5DFAEEF11069AE7C057BB06A0D3E591F29D (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void PlayerController::BeingSlapped(System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_BeingSlapped_mAD03A4E1CCFCB684689876B661C92076036C76EB (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, bool ___isExposedSlap0, float ___delayValue1, const RuntimeMethod* method) ;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEventBase::RemoveAllListeners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_RemoveAllListeners_m6E68297189537543B0C72FE38804646CA204D076 (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator PlayerController::CoolDownCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerController_CoolDownCoroutine_mC97476DE01DCE855037BB470A602C1887CEE3419 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Single Bar::GetValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Bar_GetValue_m96AB873BD96E4BC25CF262D50F2D209911035879 (Bar_t84F39029FCBDBB865D524A9ACDF9640189A117DF* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator PlayerController::SlapCoroutine(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerController_SlapCoroutine_mCE583EF7B7E2E4C3F628807B2569B105522A45A8 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, float ___boost0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator PlayerController::DodgeCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerController_DodgeCoroutine_mC7CD62E8F0BF2FCFC8757F62928DDF6B80E7E040 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator PlayerController::SlapWait(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerController_SlapWait_m558251CB6DD9FBF08CB8F67C2E2C07BB832B54AD (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, float ___delayValue0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Int32>::Invoke(T)
inline void Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_inline (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, int32_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*, int32_t, const RuntimeMethod*))Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_gshared_inline)(__this, ___obj0, method);
}
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// System.Void PlayerController/<SlapWait>d__36::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSlapWaitU3Ed__36__ctor_mEBCA70BB282D118EF2BC3B899B3362947C1B1752 (U3CSlapWaitU3Ed__36_t11E864610F796DF4A38808564C2243CD7264DA35* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void PlayerController/<CoolDownCoroutine>d__38::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoolDownCoroutineU3Ed__38__ctor_mE85846B0858B0C59C734C794AF45A5362524C976 (U3CCoolDownCoroutineU3Ed__38_t64C991479A831CD52C64A84FB3E00171D6A84473* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void PlayerController/<SlapCoroutine>d__39::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSlapCoroutineU3Ed__39__ctor_mB22150728521EE541EB98B9DA18BF47F944FA9D7 (U3CSlapCoroutineU3Ed__39_tF119661E38F225548FA0198213DF9A261369DAA2* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Canvas>()
inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Canvas::set_sortingOrder(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Canvas_set_sortingOrder_m70D89DB61A3C0589C0FAB525E613DE9D0C799AAC (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, int32_t ___value0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Sprite>::get_Item(System.Int32)
inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354 (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* (*) (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void PlayerController/<DodgeCoroutine>d__42::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDodgeCoroutineU3Ed__42__ctor_m3D55A9DEA624D92E0CDC87CEC6F39379A00BAF96 (U3CDodgeCoroutineU3Ed__42_tACA0979995EBAD116A0E1F9F24B2C5418306BE62* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void PlayerController::Action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Action_m0E85C2A959F427FE5A45118AB37F852A43086233 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// PlayerController GameManager::GetOpponent(PlayerController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* GameManager_GetOpponent_m3D7AC6720C52C56409C3CAB96886181F9C266FD9 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* ___player0, const RuntimeMethod* method) ;
// System.Void PlayerController::IsGettingSlap(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_IsGettingSlap_m20F2069E9CBB452DE710340B8B484105251CD776 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, float ___delayValue0, const RuntimeMethod* method) ;
// System.Void PlayerController::IsDodged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_IsDodged_m19E79E4ACCAEFD69046B81D23ACD0BB85C85A0A8 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Sprite>::.ctor()
inline void List_1__ctor_mC8A044C0E3A50C1EA1BF3DF15150A942C3E86DC2 (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SceneLoader::LoadScene(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SceneLoader_LoadScene_m70DEDA1582E0BC2754B5FD6CF65A77F148A1E106 (SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* __this, int32_t ___index0, int32_t ___loadingType1, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void SceneLoader/<LoadScene>d__29::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneU3Ed__29__ctor_m57FBE00556AABCABEA9E7D1A952867F7C2D17211 (U3CLoadSceneU3Ed__29_t4CA44A34A1C776DA1E94505179635CB680F0DBC9* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void SceneLoader::ResetLoadingBar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader_ResetLoadingBar_m729A6E09EB3BA16EE5654E88F52EC145C85B31F6 (SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.CanvasGroup::set_alpha(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void SceneLoader/<>c__DisplayClass31_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0__ctor_m1EFDC3AA8F24B0FD683E242D045D32C77D509BF4 (U3CU3Ec__DisplayClass31_0_t0BD794A68DFD630095604F9544A29B36B0C517D1* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::.ctor()
inline void TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646 (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14*, const RuntimeMethod*))TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646_gshared)(__this, method);
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::SetResult(TResult)
inline void TaskCompletionSource_1_SetResult_mA4C94A8605B8E4A2646C0C2B08A3D373E1174448 (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, bool ___result0, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14*, bool, const RuntimeMethod*))TaskCompletionSource_1_SetResult_mA4C94A8605B8E4A2646C0C2B08A3D373E1174448_gshared)(__this, ___result0, method);
}
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Color::op_Inequality(UnityEngine.Color,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Inequality_mF1C733BA10E60B086AB950A71143678AE76C4D92_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.DOTweenModuleUI::DOColor(UnityEngine.UI.Image,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* DOTweenModuleUI_DOColor_m385F3DCBA53A421BC288521879635D67E8155783 (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___target0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetEase<DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>>(T,DG.Tweening.Ease)
inline TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* TweenSettingsExtensions_SetEase_TisTweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3_m3605060ADD85D4E33C9F7D03BE6A676211A4A40B (TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* ___t0, int32_t ___ease1, const RuntimeMethod* method)
{
	return ((  TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* (*) (TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3*, int32_t, const RuntimeMethod*))TweenSettingsExtensions_SetEase_TisRuntimeObject_m28E0D61D2E7C5417FB6048D549C4A02BCABF3F46_gshared)(___t0, ___ease1, method);
}
// System.Void DG.Tweening.TweenCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenCallback__ctor_m68CC9304423CBDE43001F9B1413B5DAAF70DB621 (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::OnComplete<DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>>(T,DG.Tweening.TweenCallback)
inline TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* TweenSettingsExtensions_OnComplete_TisTweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3_mE0198286069BCC9A37B43FB54AB01A71A7731766 (TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* ___t0, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___action1, const RuntimeMethod* method)
{
	return ((  TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* (*) (TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3*, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*, const RuntimeMethod*))TweenSettingsExtensions_OnComplete_TisRuntimeObject_mC014D07E92193DA79B257C4508B6DF208FE502A6_gshared)(___t0, ___action1, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::get_Task()
inline Task_1_t824317F4B958F7512E8F7300511752937A6C6043* TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_inline (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t824317F4B958F7512E8F7300511752937A6C6043* (*) (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14*, const RuntimeMethod*))TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_gshared_inline)(__this, method);
}
// System.Void SceneLoader/<>c__DisplayClass33_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass33_0__ctor_mAFB392F30F2D3E89AD1DFC52686E5D858796B77A (U3CU3Ec__DisplayClass33_0_tBB107A3FB9FAA79248C6ED3374A4F26520B72697* __this, const RuntimeMethod* method) ;
// System.Void DG.Tweening.Core.DOGetter`1<System.Single>::.ctor(System.Object,System.IntPtr)
inline void DOGetter_1__ctor_mD5E79861254E8BFB1618B3AB0B9755D18F553CFA (DOGetter_1_tE8B39477E96408653D0242624F4D7E48ABFD1B03* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (DOGetter_1_tE8B39477E96408653D0242624F4D7E48ABFD1B03*, RuntimeObject*, intptr_t, const RuntimeMethod*))DOGetter_1__ctor_mD5E79861254E8BFB1618B3AB0B9755D18F553CFA_gshared)(__this, ___object0, ___method1, method);
}
// System.Void DG.Tweening.Core.DOSetter`1<System.Single>::.ctor(System.Object,System.IntPtr)
inline void DOSetter_1__ctor_mCCAB2BA262A8DC16B8C5A6FD561BADA9160E7D2E (DOSetter_1_t48D41DB8CE0BFC91A1844C4CC49A8A7222A69200* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (DOSetter_1_t48D41DB8CE0BFC91A1844C4CC49A8A7222A69200*, RuntimeObject*, intptr_t, const RuntimeMethod*))DOSetter_1__ctor_mCCAB2BA262A8DC16B8C5A6FD561BADA9160E7D2E_gshared)(__this, ___object0, ___method1, method);
}
// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions> DG.Tweening.DOTween::To(DG.Tweening.Core.DOGetter`1<System.Single>,DG.Tweening.Core.DOSetter`1<System.Single>,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* DOTween_To_m9C9EBC0FB6CF94364DD4FF85C476D8EE0A7FF4B1 (DOGetter_1_tE8B39477E96408653D0242624F4D7E48ABFD1B03* ___getter0, DOSetter_1_t48D41DB8CE0BFC91A1844C4CC49A8A7222A69200* ___setter1, float ___endValue2, float ___duration3, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions> DG.Tweening.DOTweenModuleUI::DOValue(UnityEngine.UI.Slider,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* DOTweenModuleUI_DOValue_m38DB0CB09A73E2DDC33B3EEE49D74944FBA82A38 (Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___target0, float ___endValue1, float ___duration2, bool ___snapping3, const RuntimeMethod* method) ;
// DG.Tweening.Sequence DG.Tweening.TweenSettingsExtensions::Join(DG.Tweening.Sequence,DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* TweenSettingsExtensions_Join_mBA1D659EE0310BBE1F42148057403E7C5EEDB777 (Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* ___s0, Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_get_isDone_m68A0682777E2132FC033182E9F50303566AA354D (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, const RuntimeMethod* method) ;
// System.Void SceneLoader/<>c__DisplayClass29_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass29_0__ctor_m93D732A27286129A5CD508F895FF49DB0C7F0AE4 (U3CU3Ec__DisplayClass29_0_tC2F627E49F1CC5EDA9D9E0F448859B52019AD716* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// System.Single UnityEngine.CanvasGroup::get_alpha()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CanvasGroup_get_alpha_mBFEA193D2886B27CC53B31F90F7A1659B67ED6DF (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* __this, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions> DG.Tweening.DOTweenModuleUI::DOFade(UnityEngine.CanvasGroup,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* DOTweenModuleUI_DOFade_mA073F33862AA7BEF33842B8200D0E79E046D114E (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ___target0, float ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetEase<DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>>(T,DG.Tweening.Ease)
inline TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* TweenSettingsExtensions_SetEase_TisTweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1_mC938BE0C4068DBE3763250E39EF3BB0570E9AB7E (TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* ___t0, int32_t ___ease1, const RuntimeMethod* method)
{
	return ((  TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* (*) (TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1*, int32_t, const RuntimeMethod*))TweenSettingsExtensions_SetEase_TisRuntimeObject_m28E0D61D2E7C5417FB6048D549C4A02BCABF3F46_gshared)(___t0, ___ease1, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.ShortcutExtensions::DOScale(UnityEngine.Transform,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* ShortcutExtensions_DOScale_mF7AC6EA0FD71B399776D758AD57B94F18A47F580 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* SceneManager_LoadSceneAsync_mA3C1B55E83225487A615436731B82087D77D4935 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AsyncOperation::set_allowSceneActivation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_set_allowSceneActivation_mBD94FAB342455508CD7962D3CED490C64AF74522 (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.AsyncOperation::get_progress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AsyncOperation_get_progress_mF3B2837C1A5DDF3C2F7A3BA1E449DD4C71C632EE (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, const RuntimeMethod* method) ;
// DG.Tweening.Tween SceneLoader::SetLoadingBarPercentage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* SceneLoader_SetLoadingBarPercentage_m20E6A88436C3D1CF4EA56FA1F55109FD11E13C8D (SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* __this, float ___newPercentage0, const RuntimeMethod* method) ;
// System.Void SceneLoader/<>c__DisplayClass29_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass29_1__ctor_m0DD7DB08051925723FCDCBF39A1C9C6496F74EF7 (U3CU3Ec__DisplayClass29_1_t213D4F0827FE343FA1A43EC5A2B5C8A85DFB6D59* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22 (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.WaitUntil::.ctor(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* __this, Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___predicate0, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::OnComplete<DG.Tweening.Tween>(T,DG.Tweening.TweenCallback)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_OnComplete_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mBE711AE994C1480385AE49921B1DE8D773AC0F6F (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___action1, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*, const RuntimeMethod*))TweenSettingsExtensions_OnComplete_TisRuntimeObject_mC014D07E92193DA79B257C4508B6DF208FE502A6_gshared)(___t0, ___action1, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline (const RuntimeMethod* method) ;
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D (float* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Color::op_Equality(UnityEngine.Color,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector4::op_Equality(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_mCEA0E5F229F4AE8C55152F7A8F84345F24F52DC6_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___lhs0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SceneConst::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneConst__ctor_m5BDDB0188241AD20F3ACAD3F08B56C55CA9D7C6A (SceneConst_tE6E612D398EE2A5C6E0CE044A323728B698EC89B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Bar::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bar_OnEnable_m497C3A4C7139AEE909BF7612B488A61C60CB60F4 (Bar_t84F39029FCBDBB865D524A9ACDF9640189A117DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Bar_RestartMoving_m369E9A00782944A72D5CBEA0899D52FBE09B3977_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Bar_StopMoving_m39A08CCFBF742186B77015851CDAC5F1B174695E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerController.OnSlapped += StopMoving;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_0 = (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)il2cpp_codegen_object_new(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87(L_0, __this, (intptr_t)((void*)Bar_StopMoving_m39A08CCFBF742186B77015851CDAC5F1B174695E_RuntimeMethod_var), NULL);
		PlayerController_add_OnSlapped_mD05D41B43B68CB79FEA33E738CC29B365D216788(L_0, NULL);
		// PlayerController.OnDodge += StopMoving;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_1 = (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)il2cpp_codegen_object_new(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87(L_1, __this, (intptr_t)((void*)Bar_StopMoving_m39A08CCFBF742186B77015851CDAC5F1B174695E_RuntimeMethod_var), NULL);
		PlayerController_add_OnDodge_m53110C3765ED75BA829C955CF66A35FA09FB0A0E(L_1, NULL);
		// GameManager.OnStartTurn += RestartMoving;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_2, __this, (intptr_t)((void*)Bar_RestartMoving_m369E9A00782944A72D5CBEA0899D52FBE09B3977_RuntimeMethod_var), NULL);
		GameManager_add_OnStartTurn_m8541E4F18BBD8027E8C42C33B6A17CADF385EC6E(L_2, NULL);
		// }
		return;
	}
}
// System.Void Bar::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bar_OnDisable_m31A2911AF7954877C7F3FBD763ABC7D0A2839AA9 (Bar_t84F39029FCBDBB865D524A9ACDF9640189A117DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Bar_RestartMoving_m369E9A00782944A72D5CBEA0899D52FBE09B3977_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Bar_StopMoving_m39A08CCFBF742186B77015851CDAC5F1B174695E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerController.OnSlapped -= StopMoving;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_0 = (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)il2cpp_codegen_object_new(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87(L_0, __this, (intptr_t)((void*)Bar_StopMoving_m39A08CCFBF742186B77015851CDAC5F1B174695E_RuntimeMethod_var), NULL);
		PlayerController_remove_OnSlapped_m47FD5B59BC9A1F2341A022CE446A824642B6830D(L_0, NULL);
		// PlayerController.OnDodge -= StopMoving;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_1 = (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)il2cpp_codegen_object_new(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87(L_1, __this, (intptr_t)((void*)Bar_StopMoving_m39A08CCFBF742186B77015851CDAC5F1B174695E_RuntimeMethod_var), NULL);
		PlayerController_remove_OnDodge_mAB797EFDC8A590414E221AFA64A14D490F267D67(L_1, NULL);
		// GameManager.OnStartTurn -= RestartMoving;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_2, __this, (intptr_t)((void*)Bar_RestartMoving_m369E9A00782944A72D5CBEA0899D52FBE09B3977_RuntimeMethod_var), NULL);
		GameManager_remove_OnStartTurn_mDC7C210ACCA2453397492C6649D2DBC8BC3429D0(L_2, NULL);
		// _arrow.position = _startPos.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->____arrow_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->____startPos_5;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		NullCheck(L_3);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_3, L_5, NULL);
		// }
		return;
	}
}
// System.Void Bar::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bar_Start_m185916BF623706156BE8BB5F283DF1A1B4EA9220 (Bar_t84F39029FCBDBB865D524A9ACDF9640189A117DF* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Bar::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bar_Update_m274CB82B255F6105AAF9A40314388F952B040CF3 (Bar_t84F39029FCBDBB865D524A9ACDF9640189A117DF* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Bar::StopMoving(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bar_StopMoving_m39A08CCFBF742186B77015851CDAC5F1B174695E (Bar_t84F39029FCBDBB865D524A9ACDF9640189A117DF* __this, int32_t ___x0, const RuntimeMethod* method) 
{
	{
		// _movingTween.Kill();
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_0 = __this->____movingTween_7;
		TweenExtensions_Kill_mFFDE4DE45D8A91C357ABFF2F8FA95D412924F466(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Bar::RestartMoving()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bar_RestartMoving_m369E9A00782944A72D5CBEA0899D52FBE09B3977 (Bar_t84F39029FCBDBB865D524A9ACDF9640189A117DF* __this, const RuntimeMethod* method) 
{
	{
		// _movingTween = Move();
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_0;
		L_0 = Bar_Move_mB697ADB8889C7EBD6F34EB15E15F8DDB516AC9FA(__this, NULL);
		__this->____movingTween_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____movingTween_7), (void*)L_0);
		// }
		return;
	}
}
// DG.Tweening.Sequence Bar::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* Bar_Move_mB697ADB8889C7EBD6F34EB15E15F8DDB516AC9FA (Bar_t84F39029FCBDBB865D524A9ACDF9640189A117DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mEACEF6A6E654DEDDB2620CD0BE1DA29C023F4E2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetLoops_TisSequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C_m0625306E6FF96E1DD8498C997644113A0BD34297_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _arrow.position = _startPos.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____arrow_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->____startPos_5;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_2, NULL);
		// Sequence seq = DOTween.Sequence();
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_3;
		L_3 = DOTween_Sequence_mC3AE53A08EC5DFD7DB9AE18A2FD11226A6611F89(NULL);
		// seq.Append(_arrow.DOMove(_endPos.position, 1).SetEase(Ease.InOutSine));
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_4 = L_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->____arrow_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->____endPos_6;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_8;
		L_8 = ShortcutExtensions_DOMove_m82274FDC0216A91A1FAF16844805D06BF9A287FF(L_5, L_7, (1.0f), (bool)0, NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_9;
		L_9 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mEACEF6A6E654DEDDB2620CD0BE1DA29C023F4E2F(L_8, 4, TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mEACEF6A6E654DEDDB2620CD0BE1DA29C023F4E2F_RuntimeMethod_var);
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_10;
		L_10 = TweenSettingsExtensions_Append_mAFF074C9F7DE2BC8FF383C7729B13E732345F28F(L_4, L_9, NULL);
		// seq.Append(_arrow.DOMove(_startPos.position, 1).SetEase(Ease.InOutSine));
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_11 = L_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->____arrow_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = __this->____startPos_5;
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_15;
		L_15 = ShortcutExtensions_DOMove_m82274FDC0216A91A1FAF16844805D06BF9A287FF(L_12, L_14, (1.0f), (bool)0, NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_16;
		L_16 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mEACEF6A6E654DEDDB2620CD0BE1DA29C023F4E2F(L_15, 4, TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mEACEF6A6E654DEDDB2620CD0BE1DA29C023F4E2F_RuntimeMethod_var);
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_17;
		L_17 = TweenSettingsExtensions_Append_mAFF074C9F7DE2BC8FF383C7729B13E732345F28F(L_11, L_16, NULL);
		// seq.SetLoops(-1);
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_18 = L_11;
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_19;
		L_19 = TweenSettingsExtensions_SetLoops_TisSequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C_m0625306E6FF96E1DD8498C997644113A0BD34297(L_18, (-1), TweenSettingsExtensions_SetLoops_TisSequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C_m0625306E6FF96E1DD8498C997644113A0BD34297_RuntimeMethod_var);
		// return seq;
		return L_18;
	}
}
// System.Single Bar::GetValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Bar_GetValue_m96AB873BD96E4BC25CF262D50F2D209911035879 (Bar_t84F39029FCBDBB865D524A9ACDF9640189A117DF* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// float currentY = Mathf.Abs(_arrow.position.y);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____arrow_4;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___y_3;
		float L_3;
		L_3 = fabsf(L_2);
		V_0 = L_3;
		// float startY = Mathf.Abs(_startPos.position.y);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->____startPos_5;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6 = L_5.___y_3;
		float L_7;
		L_7 = fabsf(L_6);
		V_1 = L_7;
		// float endY = Mathf.Abs(_endPos.position.y);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->____endPos_6;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		float L_10 = L_9.___y_3;
		float L_11;
		L_11 = fabsf(L_10);
		V_2 = L_11;
		// float value = endY > startY ? (currentY - startY) / (endY - startY) : (startY - currentY) / (startY - endY);
		float L_12 = V_2;
		float L_13 = V_1;
		if ((((float)L_12) > ((float)L_13)))
		{
			goto IL_004e;
		}
	}
	{
		float L_14 = V_1;
		float L_15 = V_0;
		float L_16 = V_1;
		float L_17 = V_2;
		return ((float)(((float)il2cpp_codegen_subtract(L_14, L_15))/((float)il2cpp_codegen_subtract(L_16, L_17))));
	}

IL_004e:
	{
		float L_18 = V_0;
		float L_19 = V_1;
		float L_20 = V_2;
		float L_21 = V_1;
		// return value;
		return ((float)(((float)il2cpp_codegen_subtract(L_18, L_19))/((float)il2cpp_codegen_subtract(L_20, L_21))));
	}
}
// System.Void Bar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bar__ctor_m46E8DDEB5461554D317F8CF9129F63E65D391DAA (Bar_t84F39029FCBDBB865D524A9ACDF9640189A117DF* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameManager::add_OnStartTurn(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_add_OnStartTurn_m8541E4F18BBD8027E8C42C33B6A17CADF385EC6E (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___OnStartTurn_13;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>((&((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___OnStartTurn_13), L_5, L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameManager::remove_OnStartTurn(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_remove_OnStartTurn_mDC7C210ACCA2453397492C6649D2DBC8BC3429D0 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___OnStartTurn_13;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>((&((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___OnStartTurn_13), L_5, L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameManager::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_OnEnable_mCBA3C942196F2FE284CA416B26833E78468F635E (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_RestartTurn_m64FE4CC2EDE734891257543CEE2AFF2D27F83217_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerController.OnSlapped += RestartTurn;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_0 = (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)il2cpp_codegen_object_new(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87(L_0, __this, (intptr_t)((void*)GameManager_RestartTurn_m64FE4CC2EDE734891257543CEE2AFF2D27F83217_RuntimeMethod_var), NULL);
		PlayerController_add_OnSlapped_mD05D41B43B68CB79FEA33E738CC29B365D216788(L_0, NULL);
		// PlayerController.OnDodge += RestartTurn;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_1 = (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)il2cpp_codegen_object_new(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87(L_1, __this, (intptr_t)((void*)GameManager_RestartTurn_m64FE4CC2EDE734891257543CEE2AFF2D27F83217_RuntimeMethod_var), NULL);
		PlayerController_add_OnDodge_m53110C3765ED75BA829C955CF66A35FA09FB0A0E(L_1, NULL);
		// }
		return;
	}
}
// System.Void GameManager::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_OnDisable_mF3CB4DACBE9C8FF46B0ED4D4E7BD71315230B968 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_RestartTurn_m64FE4CC2EDE734891257543CEE2AFF2D27F83217_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerController.OnSlapped -= RestartTurn;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_0 = (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)il2cpp_codegen_object_new(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87(L_0, __this, (intptr_t)((void*)GameManager_RestartTurn_m64FE4CC2EDE734891257543CEE2AFF2D27F83217_RuntimeMethod_var), NULL);
		PlayerController_remove_OnSlapped_m47FD5B59BC9A1F2341A022CE446A824642B6830D(L_0, NULL);
		// PlayerController.OnDodge -= RestartTurn;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_1 = (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)il2cpp_codegen_object_new(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87(L_1, __this, (intptr_t)((void*)GameManager_RestartTurn_m64FE4CC2EDE734891257543CEE2AFF2D27F83217_RuntimeMethod_var), NULL);
		PlayerController_remove_OnDodge_mAB797EFDC8A590414E221AFA64A14D490F267D67(L_1, NULL);
		// }
		return;
	}
}
// System.Void GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_m4B6E8E2AF58C95C9A2A0C4637A34AE0892CB637F (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(instance == null)
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// instance = this;
		((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_14 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_14), (void*)__this);
		return;
	}

IL_0014:
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
		// }
		return;
	}
}
// System.Void GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_m87A71D65F3171A58DBDDBFB03832ADA65643D0E2 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(StartGameCoroutine());
		RuntimeObject* L_0;
		L_0 = GameManager_StartGameCoroutine_m42BAC71BF03B34E515502DCB43DE227E4D341896(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void GameManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Update_m7F29D8E933B8D21D2E67507979C0F12ACF87BB41 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void GameManager::RestartTurn(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_RestartTurn_m64FE4CC2EDE734891257543CEE2AFF2D27F83217 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, int32_t ___actionIndex0, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(EndTurnCoroutine(actionIndex));
		int32_t L_0 = ___actionIndex0;
		RuntimeObject* L_1;
		L_1 = GameManager_EndTurnCoroutine_m9850FF53A505BEE3FE336EEC551C142F7294E3FC(__this, L_0, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// }
		return;
	}
}
// PlayerController GameManager::GetOpponent(PlayerController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* GameManager_GetOpponent_m3D7AC6720C52C56409C3CAB96886181F9C266FD9 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* ___player0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _player1 == player ? _player2 : _player1;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_0 = __this->____player1_8;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_1 = ___player0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_3 = __this->____player1_8;
		return L_3;
	}

IL_0015:
	{
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_4 = __this->____player2_9;
		return L_4;
	}
}
// System.Collections.IEnumerator GameManager::EndTurnCoroutine(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_EndTurnCoroutine_m9850FF53A505BEE3FE336EEC551C142F7294E3FC (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, int32_t ___actionIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CEndTurnCoroutineU3Ed__20_t88A8628872FD0D51A0511853E9F794940C40488A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CEndTurnCoroutineU3Ed__20_t88A8628872FD0D51A0511853E9F794940C40488A* L_0 = (U3CEndTurnCoroutineU3Ed__20_t88A8628872FD0D51A0511853E9F794940C40488A*)il2cpp_codegen_object_new(U3CEndTurnCoroutineU3Ed__20_t88A8628872FD0D51A0511853E9F794940C40488A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CEndTurnCoroutineU3Ed__20__ctor_mC9E376D953580AF526ED4E2FC1409F5DE09F430E(L_0, 0, NULL);
		U3CEndTurnCoroutineU3Ed__20_t88A8628872FD0D51A0511853E9F794940C40488A* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CEndTurnCoroutineU3Ed__20_t88A8628872FD0D51A0511853E9F794940C40488A* L_2 = L_1;
		int32_t L_3 = ___actionIndex0;
		NullCheck(L_2);
		L_2->___actionIndex_2 = L_3;
		return L_2;
	}
}
// System.Collections.IEnumerator GameManager::StartGameCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_StartGameCoroutine_m42BAC71BF03B34E515502DCB43DE227E4D341896 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartGameCoroutineU3Ed__21_tB149D4F0EB800A85E7092B0617ABE9620BFBE796_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartGameCoroutineU3Ed__21_tB149D4F0EB800A85E7092B0617ABE9620BFBE796* L_0 = (U3CStartGameCoroutineU3Ed__21_tB149D4F0EB800A85E7092B0617ABE9620BFBE796*)il2cpp_codegen_object_new(U3CStartGameCoroutineU3Ed__21_tB149D4F0EB800A85E7092B0617ABE9620BFBE796_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStartGameCoroutineU3Ed__21__ctor_m110CB51E472E7DACF8994882E13448885B09559A(L_0, 0, NULL);
		U3CStartGameCoroutineU3Ed__21_tB149D4F0EB800A85E7092B0617ABE9620BFBE796* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Boolean GameManager::StartTurn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameManager_StartTurn_mE819F5DFAEEF11069AE7C057BB06A0D3E591F29D (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// _isLeftPlayerTurn = _round % 2 == 0;
		int32_t L_0 = __this->____round_12;
		__this->____isLeftPlayerTurn_11 = (bool)((((int32_t)((int32_t)(L_0%2))) == ((int32_t)0))? 1 : 0);
		// if(_player1.winTurn >= 3 || _player2.winTurn >= 3)
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_1 = __this->____player1_8;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = PlayerController_get_winTurn_mB7BC824E46552B8341CCD247704F5681AD3CD2D2_inline(L_1, NULL);
		if ((((int32_t)L_2) >= ((int32_t)3)))
		{
			goto IL_002d;
		}
	}
	{
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_3 = __this->____player2_9;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = PlayerController_get_winTurn_mB7BC824E46552B8341CCD247704F5681AD3CD2D2_inline(L_3, NULL);
		if ((((int32_t)L_4) < ((int32_t)3)))
		{
			goto IL_0035;
		}
	}

IL_002d:
	{
		// EndGame();
		GameManager_EndGame_m280CB4AB8F3243752E42BBAE128D1ABC092E6D62(__this, NULL);
		// return false;
		return (bool)0;
	}

IL_0035:
	{
		// ++_round;
		int32_t L_5 = __this->____round_12;
		__this->____round_12 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		// _player1.Init(_isLeftPlayerTurn);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_6 = __this->____player1_8;
		bool L_7 = __this->____isLeftPlayerTurn_11;
		NullCheck(L_6);
		PlayerController_Init_m721BCEF84F15CC4805040737453B2CD9FDE72D8C(L_6, L_7, NULL);
		// _player2.Init(_isLeftPlayerTurn == false);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_8 = __this->____player2_9;
		bool L_9 = __this->____isLeftPlayerTurn_11;
		NullCheck(L_8);
		PlayerController_Init_m721BCEF84F15CC4805040737453B2CD9FDE72D8C(L_8, (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0), NULL);
		// return true;
		return (bool)1;
	}
}
// System.Void GameManager::EndGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_EndGame_m280CB4AB8F3243752E42BBAE128D1ABC092E6D62 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// bool isPlayer1Win = _player1.winTurn >= 3;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_0 = __this->____player1_8;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = PlayerController_get_winTurn_mB7BC824E46552B8341CCD247704F5681AD3CD2D2_inline(L_0, NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		// _player1.SetEndGamePose(isPlayer1Win);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_2 = __this->____player1_8;
		bool L_3 = V_0;
		NullCheck(L_2);
		PlayerController_SetEndGamePose_m86D76CBF4CAD01B98DC6CF65071D6A46A093A320(L_2, L_3, NULL);
		// _player2.SetEndGamePose(isPlayer1Win == false);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_4 = __this->____player2_9;
		bool L_5 = V_0;
		NullCheck(L_4);
		PlayerController_SetEndGamePose_m86D76CBF4CAD01B98DC6CF65071D6A46A093A320(L_4, (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0), NULL);
		// StartCoroutine(ShowRestartButtonCoroutine());
		RuntimeObject* L_6;
		L_6 = GameManager_ShowRestartButtonCoroutine_m314F190792ACDB4FD787A05CE70E49E86BF2CBCA(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7;
		L_7 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_6, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator GameManager::ShowRestartButtonCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_ShowRestartButtonCoroutine_m314F190792ACDB4FD787A05CE70E49E86BF2CBCA (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CShowRestartButtonCoroutineU3Ed__24_t0A04A1E13FB87595EB832D01C5BA3220B44B5224_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CShowRestartButtonCoroutineU3Ed__24_t0A04A1E13FB87595EB832D01C5BA3220B44B5224* L_0 = (U3CShowRestartButtonCoroutineU3Ed__24_t0A04A1E13FB87595EB832D01C5BA3220B44B5224*)il2cpp_codegen_object_new(U3CShowRestartButtonCoroutineU3Ed__24_t0A04A1E13FB87595EB832D01C5BA3220B44B5224_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CShowRestartButtonCoroutineU3Ed__24__ctor_m2AE8425C57BDE9F9B990C3E254503BDCEE0EB870(L_0, 0, NULL);
		U3CShowRestartButtonCoroutineU3Ed__24_t0A04A1E13FB87595EB832D01C5BA3220B44B5224* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void GameManager::Restart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Restart_mCAD4B8EB332D65D94F493AD96956EC1777DC3854 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneLoader.Instance.Load(SceneConst.Scene.Game);
		SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* L_0 = ((SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF_StaticFields*)il2cpp_codegen_static_fields_for(SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF_il2cpp_TypeInfo_var))->___Instance_17;
		NullCheck(L_0);
		SceneLoader_Load_m8C1F1145746BDB412298997A114098CA9D2F397A(L_0, 1, (bool)0, 1, NULL);
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mF453CED520617BFB65C52405A964E06CF17DB368 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameManager/<EndTurnCoroutine>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEndTurnCoroutineU3Ed__20__ctor_mC9E376D953580AF526ED4E2FC1409F5DE09F430E (U3CEndTurnCoroutineU3Ed__20_t88A8628872FD0D51A0511853E9F794940C40488A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GameManager/<EndTurnCoroutine>d__20::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEndTurnCoroutineU3Ed__20_System_IDisposable_Dispose_m076F2380E8C5652DB3268AE9E6F16847D43D1060 (U3CEndTurnCoroutineU3Ed__20_t88A8628872FD0D51A0511853E9F794940C40488A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GameManager/<EndTurnCoroutine>d__20::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEndTurnCoroutineU3Ed__20_MoveNext_mF1DDAC85B4EC6E43C7648732101FF92F36F22235 (U3CEndTurnCoroutineU3Ed__20_t88A8628872FD0D51A0511853E9F794940C40488A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* V_1 = NULL;
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* V_2 = NULL;
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* G_B8_0 = NULL;
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* G_B12_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (actionIndex == 0)
		int32_t L_5 = __this->___actionIndex_2;
		if (L_5)
		{
			goto IL_005f;
		}
	}
	{
		// targetPlayer = _isLeftPlayerTurn ? _player1 : _player2;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_6 = V_1;
		NullCheck(L_6);
		bool L_7 = L_6->____isLeftPlayerTurn_11;
		if (L_7)
		{
			goto IL_0056;
		}
	}
	{
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_8 = V_1;
		NullCheck(L_8);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_9 = L_8->____player2_9;
		G_B8_0 = L_9;
		goto IL_005c;
	}

IL_0056:
	{
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_10 = V_1;
		NullCheck(L_10);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_11 = L_10->____player1_8;
		G_B8_0 = L_11;
	}

IL_005c:
	{
		V_2 = G_B8_0;
		goto IL_0076;
	}

IL_005f:
	{
		// targetPlayer = _isLeftPlayerTurn ? _player2 : _player1;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_12 = V_1;
		NullCheck(L_12);
		bool L_13 = L_12->____isLeftPlayerTurn_11;
		if (L_13)
		{
			goto IL_006f;
		}
	}
	{
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_14 = V_1;
		NullCheck(L_14);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_15 = L_14->____player1_8;
		G_B12_0 = L_15;
		goto IL_0075;
	}

IL_006f:
	{
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_16 = V_1;
		NullCheck(L_16);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_17 = L_16->____player2_9;
		G_B12_0 = L_17;
	}

IL_0075:
	{
		V_2 = G_B12_0;
	}

IL_0076:
	{
		// targetPlayer.SetWinTurn();
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_18 = V_2;
		NullCheck(L_18);
		PlayerController_SetWinTurn_m296379C68233F954D1EAA9A4C9601AD7836D5B46(L_18, NULL);
		// StartCoroutine(StartGameCoroutine());
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_19 = V_1;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_20 = V_1;
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = GameManager_StartGameCoroutine_m42BAC71BF03B34E515502DCB43DE227E4D341896(L_20, NULL);
		NullCheck(L_19);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_22;
		L_22 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_19, L_21, NULL);
		// }
		return (bool)0;
	}
}
// System.Object GameManager/<EndTurnCoroutine>d__20::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEndTurnCoroutineU3Ed__20_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD4027D2827F3C04CAF41E4EE44F8B66131ECE43E (U3CEndTurnCoroutineU3Ed__20_t88A8628872FD0D51A0511853E9F794940C40488A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GameManager/<EndTurnCoroutine>d__20::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEndTurnCoroutineU3Ed__20_System_Collections_IEnumerator_Reset_mA61CA1307FEE4D38060726E0096DA9D348C2133E (U3CEndTurnCoroutineU3Ed__20_t88A8628872FD0D51A0511853E9F794940C40488A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CEndTurnCoroutineU3Ed__20_System_Collections_IEnumerator_Reset_mA61CA1307FEE4D38060726E0096DA9D348C2133E_RuntimeMethod_var)));
	}
}
// System.Object GameManager/<EndTurnCoroutine>d__20::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEndTurnCoroutineU3Ed__20_System_Collections_IEnumerator_get_Current_mC61597403B72B6FE2C17C72DBBCE35F4FDFEC1BF (U3CEndTurnCoroutineU3Ed__20_t88A8628872FD0D51A0511853E9F794940C40488A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameManager/<StartGameCoroutine>d__21::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartGameCoroutineU3Ed__21__ctor_m110CB51E472E7DACF8994882E13448885B09559A (U3CStartGameCoroutineU3Ed__21_tB149D4F0EB800A85E7092B0617ABE9620BFBE796* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GameManager/<StartGameCoroutine>d__21::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartGameCoroutineU3Ed__21_System_IDisposable_Dispose_m693E6207DB3393FAB77B6BE634B86D5006D09DB0 (U3CStartGameCoroutineU3Ed__21_tB149D4F0EB800A85E7092B0617ABE9620BFBE796* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GameManager/<StartGameCoroutine>d__21::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartGameCoroutineU3Ed__21_MoveNext_m3AC49A046711AD584401835BD136B0B7D5E660E9 (U3CStartGameCoroutineU3Ed__21_tB149D4F0EB800A85E7092B0617ABE9620BFBE796* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B9_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B8_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_0046;
			}
			case 2:
			{
				goto IL_00a8;
			}
			case 3:
			{
				goto IL_00d9;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0046:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// _player1.ResetPosition();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_4 = V_1;
		NullCheck(L_4);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_5 = L_4->____player1_8;
		NullCheck(L_5);
		PlayerController_ResetPosition_mA929647F2F1D0D3EFE9E66F7E8D2284390990470(L_5, NULL);
		// _player2.ResetPosition();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_6 = V_1;
		NullCheck(L_6);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_7 = L_6->____player2_9;
		NullCheck(L_7);
		PlayerController_ResetPosition_mA929647F2F1D0D3EFE9E66F7E8D2284390990470(L_7, NULL);
		// bool isContinue = StartTurn();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_8 = V_1;
		NullCheck(L_8);
		bool L_9;
		L_9 = GameManager_StartTurn_mE819F5DFAEEF11069AE7C057BB06A0D3E591F29D(L_8, NULL);
		// if(isContinue == false)
		if (L_9)
		{
			goto IL_006d;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_006d:
	{
		// _readyCanvas.gameObject.SetActive(true);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_10 = V_1;
		NullCheck(L_10);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_11 = L_10->____readyCanvas_7;
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_11, NULL);
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)1, NULL);
		// _status.sprite = _ready;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_13 = V_1;
		NullCheck(L_13);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = L_13->____status_4;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_15 = V_1;
		NullCheck(L_15);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_16 = L_15->____ready_5;
		NullCheck(L_14);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_14, L_16, NULL);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_17 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_17, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_17);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00a8:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// _status.sprite = _fight;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_18 = V_1;
		NullCheck(L_18);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_19 = L_18->____status_4;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_20 = V_1;
		NullCheck(L_20);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_21 = L_20->____fight_6;
		NullCheck(L_19);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_19, L_21, NULL);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_22 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_22, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_22);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_00d9:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// _readyCanvas.gameObject.SetActive(false);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_23 = V_1;
		NullCheck(L_23);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_24 = L_23->____readyCanvas_7;
		NullCheck(L_24);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_24, NULL);
		NullCheck(L_25);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_25, (bool)0, NULL);
		// OnStartTurn?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_26 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___OnStartTurn_13;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_27 = L_26;
		G_B8_0 = L_27;
		if (L_27)
		{
			G_B9_0 = L_27;
			goto IL_00fc;
		}
	}
	{
		goto IL_0101;
	}

IL_00fc:
	{
		NullCheck(G_B9_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B9_0, NULL);
	}

IL_0101:
	{
		// }
		return (bool)0;
	}
}
// System.Object GameManager/<StartGameCoroutine>d__21::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartGameCoroutineU3Ed__21_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6A3B6829D7EEF738C8213F2450F92D4DE52B5FA6 (U3CStartGameCoroutineU3Ed__21_tB149D4F0EB800A85E7092B0617ABE9620BFBE796* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GameManager/<StartGameCoroutine>d__21::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartGameCoroutineU3Ed__21_System_Collections_IEnumerator_Reset_m05374242A6D54E32394A67E3B547483C2B6BAEB6 (U3CStartGameCoroutineU3Ed__21_tB149D4F0EB800A85E7092B0617ABE9620BFBE796* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartGameCoroutineU3Ed__21_System_Collections_IEnumerator_Reset_m05374242A6D54E32394A67E3B547483C2B6BAEB6_RuntimeMethod_var)));
	}
}
// System.Object GameManager/<StartGameCoroutine>d__21::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartGameCoroutineU3Ed__21_System_Collections_IEnumerator_get_Current_mA261FD1F33D5A5210760F50AF9347B42A5D705F2 (U3CStartGameCoroutineU3Ed__21_tB149D4F0EB800A85E7092B0617ABE9620BFBE796* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameManager/<ShowRestartButtonCoroutine>d__24::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowRestartButtonCoroutineU3Ed__24__ctor_m2AE8425C57BDE9F9B990C3E254503BDCEE0EB870 (U3CShowRestartButtonCoroutineU3Ed__24_t0A04A1E13FB87595EB832D01C5BA3220B44B5224* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GameManager/<ShowRestartButtonCoroutine>d__24::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowRestartButtonCoroutineU3Ed__24_System_IDisposable_Dispose_m4B68BB90C17FA2FB0166081D0CD2FE7526C31F4F (U3CShowRestartButtonCoroutineU3Ed__24_t0A04A1E13FB87595EB832D01C5BA3220B44B5224* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GameManager/<ShowRestartButtonCoroutine>d__24::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CShowRestartButtonCoroutineU3Ed__24_MoveNext_mBFB52E1D001BB523BC9C4C910294724225B7612A (U3CShowRestartButtonCoroutineU3Ed__24_t0A04A1E13FB87595EB832D01C5BA3220B44B5224* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(2);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (2.0f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// _restartButton.SetActive(true);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_5 = V_1;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_5->____restartButton_10;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// }
		return (bool)0;
	}
}
// System.Object GameManager/<ShowRestartButtonCoroutine>d__24::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CShowRestartButtonCoroutineU3Ed__24_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mDFF99B210F8FB3EC443619027990DC65472FEAA3 (U3CShowRestartButtonCoroutineU3Ed__24_t0A04A1E13FB87595EB832D01C5BA3220B44B5224* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GameManager/<ShowRestartButtonCoroutine>d__24::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowRestartButtonCoroutineU3Ed__24_System_Collections_IEnumerator_Reset_m73BF6542167131FAAF5DFEF73476552C78929312 (U3CShowRestartButtonCoroutineU3Ed__24_t0A04A1E13FB87595EB832D01C5BA3220B44B5224* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CShowRestartButtonCoroutineU3Ed__24_System_Collections_IEnumerator_Reset_m73BF6542167131FAAF5DFEF73476552C78929312_RuntimeMethod_var)));
	}
}
// System.Object GameManager/<ShowRestartButtonCoroutine>d__24::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CShowRestartButtonCoroutineU3Ed__24_System_Collections_IEnumerator_get_Current_mC6DC007149EDFBFF87842931D924111B7FB21475 (U3CShowRestartButtonCoroutineU3Ed__24_t0A04A1E13FB87595EB832D01C5BA3220B44B5224* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MenuController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuController_Start_m88A8FAF8DB4765830F6CA0D4508D5E565B2F68D0 (MenuController_t17F68C6A3294916109B163214554B7F97C7E8427* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void MenuController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuController_Update_m15DD6714D46E0384A1F59B62B8A6323C108058D6 (MenuController_t17F68C6A3294916109B163214554B7F97C7E8427* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void MenuController::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuController_StartGame_m187D5BCB6C49A8473FDC5D3785713A2B66EAD306 (MenuController_t17F68C6A3294916109B163214554B7F97C7E8427* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneLoader.Instance.Load(SceneConst.Scene.Game);
		SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* L_0 = ((SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF_StaticFields*)il2cpp_codegen_static_fields_for(SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF_il2cpp_TypeInfo_var))->___Instance_17;
		NullCheck(L_0);
		SceneLoader_Load_m8C1F1145746BDB412298997A114098CA9D2F397A(L_0, 1, (bool)0, 1, NULL);
		// }
		return;
	}
}
// System.Void MenuController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuController__ctor_m3E178AC64181BB1DB914E825C38F925DDE9C08C1 (MenuController_t17F68C6A3294916109B163214554B7F97C7E8427* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 PlayerController::get_winTurn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerController_get_winTurn_mB7BC824E46552B8341CCD247704F5681AD3CD2D2 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// public int winTurn => _winTurn;
		int32_t L_0 = __this->____winTurn_19;
		return L_0;
	}
}
// System.Void PlayerController::add_OnSlapped(System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_add_OnSlapped_mD05D41B43B68CB79FEA33E738CC29B365D216788 (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_0 = NULL;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_1 = NULL;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_2 = NULL;
	{
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_0 = ((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___OnSlapped_20;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_1 = V_0;
		V_1 = L_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_2 = V_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)Castclass((RuntimeObject*)L_4, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var));
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_5 = V_2;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_6 = V_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*>((&((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___OnSlapped_20), L_5, L_6);
		V_0 = L_7;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_8 = V_0;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)L_8) == ((RuntimeObject*)(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void PlayerController::remove_OnSlapped(System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_remove_OnSlapped_m47FD5B59BC9A1F2341A022CE446A824642B6830D (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_0 = NULL;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_1 = NULL;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_2 = NULL;
	{
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_0 = ((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___OnSlapped_20;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_1 = V_0;
		V_1 = L_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_2 = V_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)Castclass((RuntimeObject*)L_4, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var));
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_5 = V_2;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_6 = V_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*>((&((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___OnSlapped_20), L_5, L_6);
		V_0 = L_7;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_8 = V_0;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)L_8) == ((RuntimeObject*)(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void PlayerController::add_OnDodge(System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_add_OnDodge_m53110C3765ED75BA829C955CF66A35FA09FB0A0E (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_0 = NULL;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_1 = NULL;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_2 = NULL;
	{
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_0 = ((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___OnDodge_21;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_1 = V_0;
		V_1 = L_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_2 = V_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)Castclass((RuntimeObject*)L_4, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var));
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_5 = V_2;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_6 = V_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*>((&((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___OnDodge_21), L_5, L_6);
		V_0 = L_7;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_8 = V_0;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)L_8) == ((RuntimeObject*)(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void PlayerController::remove_OnDodge(System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_remove_OnDodge_mAB797EFDC8A590414E221AFA64A14D490F267D67 (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_0 = NULL;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_1 = NULL;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_2 = NULL;
	{
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_0 = ((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___OnDodge_21;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_1 = V_0;
		V_1 = L_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_2 = V_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)Castclass((RuntimeObject*)L_4, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var));
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_5 = V_2;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_6 = V_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*>((&((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___OnDodge_21), L_5, L_6);
		V_0 = L_7;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_8 = V_0;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)L_8) == ((RuntimeObject*)(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void PlayerController::add_OnDodgeSuccess(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_add_OnDodgeSuccess_m49D672BF835F6715786C523133CE4E754FC93204 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___OnDodgeSuccess_22;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>((&((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___OnDodgeSuccess_22), L_5, L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void PlayerController::remove_OnDodgeSuccess(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_remove_OnDodgeSuccess_m3ECA096E05E31FEC2BAC8B0E0B63B0EC858968CC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___OnDodgeSuccess_22;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>((&((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___OnDodgeSuccess_22), L_5, L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void PlayerController::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_OnEnable_m1558047F72022F1A32FC373A927E122D1F3CF5CC (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_EndTurn_m5CB7CF6EEE8DCBF26C65DAE0A36AD2A3BFB7668B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OnSlapped += EndTurn;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_0 = (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)il2cpp_codegen_object_new(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87(L_0, __this, (intptr_t)((void*)PlayerController_EndTurn_m5CB7CF6EEE8DCBF26C65DAE0A36AD2A3BFB7668B_RuntimeMethod_var), NULL);
		PlayerController_add_OnSlapped_mD05D41B43B68CB79FEA33E738CC29B365D216788(L_0, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_OnDisable_m16524B89F1DDB4EB1E201CCEB7E9502967BF57DB (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_EndTurn_m5CB7CF6EEE8DCBF26C65DAE0A36AD2A3BFB7668B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OnSlapped -= EndTurn;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_0 = (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)il2cpp_codegen_object_new(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87(L_0, __this, (intptr_t)((void*)PlayerController_EndTurn_m5CB7CF6EEE8DCBF26C65DAE0A36AD2A3BFB7668B_RuntimeMethod_var), NULL);
		PlayerController_remove_OnSlapped_m47FD5B59BC9A1F2341A022CE446A824642B6830D(L_0, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Start_m1D83076E8B136A71051F2F02545EE04947D3A8CF (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _player = GetComponent<Image>();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0;
		L_0 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(__this, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		__this->____player_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____player_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void PlayerController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Update_m1F4051EB5BCBCCE5EEE2E3E49B7E278C3B14EC33 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// if (_isStartCountingDodge)
		bool L_0 = __this->____isStartCountingDodge_14;
		if (!L_0)
		{
			goto IL_0034;
		}
	}
	{
		// _reactionTime += Time.deltaTime;
		float L_1 = __this->____reactionTime_15;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->____reactionTime_15 = ((float)il2cpp_codegen_add(L_1, L_2));
		// if(_reactionTime >= _maximumReactionTime)
		float L_3 = __this->____reactionTime_15;
		float L_4 = __this->____maximumReactionTime_16;
		if ((!(((float)L_3) >= ((float)L_4))))
		{
			goto IL_0034;
		}
	}
	{
		// BeingSlapped();
		PlayerController_BeingSlapped_mAD03A4E1CCFCB684689876B661C92076036C76EB(__this, (bool)0, (0.0f), NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void PlayerController::Init(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Init_m721BCEF84F15CC4805040737453B2CD9FDE72D8C (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, bool ___isCurrentTurn0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_U3CInitU3Eb__31_0_m5CA4EB05347BA9A5968D8C5DE53A5869869D1277_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_U3CInitU3Eb__31_1_m508440DDFF8BC77AE247813ADF6A8BB0582A3CDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _isCurrentTurn = isCurrentTurn;
		bool L_0 = ___isCurrentTurn0;
		__this->____isCurrentTurn_13 = L_0;
		// _actionButton.gameObject.SetActive(true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = __this->____actionButton_7;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// _actionButton.onClick.RemoveAllListeners();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->____actionButton_7;
		NullCheck(L_3);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_4;
		L_4 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_3, NULL);
		NullCheck(L_4);
		UnityEventBase_RemoveAllListeners_m6E68297189537543B0C72FE38804646CA204D076(L_4, NULL);
		// if (isCurrentTurn)
		bool L_5 = ___isCurrentTurn0;
		if (!L_5)
		{
			goto IL_006f;
		}
	}
	{
		// _actionButton.GetComponent<Image>().sprite = _slapButtonImage;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_6 = __this->____actionButton_7;
		NullCheck(L_6);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7;
		L_7 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_6, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_8 = __this->____slapButtonImage_10;
		NullCheck(L_7);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_7, L_8, NULL);
		// _actionButton.onClick.AddListener(() => Action());
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_9 = __this->____actionButton_7;
		NullCheck(L_9);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_10;
		L_10 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_9, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_11 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_11, __this, (intptr_t)((void*)PlayerController_U3CInitU3Eb__31_0_m5CA4EB05347BA9A5968D8C5DE53A5869869D1277_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_10, L_11, NULL);
		// _bar.gameObject.SetActive(true);
		Bar_t84F39029FCBDBB865D524A9ACDF9640189A117DF* L_12 = __this->____bar_9;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_12, NULL);
		NullCheck(L_13);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)1, NULL);
		return;
	}

IL_006f:
	{
		// _actionButton.GetComponent<Image>().sprite = _dodgeButtonImage;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_14 = __this->____actionButton_7;
		NullCheck(L_14);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15;
		L_15 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_14, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_16 = __this->____dodgeButtonImage_11;
		NullCheck(L_15);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_15, L_16, NULL);
		// _actionButton.onClick.AddListener(() => Action());
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_17 = __this->____actionButton_7;
		NullCheck(L_17);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_18;
		L_18 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_17, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_19 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_19, __this, (intptr_t)((void*)PlayerController_U3CInitU3Eb__31_1_m508440DDFF8BC77AE247813ADF6A8BB0582A3CDA_RuntimeMethod_var), NULL);
		NullCheck(L_18);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_18, L_19, NULL);
		// _bar.gameObject.SetActive(false);
		Bar_t84F39029FCBDBB865D524A9ACDF9640189A117DF* L_20 = __this->____bar_9;
		NullCheck(L_20);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
		L_21 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_20, NULL);
		NullCheck(L_21);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_21, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::Action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Action_m0E85C2A959F427FE5A45118AB37F852A43086233 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// if (_isReady)
		bool L_0 = __this->____isReady_17;
		if (!L_0)
		{
			goto IL_0056;
		}
	}
	{
		// _isReady = false;
		__this->____isReady_17 = (bool)0;
		// _actionButton.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = __this->____actionButton_7;
		NullCheck(L_1);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_1, (bool)0, NULL);
		// StartCoroutine(CoolDownCoroutine());
		RuntimeObject* L_2;
		L_2 = PlayerController_CoolDownCoroutine_mC97476DE01DCE855037BB470A602C1887CEE3419(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
		// if (_isCurrentTurn)
		bool L_4 = __this->____isCurrentTurn_13;
		if (!L_4)
		{
			goto IL_0049;
		}
	}
	{
		// StartCoroutine(SlapCoroutine(_bar.GetValue()));
		Bar_t84F39029FCBDBB865D524A9ACDF9640189A117DF* L_5 = __this->____bar_9;
		NullCheck(L_5);
		float L_6;
		L_6 = Bar_GetValue_m96AB873BD96E4BC25CF262D50F2D209911035879(L_5, NULL);
		RuntimeObject* L_7;
		L_7 = PlayerController_SlapCoroutine_mCE583EF7B7E2E4C3F628807B2569B105522A45A8(__this, L_6, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_8;
		L_8 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_7, NULL);
		return;
	}

IL_0049:
	{
		// StartCoroutine(DodgeCoroutine());
		RuntimeObject* L_9;
		L_9 = PlayerController_DodgeCoroutine_mC7CD62E8F0BF2FCFC8757F62928DDF6B80E7E040(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_10;
		L_10 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_9, NULL);
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Void PlayerController::IsGettingSlap(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_IsGettingSlap_m20F2069E9CBB452DE710340B8B484105251CD776 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, float ___delayValue0, const RuntimeMethod* method) 
{
	{
		// _isStartCountingDodge = true;
		__this->____isStartCountingDodge_14 = (bool)1;
		// _maximumReactionTime = 0.15f + delayValue;
		float L_0 = ___delayValue0;
		__this->____maximumReactionTime_16 = ((float)il2cpp_codegen_add((0.150000006f), L_0));
		// _reactionTime = 0;
		__this->____reactionTime_15 = (0.0f);
		// if (_isExposed)
		bool L_1 = __this->____isExposed_18;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		// BeingSlapped(true, delayValue);
		float L_2 = ___delayValue0;
		PlayerController_BeingSlapped_mAD03A4E1CCFCB684689876B661C92076036C76EB(__this, (bool)1, L_2, NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void PlayerController::BeingSlapped(System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_BeingSlapped_mAD03A4E1CCFCB684689876B661C92076036C76EB (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, bool ___isExposedSlap0, float ___delayValue1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* G_B5_0 = NULL;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* G_B4_0 = NULL;
	{
		// _isStartCountingDodge = false;
		__this->____isStartCountingDodge_14 = (bool)0;
		// if (isExposedSlap)
		bool L_0 = ___isExposedSlap0;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// StartCoroutine(SlapWait(delayValue));
		float L_1 = ___delayValue1;
		RuntimeObject* L_2;
		L_2 = PlayerController_SlapWait_m558251CB6DD9FBF08CB8F67C2E2C07BB832B54AD(__this, L_1, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
		goto IL_002b;
	}

IL_001a:
	{
		// _hitImage.gameObject.SetActive(true);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->____hitImage_8;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
	}

IL_002b:
	{
		// OnSlapped?.Invoke(0);
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_6 = ((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___OnSlapped_20;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_7 = L_6;
		G_B4_0 = L_7;
		if (L_7)
		{
			G_B5_0 = L_7;
			goto IL_0035;
		}
	}
	{
		return;
	}

IL_0035:
	{
		NullCheck(G_B5_0);
		Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_inline(G_B5_0, 0, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::SetWinTurn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_SetWinTurn_m296379C68233F954D1EAA9A4C9601AD7836D5B46 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// ++_winTurn;
		int32_t L_0 = __this->____winTurn_19;
		__this->____winTurn_19 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// foreach (Transform child in _slapCount)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->____slapCount_6;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_1, NULL);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0074:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_0;
					V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_4 = V_2;
					if (!L_4)
					{
						goto IL_0084;
					}
				}
				{
					RuntimeObject* L_5 = V_2;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_0084:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_006a_1;
			}

IL_001c_1:
			{
				// foreach (Transform child in _slapCount)
				RuntimeObject* L_6 = V_0;
				NullCheck(L_6);
				RuntimeObject* L_7;
				L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_6);
				V_1 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_7, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var));
				// if(child.GetComponent<Image>().color.a < 1)
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = V_1;
				NullCheck(L_8);
				Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9;
				L_9 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_8, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
				NullCheck(L_9);
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10;
				L_10 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_9);
				float L_11 = L_10.___a_3;
				if ((!(((float)L_11) < ((float)(1.0f)))))
				{
					goto IL_006a_1;
				}
			}
			{
				// child.GetComponent<Image>().color = Color.white;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = V_1;
				NullCheck(L_12);
				Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_13;
				L_13 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_12, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14;
				L_14 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
				NullCheck(L_13);
				VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_13, L_14);
				// if(_isCurrentTurn == false)
				bool L_15 = __this->____isCurrentTurn_13;
				if (L_15)
				{
					goto IL_0068_1;
				}
			}
			{
				// child.GetComponent<Image>().sprite = _dodgeSuccess;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = V_1;
				NullCheck(L_16);
				Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_17;
				L_17 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_16, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
				Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_18 = __this->____dodgeSuccess_12;
				NullCheck(L_17);
				Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_17, L_18, NULL);
			}

IL_0068_1:
			{
				// return;
				goto IL_0085;
			}

IL_006a_1:
			{
				// foreach (Transform child in _slapCount)
				RuntimeObject* L_19 = V_0;
				NullCheck(L_19);
				bool L_20;
				L_20 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_19);
				if (L_20)
				{
					goto IL_001c_1;
				}
			}
			{
				goto IL_0085;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0085:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator PlayerController::SlapWait(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerController_SlapWait_m558251CB6DD9FBF08CB8F67C2E2C07BB832B54AD (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, float ___delayValue0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSlapWaitU3Ed__36_t11E864610F796DF4A38808564C2243CD7264DA35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSlapWaitU3Ed__36_t11E864610F796DF4A38808564C2243CD7264DA35* L_0 = (U3CSlapWaitU3Ed__36_t11E864610F796DF4A38808564C2243CD7264DA35*)il2cpp_codegen_object_new(U3CSlapWaitU3Ed__36_t11E864610F796DF4A38808564C2243CD7264DA35_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSlapWaitU3Ed__36__ctor_mEBCA70BB282D118EF2BC3B899B3362947C1B1752(L_0, 0, NULL);
		U3CSlapWaitU3Ed__36_t11E864610F796DF4A38808564C2243CD7264DA35* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CSlapWaitU3Ed__36_t11E864610F796DF4A38808564C2243CD7264DA35* L_2 = L_1;
		float L_3 = ___delayValue0;
		NullCheck(L_2);
		L_2->___delayValue_2 = L_3;
		return L_2;
	}
}
// System.Void PlayerController::IsDodged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_IsDodged_m19E79E4ACCAEFD69046B81D23ACD0BB85C85A0A8 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* G_B2_0 = NULL;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* G_B1_0 = NULL;
	{
		// OnDodge?.Invoke(1);
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_0 = ((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___OnDodge_21;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		NullCheck(G_B2_0);
		Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_inline(G_B2_0, 1, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator PlayerController::CoolDownCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerController_CoolDownCoroutine_mC97476DE01DCE855037BB470A602C1887CEE3419 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoolDownCoroutineU3Ed__38_t64C991479A831CD52C64A84FB3E00171D6A84473_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCoolDownCoroutineU3Ed__38_t64C991479A831CD52C64A84FB3E00171D6A84473* L_0 = (U3CCoolDownCoroutineU3Ed__38_t64C991479A831CD52C64A84FB3E00171D6A84473*)il2cpp_codegen_object_new(U3CCoolDownCoroutineU3Ed__38_t64C991479A831CD52C64A84FB3E00171D6A84473_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCoolDownCoroutineU3Ed__38__ctor_mE85846B0858B0C59C734C794AF45A5362524C976(L_0, 0, NULL);
		U3CCoolDownCoroutineU3Ed__38_t64C991479A831CD52C64A84FB3E00171D6A84473* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator PlayerController::SlapCoroutine(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerController_SlapCoroutine_mCE583EF7B7E2E4C3F628807B2569B105522A45A8 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, float ___boost0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSlapCoroutineU3Ed__39_tF119661E38F225548FA0198213DF9A261369DAA2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSlapCoroutineU3Ed__39_tF119661E38F225548FA0198213DF9A261369DAA2* L_0 = (U3CSlapCoroutineU3Ed__39_tF119661E38F225548FA0198213DF9A261369DAA2*)il2cpp_codegen_object_new(U3CSlapCoroutineU3Ed__39_tF119661E38F225548FA0198213DF9A261369DAA2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSlapCoroutineU3Ed__39__ctor_mB22150728521EE541EB98B9DA18BF47F944FA9D7(L_0, 0, NULL);
		U3CSlapCoroutineU3Ed__39_tF119661E38F225548FA0198213DF9A261369DAA2* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CSlapCoroutineU3Ed__39_tF119661E38F225548FA0198213DF9A261369DAA2* L_2 = L_1;
		float L_3 = ___boost0;
		NullCheck(L_2);
		L_2->___boost_2 = L_3;
		return L_2;
	}
}
// System.Void PlayerController::ResetPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_ResetPosition_mA929647F2F1D0D3EFE9E66F7E8D2284390990470 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
		// _isReady = false;
		__this->____isReady_17 = (bool)0;
		// _actionButton.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->____actionButton_7;
		NullCheck(L_0);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_0, (bool)0, NULL);
		// StartCoroutine(CoolDownCoroutine());
		RuntimeObject* L_1;
		L_1 = PlayerController_CoolDownCoroutine_mC97476DE01DCE855037BB470A602C1887CEE3419(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// transform.parent.GetComponent<Canvas>().sortingOrder = 0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_3, NULL);
		NullCheck(L_4);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_5;
		L_5 = Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2(L_4, Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2_RuntimeMethod_var);
		NullCheck(L_5);
		Canvas_set_sortingOrder_m70D89DB61A3C0589C0FAB525E613DE9D0C799AAC(L_5, 0, NULL);
		// _player.sprite = _playerTexture.playerSprite[7];
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6 = __this->____player_4;
		PlayerTextureScriptableObject_t5CADF591CB56FE8B1B029B86DE70F40103DA73D2* L_7 = __this->____playerTexture_5;
		NullCheck(L_7);
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_8 = L_7->___playerSprite_4;
		NullCheck(L_8);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_9;
		L_9 = List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354(L_8, 7, List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var);
		NullCheck(L_6);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_6, L_9, NULL);
		// _hitImage.gameObject.SetActive(false);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = __this->____hitImage_8;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::EndTurn(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_EndTurn_m5CB7CF6EEE8DCBF26C65DAE0A36AD2A3BFB7668B (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, int32_t ___x0, const RuntimeMethod* method) 
{
	{
		// _actionButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->____actionButton_7;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator PlayerController::DodgeCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerController_DodgeCoroutine_mC7CD62E8F0BF2FCFC8757F62928DDF6B80E7E040 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDodgeCoroutineU3Ed__42_tACA0979995EBAD116A0E1F9F24B2C5418306BE62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDodgeCoroutineU3Ed__42_tACA0979995EBAD116A0E1F9F24B2C5418306BE62* L_0 = (U3CDodgeCoroutineU3Ed__42_tACA0979995EBAD116A0E1F9F24B2C5418306BE62*)il2cpp_codegen_object_new(U3CDodgeCoroutineU3Ed__42_tACA0979995EBAD116A0E1F9F24B2C5418306BE62_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CDodgeCoroutineU3Ed__42__ctor_m3D55A9DEA624D92E0CDC87CEC6F39379A00BAF96(L_0, 0, NULL);
		U3CDodgeCoroutineU3Ed__42_tACA0979995EBAD116A0E1F9F24B2C5418306BE62* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void PlayerController::SetEndGamePose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_SetEndGamePose_m86D76CBF4CAD01B98DC6CF65071D6A46A093A320 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, bool ___isWin0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B2_0 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B1_0 = NULL;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* G_B3_0 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B3_1 = NULL;
	{
		// _player.sprite = isWin ? _playerTexture.playerSprite[8] : _playerTexture.playerSprite[2];
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->____player_4;
		bool L_1 = ___isWin0;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_001c;
		}
	}
	{
		PlayerTextureScriptableObject_t5CADF591CB56FE8B1B029B86DE70F40103DA73D2* L_2 = __this->____playerTexture_5;
		NullCheck(L_2);
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_3 = L_2->___playerSprite_4;
		NullCheck(L_3);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_4;
		L_4 = List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354(L_3, 2, List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		goto IL_002d;
	}

IL_001c:
	{
		PlayerTextureScriptableObject_t5CADF591CB56FE8B1B029B86DE70F40103DA73D2* L_5 = __this->____playerTexture_5;
		NullCheck(L_5);
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_6 = L_5->___playerSprite_4;
		NullCheck(L_6);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_7;
		L_7 = List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354(L_6, 8, List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
	}

IL_002d:
	{
		NullCheck(G_B3_1);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(G_B3_1, G_B3_0, NULL);
		// _actionButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_8 = __this->____actionButton_7;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)0, NULL);
		// _bar.gameObject.SetActive(false);
		Bar_t84F39029FCBDBB865D524A9ACDF9640189A117DF* L_10 = __this->____bar_9;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController__ctor_mDDAB7C7D82E1A5B3E6C197B1AB9D653DFE554F33 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// bool _isReady = true;
		__this->____isReady_17 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void PlayerController::<Init>b__31_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_U3CInitU3Eb__31_0_m5CA4EB05347BA9A5968D8C5DE53A5869869D1277 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// _actionButton.onClick.AddListener(() => Action());
		PlayerController_Action_m0E85C2A959F427FE5A45118AB37F852A43086233(__this, NULL);
		return;
	}
}
// System.Void PlayerController::<Init>b__31_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_U3CInitU3Eb__31_1_m508440DDFF8BC77AE247813ADF6A8BB0582A3CDA (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// _actionButton.onClick.AddListener(() => Action());
		PlayerController_Action_m0E85C2A959F427FE5A45118AB37F852A43086233(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerController/<SlapWait>d__36::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSlapWaitU3Ed__36__ctor_mEBCA70BB282D118EF2BC3B899B3362947C1B1752 (U3CSlapWaitU3Ed__36_t11E864610F796DF4A38808564C2243CD7264DA35* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PlayerController/<SlapWait>d__36::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSlapWaitU3Ed__36_System_IDisposable_Dispose_m8F63424DDC7B398020D116FBFF6A9C225A3AC80B (U3CSlapWaitU3Ed__36_t11E864610F796DF4A38808564C2243CD7264DA35* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PlayerController/<SlapWait>d__36::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSlapWaitU3Ed__36_MoveNext_m2377E31A85BE1BCF5B863FDB8512E023B64E818D (U3CSlapWaitU3Ed__36_t11E864610F796DF4A38808564C2243CD7264DA35* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_003e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(0.15f + delayValue);
		float L_4 = __this->___delayValue_2;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_5 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_5, ((float)il2cpp_codegen_add((0.150000006f), L_4)), NULL);
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_5);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// _hitImage.gameObject.SetActive(true);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_6 = V_1;
		NullCheck(L_6);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7 = L_6->____hitImage_8;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)1, NULL);
		// }
		return (bool)0;
	}
}
// System.Object PlayerController/<SlapWait>d__36::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSlapWaitU3Ed__36_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mBC3A593D8960D878B84E8F032A0215491D43A38E (U3CSlapWaitU3Ed__36_t11E864610F796DF4A38808564C2243CD7264DA35* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PlayerController/<SlapWait>d__36::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSlapWaitU3Ed__36_System_Collections_IEnumerator_Reset_m1E88CBD9FBBA267E3B01D634FF7962BF05A05B59 (U3CSlapWaitU3Ed__36_t11E864610F796DF4A38808564C2243CD7264DA35* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSlapWaitU3Ed__36_System_Collections_IEnumerator_Reset_m1E88CBD9FBBA267E3B01D634FF7962BF05A05B59_RuntimeMethod_var)));
	}
}
// System.Object PlayerController/<SlapWait>d__36::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSlapWaitU3Ed__36_System_Collections_IEnumerator_get_Current_mC418CEBC815F7AF891DC2397DE7EDC94FDC2039B (U3CSlapWaitU3Ed__36_t11E864610F796DF4A38808564C2243CD7264DA35* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerController/<CoolDownCoroutine>d__38::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoolDownCoroutineU3Ed__38__ctor_mE85846B0858B0C59C734C794AF45A5362524C976 (U3CCoolDownCoroutineU3Ed__38_t64C991479A831CD52C64A84FB3E00171D6A84473* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PlayerController/<CoolDownCoroutine>d__38::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoolDownCoroutineU3Ed__38_System_IDisposable_Dispose_m772519A9AF3AC2C01A753FD2FD055D57AED8FCA9 (U3CCoolDownCoroutineU3Ed__38_t64C991479A831CD52C64A84FB3E00171D6A84473* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PlayerController/<CoolDownCoroutine>d__38::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCoolDownCoroutineU3Ed__38_MoveNext_m98CEE3D8589073403EC6286E7093060A279CFE3A (U3CCoolDownCoroutineU3Ed__38_t64C991479A831CD52C64A84FB3E00171D6A84473* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(GameConst.COOL_DOWN_TIME);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// _isExposed = false;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_5 = V_1;
		NullCheck(L_5);
		L_5->____isExposed_18 = (bool)0;
		// _isReady = true;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_6 = V_1;
		NullCheck(L_6);
		L_6->____isReady_17 = (bool)1;
		// _actionButton.interactable = true;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_7 = V_1;
		NullCheck(L_7);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_8 = L_7->____actionButton_7;
		NullCheck(L_8);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_8, (bool)1, NULL);
		// StopAllCoroutines();
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_9 = V_1;
		NullCheck(L_9);
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(L_9, NULL);
		// }
		return (bool)0;
	}
}
// System.Object PlayerController/<CoolDownCoroutine>d__38::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCoolDownCoroutineU3Ed__38_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9E2F49330C38240590B52AF2FD18B867487A6152 (U3CCoolDownCoroutineU3Ed__38_t64C991479A831CD52C64A84FB3E00171D6A84473* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PlayerController/<CoolDownCoroutine>d__38::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoolDownCoroutineU3Ed__38_System_Collections_IEnumerator_Reset_m4DAFFBEE1C563C7F791AC17339A33EACDB8030C8 (U3CCoolDownCoroutineU3Ed__38_t64C991479A831CD52C64A84FB3E00171D6A84473* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCoolDownCoroutineU3Ed__38_System_Collections_IEnumerator_Reset_m4DAFFBEE1C563C7F791AC17339A33EACDB8030C8_RuntimeMethod_var)));
	}
}
// System.Object PlayerController/<CoolDownCoroutine>d__38::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCoolDownCoroutineU3Ed__38_System_Collections_IEnumerator_get_Current_m80CA02B6377CA4B1091E86CCB654D9101F334DF5 (U3CCoolDownCoroutineU3Ed__38_t64C991479A831CD52C64A84FB3E00171D6A84473* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerController/<SlapCoroutine>d__39::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSlapCoroutineU3Ed__39__ctor_mB22150728521EE541EB98B9DA18BF47F944FA9D7 (U3CSlapCoroutineU3Ed__39_tF119661E38F225548FA0198213DF9A261369DAA2* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PlayerController/<SlapCoroutine>d__39::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSlapCoroutineU3Ed__39_System_IDisposable_Dispose_mBA1D63DE5B770F95548E0191E02E7766D7A37F8F (U3CSlapCoroutineU3Ed__39_tF119661E38F225548FA0198213DF9A261369DAA2* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PlayerController/<SlapCoroutine>d__39::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSlapCoroutineU3Ed__39_MoveNext_m6EFBB6CFFA157383739C1A47FE86877D97950718 (U3CSlapCoroutineU3Ed__39_tF119661E38F225548FA0198213DF9A261369DAA2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0093;
			}
			case 2:
			{
				goto IL_00d6;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float delayValue = 0.05f * (1 - boost);
		float L_3 = __this->___boost_2;
		__this->___U3CdelayValueU3E5__2_4 = ((float)il2cpp_codegen_multiply((0.0500000007f), ((float)il2cpp_codegen_subtract((1.0f), L_3))));
		// GameManager.instance.GetOpponent(this).IsGettingSlap(delayValue);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_4 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_14;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_5 = V_1;
		NullCheck(L_4);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_6;
		L_6 = GameManager_GetOpponent_m3D7AC6720C52C56409C3CAB96886181F9C266FD9(L_4, L_5, NULL);
		float L_7 = __this->___U3CdelayValueU3E5__2_4;
		NullCheck(L_6);
		PlayerController_IsGettingSlap_m20F2069E9CBB452DE710340B8B484105251CD776(L_6, L_7, NULL);
		// _player.sprite = _playerTexture.playerSprite[3];
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_8 = V_1;
		NullCheck(L_8);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9 = L_8->____player_4;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_10 = V_1;
		NullCheck(L_10);
		PlayerTextureScriptableObject_t5CADF591CB56FE8B1B029B86DE70F40103DA73D2* L_11 = L_10->____playerTexture_5;
		NullCheck(L_11);
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_12 = L_11->___playerSprite_4;
		NullCheck(L_12);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_13;
		L_13 = List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354(L_12, 3, List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var);
		NullCheck(L_9);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_9, L_13, NULL);
		// yield return new WaitForSeconds(0.1f + delayValue);
		float L_14 = __this->___U3CdelayValueU3E5__2_4;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_15 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_15, ((float)il2cpp_codegen_add((0.100000001f), L_14)), NULL);
		__this->___U3CU3E2__current_1 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_15);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0093:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// _player.sprite = _playerTexture.playerSprite[4];
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_16 = V_1;
		NullCheck(L_16);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_17 = L_16->____player_4;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_18 = V_1;
		NullCheck(L_18);
		PlayerTextureScriptableObject_t5CADF591CB56FE8B1B029B86DE70F40103DA73D2* L_19 = L_18->____playerTexture_5;
		NullCheck(L_19);
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_20 = L_19->___playerSprite_4;
		NullCheck(L_20);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_21;
		L_21 = List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354(L_20, 4, List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var);
		NullCheck(L_17);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_17, L_21, NULL);
		// yield return new WaitForSeconds(0.04f + delayValue);
		float L_22 = __this->___U3CdelayValueU3E5__2_4;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_23 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_23, ((float)il2cpp_codegen_add((0.0399999991f), L_22)), NULL);
		__this->___U3CU3E2__current_1 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_23);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00d6:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// _player.sprite = _playerTexture.playerSprite[6];
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_24 = V_1;
		NullCheck(L_24);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_25 = L_24->____player_4;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_26 = V_1;
		NullCheck(L_26);
		PlayerTextureScriptableObject_t5CADF591CB56FE8B1B029B86DE70F40103DA73D2* L_27 = L_26->____playerTexture_5;
		NullCheck(L_27);
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_28 = L_27->___playerSprite_4;
		NullCheck(L_28);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_29;
		L_29 = List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354(L_28, 6, List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var);
		NullCheck(L_25);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_25, L_29, NULL);
		// transform.parent.GetComponent<Canvas>().sortingOrder = 1;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_30 = V_1;
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_30, NULL);
		NullCheck(L_31);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_31, NULL);
		NullCheck(L_32);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_33;
		L_33 = Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2(L_32, Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2_RuntimeMethod_var);
		NullCheck(L_33);
		Canvas_set_sortingOrder_m70D89DB61A3C0589C0FAB525E613DE9D0C799AAC(L_33, 1, NULL);
		// }
		return (bool)0;
	}
}
// System.Object PlayerController/<SlapCoroutine>d__39::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSlapCoroutineU3Ed__39_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mFDF2B68A67086394D61FF412920D483AE30A9B7C (U3CSlapCoroutineU3Ed__39_tF119661E38F225548FA0198213DF9A261369DAA2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PlayerController/<SlapCoroutine>d__39::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSlapCoroutineU3Ed__39_System_Collections_IEnumerator_Reset_m408243C9F681921470B91884366F79969D25F381 (U3CSlapCoroutineU3Ed__39_tF119661E38F225548FA0198213DF9A261369DAA2* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSlapCoroutineU3Ed__39_System_Collections_IEnumerator_Reset_m408243C9F681921470B91884366F79969D25F381_RuntimeMethod_var)));
	}
}
// System.Object PlayerController/<SlapCoroutine>d__39::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSlapCoroutineU3Ed__39_System_Collections_IEnumerator_get_Current_m1C1385CFB31FC80853174228277D8FE29A944DCE (U3CSlapCoroutineU3Ed__39_tF119661E38F225548FA0198213DF9A261369DAA2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerController/<DodgeCoroutine>d__42::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDodgeCoroutineU3Ed__42__ctor_m3D55A9DEA624D92E0CDC87CEC6F39379A00BAF96 (U3CDodgeCoroutineU3Ed__42_tACA0979995EBAD116A0E1F9F24B2C5418306BE62* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PlayerController/<DodgeCoroutine>d__42::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDodgeCoroutineU3Ed__42_System_IDisposable_Dispose_m25C1E7909D7A5415C922F5D927112ED8FA062832 (U3CDodgeCoroutineU3Ed__42_tACA0979995EBAD116A0E1F9F24B2C5418306BE62* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PlayerController/<DodgeCoroutine>d__42::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDodgeCoroutineU3Ed__42_MoveNext_m7A077975EFE5478C8F7DAC50675116505118C580 (U3CDodgeCoroutineU3Ed__42_tACA0979995EBAD116A0E1F9F24B2C5418306BE62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0075;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// _player.sprite = _playerTexture.playerSprite[0];
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_4 = V_1;
		NullCheck(L_4);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5 = L_4->____player_4;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_6 = V_1;
		NullCheck(L_6);
		PlayerTextureScriptableObject_t5CADF591CB56FE8B1B029B86DE70F40103DA73D2* L_7 = L_6->____playerTexture_5;
		NullCheck(L_7);
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_8 = L_7->___playerSprite_4;
		NullCheck(L_8);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_9;
		L_9 = List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354(L_8, 0, List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var);
		NullCheck(L_5);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_5, L_9, NULL);
		// if (_isStartCountingDodge)
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_10 = V_1;
		NullCheck(L_10);
		bool L_11 = L_10->____isStartCountingDodge_14;
		if (!L_11)
		{
			goto IL_005c;
		}
	}
	{
		// _isStartCountingDodge = false;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_12 = V_1;
		NullCheck(L_12);
		L_12->____isStartCountingDodge_14 = (bool)0;
		// _reactionTime = 0;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_13 = V_1;
		NullCheck(L_13);
		L_13->____reactionTime_15 = (0.0f);
		// IsDodged();
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_14 = V_1;
		NullCheck(L_14);
		PlayerController_IsDodged_m19E79E4ACCAEFD69046B81D23ACD0BB85C85A0A8(L_14, NULL);
		goto IL_009f;
	}

IL_005c:
	{
		// yield return new WaitForSeconds(0.26f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_15 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_15, (0.25999999f), NULL);
		__this->___U3CU3E2__current_1 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_15);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0075:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// _isExposed = true;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_16 = V_1;
		NullCheck(L_16);
		L_16->____isExposed_18 = (bool)1;
		// _player.sprite = _playerTexture.playerSprite[7];
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_17 = V_1;
		NullCheck(L_17);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_18 = L_17->____player_4;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_19 = V_1;
		NullCheck(L_19);
		PlayerTextureScriptableObject_t5CADF591CB56FE8B1B029B86DE70F40103DA73D2* L_20 = L_19->____playerTexture_5;
		NullCheck(L_20);
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_21 = L_20->___playerSprite_4;
		NullCheck(L_21);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_22;
		L_22 = List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354(L_21, 7, List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var);
		NullCheck(L_18);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_18, L_22, NULL);
	}

IL_009f:
	{
		// }
		return (bool)0;
	}
}
// System.Object PlayerController/<DodgeCoroutine>d__42::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDodgeCoroutineU3Ed__42_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m16093125CA492169E8C6E062E721FBE79FFCDC1C (U3CDodgeCoroutineU3Ed__42_tACA0979995EBAD116A0E1F9F24B2C5418306BE62* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PlayerController/<DodgeCoroutine>d__42::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDodgeCoroutineU3Ed__42_System_Collections_IEnumerator_Reset_m7CF5108F23ED09DD03320D135631D66DE8296F8F (U3CDodgeCoroutineU3Ed__42_tACA0979995EBAD116A0E1F9F24B2C5418306BE62* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDodgeCoroutineU3Ed__42_System_Collections_IEnumerator_Reset_m7CF5108F23ED09DD03320D135631D66DE8296F8F_RuntimeMethod_var)));
	}
}
// System.Object PlayerController/<DodgeCoroutine>d__42::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDodgeCoroutineU3Ed__42_System_Collections_IEnumerator_get_Current_m5DDAC5D3CDDB2D91FD150FC38B2253344A534AD8 (U3CDodgeCoroutineU3Ed__42_tACA0979995EBAD116A0E1F9F24B2C5418306BE62* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerTextureScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerTextureScriptableObject__ctor_mE33BE08D68F71F29C1FA2C1AA0A12F18E64D6C4E (PlayerTextureScriptableObject_t5CADF591CB56FE8B1B029B86DE70F40103DA73D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC8A044C0E3A50C1EA1BF3DF15150A942C3E86DC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<Sprite> playerSprite = new List<Sprite>();
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_0 = (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206*)il2cpp_codegen_object_new(List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC8A044C0E3A50C1EA1BF3DF15150A942C3E86DC2(L_0, List_1__ctor_mC8A044C0E3A50C1EA1BF3DF15150A942C3E86DC2_RuntimeMethod_var);
		__this->___playerSprite_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerSprite_4), (void*)L_0);
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean SceneLoader::get_IsFading()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneLoader_get_IsFading_m3327D65DE5D23E9DB559C6D0CDA7E97E9BECE346 (SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsFading => _isFading;
		bool L_0 = __this->____isFading_23;
		return L_0;
	}
}
// System.Void SceneLoader::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader_OnEnable_m62456D1C83E3E5D45650B8BE079648F0C31060F4 (SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void SceneLoader::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader_OnDisable_m4E27F5188A23559DFA604BB10B54944896BF2489 (SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void SceneLoader::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader_Awake_m997936369AC5CA6307D0D6700F7E680F41086FEC (SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Instance == null)
		SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* L_0 = ((SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF_StaticFields*)il2cpp_codegen_static_fields_for(SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF_il2cpp_TypeInfo_var))->___Instance_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// Instance = this;
		((SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF_StaticFields*)il2cpp_codegen_static_fields_for(SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF_il2cpp_TypeInfo_var))->___Instance_17 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF_StaticFields*)il2cpp_codegen_static_fields_for(SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF_il2cpp_TypeInfo_var))->___Instance_17), (void*)__this);
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_2, NULL);
		return;
	}

IL_001f:
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
		// }
		return;
	}
}
// System.Void SceneLoader::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader_Update_m1F381D68B1B1F69A0F9A5876813BB7D437E3A713 (SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void SceneLoader::Load(SceneConst/Scene,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader_Load_m8C1F1145746BDB412298997A114098CA9D2F397A (SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* __this, int32_t ___scene0, bool ___isCached1, int32_t ___loadingType2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// StartCoroutine(LoadScene((int)scene, loadingType));
		int32_t L_0 = ___scene0;
		int32_t L_1 = ___loadingType2;
		RuntimeObject* L_2;
		L_2 = SceneLoader_LoadScene_m70DEDA1582E0BC2754B5FD6CF65A77F148A1E106(__this, L_0, L_1, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
		// if (isCached)
		bool L_4 = ___isCached1;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		// _cachedScene = (SceneConst.Scene)SceneManager.GetActiveScene().buildIndex;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_5;
		L_5 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_5;
		int32_t L_6;
		L_6 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		__this->____cachedScene_21 = L_6;
		// _isCached = isCached;
		bool L_7 = ___isCached1;
		__this->____isCached_22 = L_7;
	}

IL_002c:
	{
		// _startCountingLoadingTime = true;
		__this->____startCountingLoadingTime_14 = (bool)1;
		// _loadingTime = 0;
		__this->____loadingTime_13 = (0.0f);
		// }
		return;
	}
}
// System.Void SceneLoader::Back(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader_Back_mF496D2B2D3010CA6747E2E51EB69D40516B422E1 (SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* __this, int32_t ___loadingType0, const RuntimeMethod* method) 
{
	{
		// if (_isCached)
		bool L_0 = __this->____isCached_22;
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		// StartCoroutine(LoadScene((int)_cachedScene, loadingType));
		int32_t L_1 = __this->____cachedScene_21;
		int32_t L_2 = ___loadingType0;
		RuntimeObject* L_3;
		L_3 = SceneLoader_LoadScene_m70DEDA1582E0BC2754B5FD6CF65A77F148A1E106(__this, L_1, L_2, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_3, NULL);
		// _isCached = false;
		__this->____isCached_22 = (bool)0;
		return;
	}

IL_0024:
	{
		// StartCoroutine(LoadScene((int)SceneConst.HomeScene, loadingType));
		int32_t L_5 = ___loadingType0;
		RuntimeObject* L_6;
		L_6 = SceneLoader_LoadScene_m70DEDA1582E0BC2754B5FD6CF65A77F148A1E106(__this, 0, L_5, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7;
		L_7 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_6, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator SceneLoader::LoadScene(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SceneLoader_LoadScene_m70DEDA1582E0BC2754B5FD6CF65A77F148A1E106 (SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* __this, int32_t ___index0, int32_t ___loadingType1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadSceneU3Ed__29_t4CA44A34A1C776DA1E94505179635CB680F0DBC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLoadSceneU3Ed__29_t4CA44A34A1C776DA1E94505179635CB680F0DBC9* L_0 = (U3CLoadSceneU3Ed__29_t4CA44A34A1C776DA1E94505179635CB680F0DBC9*)il2cpp_codegen_object_new(U3CLoadSceneU3Ed__29_t4CA44A34A1C776DA1E94505179635CB680F0DBC9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CLoadSceneU3Ed__29__ctor_m57FBE00556AABCABEA9E7D1A952867F7C2D17211(L_0, 0, NULL);
		U3CLoadSceneU3Ed__29_t4CA44A34A1C776DA1E94505179635CB680F0DBC9* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CLoadSceneU3Ed__29_t4CA44A34A1C776DA1E94505179635CB680F0DBC9* L_2 = L_1;
		int32_t L_3 = ___index0;
		NullCheck(L_2);
		L_2->___index_5 = L_3;
		U3CLoadSceneU3Ed__29_t4CA44A34A1C776DA1E94505179635CB680F0DBC9* L_4 = L_2;
		int32_t L_5 = ___loadingType1;
		NullCheck(L_4);
		L_4->___loadingType_3 = L_5;
		return L_4;
	}
}
// System.Void SceneLoader::ToggleLoadingCanvas(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader_ToggleLoadingCanvas_m34A56CE28DFF56F7506232765841AA6C735241EE (SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* __this, bool ___isShow0, const RuntimeMethod* method) 
{
	{
		// if (isShow)
		bool L_0 = ___isShow0;
		if (!L_0)
		{
			goto IL_0037;
		}
	}
	{
		// luluCanvas.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___luluCanvas_11;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// ResetLoadingBar();
		SceneLoader_ResetLoadingBar_m729A6E09EB3BA16EE5654E88F52EC145C85B31F6(__this, NULL);
		// loadingCanvas.gameObject.SetActive(true);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_2 = __this->___loadingCanvas_5;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// loadingCanvas.alpha = 1;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_4 = __this->___loadingCanvas_5;
		NullCheck(L_4);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_4, (1.0f), NULL);
		return;
	}

IL_0037:
	{
		// loadingCanvas.alpha = 0;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_5 = __this->___loadingCanvas_5;
		NullCheck(L_5);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_5, (0.0f), NULL);
		// loadingCanvas.gameObject.SetActive(false);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_6 = __this->___loadingCanvas_5;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// luluCanvas.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___luluCanvas_11;
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
		// }
		return;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> SceneLoader::ToggleFadingCanvas(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* SceneLoader_ToggleFadingCanvas_m7623249D1B023320499122300310A69E054D8C13 (SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* __this, bool ___isShow0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetResult_mA4C94A8605B8E4A2646C0C2B08A3D373E1174448_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_OnComplete_TisTweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3_mE0198286069BCC9A37B43FB54AB01A71A7731766_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3_m3605060ADD85D4E33C9F7D03BE6A676211A4A40B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass31_0_U3CToggleFadingCanvasU3Eb__0_mEE2B8F4F7D1E8E6CCF8910C22786F8B96C807555_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass31_0_U3CToggleFadingCanvasU3Eb__1_mCAF65F53688D99F2E88965317A1FB2D1888DA4B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass31_0_t0BD794A68DFD630095604F9544A29B36B0C517D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass31_0_t0BD794A68DFD630095604F9544A29B36B0C517D1* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass31_0_t0BD794A68DFD630095604F9544A29B36B0C517D1* L_0 = (U3CU3Ec__DisplayClass31_0_t0BD794A68DFD630095604F9544A29B36B0C517D1*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass31_0_t0BD794A68DFD630095604F9544A29B36B0C517D1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass31_0__ctor_m1EFDC3AA8F24B0FD683E242D045D32C77D509BF4(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass31_0_t0BD794A68DFD630095604F9544A29B36B0C517D1* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		// var tcs = new TaskCompletionSource<bool>();
		U3CU3Ec__DisplayClass31_0_t0BD794A68DFD630095604F9544A29B36B0C517D1* L_2 = V_0;
		TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* L_3 = (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14*)il2cpp_codegen_object_new(TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646(L_3, TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646_RuntimeMethod_var);
		NullCheck(L_2);
		L_2->___tcs_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___tcs_1), (void*)L_3);
		// if (isShow)
		bool L_4 = ___isShow0;
		if (!L_4)
		{
			goto IL_00c3;
		}
	}
	{
		// if (_isFading)
		bool L_5 = __this->____isFading_23;
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		// tcs.SetResult(true);
		U3CU3Ec__DisplayClass31_0_t0BD794A68DFD630095604F9544A29B36B0C517D1* L_6 = V_0;
		NullCheck(L_6);
		TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* L_7 = L_6->___tcs_1;
		NullCheck(L_7);
		TaskCompletionSource_1_SetResult_mA4C94A8605B8E4A2646C0C2B08A3D373E1174448(L_7, (bool)1, TaskCompletionSource_1_SetResult_mA4C94A8605B8E4A2646C0C2B08A3D373E1174448_RuntimeMethod_var);
		goto IL_003b;
	}

IL_0034:
	{
		// _isFading = true;
		__this->____isFading_23 = (bool)1;
	}

IL_003b:
	{
		// fadeBackground.gameObject.SetActive(true);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = __this->___fadeBackground_4;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)1, NULL);
		// if (fadeBackground.color != new Color(0, 0, 0, 1))
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = __this->___fadeBackground_4;
		NullCheck(L_10);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		L_11 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_10);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		bool L_13;
		L_13 = Color_op_Inequality_mF1C733BA10E60B086AB950A71143678AE76C4D92_inline(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_010a;
		}
	}
	{
		// fadingTween = fadeBackground.DOColor(new Color(0, 0, 0, 1), fadeTime).SetEase(Ease.OutQuad).OnComplete(
		//     () =>
		//     {
		//         _isFading = false;
		//         tcs.SetResult(true);
		//     }
		// );
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___fadeBackground_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15;
		memset((&L_15), 0, sizeof(L_15));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_15), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		float L_16 = __this->___fadeTime_20;
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_17;
		L_17 = DOTweenModuleUI_DOColor_m385F3DCBA53A421BC288521879635D67E8155783(L_14, L_15, L_16, NULL);
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_18;
		L_18 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3_m3605060ADD85D4E33C9F7D03BE6A676211A4A40B(L_17, 6, TweenSettingsExtensions_SetEase_TisTweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3_m3605060ADD85D4E33C9F7D03BE6A676211A4A40B_RuntimeMethod_var);
		U3CU3Ec__DisplayClass31_0_t0BD794A68DFD630095604F9544A29B36B0C517D1* L_19 = V_0;
		TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* L_20 = (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*)il2cpp_codegen_object_new(TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		TweenCallback__ctor_m68CC9304423CBDE43001F9B1413B5DAAF70DB621(L_20, L_19, (intptr_t)((void*)U3CU3Ec__DisplayClass31_0_U3CToggleFadingCanvasU3Eb__0_mEE2B8F4F7D1E8E6CCF8910C22786F8B96C807555_RuntimeMethod_var), NULL);
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_21;
		L_21 = TweenSettingsExtensions_OnComplete_TisTweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3_mE0198286069BCC9A37B43FB54AB01A71A7731766(L_18, L_20, TweenSettingsExtensions_OnComplete_TisTweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3_mE0198286069BCC9A37B43FB54AB01A71A7731766_RuntimeMethod_var);
		__this->___fadingTween_19 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fadingTween_19), (void*)L_21);
		goto IL_010a;
	}

IL_00c3:
	{
		// fadingTween = fadeBackground.DOColor(new Color(0, 0, 0, 0), fadeTime).SetEase(Ease.OutQuad).OnComplete(
		//     () =>
		//     {
		//         fadeBackground.gameObject.SetActive(false);
		//         _isFading = false;
		//         tcs.SetResult(true);
		//     }
		// );
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_22 = __this->___fadeBackground_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23;
		memset((&L_23), 0, sizeof(L_23));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_23), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		float L_24 = __this->___fadeTime_20;
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_25;
		L_25 = DOTweenModuleUI_DOColor_m385F3DCBA53A421BC288521879635D67E8155783(L_22, L_23, L_24, NULL);
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_26;
		L_26 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3_m3605060ADD85D4E33C9F7D03BE6A676211A4A40B(L_25, 6, TweenSettingsExtensions_SetEase_TisTweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3_m3605060ADD85D4E33C9F7D03BE6A676211A4A40B_RuntimeMethod_var);
		U3CU3Ec__DisplayClass31_0_t0BD794A68DFD630095604F9544A29B36B0C517D1* L_27 = V_0;
		TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* L_28 = (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*)il2cpp_codegen_object_new(TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		TweenCallback__ctor_m68CC9304423CBDE43001F9B1413B5DAAF70DB621(L_28, L_27, (intptr_t)((void*)U3CU3Ec__DisplayClass31_0_U3CToggleFadingCanvasU3Eb__1_mCAF65F53688D99F2E88965317A1FB2D1888DA4B8_RuntimeMethod_var), NULL);
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_29;
		L_29 = TweenSettingsExtensions_OnComplete_TisTweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3_mE0198286069BCC9A37B43FB54AB01A71A7731766(L_26, L_28, TweenSettingsExtensions_OnComplete_TisTweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3_mE0198286069BCC9A37B43FB54AB01A71A7731766_RuntimeMethod_var);
		__this->___fadingTween_19 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fadingTween_19), (void*)L_29);
	}

IL_010a:
	{
		// return tcs.Task;
		U3CU3Ec__DisplayClass31_0_t0BD794A68DFD630095604F9544A29B36B0C517D1* L_30 = V_0;
		NullCheck(L_30);
		TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* L_31 = L_30->___tcs_1;
		NullCheck(L_31);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_32;
		L_32 = TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_inline(L_31, TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_RuntimeMethod_var);
		return L_32;
	}
}
// System.Single SceneLoader::GetLoadingBarPercentage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SceneLoader_GetLoadingBarPercentage_m0673FCD99035F00953FC672EAC5C130CA428C175 (SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* __this, const RuntimeMethod* method) 
{
	{
		// return _loadingBarPercentage;
		float L_0 = __this->____loadingBarPercentage_24;
		return L_0;
	}
}
// DG.Tweening.Tween SceneLoader::SetLoadingBarPercentage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* SceneLoader_SetLoadingBarPercentage_m20E6A88436C3D1CF4EA56FA1F55109FD11E13C8D (SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* __this, float ___newPercentage0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOGetter_1_tE8B39477E96408653D0242624F4D7E48ABFD1B03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOSetter_1_t48D41DB8CE0BFC91A1844C4CC49A8A7222A69200_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass33_0_U3CSetLoadingBarPercentageU3Eb__0_mE14A6A0C2D49656F45785774B61BF06A18A19678_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass33_0_U3CSetLoadingBarPercentageU3Eb__1_mF170B8D7B23B2888B1811D9EE599DD2BF0799747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass33_0_tBB107A3FB9FAA79248C6ED3374A4F26520B72697_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass33_0_tBB107A3FB9FAA79248C6ED3374A4F26520B72697* V_0 = NULL;
	Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* V_1 = NULL;
	Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* V_2 = NULL;
	{
		U3CU3Ec__DisplayClass33_0_tBB107A3FB9FAA79248C6ED3374A4F26520B72697* L_0 = (U3CU3Ec__DisplayClass33_0_tBB107A3FB9FAA79248C6ED3374A4F26520B72697*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass33_0_tBB107A3FB9FAA79248C6ED3374A4F26520B72697_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass33_0__ctor_mAFB392F30F2D3E89AD1DFC52686E5D858796B77A(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass33_0_tBB107A3FB9FAA79248C6ED3374A4F26520B72697* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_1), (void*)__this);
		// float currentPercentage = _loadingBarPercentage;
		U3CU3Ec__DisplayClass33_0_tBB107A3FB9FAA79248C6ED3374A4F26520B72697* L_2 = V_0;
		float L_3 = __this->____loadingBarPercentage_24;
		NullCheck(L_2);
		L_2->___currentPercentage_0 = L_3;
		// _loadingBarPercentage = newPercentage;
		float L_4 = ___newPercentage0;
		__this->____loadingBarPercentage_24 = L_4;
		// Tween textTween = DOTween.To(() => currentPercentage, x => { loadingText.text = "Loading... (" + (x*100).ToString("00") + "%)"; }, _loadingBarPercentage, 0.3f);
		U3CU3Ec__DisplayClass33_0_tBB107A3FB9FAA79248C6ED3374A4F26520B72697* L_5 = V_0;
		DOGetter_1_tE8B39477E96408653D0242624F4D7E48ABFD1B03* L_6 = (DOGetter_1_tE8B39477E96408653D0242624F4D7E48ABFD1B03*)il2cpp_codegen_object_new(DOGetter_1_tE8B39477E96408653D0242624F4D7E48ABFD1B03_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		DOGetter_1__ctor_mD5E79861254E8BFB1618B3AB0B9755D18F553CFA(L_6, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass33_0_U3CSetLoadingBarPercentageU3Eb__0_mE14A6A0C2D49656F45785774B61BF06A18A19678_RuntimeMethod_var), NULL);
		U3CU3Ec__DisplayClass33_0_tBB107A3FB9FAA79248C6ED3374A4F26520B72697* L_7 = V_0;
		DOSetter_1_t48D41DB8CE0BFC91A1844C4CC49A8A7222A69200* L_8 = (DOSetter_1_t48D41DB8CE0BFC91A1844C4CC49A8A7222A69200*)il2cpp_codegen_object_new(DOSetter_1_t48D41DB8CE0BFC91A1844C4CC49A8A7222A69200_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		DOSetter_1__ctor_mCCAB2BA262A8DC16B8C5A6FD561BADA9160E7D2E(L_8, L_7, (intptr_t)((void*)U3CU3Ec__DisplayClass33_0_U3CSetLoadingBarPercentageU3Eb__1_mF170B8D7B23B2888B1811D9EE599DD2BF0799747_RuntimeMethod_var), NULL);
		float L_9 = __this->____loadingBarPercentage_24;
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_10;
		L_10 = DOTween_To_m9C9EBC0FB6CF94364DD4FF85C476D8EE0A7FF4B1(L_6, L_8, L_9, (0.300000012f), NULL);
		V_1 = L_10;
		// Tween sliderTween = loadingBarSlider.DOValue(newPercentage, 0.3f);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_11 = __this->___loadingBarSlider_6;
		float L_12 = ___newPercentage0;
		TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_13;
		L_13 = DOTweenModuleUI_DOValue_m38DB0CB09A73E2DDC33B3EEE49D74944FBA82A38(L_11, L_12, (0.300000012f), (bool)0, NULL);
		V_2 = L_13;
		// Sequence Seq = DOTween.Sequence();
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_14;
		L_14 = DOTween_Sequence_mC3AE53A08EC5DFD7DB9AE18A2FD11226A6611F89(NULL);
		// Seq.Append(textTween).Join(sliderTween);
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_15 = L_14;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_16 = V_1;
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_17;
		L_17 = TweenSettingsExtensions_Append_mAFF074C9F7DE2BC8FF383C7729B13E732345F28F(L_15, L_16, NULL);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_18 = V_2;
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_19;
		L_19 = TweenSettingsExtensions_Join_mBA1D659EE0310BBE1F42148057403E7C5EEDB777(L_17, L_18, NULL);
		// return Seq;
		return L_15;
	}
}
// System.Void SceneLoader::ResetLoadingBar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader_ResetLoadingBar_m729A6E09EB3BA16EE5654E88F52EC145C85B31F6 (SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void SceneLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader__ctor_m2248766DF38AF07562AD31501C7275B8DF1B7D29 (SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* __this, const RuntimeMethod* method) 
{
	{
		// float fadeTime = 0.5f;
		__this->___fadeTime_20 = (0.5f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SceneLoader/<>c__DisplayClass29_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass29_0__ctor_m93D732A27286129A5CD508F895FF49DB0C7F0AE4 (U3CU3Ec__DisplayClass29_0_tC2F627E49F1CC5EDA9D9E0F448859B52019AD716* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean SceneLoader/<>c__DisplayClass29_0::<LoadScene>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass29_0_U3CLoadSceneU3Eb__0_mA91AC0D3816784060E78184987F88C6D5DB933FE (U3CU3Ec__DisplayClass29_0_tC2F627E49F1CC5EDA9D9E0F448859B52019AD716* __this, const RuntimeMethod* method) 
{
	{
		// yield return new WaitUntil(() => asyncOperation.isDone);
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_0 = __this->___asyncOperation_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = AsyncOperation_get_isDone_m68A0682777E2132FC033182E9F50303566AA354D(L_0, NULL);
		return L_1;
	}
}
// System.Boolean SceneLoader/<>c__DisplayClass29_0::<LoadScene>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass29_0_U3CLoadSceneU3Eb__1_m509F1FBB1FCEA53E0A48FB40EA0ED2589AE0F8EA (U3CU3Ec__DisplayClass29_0_tC2F627E49F1CC5EDA9D9E0F448859B52019AD716* __this, const RuntimeMethod* method) 
{
	{
		// yield return new WaitUntil(() => onLoaded);
		SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* L_0 = __this->___U3CU3E4__this_1;
		NullCheck(L_0);
		bool L_1 = L_0->___onLoaded_16;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SceneLoader/<>c__DisplayClass29_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass29_1__ctor_m0DD7DB08051925723FCDCBF39A1C9C6496F74EF7 (U3CU3Ec__DisplayClass29_1_t213D4F0827FE343FA1A43EC5A2B5C8A85DFB6D59* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void SceneLoader/<>c__DisplayClass29_1::<LoadScene>b__2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass29_1_U3CLoadSceneU3Eb__2_mE3332541DB5F687F60AF90AAD532FAA0412AF8EE (U3CU3Ec__DisplayClass29_1_t213D4F0827FE343FA1A43EC5A2B5C8A85DFB6D59* __this, const RuntimeMethod* method) 
{
	{
		// SetLoadingBarPercentage(1).OnComplete(() => isComplete = true);
		__this->___isComplete_0 = (bool)1;
		return;
	}
}
// System.Boolean SceneLoader/<>c__DisplayClass29_1::<LoadScene>b__3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass29_1_U3CLoadSceneU3Eb__3_mCF38E29D9415E53186AAF499BA3D8D8C6693C49C (U3CU3Ec__DisplayClass29_1_t213D4F0827FE343FA1A43EC5A2B5C8A85DFB6D59* __this, const RuntimeMethod* method) 
{
	{
		// yield return new WaitUntil(() => isComplete);
		bool L_0 = __this->___isComplete_0;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SceneLoader/<LoadScene>d__29::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneU3Ed__29__ctor_m57FBE00556AABCABEA9E7D1A952867F7C2D17211 (U3CLoadSceneU3Ed__29_t4CA44A34A1C776DA1E94505179635CB680F0DBC9* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SceneLoader/<LoadScene>d__29::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneU3Ed__29_System_IDisposable_Dispose_m541DF68BF6F2072F73429C2ABC5D65FB43AB2FF3 (U3CLoadSceneU3Ed__29_t4CA44A34A1C776DA1E94505179635CB680F0DBC9* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SceneLoader/<LoadScene>d__29::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoadSceneU3Ed__29_MoveNext_m6BF595D2F411845C1F727EAEA82B425C2AFB874D (U3CLoadSceneU3Ed__29_t4CA44A34A1C776DA1E94505179635CB680F0DBC9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_OnComplete_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mBE711AE994C1480385AE49921B1DE8D773AC0F6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1_mC938BE0C4068DBE3763250E39EF3BB0570E9AB7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3_m3605060ADD85D4E33C9F7D03BE6A676211A4A40B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mEACEF6A6E654DEDDB2620CD0BE1DA29C023F4E2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass29_0_U3CLoadSceneU3Eb__0_mA91AC0D3816784060E78184987F88C6D5DB933FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass29_0_U3CLoadSceneU3Eb__1_m509F1FBB1FCEA53E0A48FB40EA0ED2589AE0F8EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass29_0_tC2F627E49F1CC5EDA9D9E0F448859B52019AD716_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass29_1_U3CLoadSceneU3Eb__2_mE3332541DB5F687F60AF90AAD532FAA0412AF8EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass29_1_U3CLoadSceneU3Eb__3_mCF38E29D9415E53186AAF499BA3D8D8C6693C49C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass29_1_t213D4F0827FE343FA1A43EC5A2B5C8A85DFB6D59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8C5FAD3982D14A1FB7F0EB6D010076BE49A4C70);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* V_1 = NULL;
	float V_2 = 0.0f;
	String_t* V_3 = NULL;
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* V_4 = NULL;
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* G_B22_0 = NULL;
	U3CLoadSceneU3Ed__29_t4CA44A34A1C776DA1E94505179635CB680F0DBC9* G_B22_1 = NULL;
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* G_B21_0 = NULL;
	U3CLoadSceneU3Ed__29_t4CA44A34A1C776DA1E94505179635CB680F0DBC9* G_B21_1 = NULL;
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* G_B25_0 = NULL;
	U3CLoadSceneU3Ed__29_t4CA44A34A1C776DA1E94505179635CB680F0DBC9* G_B25_1 = NULL;
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* G_B24_0 = NULL;
	U3CLoadSceneU3Ed__29_t4CA44A34A1C776DA1E94505179635CB680F0DBC9* G_B24_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_0108;
			}
			case 2:
			{
				goto IL_01af;
			}
			case 3:
			{
				goto IL_024e;
			}
			case 4:
			{
				goto IL_0320;
			}
			case 5:
			{
				goto IL_036b;
			}
			case 6:
			{
				goto IL_03d7;
			}
			case 7:
			{
				goto IL_0422;
			}
			case 8:
			{
				goto IL_0487;
			}
			case 9:
			{
				goto IL_04b7;
			}
			case 10:
			{
				goto IL_050c;
			}
			case 11:
			{
				goto IL_058a;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0046:
	{
		__this->___U3CU3E1__state_0 = (-1);
		U3CU3Ec__DisplayClass29_0_tC2F627E49F1CC5EDA9D9E0F448859B52019AD716* L_3 = (U3CU3Ec__DisplayClass29_0_tC2F627E49F1CC5EDA9D9E0F448859B52019AD716*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass29_0_tC2F627E49F1CC5EDA9D9E0F448859B52019AD716_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3CU3Ec__DisplayClass29_0__ctor_m93D732A27286129A5CD508F895FF49DB0C7F0AE4(L_3, NULL);
		__this->___U3CU3E8__1_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_4), (void*)L_3);
		U3CU3Ec__DisplayClass29_0_tC2F627E49F1CC5EDA9D9E0F448859B52019AD716* L_4 = __this->___U3CU3E8__1_4;
		SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* L_5 = __this->___U3CU3E4__this_2;
		NullCheck(L_4);
		L_4->___U3CU3E4__this_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___U3CU3E4__this_1), (void*)L_5);
		// if (_isFading)
		SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* L_6 = V_1;
		NullCheck(L_6);
		bool L_7 = L_6->____isFading_23;
		if (!L_7)
		{
			goto IL_0073;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_0073:
	{
		// _isFading = true;
		SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* L_8 = V_1;
		NullCheck(L_8);
		L_8->____isFading_23 = (bool)1;
		// ResetLoadingBar();
		SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* L_9 = V_1;
		NullCheck(L_9);
		SceneLoader_ResetLoadingBar_m729A6E09EB3BA16EE5654E88F52EC145C85B31F6(L_9, NULL);
		// float startTime = Time.time;
		float L_10;
		L_10 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___U3CstartTimeU3E5__2_7 = L_10;
		// onLoaded = true;
		SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* L_11 = V_1;
		NullCheck(L_11);
		L_11->___onLoaded_16 = (bool)1;
		// if (loadingType == 0)
		int32_t L_12 = __this->___loadingType_3;
		if (L_12)
		{
			goto IL_0114;
		}
	}
	{
		// loadingCanvas.gameObject.SetActive(true);
		SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* L_13 = V_1;
		NullCheck(L_13);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_14 = L_13->___loadingCanvas_5;
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_14, NULL);
		NullCheck(L_15);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_15, (bool)1, NULL);
		// luluCanvas.SetActive(true);
		SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* L_16 = V_1;
		NullCheck(L_16);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = L_16->___luluCanvas_11;
		NullCheck(L_17);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, (bool)1, NULL);
		// if (loadingCanvas.alpha != 1)
		SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* L_18 = V_1;
		NullCheck(L_18);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_19 = L_18->___loadingCanvas_5;
		NullCheck(L_19);
		float L_20;
		L_20 = CanvasGroup_get_alpha_mBFEA193D2886B27CC53B31F90F7A1659B67ED6DF(L_19, NULL);
		if ((((float)L_20) == ((float)(1.0f))))
		{
			goto IL_0255;
		}
	}
	{
		// fadingTween = loadingCanvas.DOFade(1, fadeTime).SetEase(Ease.OutQuad);
		SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* L_21 = V_1;
		SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* L_22 = V_1;
		NullCheck(L_22);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_23 = L_22->___loadingCanvas_5;
		SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* L_24 = V_1;
		NullCheck(L_24);
		float L_25 = L_24->___fadeTime_20;
		TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_26;
		L_26 = DOTweenModuleUI_DOFade_mA073F33862AA7BEF33842B8200D0E79E046D114E(L_23, (1.0f), L_25, NULL);
		TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_27;
		L_27 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1_mC938BE0C4068DBE3763250E39EF3BB0570E9AB7E(L_26, 6, TweenSettingsExtensions_SetEase_TisTweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1_mC938BE0C4068DBE3763250E39EF3BB0570E9AB7E_RuntimeMethod_var);
		NullCheck(L_21);
		L_21->___fadingTween_19 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&L_21->___fadingTween_19), (void*)L_27);
		// yield return new WaitForSeconds(fadeTime);
		SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* L_28 = V_1;
		NullCheck(L_28);
		float L_29 = L_28->___fadeTime_20;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_30 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_30, L_29, NULL);
		__this->___U3CU3E2__current_1 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_30);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0108:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_0255;
	}

IL_0114:
	{
		// else if (loadingType == 1)
		int32_t L_31 = __this->___loadingType_3;
		if ((!(((uint32_t)L_31) == ((uint32_t)1))))
		{
			goto IL_01bb;
		}
	}
	{
		// fadeBackground.gameObject.SetActive(true);
		SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* L_32 = V_1;
		NullCheck(L_32);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_33 = L_32->___fadeBackground_4;
		NullCheck(L_33);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34;
		L_34 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_33, NULL);
		NullCheck(L_34);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_34, (bool)1, NULL);
		// if (fadeBackground.color != new Color(0, 0, 0, 1))
		SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* L_35 = V_1;
		NullCheck(L_35);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_36 = L_35->___fadeBackground_4;
		NullCheck(L_36);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_37;
		L_37 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_36);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		memset((&L_38), 0, sizeof(L_38));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_38), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		bool L_39;
		L_39 = Color_op_Inequality_mF1C733BA10E60B086AB950A71143678AE76C4D92_inline(L_37, L_38, NULL);
		if (!L_39)
		{
			goto IL_0255;
		}
	}
	{
		// fadingTween = fadeBackground.DOColor(new Color(0, 0, 0, 1), fadeTime).SetEase(Ease.OutQuad);
		SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* L_40 = V_1;
		SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* L_41 = V_1;
		NullCheck(L_41);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_42 = L_41->___fadeBackground_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_43;
		memset((&L_43), 0, sizeof(L_43));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_43), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* L_44 = V_1;
		NullCheck(L_44);
		float L_45 = L_44->___fadeTime_20;
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_46;
		L_46 = DOTweenModuleUI_DOColor_m385F3DCBA53A421BC288521879635D67E8155783(L_42, L_43, L_45, NULL);
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_47;
		L_47 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3_m3605060ADD85D4E33C9F7D03BE6A676211A4A40B(L_46, 6, TweenSettingsExtensions_SetEase_TisTweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3_m3605060ADD85D4E33C9F7D03BE6A676211A4A40B_RuntimeMethod_var);
		NullCheck(L_40);
		L_40->___fadingTween_19 = L_47;
		Il2CppCodeGenWriteBarrier((void**)(&L_40->___fadingTween_19), (void*)L_47);
		// yield return new WaitForSeconds(fadeTime);
		SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* L_48 = V_1;
		NullCheck(L_48);
		float L_49 = L_48->___fadeTime_20;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_50 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_50);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_50, L_49, NULL);
		__this->___U3CU3E2__current_1 = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_50);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_01af:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_0255;
	}

IL_01bb:
	{
		// }else if(loadingType == 2)
		int32_t L_51 = __this->___loadingType_3;
		if ((!(((uint32_t)L_51) == ((uint32_t)2))))
		{
			goto IL_0255;
		}
	}
	{
		// shrinkGroup.SetActive(true);
		SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* L_52 = V_1;
		NullCheck(L_52);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_53 = L_52->___shrinkGroup_8;
		NullCheck(L_53);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_53, (bool)1, NULL);
		// if (shrinkMask.localScale.x != 0 || shrinkMask.localScale.y != 0)
		SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* L_54 = V_1;
		NullCheck(L_54);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_55 = L_54->___shrinkMask_9;
		NullCheck(L_55);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_55, NULL);
		float L_57 = L_56.___x_2;
		if ((!(((float)L_57) == ((float)(0.0f)))))
		{
			goto IL_0201;
		}
	}
	{
		SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* L_58 = V_1;
		NullCheck(L_58);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_59 = L_58->___shrinkMask_9;
		NullCheck(L_59);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		L_60 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_59, NULL);
		float L_61 = L_60.___y_3;
		if ((((float)L_61) == ((float)(0.0f))))
		{
			goto IL_0255;
		}
	}

IL_0201:
	{
		// fadingTween = shrinkMask.DOScale(Vector2.zero, fadeTime * 1.5f).SetEase(Ease.OutQuad);
		SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* L_62 = V_1;
		SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* L_63 = V_1;
		NullCheck(L_63);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_64 = L_63->___shrinkMask_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_65;
		L_65 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
		L_66 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_65, NULL);
		SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* L_67 = V_1;
		NullCheck(L_67);
		float L_68 = L_67->___fadeTime_20;
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_69;
		L_69 = ShortcutExtensions_DOScale_mF7AC6EA0FD71B399776D758AD57B94F18A47F580(L_64, L_66, ((float)il2cpp_codegen_multiply(L_68, (1.5f))), NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_70;
		L_70 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mEACEF6A6E654DEDDB2620CD0BE1DA29C023F4E2F(L_69, 6, TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mEACEF6A6E654DEDDB2620CD0BE1DA29C023F4E2F_RuntimeMethod_var);
		NullCheck(L_62);
		L_62->___fadingTween_19 = L_70;
		Il2CppCodeGenWriteBarrier((void**)(&L_62->___fadingTween_19), (void*)L_70);
		// yield return new WaitForSeconds(fadeTime * 1.5f);
		SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* L_71 = V_1;
		NullCheck(L_71);
		float L_72 = L_71->___fadeTime_20;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_73 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_73);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_73, ((float)il2cpp_codegen_multiply(L_72, (1.5f))), NULL);
		__this->___U3CU3E2__current_1 = L_73;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_73);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_024e:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0255:
	{
		// AsyncOperation asyncOperation = SceneManager.LoadSceneAsync(index);
		U3CU3Ec__DisplayClass29_0_tC2F627E49F1CC5EDA9D9E0F448859B52019AD716* L_74 = __this->___U3CU3E8__1_4;
		int32_t L_75 = __this->___index_5;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_76;
		L_76 = SceneManager_LoadSceneAsync_mA3C1B55E83225487A615436731B82087D77D4935(L_75, NULL);
		NullCheck(L_74);
		L_74->___asyncOperation_0 = L_76;
		Il2CppCodeGenWriteBarrier((void**)(&L_74->___asyncOperation_0), (void*)L_76);
		// asyncOperation.allowSceneActivation = false;
		U3CU3Ec__DisplayClass29_0_tC2F627E49F1CC5EDA9D9E0F448859B52019AD716* L_77 = __this->___U3CU3E8__1_4;
		NullCheck(L_77);
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_78 = L_77->___asyncOperation_0;
		NullCheck(L_78);
		AsyncOperation_set_allowSceneActivation_mBD94FAB342455508CD7962D3CED490C64AF74522(L_78, (bool)0, NULL);
		goto IL_0591;
	}

IL_0281:
	{
		// if (asyncOperation.progress < 0.9f)
		U3CU3Ec__DisplayClass29_0_tC2F627E49F1CC5EDA9D9E0F448859B52019AD716* L_79 = __this->___U3CU3E8__1_4;
		NullCheck(L_79);
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_80 = L_79->___asyncOperation_0;
		NullCheck(L_80);
		float L_81;
		L_81 = AsyncOperation_get_progress_mF3B2837C1A5DDF3C2F7A3BA1E449DD4C71C632EE(L_80, NULL);
		if ((!(((float)L_81) < ((float)(0.899999976f)))))
		{
			goto IL_02c0;
		}
	}
	{
		// SetLoadingBarPercentage(0.3f + asyncOperation.progress * 0.35f);
		SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* L_82 = V_1;
		U3CU3Ec__DisplayClass29_0_tC2F627E49F1CC5EDA9D9E0F448859B52019AD716* L_83 = __this->___U3CU3E8__1_4;
		NullCheck(L_83);
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_84 = L_83->___asyncOperation_0;
		NullCheck(L_84);
		float L_85;
		L_85 = AsyncOperation_get_progress_mF3B2837C1A5DDF3C2F7A3BA1E449DD4C71C632EE(L_84, NULL);
		NullCheck(L_82);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_86;
		L_86 = SceneLoader_SetLoadingBarPercentage_m20E6A88436C3D1CF4EA56FA1F55109FD11E13C8D(L_82, ((float)il2cpp_codegen_add((0.300000012f), ((float)il2cpp_codegen_multiply(L_85, (0.349999994f))))), NULL);
		goto IL_0579;
	}

IL_02c0:
	{
		U3CU3Ec__DisplayClass29_1_t213D4F0827FE343FA1A43EC5A2B5C8A85DFB6D59* L_87 = (U3CU3Ec__DisplayClass29_1_t213D4F0827FE343FA1A43EC5A2B5C8A85DFB6D59*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass29_1_t213D4F0827FE343FA1A43EC5A2B5C8A85DFB6D59_il2cpp_TypeInfo_var);
		NullCheck(L_87);
		U3CU3Ec__DisplayClass29_1__ctor_m0DD7DB08051925723FCDCBF39A1C9C6496F74EF7(L_87, NULL);
		__this->___U3CU3E8__2_6 = L_87;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__2_6), (void*)L_87);
		// asyncOperation.allowSceneActivation = true;
		U3CU3Ec__DisplayClass29_0_tC2F627E49F1CC5EDA9D9E0F448859B52019AD716* L_88 = __this->___U3CU3E8__1_4;
		NullCheck(L_88);
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_89 = L_88->___asyncOperation_0;
		NullCheck(L_89);
		AsyncOperation_set_allowSceneActivation_mBD94FAB342455508CD7962D3CED490C64AF74522(L_89, (bool)1, NULL);
		// yield return new WaitUntil(() => asyncOperation.isDone);
		U3CU3Ec__DisplayClass29_0_tC2F627E49F1CC5EDA9D9E0F448859B52019AD716* L_90 = __this->___U3CU3E8__1_4;
		NullCheck(L_90);
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_91 = L_90->___U3CU3E9__0_2;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_92 = L_91;
		G_B21_0 = L_92;
		G_B21_1 = __this;
		if (L_92)
		{
			G_B22_0 = L_92;
			G_B22_1 = __this;
			goto IL_030d;
		}
	}
	{
		U3CU3Ec__DisplayClass29_0_tC2F627E49F1CC5EDA9D9E0F448859B52019AD716* L_93 = __this->___U3CU3E8__1_4;
		U3CU3Ec__DisplayClass29_0_tC2F627E49F1CC5EDA9D9E0F448859B52019AD716* L_94 = __this->___U3CU3E8__1_4;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_95 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_95);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_95, L_94, (intptr_t)((void*)U3CU3Ec__DisplayClass29_0_U3CLoadSceneU3Eb__0_mA91AC0D3816784060E78184987F88C6D5DB933FE_RuntimeMethod_var), NULL);
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_96 = L_95;
		V_4 = L_96;
		NullCheck(L_93);
		L_93->___U3CU3E9__0_2 = L_96;
		Il2CppCodeGenWriteBarrier((void**)(&L_93->___U3CU3E9__0_2), (void*)L_96);
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_97 = V_4;
		G_B22_0 = L_97;
		G_B22_1 = G_B21_1;
	}

IL_030d:
	{
		WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* L_98 = (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD*)il2cpp_codegen_object_new(WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		NullCheck(L_98);
		WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF(L_98, G_B22_0, NULL);
		NullCheck(G_B22_1);
		G_B22_1->___U3CU3E2__current_1 = L_98;
		Il2CppCodeGenWriteBarrier((void**)(&G_B22_1->___U3CU3E2__current_1), (void*)L_98);
		__this->___U3CU3E1__state_0 = 4;
		return (bool)1;
	}

IL_0320:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitUntil(() => onLoaded);
		U3CU3Ec__DisplayClass29_0_tC2F627E49F1CC5EDA9D9E0F448859B52019AD716* L_99 = __this->___U3CU3E8__1_4;
		NullCheck(L_99);
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_100 = L_99->___U3CU3E9__1_3;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_101 = L_100;
		G_B24_0 = L_101;
		G_B24_1 = __this;
		if (L_101)
		{
			G_B25_0 = L_101;
			G_B25_1 = __this;
			goto IL_0358;
		}
	}
	{
		U3CU3Ec__DisplayClass29_0_tC2F627E49F1CC5EDA9D9E0F448859B52019AD716* L_102 = __this->___U3CU3E8__1_4;
		U3CU3Ec__DisplayClass29_0_tC2F627E49F1CC5EDA9D9E0F448859B52019AD716* L_103 = __this->___U3CU3E8__1_4;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_104 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_104);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_104, L_103, (intptr_t)((void*)U3CU3Ec__DisplayClass29_0_U3CLoadSceneU3Eb__1_m509F1FBB1FCEA53E0A48FB40EA0ED2589AE0F8EA_RuntimeMethod_var), NULL);
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_105 = L_104;
		V_4 = L_105;
		NullCheck(L_102);
		L_102->___U3CU3E9__1_3 = L_105;
		Il2CppCodeGenWriteBarrier((void**)(&L_102->___U3CU3E9__1_3), (void*)L_105);
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_106 = V_4;
		G_B25_0 = L_106;
		G_B25_1 = G_B24_1;
	}

IL_0358:
	{
		WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* L_107 = (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD*)il2cpp_codegen_object_new(WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		NullCheck(L_107);
		WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF(L_107, G_B25_0, NULL);
		NullCheck(G_B25_1);
		G_B25_1->___U3CU3E2__current_1 = L_107;
		Il2CppCodeGenWriteBarrier((void**)(&G_B25_1->___U3CU3E2__current_1), (void*)L_107);
		__this->___U3CU3E1__state_0 = 5;
		return (bool)1;
	}

IL_036b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// _startCountingLoadingTime = false;
		SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* L_108 = V_1;
		NullCheck(L_108);
		L_108->____startCountingLoadingTime_14 = (bool)0;
		// _loadingTime = 0;
		SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* L_109 = V_1;
		NullCheck(L_109);
		L_109->____loadingTime_13 = (0.0f);
		// bool isComplete = false;
		U3CU3Ec__DisplayClass29_1_t213D4F0827FE343FA1A43EC5A2B5C8A85DFB6D59* L_110 = __this->___U3CU3E8__2_6;
		NullCheck(L_110);
		L_110->___isComplete_0 = (bool)0;
		// SetLoadingBarPercentage(1).OnComplete(() => isComplete = true);
		SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* L_111 = V_1;
		NullCheck(L_111);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_112;
		L_112 = SceneLoader_SetLoadingBarPercentage_m20E6A88436C3D1CF4EA56FA1F55109FD11E13C8D(L_111, (1.0f), NULL);
		U3CU3Ec__DisplayClass29_1_t213D4F0827FE343FA1A43EC5A2B5C8A85DFB6D59* L_113 = __this->___U3CU3E8__2_6;
		TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* L_114 = (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*)il2cpp_codegen_object_new(TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		NullCheck(L_114);
		TweenCallback__ctor_m68CC9304423CBDE43001F9B1413B5DAAF70DB621(L_114, L_113, (intptr_t)((void*)U3CU3Ec__DisplayClass29_1_U3CLoadSceneU3Eb__2_mE3332541DB5F687F60AF90AAD532FAA0412AF8EE_RuntimeMethod_var), NULL);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_115;
		L_115 = TweenSettingsExtensions_OnComplete_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mBE711AE994C1480385AE49921B1DE8D773AC0F6F(L_112, L_114, TweenSettingsExtensions_OnComplete_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mBE711AE994C1480385AE49921B1DE8D773AC0F6F_RuntimeMethod_var);
		// yield return new WaitUntil(() => isComplete);
		U3CU3Ec__DisplayClass29_1_t213D4F0827FE343FA1A43EC5A2B5C8A85DFB6D59* L_116 = __this->___U3CU3E8__2_6;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_117 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_117);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_117, L_116, (intptr_t)((void*)U3CU3Ec__DisplayClass29_1_U3CLoadSceneU3Eb__3_mCF38E29D9415E53186AAF499BA3D8D8C6693C49C_RuntimeMethod_var), NULL);
		WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* L_118 = (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD*)il2cpp_codegen_object_new(WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		NullCheck(L_118);
		WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF(L_118, L_117, NULL);
		__this->___U3CU3E2__current_1 = L_118;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_118);
		__this->___U3CU3E1__state_0 = 6;
		return (bool)1;
	}

IL_03d7:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (loadingType == 0)
		int32_t L_119 = __this->___loadingType_3;
		if (L_119)
		{
			goto IL_042e;
		}
	}
	{
		// fadingTween = loadingCanvas.DOFade(0, fadeTime).SetEase(Ease.OutQuad);
		SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* L_120 = V_1;
		SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* L_121 = V_1;
		NullCheck(L_121);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_122 = L_121->___loadingCanvas_5;
		SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* L_123 = V_1;
		NullCheck(L_123);
		float L_124 = L_123->___fadeTime_20;
		TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_125;
		L_125 = DOTweenModuleUI_DOFade_mA073F33862AA7BEF33842B8200D0E79E046D114E(L_122, (0.0f), L_124, NULL);
		TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_126;
		L_126 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1_mC938BE0C4068DBE3763250E39EF3BB0570E9AB7E(L_125, 6, TweenSettingsExtensions_SetEase_TisTweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1_mC938BE0C4068DBE3763250E39EF3BB0570E9AB7E_RuntimeMethod_var);
		NullCheck(L_120);
		L_120->___fadingTween_19 = L_126;
		Il2CppCodeGenWriteBarrier((void**)(&L_120->___fadingTween_19), (void*)L_126);
		// yield return new WaitForSeconds(fadeTime);
		SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* L_127 = V_1;
		NullCheck(L_127);
		float L_128 = L_127->___fadeTime_20;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_129 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_129);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_129, L_128, NULL);
		__this->___U3CU3E2__current_1 = L_129;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_129);
		__this->___U3CU3E1__state_0 = 7;
		return (bool)1;
	}

IL_0422:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_0513;
	}

IL_042e:
	{
		// else if (loadingType == 1)
		int32_t L_130 = __this->___loadingType_3;
		if ((!(((uint32_t)L_130) == ((uint32_t)1))))
		{
			goto IL_0493;
		}
	}
	{
		// fadingTween = fadeBackground.DOColor(new Color(0, 0, 0, 0), fadeTime).SetEase(Ease.OutQuad);
		SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* L_131 = V_1;
		SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* L_132 = V_1;
		NullCheck(L_132);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_133 = L_132->___fadeBackground_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_134;
		memset((&L_134), 0, sizeof(L_134));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_134), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* L_135 = V_1;
		NullCheck(L_135);
		float L_136 = L_135->___fadeTime_20;
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_137;
		L_137 = DOTweenModuleUI_DOColor_m385F3DCBA53A421BC288521879635D67E8155783(L_133, L_134, L_136, NULL);
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_138;
		L_138 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3_m3605060ADD85D4E33C9F7D03BE6A676211A4A40B(L_137, 6, TweenSettingsExtensions_SetEase_TisTweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3_m3605060ADD85D4E33C9F7D03BE6A676211A4A40B_RuntimeMethod_var);
		NullCheck(L_131);
		L_131->___fadingTween_19 = L_138;
		Il2CppCodeGenWriteBarrier((void**)(&L_131->___fadingTween_19), (void*)L_138);
		// yield return new WaitForSeconds(fadeTime);
		SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* L_139 = V_1;
		NullCheck(L_139);
		float L_140 = L_139->___fadeTime_20;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_141 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_141);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_141, L_140, NULL);
		__this->___U3CU3E2__current_1 = L_141;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_141);
		__this->___U3CU3E1__state_0 = 8;
		return (bool)1;
	}

IL_0487:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_0513;
	}

IL_0493:
	{
		// else if(loadingType == 2)
		int32_t L_142 = __this->___loadingType_3;
		if ((!(((uint32_t)L_142) == ((uint32_t)2))))
		{
			goto IL_0513;
		}
	}
	{
		// yield return new WaitForSeconds(fadeTime);
		SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* L_143 = V_1;
		NullCheck(L_143);
		float L_144 = L_143->___fadeTime_20;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_145 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_145);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_145, L_144, NULL);
		__this->___U3CU3E2__current_1 = L_145;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_145);
		__this->___U3CU3E1__state_0 = ((int32_t)9);
		return (bool)1;
	}

IL_04b7:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// fadingTween = shrinkMask.DOScale(Vector2.one, fadeTime * 2).SetEase(Ease.OutQuad);
		SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* L_146 = V_1;
		SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* L_147 = V_1;
		NullCheck(L_147);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_148 = L_147->___shrinkMask_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_149;
		L_149 = Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_150;
		L_150 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_149, NULL);
		SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* L_151 = V_1;
		NullCheck(L_151);
		float L_152 = L_151->___fadeTime_20;
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_153;
		L_153 = ShortcutExtensions_DOScale_mF7AC6EA0FD71B399776D758AD57B94F18A47F580(L_148, L_150, ((float)il2cpp_codegen_multiply(L_152, (2.0f))), NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_154;
		L_154 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mEACEF6A6E654DEDDB2620CD0BE1DA29C023F4E2F(L_153, 6, TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mEACEF6A6E654DEDDB2620CD0BE1DA29C023F4E2F_RuntimeMethod_var);
		NullCheck(L_146);
		L_146->___fadingTween_19 = L_154;
		Il2CppCodeGenWriteBarrier((void**)(&L_146->___fadingTween_19), (void*)L_154);
		// yield return new WaitForSeconds(fadeTime * 2);
		SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* L_155 = V_1;
		NullCheck(L_155);
		float L_156 = L_155->___fadeTime_20;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_157 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_157);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_157, ((float)il2cpp_codegen_multiply(L_156, (2.0f))), NULL);
		__this->___U3CU3E2__current_1 = L_157;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_157);
		__this->___U3CU3E1__state_0 = ((int32_t)10);
		return (bool)1;
	}

IL_050c:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0513:
	{
		// if (loadingType == 0)
		int32_t L_158 = __this->___loadingType_3;
		if (L_158)
		{
			goto IL_053a;
		}
	}
	{
		// loadingCanvas.gameObject.SetActive(false);
		SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* L_159 = V_1;
		NullCheck(L_159);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_160 = L_159->___loadingCanvas_5;
		NullCheck(L_160);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_161;
		L_161 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_160, NULL);
		NullCheck(L_161);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_161, (bool)0, NULL);
		// luluCanvas.SetActive(false);
		SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* L_162 = V_1;
		NullCheck(L_162);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_163 = L_162->___luluCanvas_11;
		NullCheck(L_163);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_163, (bool)0, NULL);
		goto IL_056b;
	}

IL_053a:
	{
		// else if(loadingType == 1)
		int32_t L_164 = __this->___loadingType_3;
		if ((!(((uint32_t)L_164) == ((uint32_t)1))))
		{
			goto IL_0556;
		}
	}
	{
		// fadeBackground.gameObject.SetActive(false);
		SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* L_165 = V_1;
		NullCheck(L_165);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_166 = L_165->___fadeBackground_4;
		NullCheck(L_166);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_167;
		L_167 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_166, NULL);
		NullCheck(L_167);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_167, (bool)0, NULL);
		goto IL_056b;
	}

IL_0556:
	{
		// }else if(loadingType == 2)
		int32_t L_168 = __this->___loadingType_3;
		if ((!(((uint32_t)L_168) == ((uint32_t)2))))
		{
			goto IL_056b;
		}
	}
	{
		// shrinkGroup.SetActive(false);
		SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* L_169 = V_1;
		NullCheck(L_169);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_170 = L_169->___shrinkGroup_8;
		NullCheck(L_170);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_170, (bool)0, NULL);
	}

IL_056b:
	{
		// _isFading = false;
		SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* L_171 = V_1;
		NullCheck(L_171);
		L_171->____isFading_23 = (bool)0;
		// }
		__this->___U3CU3E8__2_6 = (U3CU3Ec__DisplayClass29_1_t213D4F0827FE343FA1A43EC5A2B5C8A85DFB6D59*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__2_6), (void*)(U3CU3Ec__DisplayClass29_1_t213D4F0827FE343FA1A43EC5A2B5C8A85DFB6D59*)NULL);
	}

IL_0579:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = ((int32_t)11);
		return (bool)1;
	}

IL_058a:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0591:
	{
		// while (!asyncOperation.isDone)
		U3CU3Ec__DisplayClass29_0_tC2F627E49F1CC5EDA9D9E0F448859B52019AD716* L_172 = __this->___U3CU3E8__1_4;
		NullCheck(L_172);
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_173 = L_172->___asyncOperation_0;
		NullCheck(L_173);
		bool L_174;
		L_174 = AsyncOperation_get_isDone_m68A0682777E2132FC033182E9F50303566AA354D(L_173, NULL);
		if (!L_174)
		{
			goto IL_0281;
		}
	}
	{
		// float loadingTime = Time.time - startTime;
		float L_175;
		L_175 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_176 = __this->___U3CstartTimeU3E5__2_7;
		V_2 = ((float)il2cpp_codegen_subtract(L_175, L_176));
		// string sceneName = SceneManager.GetActiveScene().name;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_177;
		L_177 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_5 = L_177;
		String_t* L_178;
		L_178 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_5), NULL);
		V_3 = L_178;
		// Debug.Log($"Loaded To {sceneName}. Loading Time: {loadingTime}s.");
		String_t* L_179 = V_3;
		float L_180 = V_2;
		float L_181 = L_180;
		RuntimeObject* L_182 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_181);
		String_t* L_183;
		L_183 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralD8C5FAD3982D14A1FB7F0EB6D010076BE49A4C70, L_179, L_182, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_183, NULL);
		// }
		return (bool)0;
	}
}
// System.Object SceneLoader/<LoadScene>d__29::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadSceneU3Ed__29_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC7F073B618A996962304AABC15AA3982044FCCBB (U3CLoadSceneU3Ed__29_t4CA44A34A1C776DA1E94505179635CB680F0DBC9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SceneLoader/<LoadScene>d__29::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneU3Ed__29_System_Collections_IEnumerator_Reset_mF822A02E8E8B8A5361EDA67137CEFFAC49782CC4 (U3CLoadSceneU3Ed__29_t4CA44A34A1C776DA1E94505179635CB680F0DBC9* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadSceneU3Ed__29_System_Collections_IEnumerator_Reset_mF822A02E8E8B8A5361EDA67137CEFFAC49782CC4_RuntimeMethod_var)));
	}
}
// System.Object SceneLoader/<LoadScene>d__29::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadSceneU3Ed__29_System_Collections_IEnumerator_get_Current_mD0820D93047D04D18CD0CA26EC4D4FEDF2265F89 (U3CLoadSceneU3Ed__29_t4CA44A34A1C776DA1E94505179635CB680F0DBC9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SceneLoader/<>c__DisplayClass31_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0__ctor_m1EFDC3AA8F24B0FD683E242D045D32C77D509BF4 (U3CU3Ec__DisplayClass31_0_t0BD794A68DFD630095604F9544A29B36B0C517D1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void SceneLoader/<>c__DisplayClass31_0::<ToggleFadingCanvas>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0_U3CToggleFadingCanvasU3Eb__0_mEE2B8F4F7D1E8E6CCF8910C22786F8B96C807555 (U3CU3Ec__DisplayClass31_0_t0BD794A68DFD630095604F9544A29B36B0C517D1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetResult_mA4C94A8605B8E4A2646C0C2B08A3D373E1174448_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _isFading = false;
		SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		L_0->____isFading_23 = (bool)0;
		// tcs.SetResult(true);
		TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* L_1 = __this->___tcs_1;
		NullCheck(L_1);
		TaskCompletionSource_1_SetResult_mA4C94A8605B8E4A2646C0C2B08A3D373E1174448(L_1, (bool)1, TaskCompletionSource_1_SetResult_mA4C94A8605B8E4A2646C0C2B08A3D373E1174448_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void SceneLoader/<>c__DisplayClass31_0::<ToggleFadingCanvas>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0_U3CToggleFadingCanvasU3Eb__1_mCAF65F53688D99F2E88965317A1FB2D1888DA4B8 (U3CU3Ec__DisplayClass31_0_t0BD794A68DFD630095604F9544A29B36B0C517D1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetResult_mA4C94A8605B8E4A2646C0C2B08A3D373E1174448_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// fadeBackground.gameObject.SetActive(false);
		SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = L_0->___fadeBackground_4;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// _isFading = false;
		SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* L_3 = __this->___U3CU3E4__this_0;
		NullCheck(L_3);
		L_3->____isFading_23 = (bool)0;
		// tcs.SetResult(true);
		TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* L_4 = __this->___tcs_1;
		NullCheck(L_4);
		TaskCompletionSource_1_SetResult_mA4C94A8605B8E4A2646C0C2B08A3D373E1174448(L_4, (bool)1, TaskCompletionSource_1_SetResult_mA4C94A8605B8E4A2646C0C2B08A3D373E1174448_RuntimeMethod_var);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SceneLoader/<>c__DisplayClass33_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass33_0__ctor_mAFB392F30F2D3E89AD1DFC52686E5D858796B77A (U3CU3Ec__DisplayClass33_0_tBB107A3FB9FAA79248C6ED3374A4F26520B72697* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Single SceneLoader/<>c__DisplayClass33_0::<SetLoadingBarPercentage>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec__DisplayClass33_0_U3CSetLoadingBarPercentageU3Eb__0_mE14A6A0C2D49656F45785774B61BF06A18A19678 (U3CU3Ec__DisplayClass33_0_tBB107A3FB9FAA79248C6ED3374A4F26520B72697* __this, const RuntimeMethod* method) 
{
	{
		// Tween textTween = DOTween.To(() => currentPercentage, x => { loadingText.text = "Loading... (" + (x*100).ToString("00") + "%)"; }, _loadingBarPercentage, 0.3f);
		float L_0 = __this->___currentPercentage_0;
		return L_0;
	}
}
// System.Void SceneLoader/<>c__DisplayClass33_0::<SetLoadingBarPercentage>b__1(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass33_0_U3CSetLoadingBarPercentageU3Eb__1_mF170B8D7B23B2888B1811D9EE599DD2BF0799747 (U3CU3Ec__DisplayClass33_0_tBB107A3FB9FAA79248C6ED3374A4F26520B72697* __this, float ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB19170937BB19AE756B569F20FAA6D3EC8E752E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0F389439B8D37095DCB823699F5BCCDEE6C690C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// Tween textTween = DOTween.To(() => currentPercentage, x => { loadingText.text = "Loading... (" + (x*100).ToString("00") + "%)"; }, _loadingBarPercentage, 0.3f);
		SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* L_0 = __this->___U3CU3E4__this_1;
		NullCheck(L_0);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_1 = L_0->___loadingText_7;
		float L_2 = ___x0;
		V_0 = ((float)il2cpp_codegen_multiply(L_2, (100.0f)));
		String_t* L_3;
		L_3 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D((&V_0), _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73, NULL);
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralC0F389439B8D37095DCB823699F5BCCDEE6C690C, L_3, _stringLiteralB19170937BB19AE756B569F20FAA6D3EC8E752E0, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_1, L_4);
		// Tween textTween = DOTween.To(() => currentPercentage, x => { loadingText.text = "Loading... (" + (x*100).ToString("00") + "%)"; }, _loadingBarPercentage, 0.3f);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PlayerController_get_winTurn_mB7BC824E46552B8341CCD247704F5681AD3CD2D2_inline (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// public int winTurn => _winTurn;
		int32_t L_0 = __this->____winTurn_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Inequality_mF1C733BA10E60B086AB950A71143678AE76C4D92_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___lhs0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___rhs1;
		bool L_2;
		L_2 = Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___oneVector_3;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_gshared_inline (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, int32_t ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_gshared_inline (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, const RuntimeMethod* method) 
{
	{
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_0 = (Task_1_t824317F4B958F7512E8F7300511752937A6C6043*)__this->____task_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___lhs0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline(L_0, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___rhs1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3;
		L_3 = Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline(L_2, NULL);
		bool L_4;
		L_4 = Vector4_op_Equality_mCEA0E5F229F4AE8C55152F7A8F84345F24F52DC6_inline(L_1, L_3, NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___c0;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___c0;
		float L_3 = L_2.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___c0;
		float L_5 = L_4.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___c0;
		float L_7 = L_6.___a_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0021;
	}

IL_0021:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_mCEA0E5F229F4AE8C55152F7A8F84345F24F52DC6_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___lhs0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___lhs0;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___rhs1;
		float L_3 = L_2.___x_1;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___lhs0;
		float L_5 = L_4.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___rhs1;
		float L_7 = L_6.___y_2;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = ___lhs0;
		float L_9 = L_8.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___rhs1;
		float L_11 = L_10.___z_3;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = ___lhs0;
		float L_13 = L_12.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14 = ___rhs1;
		float L_15 = L_14.___w_4;
		V_3 = ((float)il2cpp_codegen_subtract(L_13, L_15));
		float L_16 = V_0;
		float L_17 = V_0;
		float L_18 = V_1;
		float L_19 = V_1;
		float L_20 = V_2;
		float L_21 = V_2;
		float L_22 = V_3;
		float L_23 = V_3;
		V_4 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_16, L_17)), ((float)il2cpp_codegen_multiply(L_18, L_19)))), ((float)il2cpp_codegen_multiply(L_20, L_21)))), ((float)il2cpp_codegen_multiply(L_22, L_23))));
		float L_24 = V_4;
		V_5 = (bool)((((float)L_24) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0057;
	}

IL_0057:
	{
		bool L_25 = V_5;
		return L_25;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_1 = L_0;
		float L_1 = ___y1;
		__this->___y_2 = L_1;
		float L_2 = ___z2;
		__this->___z_3 = L_2;
		float L_3 = ___w3;
		__this->___w_4 = L_3;
		return;
	}
}
