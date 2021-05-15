#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<System.Object,System.Object,System.Object,UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>
struct ARTrackableManager_5_t2707E45F444C493E32789D9B57F85551A10E4212;
// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider,UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARFoundation.ARPlane>
struct ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7;
// System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>
struct Action_1_tBBDACDE0F7A9CD846DD9E0B8E74D5E0CC3D6B593;
// System.Action`1<UnityEngine.XR.ARFoundation.ARPlanesChangedEventArgs>
struct Action_1_tCEBED0DA57F23A7A92A05B380E69C5D67FEE4C25;
// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs>
struct Action_1_t19910F5D681EFD1901DBD0F742BD502089B49032;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349;
// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct Comparison_1_t2171DE829C4A23A5663A53F71D283C076F5EFCBE;
// System.Collections.Generic.Dictionary`2<System.Guid,UnityEngine.XR.ARSubsystems.XRReferenceImage>
struct Dictionary_2_t1D971BA151CCF2A891990C13C7561FEC253BC7CF;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t8A3F8777BEF075E009D085E3BC9B9ADB00F47345;
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARPlane>
struct Dictionary_2_t712D6B074B6A493ABA07777BD08F1A62D9DE2534;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARRaycast>
struct Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARTrackedImage>
struct Dictionary_2_tD95D4B180F0B4EEF3668344392936E58ECF7069E;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>
struct Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83;
// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_tA3D41D485BD4C73DB44AAD0202CA90BA777C1197;
// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_t0D7774CBEE7827744440205CF327276346298BD3;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Boolean>
struct KeyCollection_t1A5E6B675EFA5A7901D7B04966A914995A34ECFF;
// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct List_1_tAF78E49171E2C987480BE2F36E1E73CEFDA37469;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARPlane>
struct List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycast>
struct List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>
struct List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster>
struct List_1_t179D10142696C7C113D229AC6E1884F4B19CFE27;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem>
struct List_1_t19D4B5E8CD4DAF90FBAC8A83E6F7E9C0939C7BE0;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor>
struct List_1_t179969632C4CD7B25BEBAA7DA12BA4C8F82F69F2;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem>
struct List_1_t42260E8F78DDBD1A6947677665395B70FA8816C1;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor>
struct List_1_t6D435690E62CDB3645DB1A76F3B7B8B6069BDB4F;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem>
struct List_1_t72B11B1FEAB79314490A07F58F757646DADED2C1;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor>
struct List_1_tAE84735071B78277703DB9996DE2E5C4456317C5;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem>
struct List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>
struct List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>
struct ValueCollection_t530059B6E09E07208AE8745C3EA5EC32BA6C17F6;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Boolean>[]
struct EntryU5BU5D_tE42F4CA2251E4564157940892384BFB9EBE58D61;
// UnityEngine.XR.ARFoundation.ARRaycastHit[]
struct ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA;
// UnityEngine.XR.ARFoundation.ARTrackedImage[]
struct ARTrackedImageU5BU5D_t63FA636B7BA07C17EE59D7707CEED317A3B23142;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Color[]
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.Video.VideoClip[]
struct VideoClipU5BU5D_t6683BD7FA0E3C2C85483295CBB3727AD422ED431;
// UnityEngine.UI.Dropdown/OptionData[]
struct OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5;
// UnityEngine.XR.ARFoundation.ARPlane
struct ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891;
// UnityEngine.XR.ARFoundation.ARPlaneManager
struct ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4;
// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1;
// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3;
// UnityEngine.XR.ARFoundation.ARTrackedImage
struct ARTrackedImage_t32B829A81320BCDF3A743DCD4DC4383BA266C5B7;
// UnityEngine.XR.ARFoundation.ARTrackedImageManager
struct ARTrackedImageManager_tB916E34D053E6712190F2BAE46E21D76A0882FF2;
// AnimDropdown
struct AnimDropdown_t734E84963601DD70BDA49545C64952B6CCB52FD7;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.UI.Dropdown
struct Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96;
// System.Threading.ExecutionContext
struct ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Security.Principal.IPrincipal
struct IPrincipal_t850ACE1F48327B64F266DD2C6FD8C5F56E4889E2;
// UnityEngine.XR.ARSubsystems.IReferenceImageLibrary
struct IReferenceImageLibrary_t442603E2283A3DE643D30BC7A02DB47E6F4B6B4F;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// ImageTracking
struct ImageTracking_t06C356D3B06EA642613D7FC66E71B6D57A5AFF80;
// System.Threading.InternalThread
struct InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.Threading.Mutex
struct Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Threading.ParameterizedThreadStart
struct ParameterizedThreadStart_t5C6FC428171B904D8547954B337B373083E89516;
// PlaneDetectionToggle
struct PlaneDetectionToggle_t46401949F3D814B54B51A92A03383100AC6A7A67;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.Text.RegularExpressions.Regex
struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// SpawnObjectOnPlane
struct SpawnObjectOnPlane_t01B265C88B0D8D2D33A765C082A0B4CADF163032;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// TextureScale
struct TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6;
// System.Threading.Thread
struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// UnityEngine.Video.VideoClip
struct VideoClip_tA8C2507553BEE394C46B7A876D6F56DD09F6C90F;
// UnityEngine.Video.VideoPlayer
struct VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem
struct XRImageTrackingSubsystem_tBC68AD21C11D8D67F3343844E129DF505FF705CE;
// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem
struct XRPlaneSubsystem_t7C76F9D2C993B0DC38F0A7CDCE745EA7C12417EE;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem
struct XRRaycastSubsystem_t62FDAC9AA1BD44C4557AEE3FEF3D2FA24C71B6B8;
// UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary
struct XRReferenceImageLibrary_tC415743C1DDCE2331D5B0F159B2A1D72A70C44B2;
// UnityEngine.UI.Dropdown/DropdownEvent
struct DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB;
// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857;
// UnityEngine.UI.Dropdown/OptionDataList
struct OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// TextureScale/ThreadData
struct ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A;
// UnityEngine.Video.VideoPlayer/ErrorEventHandler
struct ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2;
// UnityEngine.Video.VideoPlayer/EventHandler
struct EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD;
// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler
struct FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC;
// UnityEngine.Video.VideoPlayer/TimeEventHandler
struct TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t19910F5D681EFD1901DBD0F742BD502089B49032_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReferenceImageLibrary_t442603E2283A3DE643D30BC7A02DB47E6F4B6B4F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParameterizedThreadStart_t5C6FC428171B904D8547954B337B373083E89516_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpawnObjectOnPlane_t01B265C88B0D8D2D33A765C082A0B4CADF163032_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral4A4583387AD11127A0B32E8648102D6F8D7DC1D3;
IL2CPP_EXTERN_C String_t* _stringLiteral515AE8FDB9C25ACAE2FBF81A8470F0F8B3FDD6FC;
IL2CPP_EXTERN_C String_t* _stringLiteral59DD422190FC4AEEE5245F9E29DFD871FFCDFEEF;
IL2CPP_EXTERN_C String_t* _stringLiteral7F732453125C5B4A32BCACFFD3CF6642CD782F32;
IL2CPP_EXTERN_C String_t* _stringLiteralA3B04FC3FACFFF139443741AEA1D528AE16125D7;
IL2CPP_EXTERN_C String_t* _stringLiteralD791C66A3CB34CB17907C57EDD95A45D4C08CDDE;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralECAC9756AB416770CE66B9411AB7AEB8B8181309;
IL2CPP_EXTERN_C String_t* _stringLiteralEDCE3DE3D52F18B82F82B1223F128979DB936DDE;
IL2CPP_EXTERN_C const RuntimeMethod* ARTrackableManager_5_get_trackables_m1868AA38C59A0E75D2FA03964898FB15577FD7E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m478435EC913232FA753676196AF119F5001564B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4_m7BA2917E127FC45DCAF97AF959F8BE832F8D1846_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F_m06FA2C50C4CE43EB1459B81753EFF12567E93770_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimDropdown_t734E84963601DD70BDA49545C64952B6CCB52FD7_m31F47D087B780D0EFDA1397D8A3A61DFF5F4B78B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m8851C6AF7F94A1DA72F501CF96435967687E41E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m7B1612DAAC58ADB707313836D78A8FB4556FEBC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m3FC6EB738CC4A9E285D6330B2352769B37B32B20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m80950D4BAC47AA3A0B7E50B2C2E0606342C9011D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m037FDB6FB9E61ECDB0D7F5AB2373A57E01AE500C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m89255A16DAE894CEA174A88A674162B09592C8C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mAD42DB33FFA5B95D44127214BCD44B64BE5FE094_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m3D5E7C33ACC22CA9FBB0725D35D75D86592FFB29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m8F54706BF35C304C986CE96C30148CF4911A9374_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisVideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86_mD1CFC66F6C6D8A6EF825A2012512F0709B2D3188_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImageTracking_ImageChanged_mF71CEAFEC17C56EA45ED003E88C0A51609B8105A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC2611000DA97145D1DFC867ECA604FBB3E8628EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m364FE8EB7E663EEC71E574FD554BE600FD5A0D86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC26889C0423CCF594A8C363532AC63BB0DB25201_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m200A6C390D1FAEF2378D70230BD6E96D492ABE04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mF979E11037D572E72D866EC260EF0434EF296E67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisARTrackedImageManager_tB916E34D053E6712190F2BAE46E21D76A0882FF2_m660417E625FD0A66345200E2670A25DD17AA6A22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextureScale_BilinearScale_m8083AFB865014130774167B8D017933D18B4C3B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextureScale_PointScale_m4C9D1E67BF1A55E2F553312F9824145EA8DD0331_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableCollection_1_GetEnumerator_mAB63B26E604CFE12281E5B212826C7609CF11A5C_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA;
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct VideoClipU5BU5D_t6683BD7FA0E3C2C85483295CBB3727AD422ED431;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tE42F4CA2251E4564157940892384BFB9EBE58D61* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t1A5E6B675EFA5A7901D7B04966A914995A34ECFF * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t530059B6E09E07208AE8745C3EA5EC32BA6C17F6 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C, ___entries_1)); }
	inline EntryU5BU5D_tE42F4CA2251E4564157940892384BFB9EBE58D61* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tE42F4CA2251E4564157940892384BFB9EBE58D61** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tE42F4CA2251E4564157940892384BFB9EBE58D61* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C, ___keys_7)); }
	inline KeyCollection_t1A5E6B675EFA5A7901D7B04966A914995A34ECFF * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t1A5E6B675EFA5A7901D7B04966A914995A34ECFF ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t1A5E6B675EFA5A7901D7B04966A914995A34ECFF * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C, ___values_8)); }
	inline ValueCollection_t530059B6E09E07208AE8745C3EA5EC32BA6C17F6 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t530059B6E09E07208AE8745C3EA5EC32BA6C17F6 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t530059B6E09E07208AE8745C3EA5EC32BA6C17F6 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D, ____items_1)); }
	inline ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA* get__items_1() const { return ____items_1; }
	inline ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D_StaticFields, ____emptyArray_5)); }
	inline ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>
struct List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ARTrackedImageU5BU5D_t63FA636B7BA07C17EE59D7707CEED317A3B23142* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F, ____items_1)); }
	inline ARTrackedImageU5BU5D_t63FA636B7BA07C17EE59D7707CEED317A3B23142* get__items_1() const { return ____items_1; }
	inline ARTrackedImageU5BU5D_t63FA636B7BA07C17EE59D7707CEED317A3B23142** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ARTrackedImageU5BU5D_t63FA636B7BA07C17EE59D7707CEED317A3B23142* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ARTrackedImageU5BU5D_t63FA636B7BA07C17EE59D7707CEED317A3B23142* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F_StaticFields, ____emptyArray_5)); }
	inline ARTrackedImageU5BU5D_t63FA636B7BA07C17EE59D7707CEED317A3B23142* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ARTrackedImageU5BU5D_t63FA636B7BA07C17EE59D7707CEED317A3B23142** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ARTrackedImageU5BU5D_t63FA636B7BA07C17EE59D7707CEED317A3B23142* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>
struct List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4, ____items_1)); }
	inline OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5* get__items_1() const { return ____items_1; }
	inline OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4_StaticFields, ____emptyArray_5)); }
	inline OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5* get__emptyArray_5() const { return ____emptyArray_5; }
	inline OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997  : public RuntimeObject
{
public:

public:
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// TextureScale
struct TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6  : public RuntimeObject
{
public:

public:
};

struct TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields
{
public:
	// UnityEngine.Color[] TextureScale::texColors
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ___texColors_0;
	// UnityEngine.Color[] TextureScale::newColors
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ___newColors_1;
	// System.Int32 TextureScale::w
	int32_t ___w_2;
	// System.Single TextureScale::ratioX
	float ___ratioX_3;
	// System.Single TextureScale::ratioY
	float ___ratioY_4;
	// System.Int32 TextureScale::w2
	int32_t ___w2_5;
	// System.Int32 TextureScale::finishCount
	int32_t ___finishCount_6;
	// System.Threading.Mutex TextureScale::mutex
	Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5 * ___mutex_7;

public:
	inline static int32_t get_offset_of_texColors_0() { return static_cast<int32_t>(offsetof(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields, ___texColors_0)); }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* get_texColors_0() const { return ___texColors_0; }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834** get_address_of_texColors_0() { return &___texColors_0; }
	inline void set_texColors_0(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* value)
	{
		___texColors_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___texColors_0), (void*)value);
	}

	inline static int32_t get_offset_of_newColors_1() { return static_cast<int32_t>(offsetof(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields, ___newColors_1)); }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* get_newColors_1() const { return ___newColors_1; }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834** get_address_of_newColors_1() { return &___newColors_1; }
	inline void set_newColors_1(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* value)
	{
		___newColors_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___newColors_1), (void*)value);
	}

	inline static int32_t get_offset_of_w_2() { return static_cast<int32_t>(offsetof(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields, ___w_2)); }
	inline int32_t get_w_2() const { return ___w_2; }
	inline int32_t* get_address_of_w_2() { return &___w_2; }
	inline void set_w_2(int32_t value)
	{
		___w_2 = value;
	}

	inline static int32_t get_offset_of_ratioX_3() { return static_cast<int32_t>(offsetof(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields, ___ratioX_3)); }
	inline float get_ratioX_3() const { return ___ratioX_3; }
	inline float* get_address_of_ratioX_3() { return &___ratioX_3; }
	inline void set_ratioX_3(float value)
	{
		___ratioX_3 = value;
	}

	inline static int32_t get_offset_of_ratioY_4() { return static_cast<int32_t>(offsetof(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields, ___ratioY_4)); }
	inline float get_ratioY_4() const { return ___ratioY_4; }
	inline float* get_address_of_ratioY_4() { return &___ratioY_4; }
	inline void set_ratioY_4(float value)
	{
		___ratioY_4 = value;
	}

	inline static int32_t get_offset_of_w2_5() { return static_cast<int32_t>(offsetof(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields, ___w2_5)); }
	inline int32_t get_w2_5() const { return ___w2_5; }
	inline int32_t* get_address_of_w2_5() { return &___w2_5; }
	inline void set_w2_5(int32_t value)
	{
		___w2_5 = value;
	}

	inline static int32_t get_offset_of_finishCount_6() { return static_cast<int32_t>(offsetof(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields, ___finishCount_6)); }
	inline int32_t get_finishCount_6() const { return ___finishCount_6; }
	inline int32_t* get_address_of_finishCount_6() { return &___finishCount_6; }
	inline void set_finishCount_6(int32_t value)
	{
		___finishCount_6 = value;
	}

	inline static int32_t get_offset_of_mutex_7() { return static_cast<int32_t>(offsetof(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields, ___mutex_7)); }
	inline Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5 * get_mutex_7() const { return ___mutex_7; }
	inline Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5 ** get_address_of_mutex_7() { return &___mutex_7; }
	inline void set_mutex_7(Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5 * value)
	{
		___mutex_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mutex_7), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857  : public RuntimeObject
{
public:
	// System.String UnityEngine.UI.Dropdown/OptionData::m_Text
	String_t* ___m_Text_0;
	// UnityEngine.Sprite UnityEngine.UI.Dropdown/OptionData::m_Image
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Image_1;

public:
	inline static int32_t get_offset_of_m_Text_0() { return static_cast<int32_t>(offsetof(OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857, ___m_Text_0)); }
	inline String_t* get_m_Text_0() const { return ___m_Text_0; }
	inline String_t** get_address_of_m_Text_0() { return &___m_Text_0; }
	inline void set_m_Text_0(String_t* value)
	{
		___m_Text_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Image_1() { return static_cast<int32_t>(offsetof(OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857, ___m_Image_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Image_1() const { return ___m_Image_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Image_1() { return &___m_Image_1; }
	inline void set_m_Image_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Image_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Image_1), (void*)value);
	}
};


// TextureScale/ThreadData
struct ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A  : public RuntimeObject
{
public:
	// System.Int32 TextureScale/ThreadData::start
	int32_t ___start_0;
	// System.Int32 TextureScale/ThreadData::end
	int32_t ___end_1;

public:
	inline static int32_t get_offset_of_start_0() { return static_cast<int32_t>(offsetof(ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A, ___start_0)); }
	inline int32_t get_start_0() const { return ___start_0; }
	inline int32_t* get_address_of_start_0() { return &___start_0; }
	inline void set_start_0(int32_t value)
	{
		___start_0 = value;
	}

	inline static int32_t get_offset_of_end_1() { return static_cast<int32_t>(offsetof(ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A, ___end_1)); }
	inline int32_t get_end_1() const { return ___end_1; }
	inline int32_t* get_address_of_end_1() { return &___end_1; }
	inline void set_end_1(int32_t value)
	{
		___end_1 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARTrackedImage>
struct Enumerator_t38DCEDBB06600CDABFF1967A5F011738638CE8F4 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	ARTrackedImage_t32B829A81320BCDF3A743DCD4DC4383BA266C5B7 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t38DCEDBB06600CDABFF1967A5F011738638CE8F4, ___list_0)); }
	inline List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * get_list_0() const { return ___list_0; }
	inline List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t38DCEDBB06600CDABFF1967A5F011738638CE8F4, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t38DCEDBB06600CDABFF1967A5F011738638CE8F4, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t38DCEDBB06600CDABFF1967A5F011738638CE8F4, ___current_3)); }
	inline ARTrackedImage_t32B829A81320BCDF3A743DCD4DC4383BA266C5B7 * get_current_3() const { return ___current_3; }
	inline ARTrackedImage_t32B829A81320BCDF3A743DCD4DC4383BA266C5B7 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(ARTrackedImage_t32B829A81320BCDF3A743DCD4DC4383BA266C5B7 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.TrackableCollection`1<UnityEngine.XR.ARFoundation.ARPlane>
struct TrackableCollection_1_tF901F9001ABC2CCCF561F7CB246E74516ABB8EFB 
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.TrackableCollection`1::m_Trackables
	Dictionary_2_t712D6B074B6A493ABA07777BD08F1A62D9DE2534 * ___m_Trackables_0;

public:
	inline static int32_t get_offset_of_m_Trackables_0() { return static_cast<int32_t>(offsetof(TrackableCollection_1_tF901F9001ABC2CCCF561F7CB246E74516ABB8EFB, ___m_Trackables_0)); }
	inline Dictionary_2_t712D6B074B6A493ABA07777BD08F1A62D9DE2534 * get_m_Trackables_0() const { return ___m_Trackables_0; }
	inline Dictionary_2_t712D6B074B6A493ABA07777BD08F1A62D9DE2534 ** get_address_of_m_Trackables_0() { return &___m_Trackables_0; }
	inline void set_m_Trackables_0(Dictionary_2_t712D6B074B6A493ABA07777BD08F1A62D9DE2534 * value)
	{
		___m_Trackables_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Trackables_0), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>
struct TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.TrackableCollection`1::m_Trackables
	Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * ___m_Trackables_0;

public:
	inline static int32_t get_offset_of_m_Trackables_0() { return static_cast<int32_t>(offsetof(TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2, ___m_Trackables_0)); }
	inline Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * get_m_Trackables_0() const { return ___m_Trackables_0; }
	inline Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 ** get_address_of_m_Trackables_0() { return &___m_Trackables_0; }
	inline void set_m_Trackables_0(Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * value)
	{
		___m_Trackables_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Trackables_0), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs
struct ARTrackedImagesChangedEventArgs_t6EA8225CE7DB5A2148855F99D437DFA5786A1B7C 
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage> UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::<added>k__BackingField
	List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * ___U3CaddedU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage> UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::<updated>k__BackingField
	List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * ___U3CupdatedU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage> UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::<removed>k__BackingField
	List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * ___U3CremovedU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CaddedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ARTrackedImagesChangedEventArgs_t6EA8225CE7DB5A2148855F99D437DFA5786A1B7C, ___U3CaddedU3Ek__BackingField_0)); }
	inline List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * get_U3CaddedU3Ek__BackingField_0() const { return ___U3CaddedU3Ek__BackingField_0; }
	inline List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F ** get_address_of_U3CaddedU3Ek__BackingField_0() { return &___U3CaddedU3Ek__BackingField_0; }
	inline void set_U3CaddedU3Ek__BackingField_0(List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * value)
	{
		___U3CaddedU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CaddedU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CupdatedU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ARTrackedImagesChangedEventArgs_t6EA8225CE7DB5A2148855F99D437DFA5786A1B7C, ___U3CupdatedU3Ek__BackingField_1)); }
	inline List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * get_U3CupdatedU3Ek__BackingField_1() const { return ___U3CupdatedU3Ek__BackingField_1; }
	inline List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F ** get_address_of_U3CupdatedU3Ek__BackingField_1() { return &___U3CupdatedU3Ek__BackingField_1; }
	inline void set_U3CupdatedU3Ek__BackingField_1(List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * value)
	{
		___U3CupdatedU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CupdatedU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CremovedU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ARTrackedImagesChangedEventArgs_t6EA8225CE7DB5A2148855F99D437DFA5786A1B7C, ___U3CremovedU3Ek__BackingField_2)); }
	inline List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * get_U3CremovedU3Ek__BackingField_2() const { return ___U3CremovedU3Ek__BackingField_2; }
	inline List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F ** get_address_of_U3CremovedU3Ek__BackingField_2() { return &___U3CremovedU3Ek__BackingField_2; }
	inline void set_U3CremovedU3Ek__BackingField_2(List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * value)
	{
		___U3CremovedU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CremovedU3Ek__BackingField_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs
struct ARTrackedImagesChangedEventArgs_t6EA8225CE7DB5A2148855F99D437DFA5786A1B7C_marshaled_pinvoke
{
	List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * ___U3CaddedU3Ek__BackingField_0;
	List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * ___U3CupdatedU3Ek__BackingField_1;
	List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * ___U3CremovedU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs
struct ARTrackedImagesChangedEventArgs_t6EA8225CE7DB5A2148855F99D437DFA5786A1B7C_marshaled_com
{
	List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * ___U3CaddedU3Ek__BackingField_0;
	List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * ___U3CupdatedU3Ek__BackingField_1;
	List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * ___U3CremovedU3Ek__BackingField_2;
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Guid
struct Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.XR.ARSubsystems.SerializableGuid
struct SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC 
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.SerializableGuid::m_GuidLow
	uint64_t ___m_GuidLow_1;
	// System.UInt64 UnityEngine.XR.ARSubsystems.SerializableGuid::m_GuidHigh
	uint64_t ___m_GuidHigh_2;

public:
	inline static int32_t get_offset_of_m_GuidLow_1() { return static_cast<int32_t>(offsetof(SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC, ___m_GuidLow_1)); }
	inline uint64_t get_m_GuidLow_1() const { return ___m_GuidLow_1; }
	inline uint64_t* get_address_of_m_GuidLow_1() { return &___m_GuidLow_1; }
	inline void set_m_GuidLow_1(uint64_t value)
	{
		___m_GuidLow_1 = value;
	}

	inline static int32_t get_offset_of_m_GuidHigh_2() { return static_cast<int32_t>(offsetof(SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC, ___m_GuidHigh_2)); }
	inline uint64_t get_m_GuidHigh_2() const { return ___m_GuidHigh_2; }
	inline uint64_t* get_address_of_m_GuidHigh_2() { return &___m_GuidHigh_2; }
	inline void set_m_GuidHigh_2(uint64_t value)
	{
		___m_GuidHigh_2 = value;
	}
};

struct SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.SerializableGuid UnityEngine.XR.ARSubsystems.SerializableGuid::k_Empty
	SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  ___k_Empty_0;

public:
	inline static int32_t get_offset_of_k_Empty_0() { return static_cast<int32_t>(offsetof(SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC_StaticFields, ___k_Empty_0)); }
	inline SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  get_k_Empty_0() const { return ___k_Empty_0; }
	inline SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC * get_address_of_k_Empty_0() { return &___k_Empty_0; }
	inline void set_k_Empty_0(SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  value)
	{
		___k_Empty_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// System.Threading.Thread
struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414  : public CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997
{
public:
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject * ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject * ___pending_exception_8;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_9;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_10;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t * ___m_Delegate_12;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * ___m_ExecutionContext_13;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_14;

public:
	inline static int32_t get_offset_of_internal_thread_6() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___internal_thread_6)); }
	inline InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * get_internal_thread_6() const { return ___internal_thread_6; }
	inline InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB ** get_address_of_internal_thread_6() { return &___internal_thread_6; }
	inline void set_internal_thread_6(InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * value)
	{
		___internal_thread_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internal_thread_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ThreadStartArg_7() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ThreadStartArg_7)); }
	inline RuntimeObject * get_m_ThreadStartArg_7() const { return ___m_ThreadStartArg_7; }
	inline RuntimeObject ** get_address_of_m_ThreadStartArg_7() { return &___m_ThreadStartArg_7; }
	inline void set_m_ThreadStartArg_7(RuntimeObject * value)
	{
		___m_ThreadStartArg_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ThreadStartArg_7), (void*)value);
	}

	inline static int32_t get_offset_of_pending_exception_8() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___pending_exception_8)); }
	inline RuntimeObject * get_pending_exception_8() const { return ___pending_exception_8; }
	inline RuntimeObject ** get_address_of_pending_exception_8() { return &___pending_exception_8; }
	inline void set_pending_exception_8(RuntimeObject * value)
	{
		___pending_exception_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pending_exception_8), (void*)value);
	}

	inline static int32_t get_offset_of_principal_9() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___principal_9)); }
	inline RuntimeObject* get_principal_9() const { return ___principal_9; }
	inline RuntimeObject** get_address_of_principal_9() { return &___principal_9; }
	inline void set_principal_9(RuntimeObject* value)
	{
		___principal_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___principal_9), (void*)value);
	}

	inline static int32_t get_offset_of_principal_version_10() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___principal_version_10)); }
	inline int32_t get_principal_version_10() const { return ___principal_version_10; }
	inline int32_t* get_address_of_principal_version_10() { return &___principal_version_10; }
	inline void set_principal_version_10(int32_t value)
	{
		___principal_version_10 = value;
	}

	inline static int32_t get_offset_of_m_Delegate_12() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_Delegate_12)); }
	inline MulticastDelegate_t * get_m_Delegate_12() const { return ___m_Delegate_12; }
	inline MulticastDelegate_t ** get_address_of_m_Delegate_12() { return &___m_Delegate_12; }
	inline void set_m_Delegate_12(MulticastDelegate_t * value)
	{
		___m_Delegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Delegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContext_13() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ExecutionContext_13)); }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * get_m_ExecutionContext_13() const { return ___m_ExecutionContext_13; }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 ** get_address_of_m_ExecutionContext_13() { return &___m_ExecutionContext_13; }
	inline void set_m_ExecutionContext_13(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * value)
	{
		___m_ExecutionContext_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExecutionContext_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContextBelongsToOuterScope_14() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ExecutionContextBelongsToOuterScope_14)); }
	inline bool get_m_ExecutionContextBelongsToOuterScope_14() const { return ___m_ExecutionContextBelongsToOuterScope_14; }
	inline bool* get_address_of_m_ExecutionContextBelongsToOuterScope_14() { return &___m_ExecutionContextBelongsToOuterScope_14; }
	inline void set_m_ExecutionContextBelongsToOuterScope_14(bool value)
	{
		___m_ExecutionContextBelongsToOuterScope_14 = value;
	}
};

struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields
{
public:
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * ___s_asyncLocalCurrentUICulture_5;

public:
	inline static int32_t get_offset_of_s_LocalDataStoreMgr_0() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_LocalDataStoreMgr_0)); }
	inline LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * get_s_LocalDataStoreMgr_0() const { return ___s_LocalDataStoreMgr_0; }
	inline LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A ** get_address_of_s_LocalDataStoreMgr_0() { return &___s_LocalDataStoreMgr_0; }
	inline void set_s_LocalDataStoreMgr_0(LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * value)
	{
		___s_LocalDataStoreMgr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStoreMgr_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentCulture_4() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_asyncLocalCurrentCulture_4)); }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * get_s_asyncLocalCurrentCulture_4() const { return ___s_asyncLocalCurrentCulture_4; }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 ** get_address_of_s_asyncLocalCurrentCulture_4() { return &___s_asyncLocalCurrentCulture_4; }
	inline void set_s_asyncLocalCurrentCulture_4(AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * value)
	{
		___s_asyncLocalCurrentCulture_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentCulture_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentUICulture_5() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_asyncLocalCurrentUICulture_5)); }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * get_s_asyncLocalCurrentUICulture_5() const { return ___s_asyncLocalCurrentUICulture_5; }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 ** get_address_of_s_asyncLocalCurrentUICulture_5() { return &___s_asyncLocalCurrentUICulture_5; }
	inline void set_s_asyncLocalCurrentUICulture_5(AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * value)
	{
		___s_asyncLocalCurrentUICulture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentUICulture_5), (void*)value);
	}
};

struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields
{
public:
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ___current_thread_11;

public:
	inline static int32_t get_offset_of_s_LocalDataStore_1() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___s_LocalDataStore_1)); }
	inline LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * get_s_LocalDataStore_1() const { return ___s_LocalDataStore_1; }
	inline LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 ** get_address_of_s_LocalDataStore_1() { return &___s_LocalDataStore_1; }
	inline void set_s_LocalDataStore_1(LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * value)
	{
		___s_LocalDataStore_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStore_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentCulture_2() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___m_CurrentCulture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_m_CurrentCulture_2() const { return ___m_CurrentCulture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_m_CurrentCulture_2() { return &___m_CurrentCulture_2; }
	inline void set_m_CurrentCulture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___m_CurrentCulture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentCulture_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentUICulture_3() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___m_CurrentUICulture_3)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_m_CurrentUICulture_3() const { return ___m_CurrentUICulture_3; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_m_CurrentUICulture_3() { return &___m_CurrentUICulture_3; }
	inline void set_m_CurrentUICulture_3(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___m_CurrentUICulture_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentUICulture_3), (void*)value);
	}

	inline static int32_t get_offset_of_current_thread_11() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___current_thread_11)); }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * get_current_thread_11() const { return ___current_thread_11; }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 ** get_address_of_current_thread_11() { return &___current_thread_11; }
	inline void set_current_thread_11(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * value)
	{
		___current_thread_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_thread_11), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B 
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;

public:
	inline static int32_t get_offset_of_m_SubId1_2() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B, ___m_SubId1_2)); }
	inline uint64_t get_m_SubId1_2() const { return ___m_SubId1_2; }
	inline uint64_t* get_address_of_m_SubId1_2() { return &___m_SubId1_2; }
	inline void set_m_SubId1_2(uint64_t value)
	{
		___m_SubId1_2 = value;
	}

	inline static int32_t get_offset_of_m_SubId2_3() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B, ___m_SubId2_3)); }
	inline uint64_t get_m_SubId2_3() const { return ___m_SubId2_3; }
	inline uint64_t* get_address_of_m_SubId2_3() { return &___m_SubId2_3; }
	inline void set_m_SubId2_3(uint64_t value)
	{
		___m_SubId2_3 = value;
	}
};

struct TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields
{
public:
	// System.Text.RegularExpressions.Regex UnityEngine.XR.ARSubsystems.TrackableId::s_TrackableIdRegex
	Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * ___s_TrackableIdRegex_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___s_InvalidId_1;

public:
	inline static int32_t get_offset_of_s_TrackableIdRegex_0() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields, ___s_TrackableIdRegex_0)); }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * get_s_TrackableIdRegex_0() const { return ___s_TrackableIdRegex_0; }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F ** get_address_of_s_TrackableIdRegex_0() { return &___s_TrackableIdRegex_0; }
	inline void set_s_TrackableIdRegex_0(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * value)
	{
		___s_TrackableIdRegex_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TrackableIdRegex_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_InvalidId_1() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields, ___s_InvalidId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_s_InvalidId_1() const { return ___s_InvalidId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_s_InvalidId_1() { return &___s_InvalidId_1; }
	inline void set_s_InvalidId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___s_InvalidId_1 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARPlane>
struct KeyValuePair_2_t9CC8D1EE96D79DB3676F4199981C4AA3321FAF70 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t9CC8D1EE96D79DB3676F4199981C4AA3321FAF70, ___key_0)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_key_0() const { return ___key_0; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t9CC8D1EE96D79DB3676F4199981C4AA3321FAF70, ___value_1)); }
	inline ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * get_value_1() const { return ___value_1; }
	inline ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>
struct KeyValuePair_2_t98F89C24FA7D45751355C66B2E2DE9584D1F5C3D 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t98F89C24FA7D45751355C66B2E2DE9584D1F5C3D, ___key_0)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_key_0() const { return ___key_0; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t98F89C24FA7D45751355C66B2E2DE9584D1F5C3D, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// Unity.Collections.Allocator
struct Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.XR.ARSubsystems.PlaneAlignment
struct PlaneAlignment_t1BB7048E3969913434FB1B3BCBCA2E81D4E71ADA 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.PlaneAlignment::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlaneAlignment_t1BB7048E3969913434FB1B3BCBCA2E81D4E71ADA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.PlaneClassification
struct PlaneClassification_tAC2E2E9609D4396BC311E2987CA3EFA5115EDD10 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.PlaneClassification::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlaneClassification_tAC2E2E9609D4396BC311E2987CA3EFA5115EDD10, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.PlaneDetectionMode
struct PlaneDetectionMode_t22DC72CB3F42DDC9A2472A66F8119475357B48CD 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.PlaneDetectionMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlaneDetectionMode_t22DC72CB3F42DDC9A2472A66F8119475357B48CD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Pose
struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___rotation_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields, ___k_Identity_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___k_Identity_2 = value;
	}
};


// UnityEngine.Space
struct Space_t568D704D2B0AAC3E5894DDFF13DB2E02E2CD539E 
{
public:
	// System.Int32 UnityEngine.Space::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Space_t568D704D2B0AAC3E5894DDFF13DB2E02E2CD539E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchPhase
struct TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchType
struct TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableType
struct TrackableType_t2352F7091A5BE0192C8D908019BA7481A347C85F 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackableType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackableType_t2352F7091A5BE0192C8D908019BA7481A347C85F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingState
struct TrackingState_tB6996ED0D52D2A17DFACC90800705B81D370FC38 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_tB6996ED0D52D2A17DFACC90800705B81D370FC38, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;

public:
	inline static int32_t get_offset_of_waitHandle_3() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___waitHandle_3)); }
	inline intptr_t get_waitHandle_3() const { return ___waitHandle_3; }
	inline intptr_t* get_address_of_waitHandle_3() { return &___waitHandle_3; }
	inline void set_waitHandle_3(intptr_t value)
	{
		___waitHandle_3 = value;
	}

	inline static int32_t get_offset_of_safeWaitHandle_4() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___safeWaitHandle_4)); }
	inline SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * get_safeWaitHandle_4() const { return ___safeWaitHandle_4; }
	inline SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 ** get_address_of_safeWaitHandle_4() { return &___safeWaitHandle_4; }
	inline void set_safeWaitHandle_4(SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * value)
	{
		___safeWaitHandle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeWaitHandle_4), (void*)value);
	}

	inline static int32_t get_offset_of_hasThreadAffinity_5() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___hasThreadAffinity_5)); }
	inline bool get_hasThreadAffinity_5() const { return ___hasThreadAffinity_5; }
	inline bool* get_address_of_hasThreadAffinity_5() { return &___hasThreadAffinity_5; }
	inline void set_hasThreadAffinity_5(bool value)
	{
		___hasThreadAffinity_5 = value;
	}
};

struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_StaticFields
{
public:
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_10;

public:
	inline static int32_t get_offset_of_InvalidHandle_10() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_StaticFields, ___InvalidHandle_10)); }
	inline intptr_t get_InvalidHandle_10() const { return ___InvalidHandle_10; }
	inline intptr_t* get_address_of_InvalidHandle_10() { return &___InvalidHandle_10; }
	inline void set_InvalidHandle_10(intptr_t value)
	{
		___InvalidHandle_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshaled_pinvoke : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshaled_com : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// UnityEngine.XR.ARSubsystems.XRReferenceImage
struct XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467 
{
public:
	// UnityEngine.XR.ARSubsystems.SerializableGuid UnityEngine.XR.ARSubsystems.XRReferenceImage::m_SerializedGuid
	SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  ___m_SerializedGuid_0;
	// UnityEngine.XR.ARSubsystems.SerializableGuid UnityEngine.XR.ARSubsystems.XRReferenceImage::m_SerializedTextureGuid
	SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  ___m_SerializedTextureGuid_1;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRReferenceImage::m_Size
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Size_2;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRReferenceImage::m_SpecifySize
	bool ___m_SpecifySize_3;
	// System.String UnityEngine.XR.ARSubsystems.XRReferenceImage::m_Name
	String_t* ___m_Name_4;
	// UnityEngine.Texture2D UnityEngine.XR.ARSubsystems.XRReferenceImage::m_Texture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___m_Texture_5;

public:
	inline static int32_t get_offset_of_m_SerializedGuid_0() { return static_cast<int32_t>(offsetof(XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467, ___m_SerializedGuid_0)); }
	inline SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  get_m_SerializedGuid_0() const { return ___m_SerializedGuid_0; }
	inline SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC * get_address_of_m_SerializedGuid_0() { return &___m_SerializedGuid_0; }
	inline void set_m_SerializedGuid_0(SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  value)
	{
		___m_SerializedGuid_0 = value;
	}

	inline static int32_t get_offset_of_m_SerializedTextureGuid_1() { return static_cast<int32_t>(offsetof(XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467, ___m_SerializedTextureGuid_1)); }
	inline SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  get_m_SerializedTextureGuid_1() const { return ___m_SerializedTextureGuid_1; }
	inline SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC * get_address_of_m_SerializedTextureGuid_1() { return &___m_SerializedTextureGuid_1; }
	inline void set_m_SerializedTextureGuid_1(SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  value)
	{
		___m_SerializedTextureGuid_1 = value;
	}

	inline static int32_t get_offset_of_m_Size_2() { return static_cast<int32_t>(offsetof(XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467, ___m_Size_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Size_2() const { return ___m_Size_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Size_2() { return &___m_Size_2; }
	inline void set_m_Size_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Size_2 = value;
	}

	inline static int32_t get_offset_of_m_SpecifySize_3() { return static_cast<int32_t>(offsetof(XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467, ___m_SpecifySize_3)); }
	inline bool get_m_SpecifySize_3() const { return ___m_SpecifySize_3; }
	inline bool* get_address_of_m_SpecifySize_3() { return &___m_SpecifySize_3; }
	inline void set_m_SpecifySize_3(bool value)
	{
		___m_SpecifySize_3 = value;
	}

	inline static int32_t get_offset_of_m_Name_4() { return static_cast<int32_t>(offsetof(XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467, ___m_Name_4)); }
	inline String_t* get_m_Name_4() const { return ___m_Name_4; }
	inline String_t** get_address_of_m_Name_4() { return &___m_Name_4; }
	inline void set_m_Name_4(String_t* value)
	{
		___m_Name_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Texture_5() { return static_cast<int32_t>(offsetof(XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467, ___m_Texture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_m_Texture_5() const { return ___m_Texture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_m_Texture_5() { return &___m_Texture_5; }
	inline void set_m_Texture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___m_Texture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Texture_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRReferenceImage
struct XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467_marshaled_pinvoke
{
	SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  ___m_SerializedGuid_0;
	SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  ___m_SerializedTextureGuid_1;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Size_2;
	int32_t ___m_SpecifySize_3;
	char* ___m_Name_4;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___m_Texture_5;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRReferenceImage
struct XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467_marshaled_com
{
	SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  ___m_SerializedGuid_0;
	SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  ___m_SerializedTextureGuid_1;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Size_2;
	int32_t ___m_SpecifySize_3;
	Il2CppChar* ___m_Name_4;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___m_Texture_5;
};

// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARPlane>
struct Enumerator_tFBF5BAB98D8E00238ECA19A725978F837AD15C0C 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t712D6B074B6A493ABA07777BD08F1A62D9DE2534 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t9CC8D1EE96D79DB3676F4199981C4AA3321FAF70  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tFBF5BAB98D8E00238ECA19A725978F837AD15C0C, ___dictionary_0)); }
	inline Dictionary_2_t712D6B074B6A493ABA07777BD08F1A62D9DE2534 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t712D6B074B6A493ABA07777BD08F1A62D9DE2534 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t712D6B074B6A493ABA07777BD08F1A62D9DE2534 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tFBF5BAB98D8E00238ECA19A725978F837AD15C0C, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tFBF5BAB98D8E00238ECA19A725978F837AD15C0C, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tFBF5BAB98D8E00238ECA19A725978F837AD15C0C, ___current_3)); }
	inline KeyValuePair_2_t9CC8D1EE96D79DB3676F4199981C4AA3321FAF70  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t9CC8D1EE96D79DB3676F4199981C4AA3321FAF70 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t9CC8D1EE96D79DB3676F4199981C4AA3321FAF70  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tFBF5BAB98D8E00238ECA19A725978F837AD15C0C, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>
struct Enumerator_tBDE39976A6EDE25239B2A4BB32B174C88FEE9921 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t98F89C24FA7D45751355C66B2E2DE9584D1F5C3D  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tBDE39976A6EDE25239B2A4BB32B174C88FEE9921, ___dictionary_0)); }
	inline Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tBDE39976A6EDE25239B2A4BB32B174C88FEE9921, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tBDE39976A6EDE25239B2A4BB32B174C88FEE9921, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tBDE39976A6EDE25239B2A4BB32B174C88FEE9921, ___current_3)); }
	inline KeyValuePair_2_t98F89C24FA7D45751355C66B2E2DE9584D1F5C3D  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t98F89C24FA7D45751355C66B2E2DE9584D1F5C3D * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t98F89C24FA7D45751355C66B2E2DE9584D1F5C3D  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tBDE39976A6EDE25239B2A4BB32B174C88FEE9921, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Vector2>
struct NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.BoundedPlane
struct BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_1;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_SubsumedById
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_SubsumedById_2;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Center
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Center_3;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.BoundedPlane::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_4;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Size
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Size_5;
	// UnityEngine.XR.ARSubsystems.PlaneAlignment UnityEngine.XR.ARSubsystems.BoundedPlane::m_Alignment
	int32_t ___m_Alignment_6;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackingState
	int32_t ___m_TrackingState_7;
	// System.IntPtr UnityEngine.XR.ARSubsystems.BoundedPlane::m_NativePtr
	intptr_t ___m_NativePtr_8;
	// UnityEngine.XR.ARSubsystems.PlaneClassification UnityEngine.XR.ARSubsystems.BoundedPlane::m_Classification
	int32_t ___m_Classification_9;

public:
	inline static int32_t get_offset_of_m_TrackableId_1() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_TrackableId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_1() const { return ___m_TrackableId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_1() { return &___m_TrackableId_1; }
	inline void set_m_TrackableId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_1 = value;
	}

	inline static int32_t get_offset_of_m_SubsumedById_2() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_SubsumedById_2)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_SubsumedById_2() const { return ___m_SubsumedById_2; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_SubsumedById_2() { return &___m_SubsumedById_2; }
	inline void set_m_SubsumedById_2(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_SubsumedById_2 = value;
	}

	inline static int32_t get_offset_of_m_Center_3() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Center_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Center_3() const { return ___m_Center_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Center_3() { return &___m_Center_3; }
	inline void set_m_Center_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Center_3 = value;
	}

	inline static int32_t get_offset_of_m_Pose_4() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Pose_4)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_4() const { return ___m_Pose_4; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_4() { return &___m_Pose_4; }
	inline void set_m_Pose_4(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_4 = value;
	}

	inline static int32_t get_offset_of_m_Size_5() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Size_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Size_5() const { return ___m_Size_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Size_5() { return &___m_Size_5; }
	inline void set_m_Size_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Size_5 = value;
	}

	inline static int32_t get_offset_of_m_Alignment_6() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Alignment_6)); }
	inline int32_t get_m_Alignment_6() const { return ___m_Alignment_6; }
	inline int32_t* get_address_of_m_Alignment_6() { return &___m_Alignment_6; }
	inline void set_m_Alignment_6(int32_t value)
	{
		___m_Alignment_6 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_7() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_TrackingState_7)); }
	inline int32_t get_m_TrackingState_7() const { return ___m_TrackingState_7; }
	inline int32_t* get_address_of_m_TrackingState_7() { return &___m_TrackingState_7; }
	inline void set_m_TrackingState_7(int32_t value)
	{
		___m_TrackingState_7 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_8() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_NativePtr_8)); }
	inline intptr_t get_m_NativePtr_8() const { return ___m_NativePtr_8; }
	inline intptr_t* get_address_of_m_NativePtr_8() { return &___m_NativePtr_8; }
	inline void set_m_NativePtr_8(intptr_t value)
	{
		___m_NativePtr_8 = value;
	}

	inline static int32_t get_offset_of_m_Classification_9() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Classification_9)); }
	inline int32_t get_m_Classification_9() const { return ___m_Classification_9; }
	inline int32_t* get_address_of_m_Classification_9() { return &___m_Classification_9; }
	inline void set_m_Classification_9(int32_t value)
	{
		___m_Classification_9 = value;
	}
};

struct BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.BoundedPlane UnityEngine.XR.ARSubsystems.BoundedPlane::s_Default
	BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_StaticFields, ___s_Default_0)); }
	inline BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  get_s_Default_0() const { return ___s_Default_0; }
	inline BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Threading.Mutex
struct Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5  : public WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842
{
public:

public:
};


// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// UnityEngine.Touch
struct Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Position_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RawPosition_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_PositionDelta_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};


// UnityEngine.Video.VideoClip
struct VideoClip_tA8C2507553BEE394C46B7A876D6F56DD09F6C90F  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRRaycastHit
struct XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycastHit::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_2;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastHit::m_HitType
	int32_t ___m_HitType_4;

public:
	inline static int32_t get_offset_of_m_TrackableId_1() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB, ___m_TrackableId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_1() const { return ___m_TrackableId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_1() { return &___m_TrackableId_1; }
	inline void set_m_TrackableId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB, ___m_Pose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_HitType_4() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB, ___m_HitType_4)); }
	inline int32_t get_m_HitType_4() const { return ___m_HitType_4; }
	inline int32_t* get_address_of_m_HitType_4() { return &___m_HitType_4; }
	inline void set_m_HitType_4(int32_t value)
	{
		___m_HitType_4 = value;
	}
};

struct XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARSubsystems.XRRaycastHit::s_Default
	XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_StaticFields, ___s_Default_0)); }
	inline XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  get_s_Default_0() const { return ___s_Default_0; }
	inline XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRTrackedImage
struct XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Id
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_Id_1;
	// System.Guid UnityEngine.XR.ARSubsystems.XRTrackedImage::m_SourceImageId
	Guid_t  ___m_SourceImageId_2;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_3;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Size
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Size_4;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRTrackedImage::m_TrackingState
	int32_t ___m_TrackingState_5;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTrackedImage::m_NativePtr
	intptr_t ___m_NativePtr_6;

public:
	inline static int32_t get_offset_of_m_Id_1() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F, ___m_Id_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_Id_1() const { return ___m_Id_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_Id_1() { return &___m_Id_1; }
	inline void set_m_Id_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_Id_1 = value;
	}

	inline static int32_t get_offset_of_m_SourceImageId_2() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F, ___m_SourceImageId_2)); }
	inline Guid_t  get_m_SourceImageId_2() const { return ___m_SourceImageId_2; }
	inline Guid_t * get_address_of_m_SourceImageId_2() { return &___m_SourceImageId_2; }
	inline void set_m_SourceImageId_2(Guid_t  value)
	{
		___m_SourceImageId_2 = value;
	}

	inline static int32_t get_offset_of_m_Pose_3() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F, ___m_Pose_3)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_3() const { return ___m_Pose_3; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_3() { return &___m_Pose_3; }
	inline void set_m_Pose_3(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_3 = value;
	}

	inline static int32_t get_offset_of_m_Size_4() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F, ___m_Size_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Size_4() const { return ___m_Size_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Size_4() { return &___m_Size_4; }
	inline void set_m_Size_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Size_4 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_5() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F, ___m_TrackingState_5)); }
	inline int32_t get_m_TrackingState_5() const { return ___m_TrackingState_5; }
	inline int32_t* get_address_of_m_TrackingState_5() { return &___m_TrackingState_5; }
	inline void set_m_TrackingState_5(int32_t value)
	{
		___m_TrackingState_5 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_6() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F, ___m_NativePtr_6)); }
	inline intptr_t get_m_NativePtr_6() const { return ___m_NativePtr_6; }
	inline intptr_t* get_address_of_m_NativePtr_6() { return &___m_NativePtr_6; }
	inline void set_m_NativePtr_6(intptr_t value)
	{
		___m_NativePtr_6 = value;
	}
};

struct XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRTrackedImage UnityEngine.XR.ARSubsystems.XRTrackedImage::s_Default
	XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F_StaticFields, ___s_Default_0)); }
	inline XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  get_s_Default_0() const { return ___s_Default_0; }
	inline XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  value)
	{
		___s_Default_0 = value;
	}
};


// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs>
struct Action_1_t19910F5D681EFD1901DBD0F742BD502089B49032  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<UnityEngine.XR.ARFoundation.ARPlane>
struct Enumerator_t7966991B2B4ED87E60D0CB1DA4C8228004A3D386 
{
public:
	// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator::m_Enumerator
	Enumerator_tFBF5BAB98D8E00238ECA19A725978F837AD15C0C  ___m_Enumerator_0;

public:
	inline static int32_t get_offset_of_m_Enumerator_0() { return static_cast<int32_t>(offsetof(Enumerator_t7966991B2B4ED87E60D0CB1DA4C8228004A3D386, ___m_Enumerator_0)); }
	inline Enumerator_tFBF5BAB98D8E00238ECA19A725978F837AD15C0C  get_m_Enumerator_0() const { return ___m_Enumerator_0; }
	inline Enumerator_tFBF5BAB98D8E00238ECA19A725978F837AD15C0C * get_address_of_m_Enumerator_0() { return &___m_Enumerator_0; }
	inline void set_m_Enumerator_0(Enumerator_tFBF5BAB98D8E00238ECA19A725978F837AD15C0C  value)
	{
		___m_Enumerator_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Enumerator_0))->___dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_Enumerator_0))->___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<System.Object>
struct Enumerator_t2E1E8D9B1C4E269F7D1A8823FA9D39B68490DB07 
{
public:
	// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator::m_Enumerator
	Enumerator_tBDE39976A6EDE25239B2A4BB32B174C88FEE9921  ___m_Enumerator_0;

public:
	inline static int32_t get_offset_of_m_Enumerator_0() { return static_cast<int32_t>(offsetof(Enumerator_t2E1E8D9B1C4E269F7D1A8823FA9D39B68490DB07, ___m_Enumerator_0)); }
	inline Enumerator_tBDE39976A6EDE25239B2A4BB32B174C88FEE9921  get_m_Enumerator_0() const { return ___m_Enumerator_0; }
	inline Enumerator_tBDE39976A6EDE25239B2A4BB32B174C88FEE9921 * get_address_of_m_Enumerator_0() { return &___m_Enumerator_0; }
	inline void set_m_Enumerator_0(Enumerator_tBDE39976A6EDE25239B2A4BB32B174C88FEE9921  value)
	{
		___m_Enumerator_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Enumerator_0))->___dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_Enumerator_0))->___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E 
{
public:
	// System.Single UnityEngine.XR.ARFoundation.ARRaycastHit::<distance>k__BackingField
	float ___U3CdistanceU3Ek__BackingField_0;
	// UnityEngine.XR.ARFoundation.ARTrackable UnityEngine.XR.ARFoundation.ARRaycastHit::<trackable>k__BackingField
	ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3 * ___U3CtrackableU3Ek__BackingField_1;
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARFoundation.ARRaycastHit::m_Hit
	XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  ___m_Hit_2;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARRaycastHit::m_Transform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_Transform_3;

public:
	inline static int32_t get_offset_of_U3CdistanceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E, ___U3CdistanceU3Ek__BackingField_0)); }
	inline float get_U3CdistanceU3Ek__BackingField_0() const { return ___U3CdistanceU3Ek__BackingField_0; }
	inline float* get_address_of_U3CdistanceU3Ek__BackingField_0() { return &___U3CdistanceU3Ek__BackingField_0; }
	inline void set_U3CdistanceU3Ek__BackingField_0(float value)
	{
		___U3CdistanceU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CtrackableU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E, ___U3CtrackableU3Ek__BackingField_1)); }
	inline ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3 * get_U3CtrackableU3Ek__BackingField_1() const { return ___U3CtrackableU3Ek__BackingField_1; }
	inline ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3 ** get_address_of_U3CtrackableU3Ek__BackingField_1() { return &___U3CtrackableU3Ek__BackingField_1; }
	inline void set_U3CtrackableU3Ek__BackingField_1(ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3 * value)
	{
		___U3CtrackableU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtrackableU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Hit_2() { return static_cast<int32_t>(offsetof(ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E, ___m_Hit_2)); }
	inline XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  get_m_Hit_2() const { return ___m_Hit_2; }
	inline XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB * get_address_of_m_Hit_2() { return &___m_Hit_2; }
	inline void set_m_Hit_2(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  value)
	{
		___m_Hit_2 = value;
	}

	inline static int32_t get_offset_of_m_Transform_3() { return static_cast<int32_t>(offsetof(ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E, ___m_Transform_3)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_Transform_3() const { return ___m_Transform_3; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_Transform_3() { return &___m_Transform_3; }
	inline void set_m_Transform_3(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_Transform_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Transform_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E_marshaled_pinvoke
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3 * ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  ___m_Hit_2;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_Transform_3;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E_marshaled_com
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3 * ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  ___m_Hit_2;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_Transform_3;
};

// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.Threading.ParameterizedThreadStart
struct ParameterizedThreadStart_t5C6FC428171B904D8547954B337B373083E89516  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Video.VideoPlayer
struct VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::prepareCompleted
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___prepareCompleted_4;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::loopPointReached
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___loopPointReached_5;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::started
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___started_6;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::frameDropped
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___frameDropped_7;
	// UnityEngine.Video.VideoPlayer/ErrorEventHandler UnityEngine.Video.VideoPlayer::errorReceived
	ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * ___errorReceived_8;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::seekCompleted
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___seekCompleted_9;
	// UnityEngine.Video.VideoPlayer/TimeEventHandler UnityEngine.Video.VideoPlayer::clockResyncOccurred
	TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * ___clockResyncOccurred_10;
	// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler UnityEngine.Video.VideoPlayer::frameReady
	FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * ___frameReady_11;

public:
	inline static int32_t get_offset_of_prepareCompleted_4() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___prepareCompleted_4)); }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * get_prepareCompleted_4() const { return ___prepareCompleted_4; }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD ** get_address_of_prepareCompleted_4() { return &___prepareCompleted_4; }
	inline void set_prepareCompleted_4(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * value)
	{
		___prepareCompleted_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prepareCompleted_4), (void*)value);
	}

	inline static int32_t get_offset_of_loopPointReached_5() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___loopPointReached_5)); }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * get_loopPointReached_5() const { return ___loopPointReached_5; }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD ** get_address_of_loopPointReached_5() { return &___loopPointReached_5; }
	inline void set_loopPointReached_5(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * value)
	{
		___loopPointReached_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loopPointReached_5), (void*)value);
	}

	inline static int32_t get_offset_of_started_6() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___started_6)); }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * get_started_6() const { return ___started_6; }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD ** get_address_of_started_6() { return &___started_6; }
	inline void set_started_6(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * value)
	{
		___started_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___started_6), (void*)value);
	}

	inline static int32_t get_offset_of_frameDropped_7() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___frameDropped_7)); }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * get_frameDropped_7() const { return ___frameDropped_7; }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD ** get_address_of_frameDropped_7() { return &___frameDropped_7; }
	inline void set_frameDropped_7(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * value)
	{
		___frameDropped_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameDropped_7), (void*)value);
	}

	inline static int32_t get_offset_of_errorReceived_8() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___errorReceived_8)); }
	inline ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * get_errorReceived_8() const { return ___errorReceived_8; }
	inline ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 ** get_address_of_errorReceived_8() { return &___errorReceived_8; }
	inline void set_errorReceived_8(ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * value)
	{
		___errorReceived_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___errorReceived_8), (void*)value);
	}

	inline static int32_t get_offset_of_seekCompleted_9() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___seekCompleted_9)); }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * get_seekCompleted_9() const { return ___seekCompleted_9; }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD ** get_address_of_seekCompleted_9() { return &___seekCompleted_9; }
	inline void set_seekCompleted_9(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * value)
	{
		___seekCompleted_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___seekCompleted_9), (void*)value);
	}

	inline static int32_t get_offset_of_clockResyncOccurred_10() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___clockResyncOccurred_10)); }
	inline TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * get_clockResyncOccurred_10() const { return ___clockResyncOccurred_10; }
	inline TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 ** get_address_of_clockResyncOccurred_10() { return &___clockResyncOccurred_10; }
	inline void set_clockResyncOccurred_10(TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * value)
	{
		___clockResyncOccurred_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clockResyncOccurred_10), (void*)value);
	}

	inline static int32_t get_offset_of_frameReady_11() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___frameReady_11)); }
	inline FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * get_frameReady_11() const { return ___frameReady_11; }
	inline FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC ** get_address_of_frameReady_11() { return &___frameReady_11; }
	inline void set_frameReady_11(FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * value)
	{
		___frameReady_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameReady_11), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider>
struct SubsystemLifecycleManager_3_t7C1FB63AA7729DFE7395F05FEA49B5C2A2F8D750  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRImageTrackingSubsystem_tBC68AD21C11D8D67F3343844E129DF505FF705CE * ___U3CsubsystemU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CsubsystemU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t7C1FB63AA7729DFE7395F05FEA49B5C2A2F8D750, ___U3CsubsystemU3Ek__BackingField_4)); }
	inline XRImageTrackingSubsystem_tBC68AD21C11D8D67F3343844E129DF505FF705CE * get_U3CsubsystemU3Ek__BackingField_4() const { return ___U3CsubsystemU3Ek__BackingField_4; }
	inline XRImageTrackingSubsystem_tBC68AD21C11D8D67F3343844E129DF505FF705CE ** get_address_of_U3CsubsystemU3Ek__BackingField_4() { return &___U3CsubsystemU3Ek__BackingField_4; }
	inline void set_U3CsubsystemU3Ek__BackingField_4(XRImageTrackingSubsystem_tBC68AD21C11D8D67F3343844E129DF505FF705CE * value)
	{
		___U3CsubsystemU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemU3Ek__BackingField_4), (void*)value);
	}
};

struct SubsystemLifecycleManager_3_t7C1FB63AA7729DFE7395F05FEA49B5C2A2F8D750_StaticFields
{
public:
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_t179969632C4CD7B25BEBAA7DA12BA4C8F82F69F2 * ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t19D4B5E8CD4DAF90FBAC8A83E6F7E9C0939C7BE0 * ___s_SubsystemInstances_6;

public:
	inline static int32_t get_offset_of_s_SubsystemDescriptors_5() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t7C1FB63AA7729DFE7395F05FEA49B5C2A2F8D750_StaticFields, ___s_SubsystemDescriptors_5)); }
	inline List_1_t179969632C4CD7B25BEBAA7DA12BA4C8F82F69F2 * get_s_SubsystemDescriptors_5() const { return ___s_SubsystemDescriptors_5; }
	inline List_1_t179969632C4CD7B25BEBAA7DA12BA4C8F82F69F2 ** get_address_of_s_SubsystemDescriptors_5() { return &___s_SubsystemDescriptors_5; }
	inline void set_s_SubsystemDescriptors_5(List_1_t179969632C4CD7B25BEBAA7DA12BA4C8F82F69F2 * value)
	{
		___s_SubsystemDescriptors_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemDescriptors_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_SubsystemInstances_6() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t7C1FB63AA7729DFE7395F05FEA49B5C2A2F8D750_StaticFields, ___s_SubsystemInstances_6)); }
	inline List_1_t19D4B5E8CD4DAF90FBAC8A83E6F7E9C0939C7BE0 * get_s_SubsystemInstances_6() const { return ___s_SubsystemInstances_6; }
	inline List_1_t19D4B5E8CD4DAF90FBAC8A83E6F7E9C0939C7BE0 ** get_address_of_s_SubsystemInstances_6() { return &___s_SubsystemInstances_6; }
	inline void set_s_SubsystemInstances_6(List_1_t19D4B5E8CD4DAF90FBAC8A83E6F7E9C0939C7BE0 * value)
	{
		___s_SubsystemInstances_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemInstances_6), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider>
struct SubsystemLifecycleManager_3_t0E334FAE91D54B85E9314C55C4CDCB207ED1BCC5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRPlaneSubsystem_t7C76F9D2C993B0DC38F0A7CDCE745EA7C12417EE * ___U3CsubsystemU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CsubsystemU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t0E334FAE91D54B85E9314C55C4CDCB207ED1BCC5, ___U3CsubsystemU3Ek__BackingField_4)); }
	inline XRPlaneSubsystem_t7C76F9D2C993B0DC38F0A7CDCE745EA7C12417EE * get_U3CsubsystemU3Ek__BackingField_4() const { return ___U3CsubsystemU3Ek__BackingField_4; }
	inline XRPlaneSubsystem_t7C76F9D2C993B0DC38F0A7CDCE745EA7C12417EE ** get_address_of_U3CsubsystemU3Ek__BackingField_4() { return &___U3CsubsystemU3Ek__BackingField_4; }
	inline void set_U3CsubsystemU3Ek__BackingField_4(XRPlaneSubsystem_t7C76F9D2C993B0DC38F0A7CDCE745EA7C12417EE * value)
	{
		___U3CsubsystemU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemU3Ek__BackingField_4), (void*)value);
	}
};

struct SubsystemLifecycleManager_3_t0E334FAE91D54B85E9314C55C4CDCB207ED1BCC5_StaticFields
{
public:
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_t6D435690E62CDB3645DB1A76F3B7B8B6069BDB4F * ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t42260E8F78DDBD1A6947677665395B70FA8816C1 * ___s_SubsystemInstances_6;

public:
	inline static int32_t get_offset_of_s_SubsystemDescriptors_5() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t0E334FAE91D54B85E9314C55C4CDCB207ED1BCC5_StaticFields, ___s_SubsystemDescriptors_5)); }
	inline List_1_t6D435690E62CDB3645DB1A76F3B7B8B6069BDB4F * get_s_SubsystemDescriptors_5() const { return ___s_SubsystemDescriptors_5; }
	inline List_1_t6D435690E62CDB3645DB1A76F3B7B8B6069BDB4F ** get_address_of_s_SubsystemDescriptors_5() { return &___s_SubsystemDescriptors_5; }
	inline void set_s_SubsystemDescriptors_5(List_1_t6D435690E62CDB3645DB1A76F3B7B8B6069BDB4F * value)
	{
		___s_SubsystemDescriptors_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemDescriptors_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_SubsystemInstances_6() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t0E334FAE91D54B85E9314C55C4CDCB207ED1BCC5_StaticFields, ___s_SubsystemInstances_6)); }
	inline List_1_t42260E8F78DDBD1A6947677665395B70FA8816C1 * get_s_SubsystemInstances_6() const { return ___s_SubsystemInstances_6; }
	inline List_1_t42260E8F78DDBD1A6947677665395B70FA8816C1 ** get_address_of_s_SubsystemInstances_6() { return &___s_SubsystemInstances_6; }
	inline void set_s_SubsystemInstances_6(List_1_t42260E8F78DDBD1A6947677665395B70FA8816C1 * value)
	{
		___s_SubsystemInstances_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemInstances_6), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>
struct SubsystemLifecycleManager_3_t0541A12A544D670B641A4F64D8959D69726CCB6D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRRaycastSubsystem_t62FDAC9AA1BD44C4557AEE3FEF3D2FA24C71B6B8 * ___U3CsubsystemU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CsubsystemU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t0541A12A544D670B641A4F64D8959D69726CCB6D, ___U3CsubsystemU3Ek__BackingField_4)); }
	inline XRRaycastSubsystem_t62FDAC9AA1BD44C4557AEE3FEF3D2FA24C71B6B8 * get_U3CsubsystemU3Ek__BackingField_4() const { return ___U3CsubsystemU3Ek__BackingField_4; }
	inline XRRaycastSubsystem_t62FDAC9AA1BD44C4557AEE3FEF3D2FA24C71B6B8 ** get_address_of_U3CsubsystemU3Ek__BackingField_4() { return &___U3CsubsystemU3Ek__BackingField_4; }
	inline void set_U3CsubsystemU3Ek__BackingField_4(XRRaycastSubsystem_t62FDAC9AA1BD44C4557AEE3FEF3D2FA24C71B6B8 * value)
	{
		___U3CsubsystemU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemU3Ek__BackingField_4), (void*)value);
	}
};

struct SubsystemLifecycleManager_3_t0541A12A544D670B641A4F64D8959D69726CCB6D_StaticFields
{
public:
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tAE84735071B78277703DB9996DE2E5C4456317C5 * ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t72B11B1FEAB79314490A07F58F757646DADED2C1 * ___s_SubsystemInstances_6;

public:
	inline static int32_t get_offset_of_s_SubsystemDescriptors_5() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t0541A12A544D670B641A4F64D8959D69726CCB6D_StaticFields, ___s_SubsystemDescriptors_5)); }
	inline List_1_tAE84735071B78277703DB9996DE2E5C4456317C5 * get_s_SubsystemDescriptors_5() const { return ___s_SubsystemDescriptors_5; }
	inline List_1_tAE84735071B78277703DB9996DE2E5C4456317C5 ** get_address_of_s_SubsystemDescriptors_5() { return &___s_SubsystemDescriptors_5; }
	inline void set_s_SubsystemDescriptors_5(List_1_tAE84735071B78277703DB9996DE2E5C4456317C5 * value)
	{
		___s_SubsystemDescriptors_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemDescriptors_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_SubsystemInstances_6() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t0541A12A544D670B641A4F64D8959D69726CCB6D_StaticFields, ___s_SubsystemInstances_6)); }
	inline List_1_t72B11B1FEAB79314490A07F58F757646DADED2C1 * get_s_SubsystemInstances_6() const { return ___s_SubsystemInstances_6; }
	inline List_1_t72B11B1FEAB79314490A07F58F757646DADED2C1 ** get_address_of_s_SubsystemInstances_6() { return &___s_SubsystemInstances_6; }
	inline void set_s_SubsystemInstances_6(List_1_t72B11B1FEAB79314490A07F58F757646DADED2C1 * value)
	{
		___s_SubsystemInstances_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemInstances_6), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// AnimDropdown
struct AnimDropdown_t734E84963601DD70BDA49545C64952B6CCB52FD7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Animator AnimDropdown::anim
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___anim_4;
	// UnityEngine.AudioSource AnimDropdown::audioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioSource_5;

public:
	inline static int32_t get_offset_of_anim_4() { return static_cast<int32_t>(offsetof(AnimDropdown_t734E84963601DD70BDA49545C64952B6CCB52FD7, ___anim_4)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_anim_4() const { return ___anim_4; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_anim_4() { return &___anim_4; }
	inline void set_anim_4(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___anim_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anim_4), (void*)value);
	}

	inline static int32_t get_offset_of_audioSource_5() { return static_cast<int32_t>(offsetof(AnimDropdown_t734E84963601DD70BDA49545C64952B6CCB52FD7, ___audioSource_5)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audioSource_5() const { return ___audioSource_5; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audioSource_5() { return &___audioSource_5; }
	inline void set_audioSource_5(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audioSource_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioSource_5), (void*)value);
	}
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// ImageTracking
struct ImageTracking_t06C356D3B06EA642613D7FC66E71B6D57A5AFF80  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Dropdown ImageTracking::recipeDropDown
	Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * ___recipeDropDown_4;
	// System.Collections.Generic.List`1<System.String> ImageTracking::recipeList
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___recipeList_5;
	// AnimDropdown ImageTracking::recipeDropDownAnim
	AnimDropdown_t734E84963601DD70BDA49545C64952B6CCB52FD7 * ___recipeDropDownAnim_6;
	// UnityEngine.UI.Text ImageTracking::itemsText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___itemsText_7;
	// System.String ImageTracking::itemsString
	String_t* ___itemsString_8;
	// System.Int32 ImageTracking::numSeenObjects
	int32_t ___numSeenObjects_9;
	// System.Collections.Generic.Dictionary`2<System.String,System.Boolean> ImageTracking::seenObjects
	Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C * ___seenObjects_10;
	// UnityEngine.XR.ARSubsystems.IReferenceImageLibrary ImageTracking::refLibrary
	RuntimeObject* ___refLibrary_11;
	// UnityEngine.XR.ARFoundation.ARTrackedImageManager ImageTracking::trackedImageManager
	ARTrackedImageManager_tB916E34D053E6712190F2BAE46E21D76A0882FF2 * ___trackedImageManager_12;

public:
	inline static int32_t get_offset_of_recipeDropDown_4() { return static_cast<int32_t>(offsetof(ImageTracking_t06C356D3B06EA642613D7FC66E71B6D57A5AFF80, ___recipeDropDown_4)); }
	inline Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * get_recipeDropDown_4() const { return ___recipeDropDown_4; }
	inline Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 ** get_address_of_recipeDropDown_4() { return &___recipeDropDown_4; }
	inline void set_recipeDropDown_4(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * value)
	{
		___recipeDropDown_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___recipeDropDown_4), (void*)value);
	}

	inline static int32_t get_offset_of_recipeList_5() { return static_cast<int32_t>(offsetof(ImageTracking_t06C356D3B06EA642613D7FC66E71B6D57A5AFF80, ___recipeList_5)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_recipeList_5() const { return ___recipeList_5; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_recipeList_5() { return &___recipeList_5; }
	inline void set_recipeList_5(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___recipeList_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___recipeList_5), (void*)value);
	}

	inline static int32_t get_offset_of_recipeDropDownAnim_6() { return static_cast<int32_t>(offsetof(ImageTracking_t06C356D3B06EA642613D7FC66E71B6D57A5AFF80, ___recipeDropDownAnim_6)); }
	inline AnimDropdown_t734E84963601DD70BDA49545C64952B6CCB52FD7 * get_recipeDropDownAnim_6() const { return ___recipeDropDownAnim_6; }
	inline AnimDropdown_t734E84963601DD70BDA49545C64952B6CCB52FD7 ** get_address_of_recipeDropDownAnim_6() { return &___recipeDropDownAnim_6; }
	inline void set_recipeDropDownAnim_6(AnimDropdown_t734E84963601DD70BDA49545C64952B6CCB52FD7 * value)
	{
		___recipeDropDownAnim_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___recipeDropDownAnim_6), (void*)value);
	}

	inline static int32_t get_offset_of_itemsText_7() { return static_cast<int32_t>(offsetof(ImageTracking_t06C356D3B06EA642613D7FC66E71B6D57A5AFF80, ___itemsText_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_itemsText_7() const { return ___itemsText_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_itemsText_7() { return &___itemsText_7; }
	inline void set_itemsText_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___itemsText_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemsText_7), (void*)value);
	}

	inline static int32_t get_offset_of_itemsString_8() { return static_cast<int32_t>(offsetof(ImageTracking_t06C356D3B06EA642613D7FC66E71B6D57A5AFF80, ___itemsString_8)); }
	inline String_t* get_itemsString_8() const { return ___itemsString_8; }
	inline String_t** get_address_of_itemsString_8() { return &___itemsString_8; }
	inline void set_itemsString_8(String_t* value)
	{
		___itemsString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemsString_8), (void*)value);
	}

	inline static int32_t get_offset_of_numSeenObjects_9() { return static_cast<int32_t>(offsetof(ImageTracking_t06C356D3B06EA642613D7FC66E71B6D57A5AFF80, ___numSeenObjects_9)); }
	inline int32_t get_numSeenObjects_9() const { return ___numSeenObjects_9; }
	inline int32_t* get_address_of_numSeenObjects_9() { return &___numSeenObjects_9; }
	inline void set_numSeenObjects_9(int32_t value)
	{
		___numSeenObjects_9 = value;
	}

	inline static int32_t get_offset_of_seenObjects_10() { return static_cast<int32_t>(offsetof(ImageTracking_t06C356D3B06EA642613D7FC66E71B6D57A5AFF80, ___seenObjects_10)); }
	inline Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C * get_seenObjects_10() const { return ___seenObjects_10; }
	inline Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C ** get_address_of_seenObjects_10() { return &___seenObjects_10; }
	inline void set_seenObjects_10(Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C * value)
	{
		___seenObjects_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___seenObjects_10), (void*)value);
	}

	inline static int32_t get_offset_of_refLibrary_11() { return static_cast<int32_t>(offsetof(ImageTracking_t06C356D3B06EA642613D7FC66E71B6D57A5AFF80, ___refLibrary_11)); }
	inline RuntimeObject* get_refLibrary_11() const { return ___refLibrary_11; }
	inline RuntimeObject** get_address_of_refLibrary_11() { return &___refLibrary_11; }
	inline void set_refLibrary_11(RuntimeObject* value)
	{
		___refLibrary_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___refLibrary_11), (void*)value);
	}

	inline static int32_t get_offset_of_trackedImageManager_12() { return static_cast<int32_t>(offsetof(ImageTracking_t06C356D3B06EA642613D7FC66E71B6D57A5AFF80, ___trackedImageManager_12)); }
	inline ARTrackedImageManager_tB916E34D053E6712190F2BAE46E21D76A0882FF2 * get_trackedImageManager_12() const { return ___trackedImageManager_12; }
	inline ARTrackedImageManager_tB916E34D053E6712190F2BAE46E21D76A0882FF2 ** get_address_of_trackedImageManager_12() { return &___trackedImageManager_12; }
	inline void set_trackedImageManager_12(ARTrackedImageManager_tB916E34D053E6712190F2BAE46E21D76A0882FF2 * value)
	{
		___trackedImageManager_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackedImageManager_12), (void*)value);
	}
};


// PlaneDetectionToggle
struct PlaneDetectionToggle_t46401949F3D814B54B51A92A03383100AC6A7A67  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.XR.ARFoundation.ARPlaneManager PlaneDetectionToggle::planeManager
	ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4 * ___planeManager_4;
	// UnityEngine.UI.Text PlaneDetectionToggle::toggleButtonText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___toggleButtonText_5;

public:
	inline static int32_t get_offset_of_planeManager_4() { return static_cast<int32_t>(offsetof(PlaneDetectionToggle_t46401949F3D814B54B51A92A03383100AC6A7A67, ___planeManager_4)); }
	inline ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4 * get_planeManager_4() const { return ___planeManager_4; }
	inline ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4 ** get_address_of_planeManager_4() { return &___planeManager_4; }
	inline void set_planeManager_4(ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4 * value)
	{
		___planeManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___planeManager_4), (void*)value);
	}

	inline static int32_t get_offset_of_toggleButtonText_5() { return static_cast<int32_t>(offsetof(PlaneDetectionToggle_t46401949F3D814B54B51A92A03383100AC6A7A67, ___toggleButtonText_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_toggleButtonText_5() const { return ___toggleButtonText_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_toggleButtonText_5() { return &___toggleButtonText_5; }
	inline void set_toggleButtonText_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___toggleButtonText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___toggleButtonText_5), (void*)value);
	}
};


// SpawnObjectOnPlane
struct SpawnObjectOnPlane_t01B265C88B0D8D2D33A765C082A0B4CADF163032  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.XR.ARFoundation.ARRaycastManager SpawnObjectOnPlane::raycastManager
	ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * ___raycastManager_4;
	// UnityEngine.GameObject SpawnObjectOnPlane::spawnedObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___spawnedObject_5;
	// UnityEngine.UI.Dropdown SpawnObjectOnPlane::recipeDropDown
	Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * ___recipeDropDown_6;
	// UnityEngine.UI.Text SpawnObjectOnPlane::toggleButtonText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___toggleButtonText_7;
	// UnityEngine.UI.Text SpawnObjectOnPlane::actionText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___actionText_8;
	// UnityEngine.GameObject SpawnObjectOnPlane::meatballPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___meatballPrefab_9;
	// System.Double SpawnObjectOnPlane::meatballX
	double ___meatballX_10;
	// System.Double SpawnObjectOnPlane::meatballY
	double ___meatballY_11;
	// System.Double SpawnObjectOnPlane::meatballZ
	double ___meatballZ_12;
	// UnityEngine.GameObject SpawnObjectOnPlane::videoScreenPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___videoScreenPrefab_13;
	// UnityEngine.GameObject SpawnObjectOnPlane::spawnedVideoScreen
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___spawnedVideoScreen_14;
	// UnityEngine.Video.VideoClip[] SpawnObjectOnPlane::videos
	VideoClipU5BU5D_t6683BD7FA0E3C2C85483295CBB3727AD422ED431* ___videos_15;
	// UnityEngine.Video.VideoPlayer SpawnObjectOnPlane::videoPlayer
	VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * ___videoPlayer_16;
	// System.Int32 SpawnObjectOnPlane::videoNumPlays
	int32_t ___videoNumPlays_17;

public:
	inline static int32_t get_offset_of_raycastManager_4() { return static_cast<int32_t>(offsetof(SpawnObjectOnPlane_t01B265C88B0D8D2D33A765C082A0B4CADF163032, ___raycastManager_4)); }
	inline ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * get_raycastManager_4() const { return ___raycastManager_4; }
	inline ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F ** get_address_of_raycastManager_4() { return &___raycastManager_4; }
	inline void set_raycastManager_4(ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * value)
	{
		___raycastManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___raycastManager_4), (void*)value);
	}

	inline static int32_t get_offset_of_spawnedObject_5() { return static_cast<int32_t>(offsetof(SpawnObjectOnPlane_t01B265C88B0D8D2D33A765C082A0B4CADF163032, ___spawnedObject_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_spawnedObject_5() const { return ___spawnedObject_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_spawnedObject_5() { return &___spawnedObject_5; }
	inline void set_spawnedObject_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___spawnedObject_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spawnedObject_5), (void*)value);
	}

	inline static int32_t get_offset_of_recipeDropDown_6() { return static_cast<int32_t>(offsetof(SpawnObjectOnPlane_t01B265C88B0D8D2D33A765C082A0B4CADF163032, ___recipeDropDown_6)); }
	inline Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * get_recipeDropDown_6() const { return ___recipeDropDown_6; }
	inline Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 ** get_address_of_recipeDropDown_6() { return &___recipeDropDown_6; }
	inline void set_recipeDropDown_6(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * value)
	{
		___recipeDropDown_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___recipeDropDown_6), (void*)value);
	}

	inline static int32_t get_offset_of_toggleButtonText_7() { return static_cast<int32_t>(offsetof(SpawnObjectOnPlane_t01B265C88B0D8D2D33A765C082A0B4CADF163032, ___toggleButtonText_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_toggleButtonText_7() const { return ___toggleButtonText_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_toggleButtonText_7() { return &___toggleButtonText_7; }
	inline void set_toggleButtonText_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___toggleButtonText_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___toggleButtonText_7), (void*)value);
	}

	inline static int32_t get_offset_of_actionText_8() { return static_cast<int32_t>(offsetof(SpawnObjectOnPlane_t01B265C88B0D8D2D33A765C082A0B4CADF163032, ___actionText_8)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_actionText_8() const { return ___actionText_8; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_actionText_8() { return &___actionText_8; }
	inline void set_actionText_8(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___actionText_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actionText_8), (void*)value);
	}

	inline static int32_t get_offset_of_meatballPrefab_9() { return static_cast<int32_t>(offsetof(SpawnObjectOnPlane_t01B265C88B0D8D2D33A765C082A0B4CADF163032, ___meatballPrefab_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_meatballPrefab_9() const { return ___meatballPrefab_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_meatballPrefab_9() { return &___meatballPrefab_9; }
	inline void set_meatballPrefab_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___meatballPrefab_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meatballPrefab_9), (void*)value);
	}

	inline static int32_t get_offset_of_meatballX_10() { return static_cast<int32_t>(offsetof(SpawnObjectOnPlane_t01B265C88B0D8D2D33A765C082A0B4CADF163032, ___meatballX_10)); }
	inline double get_meatballX_10() const { return ___meatballX_10; }
	inline double* get_address_of_meatballX_10() { return &___meatballX_10; }
	inline void set_meatballX_10(double value)
	{
		___meatballX_10 = value;
	}

	inline static int32_t get_offset_of_meatballY_11() { return static_cast<int32_t>(offsetof(SpawnObjectOnPlane_t01B265C88B0D8D2D33A765C082A0B4CADF163032, ___meatballY_11)); }
	inline double get_meatballY_11() const { return ___meatballY_11; }
	inline double* get_address_of_meatballY_11() { return &___meatballY_11; }
	inline void set_meatballY_11(double value)
	{
		___meatballY_11 = value;
	}

	inline static int32_t get_offset_of_meatballZ_12() { return static_cast<int32_t>(offsetof(SpawnObjectOnPlane_t01B265C88B0D8D2D33A765C082A0B4CADF163032, ___meatballZ_12)); }
	inline double get_meatballZ_12() const { return ___meatballZ_12; }
	inline double* get_address_of_meatballZ_12() { return &___meatballZ_12; }
	inline void set_meatballZ_12(double value)
	{
		___meatballZ_12 = value;
	}

	inline static int32_t get_offset_of_videoScreenPrefab_13() { return static_cast<int32_t>(offsetof(SpawnObjectOnPlane_t01B265C88B0D8D2D33A765C082A0B4CADF163032, ___videoScreenPrefab_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_videoScreenPrefab_13() const { return ___videoScreenPrefab_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_videoScreenPrefab_13() { return &___videoScreenPrefab_13; }
	inline void set_videoScreenPrefab_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___videoScreenPrefab_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___videoScreenPrefab_13), (void*)value);
	}

	inline static int32_t get_offset_of_spawnedVideoScreen_14() { return static_cast<int32_t>(offsetof(SpawnObjectOnPlane_t01B265C88B0D8D2D33A765C082A0B4CADF163032, ___spawnedVideoScreen_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_spawnedVideoScreen_14() const { return ___spawnedVideoScreen_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_spawnedVideoScreen_14() { return &___spawnedVideoScreen_14; }
	inline void set_spawnedVideoScreen_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___spawnedVideoScreen_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spawnedVideoScreen_14), (void*)value);
	}

	inline static int32_t get_offset_of_videos_15() { return static_cast<int32_t>(offsetof(SpawnObjectOnPlane_t01B265C88B0D8D2D33A765C082A0B4CADF163032, ___videos_15)); }
	inline VideoClipU5BU5D_t6683BD7FA0E3C2C85483295CBB3727AD422ED431* get_videos_15() const { return ___videos_15; }
	inline VideoClipU5BU5D_t6683BD7FA0E3C2C85483295CBB3727AD422ED431** get_address_of_videos_15() { return &___videos_15; }
	inline void set_videos_15(VideoClipU5BU5D_t6683BD7FA0E3C2C85483295CBB3727AD422ED431* value)
	{
		___videos_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___videos_15), (void*)value);
	}

	inline static int32_t get_offset_of_videoPlayer_16() { return static_cast<int32_t>(offsetof(SpawnObjectOnPlane_t01B265C88B0D8D2D33A765C082A0B4CADF163032, ___videoPlayer_16)); }
	inline VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * get_videoPlayer_16() const { return ___videoPlayer_16; }
	inline VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 ** get_address_of_videoPlayer_16() { return &___videoPlayer_16; }
	inline void set_videoPlayer_16(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * value)
	{
		___videoPlayer_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___videoPlayer_16), (void*)value);
	}

	inline static int32_t get_offset_of_videoNumPlays_17() { return static_cast<int32_t>(offsetof(SpawnObjectOnPlane_t01B265C88B0D8D2D33A765C082A0B4CADF163032, ___videoNumPlays_17)); }
	inline int32_t get_videoNumPlays_17() const { return ___videoNumPlays_17; }
	inline int32_t* get_address_of_videoNumPlays_17() { return &___videoNumPlays_17; }
	inline void set_videoNumPlays_17(int32_t value)
	{
		___videoNumPlays_17 = value;
	}
};

struct SpawnObjectOnPlane_t01B265C88B0D8D2D33A765C082A0B4CADF163032_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit> SpawnObjectOnPlane::s_Hits
	List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * ___s_Hits_18;

public:
	inline static int32_t get_offset_of_s_Hits_18() { return static_cast<int32_t>(offsetof(SpawnObjectOnPlane_t01B265C88B0D8D2D33A765C082A0B4CADF163032_StaticFields, ___s_Hits_18)); }
	inline List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * get_s_Hits_18() const { return ___s_Hits_18; }
	inline List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D ** get_address_of_s_Hits_18() { return &___s_Hits_18; }
	inline void set_s_Hits_18(List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * value)
	{
		___s_Hits_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Hits_18), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRTrackedImage,UnityEngine.XR.ARFoundation.ARTrackedImage>
struct ARTrackableManager_5_t80C2ED1443D89CD862DA603E7D68435F74C0103A  : public SubsystemLifecycleManager_3_t7C1FB63AA7729DFE7395F05FEA49B5C2A2F8D750
{
public:
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_tD95D4B180F0B4EEF3668344392936E58ECF7069E * ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_tD95D4B180F0B4EEF3668344392936E58ECF7069E * ___m_PendingAdds_10;

public:
	inline static int32_t get_offset_of_U3CsessionOriginU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t80C2ED1443D89CD862DA603E7D68435F74C0103A, ___U3CsessionOriginU3Ek__BackingField_8)); }
	inline ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * get_U3CsessionOriginU3Ek__BackingField_8() const { return ___U3CsessionOriginU3Ek__BackingField_8; }
	inline ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 ** get_address_of_U3CsessionOriginU3Ek__BackingField_8() { return &___U3CsessionOriginU3Ek__BackingField_8; }
	inline void set_U3CsessionOriginU3Ek__BackingField_8(ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * value)
	{
		___U3CsessionOriginU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsessionOriginU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Trackables_9() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t80C2ED1443D89CD862DA603E7D68435F74C0103A, ___m_Trackables_9)); }
	inline Dictionary_2_tD95D4B180F0B4EEF3668344392936E58ECF7069E * get_m_Trackables_9() const { return ___m_Trackables_9; }
	inline Dictionary_2_tD95D4B180F0B4EEF3668344392936E58ECF7069E ** get_address_of_m_Trackables_9() { return &___m_Trackables_9; }
	inline void set_m_Trackables_9(Dictionary_2_tD95D4B180F0B4EEF3668344392936E58ECF7069E * value)
	{
		___m_Trackables_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Trackables_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_PendingAdds_10() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t80C2ED1443D89CD862DA603E7D68435F74C0103A, ___m_PendingAdds_10)); }
	inline Dictionary_2_tD95D4B180F0B4EEF3668344392936E58ECF7069E * get_m_PendingAdds_10() const { return ___m_PendingAdds_10; }
	inline Dictionary_2_tD95D4B180F0B4EEF3668344392936E58ECF7069E ** get_address_of_m_PendingAdds_10() { return &___m_PendingAdds_10; }
	inline void set_m_PendingAdds_10(Dictionary_2_tD95D4B180F0B4EEF3668344392936E58ECF7069E * value)
	{
		___m_PendingAdds_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PendingAdds_10), (void*)value);
	}
};

struct ARTrackableManager_5_t80C2ED1443D89CD862DA603E7D68435F74C0103A_StaticFields
{
public:
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_t80C2ED1443D89CD862DA603E7D68435F74C0103A * ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * ___s_Removed_13;

public:
	inline static int32_t get_offset_of_U3CinstanceU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t80C2ED1443D89CD862DA603E7D68435F74C0103A_StaticFields, ___U3CinstanceU3Ek__BackingField_7)); }
	inline ARTrackableManager_5_t80C2ED1443D89CD862DA603E7D68435F74C0103A * get_U3CinstanceU3Ek__BackingField_7() const { return ___U3CinstanceU3Ek__BackingField_7; }
	inline ARTrackableManager_5_t80C2ED1443D89CD862DA603E7D68435F74C0103A ** get_address_of_U3CinstanceU3Ek__BackingField_7() { return &___U3CinstanceU3Ek__BackingField_7; }
	inline void set_U3CinstanceU3Ek__BackingField_7(ARTrackableManager_5_t80C2ED1443D89CD862DA603E7D68435F74C0103A * value)
	{
		___U3CinstanceU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinstanceU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_s_Added_11() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t80C2ED1443D89CD862DA603E7D68435F74C0103A_StaticFields, ___s_Added_11)); }
	inline List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * get_s_Added_11() const { return ___s_Added_11; }
	inline List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F ** get_address_of_s_Added_11() { return &___s_Added_11; }
	inline void set_s_Added_11(List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * value)
	{
		___s_Added_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Added_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_Updated_12() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t80C2ED1443D89CD862DA603E7D68435F74C0103A_StaticFields, ___s_Updated_12)); }
	inline List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * get_s_Updated_12() const { return ___s_Updated_12; }
	inline List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F ** get_address_of_s_Updated_12() { return &___s_Updated_12; }
	inline void set_s_Updated_12(List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * value)
	{
		___s_Updated_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Updated_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_Removed_13() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t80C2ED1443D89CD862DA603E7D68435F74C0103A_StaticFields, ___s_Removed_13)); }
	inline List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * get_s_Removed_13() const { return ___s_Removed_13; }
	inline List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F ** get_address_of_s_Removed_13() { return &___s_Removed_13; }
	inline void set_s_Removed_13(List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * value)
	{
		___s_Removed_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Removed_13), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider,UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARFoundation.ARPlane>
struct ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7  : public SubsystemLifecycleManager_3_t0E334FAE91D54B85E9314C55C4CDCB207ED1BCC5
{
public:
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t712D6B074B6A493ABA07777BD08F1A62D9DE2534 * ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t712D6B074B6A493ABA07777BD08F1A62D9DE2534 * ___m_PendingAdds_10;

public:
	inline static int32_t get_offset_of_U3CsessionOriginU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7, ___U3CsessionOriginU3Ek__BackingField_8)); }
	inline ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * get_U3CsessionOriginU3Ek__BackingField_8() const { return ___U3CsessionOriginU3Ek__BackingField_8; }
	inline ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 ** get_address_of_U3CsessionOriginU3Ek__BackingField_8() { return &___U3CsessionOriginU3Ek__BackingField_8; }
	inline void set_U3CsessionOriginU3Ek__BackingField_8(ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * value)
	{
		___U3CsessionOriginU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsessionOriginU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Trackables_9() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7, ___m_Trackables_9)); }
	inline Dictionary_2_t712D6B074B6A493ABA07777BD08F1A62D9DE2534 * get_m_Trackables_9() const { return ___m_Trackables_9; }
	inline Dictionary_2_t712D6B074B6A493ABA07777BD08F1A62D9DE2534 ** get_address_of_m_Trackables_9() { return &___m_Trackables_9; }
	inline void set_m_Trackables_9(Dictionary_2_t712D6B074B6A493ABA07777BD08F1A62D9DE2534 * value)
	{
		___m_Trackables_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Trackables_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_PendingAdds_10() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7, ___m_PendingAdds_10)); }
	inline Dictionary_2_t712D6B074B6A493ABA07777BD08F1A62D9DE2534 * get_m_PendingAdds_10() const { return ___m_PendingAdds_10; }
	inline Dictionary_2_t712D6B074B6A493ABA07777BD08F1A62D9DE2534 ** get_address_of_m_PendingAdds_10() { return &___m_PendingAdds_10; }
	inline void set_m_PendingAdds_10(Dictionary_2_t712D6B074B6A493ABA07777BD08F1A62D9DE2534 * value)
	{
		___m_PendingAdds_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PendingAdds_10), (void*)value);
	}
};

struct ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7_StaticFields
{
public:
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7 * ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * ___s_Removed_13;

public:
	inline static int32_t get_offset_of_U3CinstanceU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7_StaticFields, ___U3CinstanceU3Ek__BackingField_7)); }
	inline ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7 * get_U3CinstanceU3Ek__BackingField_7() const { return ___U3CinstanceU3Ek__BackingField_7; }
	inline ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7 ** get_address_of_U3CinstanceU3Ek__BackingField_7() { return &___U3CinstanceU3Ek__BackingField_7; }
	inline void set_U3CinstanceU3Ek__BackingField_7(ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7 * value)
	{
		___U3CinstanceU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinstanceU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_s_Added_11() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7_StaticFields, ___s_Added_11)); }
	inline List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * get_s_Added_11() const { return ___s_Added_11; }
	inline List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 ** get_address_of_s_Added_11() { return &___s_Added_11; }
	inline void set_s_Added_11(List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * value)
	{
		___s_Added_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Added_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_Updated_12() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7_StaticFields, ___s_Updated_12)); }
	inline List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * get_s_Updated_12() const { return ___s_Updated_12; }
	inline List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 ** get_address_of_s_Updated_12() { return &___s_Updated_12; }
	inline void set_s_Updated_12(List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * value)
	{
		___s_Updated_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Updated_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_Removed_13() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7_StaticFields, ___s_Removed_13)); }
	inline List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * get_s_Removed_13() const { return ___s_Removed_13; }
	inline List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 ** get_address_of_s_Removed_13() { return &___s_Removed_13; }
	inline void set_s_Removed_13(List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * value)
	{
		___s_Removed_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Removed_13), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRRaycast,UnityEngine.XR.ARFoundation.ARRaycast>
struct ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045  : public SubsystemLifecycleManager_3_t0541A12A544D670B641A4F64D8959D69726CCB6D
{
public:
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C * ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C * ___m_PendingAdds_10;

public:
	inline static int32_t get_offset_of_U3CsessionOriginU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045, ___U3CsessionOriginU3Ek__BackingField_8)); }
	inline ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * get_U3CsessionOriginU3Ek__BackingField_8() const { return ___U3CsessionOriginU3Ek__BackingField_8; }
	inline ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 ** get_address_of_U3CsessionOriginU3Ek__BackingField_8() { return &___U3CsessionOriginU3Ek__BackingField_8; }
	inline void set_U3CsessionOriginU3Ek__BackingField_8(ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * value)
	{
		___U3CsessionOriginU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsessionOriginU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Trackables_9() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045, ___m_Trackables_9)); }
	inline Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C * get_m_Trackables_9() const { return ___m_Trackables_9; }
	inline Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C ** get_address_of_m_Trackables_9() { return &___m_Trackables_9; }
	inline void set_m_Trackables_9(Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C * value)
	{
		___m_Trackables_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Trackables_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_PendingAdds_10() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045, ___m_PendingAdds_10)); }
	inline Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C * get_m_PendingAdds_10() const { return ___m_PendingAdds_10; }
	inline Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C ** get_address_of_m_PendingAdds_10() { return &___m_PendingAdds_10; }
	inline void set_m_PendingAdds_10(Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C * value)
	{
		___m_PendingAdds_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PendingAdds_10), (void*)value);
	}
};

struct ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045_StaticFields
{
public:
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045 * ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * ___s_Removed_13;

public:
	inline static int32_t get_offset_of_U3CinstanceU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045_StaticFields, ___U3CinstanceU3Ek__BackingField_7)); }
	inline ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045 * get_U3CinstanceU3Ek__BackingField_7() const { return ___U3CinstanceU3Ek__BackingField_7; }
	inline ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045 ** get_address_of_U3CinstanceU3Ek__BackingField_7() { return &___U3CinstanceU3Ek__BackingField_7; }
	inline void set_U3CinstanceU3Ek__BackingField_7(ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045 * value)
	{
		___U3CinstanceU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinstanceU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_s_Added_11() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045_StaticFields, ___s_Added_11)); }
	inline List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * get_s_Added_11() const { return ___s_Added_11; }
	inline List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 ** get_address_of_s_Added_11() { return &___s_Added_11; }
	inline void set_s_Added_11(List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * value)
	{
		___s_Added_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Added_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_Updated_12() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045_StaticFields, ___s_Updated_12)); }
	inline List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * get_s_Updated_12() const { return ___s_Updated_12; }
	inline List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 ** get_address_of_s_Updated_12() { return &___s_Updated_12; }
	inline void set_s_Updated_12(List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * value)
	{
		___s_Updated_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Updated_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_Removed_13() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045_StaticFields, ___s_Removed_13)); }
	inline List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * get_s_Removed_13() const { return ___s_Removed_13; }
	inline List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 ** get_address_of_s_Removed_13() { return &___s_Removed_13; }
	inline void set_s_Removed_13(List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * value)
	{
		___s_Removed_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Removed_13), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARFoundation.ARPlane>
struct ARTrackable_2_t3B4BDEC1C83B6E52F03E653C10343E488761AF0B  : public ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3
{
public:
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  ___U3CsessionRelativeDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_m_DestroyOnRemoval_4() { return static_cast<int32_t>(offsetof(ARTrackable_2_t3B4BDEC1C83B6E52F03E653C10343E488761AF0B, ___m_DestroyOnRemoval_4)); }
	inline bool get_m_DestroyOnRemoval_4() const { return ___m_DestroyOnRemoval_4; }
	inline bool* get_address_of_m_DestroyOnRemoval_4() { return &___m_DestroyOnRemoval_4; }
	inline void set_m_DestroyOnRemoval_4(bool value)
	{
		___m_DestroyOnRemoval_4 = value;
	}

	inline static int32_t get_offset_of_U3CpendingU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ARTrackable_2_t3B4BDEC1C83B6E52F03E653C10343E488761AF0B, ___U3CpendingU3Ek__BackingField_5)); }
	inline bool get_U3CpendingU3Ek__BackingField_5() const { return ___U3CpendingU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CpendingU3Ek__BackingField_5() { return &___U3CpendingU3Ek__BackingField_5; }
	inline void set_U3CpendingU3Ek__BackingField_5(bool value)
	{
		___U3CpendingU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsessionRelativeDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ARTrackable_2_t3B4BDEC1C83B6E52F03E653C10343E488761AF0B, ___U3CsessionRelativeDataU3Ek__BackingField_6)); }
	inline BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  get_U3CsessionRelativeDataU3Ek__BackingField_6() const { return ___U3CsessionRelativeDataU3Ek__BackingField_6; }
	inline BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * get_address_of_U3CsessionRelativeDataU3Ek__BackingField_6() { return &___U3CsessionRelativeDataU3Ek__BackingField_6; }
	inline void set_U3CsessionRelativeDataU3Ek__BackingField_6(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  value)
	{
		___U3CsessionRelativeDataU3Ek__BackingField_6 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,UnityEngine.XR.ARFoundation.ARTrackedImage>
struct ARTrackable_2_tBE8960CB1D0030EBBEED67D06F8B1ADB69EB3CB1  : public ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3
{
public:
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  ___U3CsessionRelativeDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_m_DestroyOnRemoval_4() { return static_cast<int32_t>(offsetof(ARTrackable_2_tBE8960CB1D0030EBBEED67D06F8B1ADB69EB3CB1, ___m_DestroyOnRemoval_4)); }
	inline bool get_m_DestroyOnRemoval_4() const { return ___m_DestroyOnRemoval_4; }
	inline bool* get_address_of_m_DestroyOnRemoval_4() { return &___m_DestroyOnRemoval_4; }
	inline void set_m_DestroyOnRemoval_4(bool value)
	{
		___m_DestroyOnRemoval_4 = value;
	}

	inline static int32_t get_offset_of_U3CpendingU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ARTrackable_2_tBE8960CB1D0030EBBEED67D06F8B1ADB69EB3CB1, ___U3CpendingU3Ek__BackingField_5)); }
	inline bool get_U3CpendingU3Ek__BackingField_5() const { return ___U3CpendingU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CpendingU3Ek__BackingField_5() { return &___U3CpendingU3Ek__BackingField_5; }
	inline void set_U3CpendingU3Ek__BackingField_5(bool value)
	{
		___U3CpendingU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsessionRelativeDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ARTrackable_2_tBE8960CB1D0030EBBEED67D06F8B1ADB69EB3CB1, ___U3CsessionRelativeDataU3Ek__BackingField_6)); }
	inline XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  get_U3CsessionRelativeDataU3Ek__BackingField_6() const { return ___U3CsessionRelativeDataU3Ek__BackingField_6; }
	inline XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F * get_address_of_U3CsessionRelativeDataU3Ek__BackingField_6() { return &___U3CsessionRelativeDataU3Ek__BackingField_6; }
	inline void set_U3CsessionRelativeDataU3Ek__BackingField_6(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  value)
	{
		___U3CsessionRelativeDataU3Ek__BackingField_6 = value;
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
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
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARPlane
struct ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891  : public ARTrackable_2_t3B4BDEC1C83B6E52F03E653C10343E488761AF0B
{
public:
	// System.Single UnityEngine.XR.ARFoundation.ARPlane::m_VertexChangedThreshold
	float ___m_VertexChangedThreshold_7;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs> UnityEngine.XR.ARFoundation.ARPlane::boundaryChanged
	Action_1_tBBDACDE0F7A9CD846DD9E0B8E74D5E0CC3D6B593 * ___boundaryChanged_8;
	// UnityEngine.XR.ARFoundation.ARPlane UnityEngine.XR.ARFoundation.ARPlane::<subsumedBy>k__BackingField
	ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * ___U3CsubsumedByU3Ek__BackingField_9;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARFoundation.ARPlane::m_Boundary
	NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  ___m_Boundary_10;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARFoundation.ARPlane::m_OldBoundary
	NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  ___m_OldBoundary_11;
	// System.Boolean UnityEngine.XR.ARFoundation.ARPlane::m_HasBoundaryChanged
	bool ___m_HasBoundaryChanged_12;

public:
	inline static int32_t get_offset_of_m_VertexChangedThreshold_7() { return static_cast<int32_t>(offsetof(ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891, ___m_VertexChangedThreshold_7)); }
	inline float get_m_VertexChangedThreshold_7() const { return ___m_VertexChangedThreshold_7; }
	inline float* get_address_of_m_VertexChangedThreshold_7() { return &___m_VertexChangedThreshold_7; }
	inline void set_m_VertexChangedThreshold_7(float value)
	{
		___m_VertexChangedThreshold_7 = value;
	}

	inline static int32_t get_offset_of_boundaryChanged_8() { return static_cast<int32_t>(offsetof(ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891, ___boundaryChanged_8)); }
	inline Action_1_tBBDACDE0F7A9CD846DD9E0B8E74D5E0CC3D6B593 * get_boundaryChanged_8() const { return ___boundaryChanged_8; }
	inline Action_1_tBBDACDE0F7A9CD846DD9E0B8E74D5E0CC3D6B593 ** get_address_of_boundaryChanged_8() { return &___boundaryChanged_8; }
	inline void set_boundaryChanged_8(Action_1_tBBDACDE0F7A9CD846DD9E0B8E74D5E0CC3D6B593 * value)
	{
		___boundaryChanged_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundaryChanged_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsumedByU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891, ___U3CsubsumedByU3Ek__BackingField_9)); }
	inline ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * get_U3CsubsumedByU3Ek__BackingField_9() const { return ___U3CsubsumedByU3Ek__BackingField_9; }
	inline ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 ** get_address_of_U3CsubsumedByU3Ek__BackingField_9() { return &___U3CsubsumedByU3Ek__BackingField_9; }
	inline void set_U3CsubsumedByU3Ek__BackingField_9(ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * value)
	{
		___U3CsubsumedByU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsumedByU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Boundary_10() { return static_cast<int32_t>(offsetof(ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891, ___m_Boundary_10)); }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  get_m_Boundary_10() const { return ___m_Boundary_10; }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * get_address_of_m_Boundary_10() { return &___m_Boundary_10; }
	inline void set_m_Boundary_10(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  value)
	{
		___m_Boundary_10 = value;
	}

	inline static int32_t get_offset_of_m_OldBoundary_11() { return static_cast<int32_t>(offsetof(ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891, ___m_OldBoundary_11)); }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  get_m_OldBoundary_11() const { return ___m_OldBoundary_11; }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * get_address_of_m_OldBoundary_11() { return &___m_OldBoundary_11; }
	inline void set_m_OldBoundary_11(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  value)
	{
		___m_OldBoundary_11 = value;
	}

	inline static int32_t get_offset_of_m_HasBoundaryChanged_12() { return static_cast<int32_t>(offsetof(ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891, ___m_HasBoundaryChanged_12)); }
	inline bool get_m_HasBoundaryChanged_12() const { return ___m_HasBoundaryChanged_12; }
	inline bool* get_address_of_m_HasBoundaryChanged_12() { return &___m_HasBoundaryChanged_12; }
	inline void set_m_HasBoundaryChanged_12(bool value)
	{
		___m_HasBoundaryChanged_12 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARPlaneManager
struct ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4  : public ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7
{
public:
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARPlaneManager::m_PlanePrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_PlanePrefab_14;
	// UnityEngine.XR.ARSubsystems.PlaneDetectionMode UnityEngine.XR.ARFoundation.ARPlaneManager::m_DetectionMode
	int32_t ___m_DetectionMode_15;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARPlanesChangedEventArgs> UnityEngine.XR.ARFoundation.ARPlaneManager::planesChanged
	Action_1_tCEBED0DA57F23A7A92A05B380E69C5D67FEE4C25 * ___planesChanged_16;

public:
	inline static int32_t get_offset_of_m_PlanePrefab_14() { return static_cast<int32_t>(offsetof(ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4, ___m_PlanePrefab_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_PlanePrefab_14() const { return ___m_PlanePrefab_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_PlanePrefab_14() { return &___m_PlanePrefab_14; }
	inline void set_m_PlanePrefab_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_PlanePrefab_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PlanePrefab_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_DetectionMode_15() { return static_cast<int32_t>(offsetof(ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4, ___m_DetectionMode_15)); }
	inline int32_t get_m_DetectionMode_15() const { return ___m_DetectionMode_15; }
	inline int32_t* get_address_of_m_DetectionMode_15() { return &___m_DetectionMode_15; }
	inline void set_m_DetectionMode_15(int32_t value)
	{
		___m_DetectionMode_15 = value;
	}

	inline static int32_t get_offset_of_planesChanged_16() { return static_cast<int32_t>(offsetof(ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4, ___planesChanged_16)); }
	inline Action_1_tCEBED0DA57F23A7A92A05B380E69C5D67FEE4C25 * get_planesChanged_16() const { return ___planesChanged_16; }
	inline Action_1_tCEBED0DA57F23A7A92A05B380E69C5D67FEE4C25 ** get_address_of_planesChanged_16() { return &___planesChanged_16; }
	inline void set_planesChanged_16(Action_1_tCEBED0DA57F23A7A92A05B380E69C5D67FEE4C25 * value)
	{
		___planesChanged_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___planesChanged_16), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F  : public ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045
{
public:
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_RaycastPrefab_14;
	// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastViewportDelegate
	Func_4_t0D7774CBEE7827744440205CF327276346298BD3 * ___m_RaycastViewportDelegate_17;
	// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastRayDelegate
	Func_4_tA3D41D485BD4C73DB44AAD0202CA90BA777C1197 * ___m_RaycastRayDelegate_18;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster> UnityEngine.XR.ARFoundation.ARRaycastManager::m_Raycasters
	List_1_t179D10142696C7C113D229AC6E1884F4B19CFE27 * ___m_Raycasters_19;

public:
	inline static int32_t get_offset_of_m_RaycastPrefab_14() { return static_cast<int32_t>(offsetof(ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F, ___m_RaycastPrefab_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_RaycastPrefab_14() const { return ___m_RaycastPrefab_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_RaycastPrefab_14() { return &___m_RaycastPrefab_14; }
	inline void set_m_RaycastPrefab_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_RaycastPrefab_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RaycastPrefab_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_RaycastViewportDelegate_17() { return static_cast<int32_t>(offsetof(ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F, ___m_RaycastViewportDelegate_17)); }
	inline Func_4_t0D7774CBEE7827744440205CF327276346298BD3 * get_m_RaycastViewportDelegate_17() const { return ___m_RaycastViewportDelegate_17; }
	inline Func_4_t0D7774CBEE7827744440205CF327276346298BD3 ** get_address_of_m_RaycastViewportDelegate_17() { return &___m_RaycastViewportDelegate_17; }
	inline void set_m_RaycastViewportDelegate_17(Func_4_t0D7774CBEE7827744440205CF327276346298BD3 * value)
	{
		___m_RaycastViewportDelegate_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RaycastViewportDelegate_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_RaycastRayDelegate_18() { return static_cast<int32_t>(offsetof(ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F, ___m_RaycastRayDelegate_18)); }
	inline Func_4_tA3D41D485BD4C73DB44AAD0202CA90BA777C1197 * get_m_RaycastRayDelegate_18() const { return ___m_RaycastRayDelegate_18; }
	inline Func_4_tA3D41D485BD4C73DB44AAD0202CA90BA777C1197 ** get_address_of_m_RaycastRayDelegate_18() { return &___m_RaycastRayDelegate_18; }
	inline void set_m_RaycastRayDelegate_18(Func_4_tA3D41D485BD4C73DB44AAD0202CA90BA777C1197 * value)
	{
		___m_RaycastRayDelegate_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RaycastRayDelegate_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_Raycasters_19() { return static_cast<int32_t>(offsetof(ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F, ___m_Raycasters_19)); }
	inline List_1_t179D10142696C7C113D229AC6E1884F4B19CFE27 * get_m_Raycasters_19() const { return ___m_Raycasters_19; }
	inline List_1_t179D10142696C7C113D229AC6E1884F4B19CFE27 ** get_address_of_m_Raycasters_19() { return &___m_Raycasters_19; }
	inline void set_m_Raycasters_19(List_1_t179D10142696C7C113D229AC6E1884F4B19CFE27 * value)
	{
		___m_Raycasters_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Raycasters_19), (void*)value);
	}
};

struct ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F_StaticFields
{
public:
	// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit> UnityEngine.XR.ARFoundation.ARRaycastManager::s_RaycastHitComparer
	Comparison_1_t2171DE829C4A23A5663A53F71D283C076F5EFCBE * ___s_RaycastHitComparer_15;
	// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::s_NativeRaycastHits
	List_1_tAF78E49171E2C987480BE2F36E1E73CEFDA37469 * ___s_NativeRaycastHits_16;

public:
	inline static int32_t get_offset_of_s_RaycastHitComparer_15() { return static_cast<int32_t>(offsetof(ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F_StaticFields, ___s_RaycastHitComparer_15)); }
	inline Comparison_1_t2171DE829C4A23A5663A53F71D283C076F5EFCBE * get_s_RaycastHitComparer_15() const { return ___s_RaycastHitComparer_15; }
	inline Comparison_1_t2171DE829C4A23A5663A53F71D283C076F5EFCBE ** get_address_of_s_RaycastHitComparer_15() { return &___s_RaycastHitComparer_15; }
	inline void set_s_RaycastHitComparer_15(Comparison_1_t2171DE829C4A23A5663A53F71D283C076F5EFCBE * value)
	{
		___s_RaycastHitComparer_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RaycastHitComparer_15), (void*)value);
	}

	inline static int32_t get_offset_of_s_NativeRaycastHits_16() { return static_cast<int32_t>(offsetof(ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F_StaticFields, ___s_NativeRaycastHits_16)); }
	inline List_1_tAF78E49171E2C987480BE2F36E1E73CEFDA37469 * get_s_NativeRaycastHits_16() const { return ___s_NativeRaycastHits_16; }
	inline List_1_tAF78E49171E2C987480BE2F36E1E73CEFDA37469 ** get_address_of_s_NativeRaycastHits_16() { return &___s_NativeRaycastHits_16; }
	inline void set_s_NativeRaycastHits_16(List_1_tAF78E49171E2C987480BE2F36E1E73CEFDA37469 * value)
	{
		___s_NativeRaycastHits_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_NativeRaycastHits_16), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARTrackedImage
struct ARTrackedImage_t32B829A81320BCDF3A743DCD4DC4383BA266C5B7  : public ARTrackable_2_tBE8960CB1D0030EBBEED67D06F8B1ADB69EB3CB1
{
public:
	// UnityEngine.XR.ARSubsystems.XRReferenceImage UnityEngine.XR.ARFoundation.ARTrackedImage::<referenceImage>k__BackingField
	XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467  ___U3CreferenceImageU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CreferenceImageU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ARTrackedImage_t32B829A81320BCDF3A743DCD4DC4383BA266C5B7, ___U3CreferenceImageU3Ek__BackingField_7)); }
	inline XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467  get_U3CreferenceImageU3Ek__BackingField_7() const { return ___U3CreferenceImageU3Ek__BackingField_7; }
	inline XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467 * get_address_of_U3CreferenceImageU3Ek__BackingField_7() { return &___U3CreferenceImageU3Ek__BackingField_7; }
	inline void set_U3CreferenceImageU3Ek__BackingField_7(XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467  value)
	{
		___U3CreferenceImageU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CreferenceImageU3Ek__BackingField_7))->___m_Name_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CreferenceImageU3Ek__BackingField_7))->___m_Texture_5), (void*)NULL);
		#endif
	}
};


// UnityEngine.XR.ARFoundation.ARTrackedImageManager
struct ARTrackedImageManager_tB916E34D053E6712190F2BAE46E21D76A0882FF2  : public ARTrackableManager_5_t80C2ED1443D89CD862DA603E7D68435F74C0103A
{
public:
	// UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary UnityEngine.XR.ARFoundation.ARTrackedImageManager::m_SerializedLibrary
	XRReferenceImageLibrary_tC415743C1DDCE2331D5B0F159B2A1D72A70C44B2 * ___m_SerializedLibrary_14;
	// System.Int32 UnityEngine.XR.ARFoundation.ARTrackedImageManager::m_MaxNumberOfMovingImages
	int32_t ___m_MaxNumberOfMovingImages_15;
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARTrackedImageManager::m_TrackedImagePrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_TrackedImagePrefab_16;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs> UnityEngine.XR.ARFoundation.ARTrackedImageManager::trackedImagesChanged
	Action_1_t19910F5D681EFD1901DBD0F742BD502089B49032 * ___trackedImagesChanged_17;
	// System.Collections.Generic.Dictionary`2<System.Guid,UnityEngine.XR.ARSubsystems.XRReferenceImage> UnityEngine.XR.ARFoundation.ARTrackedImageManager::m_ReferenceImages
	Dictionary_2_t1D971BA151CCF2A891990C13C7561FEC253BC7CF * ___m_ReferenceImages_18;

public:
	inline static int32_t get_offset_of_m_SerializedLibrary_14() { return static_cast<int32_t>(offsetof(ARTrackedImageManager_tB916E34D053E6712190F2BAE46E21D76A0882FF2, ___m_SerializedLibrary_14)); }
	inline XRReferenceImageLibrary_tC415743C1DDCE2331D5B0F159B2A1D72A70C44B2 * get_m_SerializedLibrary_14() const { return ___m_SerializedLibrary_14; }
	inline XRReferenceImageLibrary_tC415743C1DDCE2331D5B0F159B2A1D72A70C44B2 ** get_address_of_m_SerializedLibrary_14() { return &___m_SerializedLibrary_14; }
	inline void set_m_SerializedLibrary_14(XRReferenceImageLibrary_tC415743C1DDCE2331D5B0F159B2A1D72A70C44B2 * value)
	{
		___m_SerializedLibrary_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SerializedLibrary_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_MaxNumberOfMovingImages_15() { return static_cast<int32_t>(offsetof(ARTrackedImageManager_tB916E34D053E6712190F2BAE46E21D76A0882FF2, ___m_MaxNumberOfMovingImages_15)); }
	inline int32_t get_m_MaxNumberOfMovingImages_15() const { return ___m_MaxNumberOfMovingImages_15; }
	inline int32_t* get_address_of_m_MaxNumberOfMovingImages_15() { return &___m_MaxNumberOfMovingImages_15; }
	inline void set_m_MaxNumberOfMovingImages_15(int32_t value)
	{
		___m_MaxNumberOfMovingImages_15 = value;
	}

	inline static int32_t get_offset_of_m_TrackedImagePrefab_16() { return static_cast<int32_t>(offsetof(ARTrackedImageManager_tB916E34D053E6712190F2BAE46E21D76A0882FF2, ___m_TrackedImagePrefab_16)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_TrackedImagePrefab_16() const { return ___m_TrackedImagePrefab_16; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_TrackedImagePrefab_16() { return &___m_TrackedImagePrefab_16; }
	inline void set_m_TrackedImagePrefab_16(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_TrackedImagePrefab_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedImagePrefab_16), (void*)value);
	}

	inline static int32_t get_offset_of_trackedImagesChanged_17() { return static_cast<int32_t>(offsetof(ARTrackedImageManager_tB916E34D053E6712190F2BAE46E21D76A0882FF2, ___trackedImagesChanged_17)); }
	inline Action_1_t19910F5D681EFD1901DBD0F742BD502089B49032 * get_trackedImagesChanged_17() const { return ___trackedImagesChanged_17; }
	inline Action_1_t19910F5D681EFD1901DBD0F742BD502089B49032 ** get_address_of_trackedImagesChanged_17() { return &___trackedImagesChanged_17; }
	inline void set_trackedImagesChanged_17(Action_1_t19910F5D681EFD1901DBD0F742BD502089B49032 * value)
	{
		___trackedImagesChanged_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackedImagesChanged_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_ReferenceImages_18() { return static_cast<int32_t>(offsetof(ARTrackedImageManager_tB916E34D053E6712190F2BAE46E21D76A0882FF2, ___m_ReferenceImages_18)); }
	inline Dictionary_2_t1D971BA151CCF2A891990C13C7561FEC253BC7CF * get_m_ReferenceImages_18() const { return ___m_ReferenceImages_18; }
	inline Dictionary_2_t1D971BA151CCF2A891990C13C7561FEC253BC7CF ** get_address_of_m_ReferenceImages_18() { return &___m_ReferenceImages_18; }
	inline void set_m_ReferenceImages_18(Dictionary_2_t1D971BA151CCF2A891990C13C7561FEC253BC7CF * value)
	{
		___m_ReferenceImages_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReferenceImages_18), (void*)value);
	}
};


// UnityEngine.UI.Dropdown
struct Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Dropdown::m_Template
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_Template_20;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_CaptionText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_CaptionText_21;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_CaptionImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_CaptionImage_22;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_ItemText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_ItemText_23;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_ItemImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_ItemImage_24;
	// System.Int32 UnityEngine.UI.Dropdown::m_Value
	int32_t ___m_Value_25;
	// UnityEngine.UI.Dropdown/OptionDataList UnityEngine.UI.Dropdown::m_Options
	OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6 * ___m_Options_26;
	// UnityEngine.UI.Dropdown/DropdownEvent UnityEngine.UI.Dropdown::m_OnValueChanged
	DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB * ___m_OnValueChanged_27;
	// System.Single UnityEngine.UI.Dropdown::m_AlphaFadeSpeed
	float ___m_AlphaFadeSpeed_28;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Dropdown
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_Dropdown_29;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Blocker
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_Blocker_30;
	// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem> UnityEngine.UI.Dropdown::m_Items
	List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033 * ___m_Items_31;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween> UnityEngine.UI.Dropdown::m_AlphaTweenRunner
	TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D * ___m_AlphaTweenRunner_32;
	// System.Boolean UnityEngine.UI.Dropdown::validTemplate
	bool ___validTemplate_33;

public:
	inline static int32_t get_offset_of_m_Template_20() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Template_20)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_Template_20() const { return ___m_Template_20; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_Template_20() { return &___m_Template_20; }
	inline void set_m_Template_20(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_Template_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Template_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaptionText_21() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_CaptionText_21)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_CaptionText_21() const { return ___m_CaptionText_21; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_CaptionText_21() { return &___m_CaptionText_21; }
	inline void set_m_CaptionText_21(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_CaptionText_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CaptionText_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaptionImage_22() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_CaptionImage_22)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_CaptionImage_22() const { return ___m_CaptionImage_22; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_CaptionImage_22() { return &___m_CaptionImage_22; }
	inline void set_m_CaptionImage_22(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_CaptionImage_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CaptionImage_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ItemText_23() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_ItemText_23)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_ItemText_23() const { return ___m_ItemText_23; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_ItemText_23() { return &___m_ItemText_23; }
	inline void set_m_ItemText_23(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_ItemText_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemText_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ItemImage_24() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_ItemImage_24)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_ItemImage_24() const { return ___m_ItemImage_24; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_ItemImage_24() { return &___m_ItemImage_24; }
	inline void set_m_ItemImage_24(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_ItemImage_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemImage_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_Value_25() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Value_25)); }
	inline int32_t get_m_Value_25() const { return ___m_Value_25; }
	inline int32_t* get_address_of_m_Value_25() { return &___m_Value_25; }
	inline void set_m_Value_25(int32_t value)
	{
		___m_Value_25 = value;
	}

	inline static int32_t get_offset_of_m_Options_26() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Options_26)); }
	inline OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6 * get_m_Options_26() const { return ___m_Options_26; }
	inline OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6 ** get_address_of_m_Options_26() { return &___m_Options_26; }
	inline void set_m_Options_26(OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6 * value)
	{
		___m_Options_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Options_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_27() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_OnValueChanged_27)); }
	inline DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB * get_m_OnValueChanged_27() const { return ___m_OnValueChanged_27; }
	inline DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB ** get_address_of_m_OnValueChanged_27() { return &___m_OnValueChanged_27; }
	inline void set_m_OnValueChanged_27(DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB * value)
	{
		___m_OnValueChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_AlphaFadeSpeed_28() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_AlphaFadeSpeed_28)); }
	inline float get_m_AlphaFadeSpeed_28() const { return ___m_AlphaFadeSpeed_28; }
	inline float* get_address_of_m_AlphaFadeSpeed_28() { return &___m_AlphaFadeSpeed_28; }
	inline void set_m_AlphaFadeSpeed_28(float value)
	{
		___m_AlphaFadeSpeed_28 = value;
	}

	inline static int32_t get_offset_of_m_Dropdown_29() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Dropdown_29)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_Dropdown_29() const { return ___m_Dropdown_29; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_Dropdown_29() { return &___m_Dropdown_29; }
	inline void set_m_Dropdown_29(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_Dropdown_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Dropdown_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_Blocker_30() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Blocker_30)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_Blocker_30() const { return ___m_Blocker_30; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_Blocker_30() { return &___m_Blocker_30; }
	inline void set_m_Blocker_30(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_Blocker_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Blocker_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_Items_31() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Items_31)); }
	inline List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033 * get_m_Items_31() const { return ___m_Items_31; }
	inline List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033 ** get_address_of_m_Items_31() { return &___m_Items_31; }
	inline void set_m_Items_31(List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033 * value)
	{
		___m_Items_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Items_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_AlphaTweenRunner_32() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_AlphaTweenRunner_32)); }
	inline TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D * get_m_AlphaTweenRunner_32() const { return ___m_AlphaTweenRunner_32; }
	inline TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D ** get_address_of_m_AlphaTweenRunner_32() { return &___m_AlphaTweenRunner_32; }
	inline void set_m_AlphaTweenRunner_32(TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D * value)
	{
		___m_AlphaTweenRunner_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AlphaTweenRunner_32), (void*)value);
	}

	inline static int32_t get_offset_of_validTemplate_33() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___validTemplate_33)); }
	inline bool get_validTemplate_33() const { return ___validTemplate_33; }
	inline bool* get_address_of_validTemplate_33() { return &___validTemplate_33; }
	inline void set_validTemplate_33(bool value)
	{
		___validTemplate_33 = value;
	}
};

struct Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96_StaticFields
{
public:
	// UnityEngine.UI.Dropdown/OptionData UnityEngine.UI.Dropdown::s_NoOptionData
	OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * ___s_NoOptionData_34;

public:
	inline static int32_t get_offset_of_s_NoOptionData_34() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96_StaticFields, ___s_NoOptionData_34)); }
	inline OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * get_s_NoOptionData_34() const { return ___s_NoOptionData_34; }
	inline OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 ** get_address_of_s_NoOptionData_34() { return &___s_NoOptionData_34; }
	inline void set_s_NoOptionData_34(OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * value)
	{
		___s_NoOptionData_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_NoOptionData_34), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Video.VideoClip[]
struct VideoClipU5BU5D_t6683BD7FA0E3C2C85483295CBB3727AD422ED431  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) VideoClip_tA8C2507553BEE394C46B7A876D6F56DD09F6C90F * m_Items[1];

public:
	inline VideoClip_tA8C2507553BEE394C46B7A876D6F56DD09F6C90F * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline VideoClip_tA8C2507553BEE394C46B7A876D6F56DD09F6C90F ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, VideoClip_tA8C2507553BEE394C46B7A876D6F56DD09F6C90F * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline VideoClip_tA8C2507553BEE394C46B7A876D6F56DD09F6C90F * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline VideoClip_tA8C2507553BEE394C46B7A876D6F56DD09F6C90F ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, VideoClip_tA8C2507553BEE394C46B7A876D6F56DD09F6C90F * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Color[]
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  m_Items[1];

public:
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.XR.ARFoundation.ARRaycastHit[]
struct ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  m_Items[1];

public:
	inline ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CtrackableU3Ek__BackingField_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Transform_3), (void*)NULL);
		#endif
	}
	inline ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CtrackableU3Ek__BackingField_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Transform_3), (void*)NULL);
		#endif
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared (const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCB81D2E16433EA0BB063264694162BD7E3DE1DA0_gshared (Dictionary_2_t8A3F8777BEF075E009D085E3BC9B9ADB00F47345 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m3D6EC91AA74731FC52980BA2469EEA9D3F478AE8_gshared (Dictionary_2_t8A3F8777BEF075E009D085E3BC9B9ADB00F47345 * __this, RuntimeObject * ___key0, bool ___value1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m478435EC913232FA753676196AF119F5001564B3_gshared (Action_1_t19910F5D681EFD1901DBD0F742BD502089B49032 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_get_Item_mA64D8887D1152D6C83ADB22C163DB0113C39C102_gshared (Dictionary_2_t8A3F8777BEF075E009D085E3BC9B9ADB00F47345 * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m5FBD1D681DF5F1314791CE6F97B4F040B18BC3BF_gshared (Dictionary_2_t8A3F8777BEF075E009D085E3BC9B9ADB00F47345 * __this, RuntimeObject * ___key0, bool ___value1, const RuntimeMethod* method);
// UnityEngine.XR.ARFoundation.TrackableCollection`1<!4> UnityEngine.XR.ARFoundation.ARTrackableManager`5<System.Object,System.Object,System.Object,UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::get_trackables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2  ARTrackableManager_5_get_trackables_mA9C079E7BC627AE1E6161C84146FAB7B4283F647_gshared (ARTrackableManager_5_t2707E45F444C493E32789D9B57F85551A10E4212 * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<!0> UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t2E1E8D9B1C4E269F7D1A8823FA9D39B68490DB07  TrackableCollection_1_GetEnumerator_m8F500D7F92731D0C759C54F845BF7824A90E9ABE_gshared (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * __this, const RuntimeMethod* method);
// !0 UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m39A0AD5C1E46A028907AE6D774752B6F22946EF3_gshared (Enumerator_t2E1E8D9B1C4E269F7D1A8823FA9D39B68490DB07 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m7C26F98E01304EA7C8F0B6E4FEF7E9787915AB1D_gshared (Enumerator_t2E1E8D9B1C4E269F7D1A8823FA9D39B68490DB07 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  List_1_get_Item_m200A6C390D1FAEF2378D70230BD6E96D492ABE04_gshared_inline (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * __this, int32_t ___index0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC26889C0423CCF594A8C363532AC63BB0DB25201_gshared (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * __this, const RuntimeMethod* method);

// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::Play(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___stateName0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<AnimDropdown>()
inline AnimDropdown_t734E84963601DD70BDA49545C64952B6CCB52FD7 * Component_GetComponent_TisAnimDropdown_t734E84963601DD70BDA49545C64952B6CCB52FD7_m31F47D087B780D0EFDA1397D8A3A61DFF5F4B78B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  AnimDropdown_t734E84963601DD70BDA49545C64952B6CCB52FD7 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Object::FindObjectOfType<UnityEngine.XR.ARFoundation.ARTrackedImageManager>()
inline ARTrackedImageManager_tB916E34D053E6712190F2BAE46E21D76A0882FF2 * Object_FindObjectOfType_TisARTrackedImageManager_tB916E34D053E6712190F2BAE46E21D76A0882FF2_m660417E625FD0A66345200E2670A25DD17AA6A22 (const RuntimeMethod* method)
{
	return ((  ARTrackedImageManager_tB916E34D053E6712190F2BAE46E21D76A0882FF2 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// UnityEngine.XR.ARSubsystems.IReferenceImageLibrary UnityEngine.XR.ARFoundation.ARTrackedImageManager::get_referenceLibrary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ARTrackedImageManager_get_referenceLibrary_m3E5AFA95A69BF9A99D7F6E39F6268B19DB96DF05 (ARTrackedImageManager_tB916E34D053E6712190F2BAE46E21D76A0882FF2 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor()
inline void Dictionary_2__ctor_m7B1612DAAC58ADB707313836D78A8FB4556FEBC0 (Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C *, const RuntimeMethod*))Dictionary_2__ctor_mCB81D2E16433EA0BB063264694162BD7E3DE1DA0_gshared)(__this, method);
}
// System.String UnityEngine.XR.ARSubsystems.XRReferenceImage::get_name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XRReferenceImage_get_name_mE8F3368C2587552333AB78EA72A02E5B73E355C7_inline (XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Add(!0,!1)
inline void Dictionary_2_Add_m8851C6AF7F94A1DA72F501CF96435967687E41E5 (Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C * __this, String_t* ___key0, bool ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C *, String_t*, bool, const RuntimeMethod*))Dictionary_2_Add_m3D6EC91AA74731FC52980BA2469EEA9D3F478AE8_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m478435EC913232FA753676196AF119F5001564B3 (Action_1_t19910F5D681EFD1901DBD0F742BD502089B49032 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t19910F5D681EFD1901DBD0F742BD502089B49032 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m478435EC913232FA753676196AF119F5001564B3_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackedImageManager::add_trackedImagesChanged(System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackedImageManager_add_trackedImagesChanged_m72C17C9ECEEFADD229EA80CD20ED1254336F3D76 (ARTrackedImageManager_tB916E34D053E6712190F2BAE46E21D76A0882FF2 * __this, Action_1_t19910F5D681EFD1901DBD0F742BD502089B49032 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.ARTrackedImageManager::remove_trackedImagesChanged(System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackedImageManager_remove_trackedImagesChanged_mE28AE7C3CD3F208C9891976125E8A0ED3641EDAF (ARTrackedImageManager_tB916E34D053E6712190F2BAE46E21D76A0882FF2 * __this, Action_1_t19910F5D681EFD1901DBD0F742BD502089B49032 * ___value0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage> UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::get_added()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * ARTrackedImagesChangedEventArgs_get_added_m0E81E3C161242C2508B90BCC73605F551AD53B4E_inline (ARTrackedImagesChangedEventArgs_t6EA8225CE7DB5A2148855F99D437DFA5786A1B7C * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>::GetEnumerator()
inline Enumerator_t38DCEDBB06600CDABFF1967A5F011738638CE8F4  List_1_GetEnumerator_m364FE8EB7E663EEC71E574FD554BE600FD5A0D86 (List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t38DCEDBB06600CDABFF1967A5F011738638CE8F4  (*) (List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARTrackedImage>::get_Current()
inline ARTrackedImage_t32B829A81320BCDF3A743DCD4DC4383BA266C5B7 * Enumerator_get_Current_m8F54706BF35C304C986CE96C30148CF4911A9374_inline (Enumerator_t38DCEDBB06600CDABFF1967A5F011738638CE8F4 * __this, const RuntimeMethod* method)
{
	return ((  ARTrackedImage_t32B829A81320BCDF3A743DCD4DC4383BA266C5B7 * (*) (Enumerator_t38DCEDBB06600CDABFF1967A5F011738638CE8F4 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Void ImageTracking::UpdateImage(UnityEngine.XR.ARFoundation.ARTrackedImage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTracking_UpdateImage_m6EA667E6284B239584418E7AA908EE43D6403BE2 (ImageTracking_t06C356D3B06EA642613D7FC66E71B6D57A5AFF80 * __this, ARTrackedImage_t32B829A81320BCDF3A743DCD4DC4383BA266C5B7 * ___trackedImage0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARTrackedImage>::MoveNext()
inline bool Enumerator_MoveNext_m89255A16DAE894CEA174A88A674162B09592C8C7 (Enumerator_t38DCEDBB06600CDABFF1967A5F011738638CE8F4 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t38DCEDBB06600CDABFF1967A5F011738638CE8F4 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARTrackedImage>::Dispose()
inline void Enumerator_Dispose_m037FDB6FB9E61ECDB0D7F5AB2373A57E01AE500C (Enumerator_t38DCEDBB06600CDABFF1967A5F011738638CE8F4 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t38DCEDBB06600CDABFF1967A5F011738638CE8F4 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage> UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::get_updated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * ARTrackedImagesChangedEventArgs_get_updated_mBEB295B97B6C25E4DC4447383F529C9E475E4041_inline (ARTrackedImagesChangedEventArgs_t6EA8225CE7DB5A2148855F99D437DFA5786A1B7C * __this, const RuntimeMethod* method);
// System.Void ImageTracking::setItemsText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTracking_setItemsText_m51D023AC6427F8AF897CE4E78778D776C9DF8C82 (ImageTracking_t06C356D3B06EA642613D7FC66E71B6D57A5AFF80 * __this, const RuntimeMethod* method);
// System.Void ImageTracking::setRecipes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTracking_setRecipes_m4F86CEEA8BEA6DA461C5F7E5BA1923DF50714AE0 (ImageTracking_t06C356D3B06EA642613D7FC66E71B6D57A5AFF80 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::get_Item(!0)
inline bool Dictionary_2_get_Item_m3FC6EB738CC4A9E285D6330B2352769B37B32B20 (Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mA64D8887D1152D6C83ADB22C163DB0113C39C102_gshared)(__this, ___key0, method);
}
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.String>::Contains(!0)
inline bool List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData> UnityEngine.UI.Dropdown::get_options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * Dropdown_get_options_mF427A2157CDD901C12F1B160C4D1F8207D7111D0 (Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Dropdown/OptionData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionData__ctor_mA1D3FE8359A7237C62D802A3E94221D451364056 (OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Dropdown/OptionData::set_text(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OptionData_set_text_m23C74889CF93559CD64F90EC8DA69C20C13FC549_inline (OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>::Add(!0)
inline void List_1_Add_mC2611000DA97145D1DFC867ECA604FBB3E8628EC (List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * __this, OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 *, OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void AnimDropdown::playAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimDropdown_playAnimation_m059CBF28D79CA2F19206FFF1F5ADA0A980C9A259 (AnimDropdown_t734E84963601DD70BDA49545C64952B6CCB52FD7 * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.XRReferenceImage UnityEngine.XR.ARFoundation.ARTrackedImage::get_referenceImage()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467  ARTrackedImage_get_referenceImage_m6061DE2D46F8060065B64EF3860A0B0085B569E4_inline (ARTrackedImage_t32B829A81320BCDF3A743DCD4DC4383BA266C5B7 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m80950D4BAC47AA3A0B7E50B2C2E0606342C9011D (Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C * __this, String_t* ___key0, bool ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C *, String_t*, bool, const RuntimeMethod*))Dictionary_2_set_Item_m5FBD1D681DF5F1314791CE6F97B4F040B18BC3BF_gshared)(__this, ___key0, ___value1, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARPlaneManager>()
inline ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4 * Component_GetComponent_TisARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4_m7BA2917E127FC45DCAF97AF959F8BE832F8D1846 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void PlaneDetectionToggle::TogglePlaneDetection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaneDetectionToggle_TogglePlaneDetection_mD73219E46A17C747E4393C4262D79DEEA232BB59 (PlaneDetectionToggle_t46401949F3D814B54B51A92A03383100AC6A7A67 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, const RuntimeMethod* method);
// System.Void PlaneDetectionToggle::SetAllPlanesActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaneDetectionToggle_SetAllPlanesActive_m8EF64038C8B636C1B53B35505E1DD9EA651016AE (PlaneDetectionToggle_t46401949F3D814B54B51A92A03383100AC6A7A67 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.XR.ARFoundation.TrackableCollection`1<!4> UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider,UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARFoundation.ARPlane>::get_trackables()
inline TrackableCollection_1_tF901F9001ABC2CCCF561F7CB246E74516ABB8EFB  ARTrackableManager_5_get_trackables_m1868AA38C59A0E75D2FA03964898FB15577FD7E9 (ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7 * __this, const RuntimeMethod* method)
{
	return ((  TrackableCollection_1_tF901F9001ABC2CCCF561F7CB246E74516ABB8EFB  (*) (ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7 *, const RuntimeMethod*))ARTrackableManager_5_get_trackables_mA9C079E7BC627AE1E6161C84146FAB7B4283F647_gshared)(__this, method);
}
// UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<!0> UnityEngine.XR.ARFoundation.TrackableCollection`1<UnityEngine.XR.ARFoundation.ARPlane>::GetEnumerator()
inline Enumerator_t7966991B2B4ED87E60D0CB1DA4C8228004A3D386  TrackableCollection_1_GetEnumerator_mAB63B26E604CFE12281E5B212826C7609CF11A5C (TrackableCollection_1_tF901F9001ABC2CCCF561F7CB246E74516ABB8EFB * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t7966991B2B4ED87E60D0CB1DA4C8228004A3D386  (*) (TrackableCollection_1_tF901F9001ABC2CCCF561F7CB246E74516ABB8EFB *, const RuntimeMethod*))TrackableCollection_1_GetEnumerator_m8F500D7F92731D0C759C54F845BF7824A90E9ABE_gshared)(__this, method);
}
// !0 UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<UnityEngine.XR.ARFoundation.ARPlane>::get_Current()
inline ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * Enumerator_get_Current_m3D5E7C33ACC22CA9FBB0725D35D75D86592FFB29 (Enumerator_t7966991B2B4ED87E60D0CB1DA4C8228004A3D386 * __this, const RuntimeMethod* method)
{
	return ((  ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * (*) (Enumerator_t7966991B2B4ED87E60D0CB1DA4C8228004A3D386 *, const RuntimeMethod*))Enumerator_get_Current_m39A0AD5C1E46A028907AE6D774752B6F22946EF3_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<UnityEngine.XR.ARFoundation.ARPlane>::MoveNext()
inline bool Enumerator_MoveNext_mAD42DB33FFA5B95D44127214BCD44B64BE5FE094 (Enumerator_t7966991B2B4ED87E60D0CB1DA4C8228004A3D386 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t7966991B2B4ED87E60D0CB1DA4C8228004A3D386 *, const RuntimeMethod*))Enumerator_MoveNext_m7C26F98E01304EA7C8F0B6E4FEF7E9787915AB1D_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARRaycastManager>()
inline ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * Component_GetComponent_TisARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F_m06FA2C50C4CE43EB1459B81753EFF12567E93770 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6 (const RuntimeMethod* method);
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F (int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257 (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// System.Boolean SpawnObjectOnPlane::TryGetTouchPosition(UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpawnObjectOnPlane_TryGetTouchPosition_m0FD1FE55B6C6F2F071C4F0CCD80C576CE2527C3E (SpawnObjectOnPlane_t01B265C88B0D8D2D33A765C082A0B4CADF163032 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___touchPosition0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARFoundation.ARRaycastManager::Raycast(UnityEngine.Vector2,System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>,UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARRaycastManager_Raycast_mCC2851DAC2542C59528FCE21242231DFAF024650 (ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPoint0, List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * ___hitResults1, int32_t ___trackableTypes2, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Item(System.Int32)
inline ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  List_1_get_Item_m200A6C390D1FAEF2378D70230BD6E96D492ABE04_inline (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  (*) (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D *, int32_t, const RuntimeMethod*))List_1_get_Item_m200A6C390D1FAEF2378D70230BD6E96D492ABE04_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.Pose UnityEngine.XR.ARFoundation.ARRaycastHit::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ARRaycastHit_get_pose_mB4D8BC45F23D9F2C2C8DCAFA88DB1221D76EF02B (ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.UI.Dropdown::get_value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Dropdown_get_value_mFBF47E0C72050C5CB96B8B6D33F41BA2D1368F26_inline (Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>::get_Item(System.Int32)
inline OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * List_1_get_Item_mF979E11037D572E72D866EC260EF0434EF296E67_inline (List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * (*) (List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.String UnityEngine.UI.Dropdown/OptionData::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* OptionData_get_text_m8652FE3866405C4C7C3782659009EF2C7E54D232_inline (OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * __this, const RuntimeMethod* method);
// System.Void SpawnObjectOnPlane::SpawnPrefab(UnityEngine.Pose,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnObjectOnPlane_SpawnPrefab_mEB89CABE639B24FBC7618333F914D3103018779B (SpawnObjectOnPlane_t01B265C88B0D8D2D33A765C082A0B4CADF163032 * __this, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___hitPose0, String_t* ___dropDownText1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mE77655C011C18F49CAD740CED7940EF1C7000357 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, int32_t ___relativeTo3, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.Video.VideoPlayer>()
inline VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * GameObject_AddComponent_TisVideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86_mD1CFC66F6C6D8A6EF825A2012512F0709B2D3188 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void UnityEngine.Video.VideoPlayer::set_isLooping(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_isLooping_mBA932FED6AA886C07C4770D7FAC369D249F0E7C2 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer::set_playOnAwake(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_playOnAwake_m30420ABD3827A5A7BD663815D64DBA68CF88A8D2 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_Stop_mC65F299C170F41E6823207427F782982031DE293 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer::set_clip(UnityEngine.Video.VideoClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_clip_mECA56632F836FE1297D1A10115570E07D05FDB6C (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, VideoClip_tA8C2507553BEE394C46B7A876D6F56DD09F6C90F * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_Play_m2AD0D39D70055A5AADCF63430D3D9CEC7DCB0516 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
inline void List_1__ctor_mC26889C0423CCF594A8C363532AC63BB0DB25201 (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D *, const RuntimeMethod*))List_1__ctor_mC26889C0423CCF594A8C363532AC63BB0DB25201_gshared)(__this, method);
}
// System.Void TextureScale::ThreadedScale(UnityEngine.Texture2D,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureScale_ThreadedScale_m64614D8D733CF2D471F557C822F9ABFF70FE9C26 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___tex0, int32_t ___newWidth1, int32_t ___newHeight2, bool ___useBilinear3, const RuntimeMethod* method);
// UnityEngine.Color[] UnityEngine.Texture2D::GetPixels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* Texture2D_GetPixels_m702E1E59DE60A5A11197DA3F6474F9E6716D9699 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.SystemInfo::get_processorCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_processorCount_mBAA6A01218CF7F03638A6016B6881466830FD0D5 (const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519 (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method);
// System.Void System.Threading.Mutex::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mutex__ctor_mE64D51F0538989539F6C059AB7E247423B699BBE (Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5 * __this, bool ___initiallyOwned0, const RuntimeMethod* method);
// System.Void TextureScale/ThreadData::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadData__ctor_mA2E955D69EA603EB22B6B27718C8F195C3825D83 (ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A * __this, int32_t ___s0, int32_t ___e1, const RuntimeMethod* method);
// System.Void System.Threading.ParameterizedThreadStart::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterizedThreadStart__ctor_m6F49448AAE802068CE1DB1BE519962708DA871B0 (ParameterizedThreadStart_t5C6FC428171B904D8547954B337B373083E89516 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Threading.Thread::.ctor(System.Threading.ParameterizedThreadStart)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread__ctor_m4E8C9D36164CFCFD65989CAE0F6456AC40BC4492 (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, ParameterizedThreadStart_t5C6FC428171B904D8547954B337B373083E89516 * ___start0, const RuntimeMethod* method);
// System.Void System.Threading.Thread::Start(System.Object)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Thread_Start_m11EE2B4E0C1BC8520655644C1C31C0CFFC23B5B7 (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, RuntimeObject * ___parameter0, const RuntimeMethod* method);
// System.Void TextureScale::BilinearScale(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureScale_BilinearScale_m8083AFB865014130774167B8D017933D18B4C3B5 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void TextureScale::PointScale(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureScale_PointScale_m4C9D1E67BF1A55E2F553312F9824145EA8DD0331 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Threading.Thread::Sleep(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Sleep_m8E61FC80BD38981CB18CA549909710790283DDCC (int32_t ___millisecondsTimeout0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Texture2D::Resize(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Texture2D_Resize_m3B472A6ED37D683DC4162504F6DCF42E1FA2195C (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::SetPixels(UnityEngine.Color[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixels_m5FBA81041D65F8641C3107195D390EE65467FB4F (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ___colors0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, const RuntimeMethod* method);
// UnityEngine.Color TextureScale::ColorLerpUnclamped(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  TextureScale_ColorLerpUnclamped_m17AEA77F6A498CAC07EA55DF16E7A46774D31138 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___c10, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___c21, float ___value2, const RuntimeMethod* method);
// System.Void System.Threading.Mutex::ReleaseMutex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mutex_ReleaseMutex_mDF6C95C5F169F7345539CAECFA264A4D4687B190 (Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Void AnimDropdown::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimDropdown_Start_m666B1FDE9C70CF4AC296694C236D678C071FC1B0 (AnimDropdown_t734E84963601DD70BDA49545C64952B6CCB52FD7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim = GetComponent<Animator>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0;
		L_0 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		__this->set_anim_4(L_0);
		// audioSource = GetComponent<AudioSource>();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1;
		L_1 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		__this->set_audioSource_5(L_1);
		// anim.enabled = false;
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_2 = __this->get_anim_4();
		NullCheck(L_2);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_2, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AnimDropdown::playAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimDropdown_playAnimation_m059CBF28D79CA2F19206FFF1F5ADA0A980C9A259 (AnimDropdown_t734E84963601DD70BDA49545C64952B6CCB52FD7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F732453125C5B4A32BCACFFD3CF6642CD782F32);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim.enabled = true;
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_anim_4();
		NullCheck(L_0);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_0, (bool)1, /*hidden argument*/NULL);
		// anim.Play("DropdownAnimation");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1 = __this->get_anim_4();
		NullCheck(L_1);
		Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C(L_1, _stringLiteral7F732453125C5B4A32BCACFFD3CF6642CD782F32, /*hidden argument*/NULL);
		// audioSource.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_2 = __this->get_audioSource_5();
		NullCheck(L_2);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AnimDropdown::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimDropdown__ctor_m01DF9D182796C2559E62190A00684FF9C9C13F54 (AnimDropdown_t734E84963601DD70BDA49545C64952B6CCB52FD7 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ImageTracking::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTracking_Awake_m7579999A12E8E8610888695D73FF7CF1071BE29E (ImageTracking_t06C356D3B06EA642613D7FC66E71B6D57A5AFF80 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimDropdown_t734E84963601DD70BDA49545C64952B6CCB52FD7_m31F47D087B780D0EFDA1397D8A3A61DFF5F4B78B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m8851C6AF7F94A1DA72F501CF96435967687E41E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m7B1612DAAC58ADB707313836D78A8FB4556FEBC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReferenceImageLibrary_t442603E2283A3DE643D30BC7A02DB47E6F4B6B4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisARTrackedImageManager_tB916E34D053E6712190F2BAE46E21D76A0882FF2_m660417E625FD0A66345200E2670A25DD17AA6A22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDCE3DE3D52F18B82F82B1223F128979DB936DDE);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// recipeList = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_0, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		__this->set_recipeList_5(L_0);
		// recipeDropDownAnim = recipeDropDown.GetComponent<AnimDropdown>();
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_1 = __this->get_recipeDropDown_4();
		NullCheck(L_1);
		AnimDropdown_t734E84963601DD70BDA49545C64952B6CCB52FD7 * L_2;
		L_2 = Component_GetComponent_TisAnimDropdown_t734E84963601DD70BDA49545C64952B6CCB52FD7_m31F47D087B780D0EFDA1397D8A3A61DFF5F4B78B(L_1, /*hidden argument*/Component_GetComponent_TisAnimDropdown_t734E84963601DD70BDA49545C64952B6CCB52FD7_m31F47D087B780D0EFDA1397D8A3A61DFF5F4B78B_RuntimeMethod_var);
		__this->set_recipeDropDownAnim_6(L_2);
		// numSeenObjects = 0;
		__this->set_numSeenObjects_9(0);
		// itemsString = "Items:\n";
		__this->set_itemsString_8(_stringLiteralEDCE3DE3D52F18B82F82B1223F128979DB936DDE);
		// itemsText.text = itemsString;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_itemsText_7();
		String_t* L_4 = __this->get_itemsString_8();
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_4);
		// trackedImageManager = FindObjectOfType<ARTrackedImageManager>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		ARTrackedImageManager_tB916E34D053E6712190F2BAE46E21D76A0882FF2 * L_5;
		L_5 = Object_FindObjectOfType_TisARTrackedImageManager_tB916E34D053E6712190F2BAE46E21D76A0882FF2_m660417E625FD0A66345200E2670A25DD17AA6A22(/*hidden argument*/Object_FindObjectOfType_TisARTrackedImageManager_tB916E34D053E6712190F2BAE46E21D76A0882FF2_m660417E625FD0A66345200E2670A25DD17AA6A22_RuntimeMethod_var);
		__this->set_trackedImageManager_12(L_5);
		// refLibrary = trackedImageManager.referenceLibrary;
		ARTrackedImageManager_tB916E34D053E6712190F2BAE46E21D76A0882FF2 * L_6 = __this->get_trackedImageManager_12();
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = ARTrackedImageManager_get_referenceLibrary_m3E5AFA95A69BF9A99D7F6E39F6268B19DB96DF05(L_6, /*hidden argument*/NULL);
		__this->set_refLibrary_11(L_7);
		// seenObjects = new Dictionary<string, bool>();
		Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C * L_8 = (Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C *)il2cpp_codegen_object_new(Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m7B1612DAAC58ADB707313836D78A8FB4556FEBC0(L_8, /*hidden argument*/Dictionary_2__ctor_m7B1612DAAC58ADB707313836D78A8FB4556FEBC0_RuntimeMethod_var);
		__this->set_seenObjects_10(L_8);
		// for (int i = 0; i < refLibrary.count; i++)
		V_0 = 0;
		goto IL_008e;
	}

IL_006a:
	{
		// seenObjects.Add(refLibrary[i].name, false);
		Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C * L_9 = __this->get_seenObjects_10();
		RuntimeObject* L_10 = __this->get_refLibrary_11();
		int32_t L_11 = V_0;
		NullCheck(L_10);
		XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467  L_12;
		L_12 = InterfaceFuncInvoker1< XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467 , int32_t >::Invoke(1 /* UnityEngine.XR.ARSubsystems.XRReferenceImage UnityEngine.XR.ARSubsystems.IReferenceImageLibrary::get_Item(System.Int32) */, IReferenceImageLibrary_t442603E2283A3DE643D30BC7A02DB47E6F4B6B4F_il2cpp_TypeInfo_var, L_10, L_11);
		V_1 = L_12;
		String_t* L_13;
		L_13 = XRReferenceImage_get_name_mE8F3368C2587552333AB78EA72A02E5B73E355C7_inline((XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467 *)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_9);
		Dictionary_2_Add_m8851C6AF7F94A1DA72F501CF96435967687E41E5(L_9, L_13, (bool)0, /*hidden argument*/Dictionary_2_Add_m8851C6AF7F94A1DA72F501CF96435967687E41E5_RuntimeMethod_var);
		// for (int i = 0; i < refLibrary.count; i++)
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_008e:
	{
		// for (int i = 0; i < refLibrary.count; i++)
		int32_t L_15 = V_0;
		RuntimeObject* L_16 = __this->get_refLibrary_11();
		NullCheck(L_16);
		int32_t L_17;
		L_17 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 UnityEngine.XR.ARSubsystems.IReferenceImageLibrary::get_count() */, IReferenceImageLibrary_t442603E2283A3DE643D30BC7A02DB47E6F4B6B4F_il2cpp_TypeInfo_var, L_16);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_006a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ImageTracking::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTracking_OnEnable_mEB753A2871A1DF507D551E5A0682842D0504ED53 (ImageTracking_t06C356D3B06EA642613D7FC66E71B6D57A5AFF80 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m478435EC913232FA753676196AF119F5001564B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t19910F5D681EFD1901DBD0F742BD502089B49032_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageTracking_ImageChanged_mF71CEAFEC17C56EA45ED003E88C0A51609B8105A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// trackedImageManager.trackedImagesChanged += ImageChanged;
		ARTrackedImageManager_tB916E34D053E6712190F2BAE46E21D76A0882FF2 * L_0 = __this->get_trackedImageManager_12();
		Action_1_t19910F5D681EFD1901DBD0F742BD502089B49032 * L_1 = (Action_1_t19910F5D681EFD1901DBD0F742BD502089B49032 *)il2cpp_codegen_object_new(Action_1_t19910F5D681EFD1901DBD0F742BD502089B49032_il2cpp_TypeInfo_var);
		Action_1__ctor_m478435EC913232FA753676196AF119F5001564B3(L_1, __this, (intptr_t)((intptr_t)ImageTracking_ImageChanged_mF71CEAFEC17C56EA45ED003E88C0A51609B8105A_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m478435EC913232FA753676196AF119F5001564B3_RuntimeMethod_var);
		NullCheck(L_0);
		ARTrackedImageManager_add_trackedImagesChanged_m72C17C9ECEEFADD229EA80CD20ED1254336F3D76(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ImageTracking::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTracking_OnDisable_m640C232F4C65D8615D282F2923905C730937E07C (ImageTracking_t06C356D3B06EA642613D7FC66E71B6D57A5AFF80 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m478435EC913232FA753676196AF119F5001564B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t19910F5D681EFD1901DBD0F742BD502089B49032_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageTracking_ImageChanged_mF71CEAFEC17C56EA45ED003E88C0A51609B8105A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// trackedImageManager.trackedImagesChanged -= ImageChanged;
		ARTrackedImageManager_tB916E34D053E6712190F2BAE46E21D76A0882FF2 * L_0 = __this->get_trackedImageManager_12();
		Action_1_t19910F5D681EFD1901DBD0F742BD502089B49032 * L_1 = (Action_1_t19910F5D681EFD1901DBD0F742BD502089B49032 *)il2cpp_codegen_object_new(Action_1_t19910F5D681EFD1901DBD0F742BD502089B49032_il2cpp_TypeInfo_var);
		Action_1__ctor_m478435EC913232FA753676196AF119F5001564B3(L_1, __this, (intptr_t)((intptr_t)ImageTracking_ImageChanged_mF71CEAFEC17C56EA45ED003E88C0A51609B8105A_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m478435EC913232FA753676196AF119F5001564B3_RuntimeMethod_var);
		NullCheck(L_0);
		ARTrackedImageManager_remove_trackedImagesChanged_mE28AE7C3CD3F208C9891976125E8A0ED3641EDAF(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ImageTracking::ImageChanged(UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTracking_ImageChanged_mF71CEAFEC17C56EA45ED003E88C0A51609B8105A (ImageTracking_t06C356D3B06EA642613D7FC66E71B6D57A5AFF80 * __this, ARTrackedImagesChangedEventArgs_t6EA8225CE7DB5A2148855F99D437DFA5786A1B7C  ___eventArgs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m037FDB6FB9E61ECDB0D7F5AB2373A57E01AE500C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m89255A16DAE894CEA174A88A674162B09592C8C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8F54706BF35C304C986CE96C30148CF4911A9374_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m364FE8EB7E663EEC71E574FD554BE600FD5A0D86_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_t38DCEDBB06600CDABFF1967A5F011738638CE8F4  V_1;
	memset((&V_1), 0, sizeof(V_1));
	ARTrackedImage_t32B829A81320BCDF3A743DCD4DC4383BA266C5B7 * V_2 = NULL;
	ARTrackedImage_t32B829A81320BCDF3A743DCD4DC4383BA266C5B7 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// int prevSeenObjects = numSeenObjects;
		int32_t L_0 = __this->get_numSeenObjects_9();
		V_0 = L_0;
		// foreach(ARTrackedImage trackedImage in eventArgs.added)
		List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * L_1;
		L_1 = ARTrackedImagesChangedEventArgs_get_added_m0E81E3C161242C2508B90BCC73605F551AD53B4E_inline((ARTrackedImagesChangedEventArgs_t6EA8225CE7DB5A2148855F99D437DFA5786A1B7C *)(&___eventArgs0), /*hidden argument*/NULL);
		NullCheck(L_1);
		Enumerator_t38DCEDBB06600CDABFF1967A5F011738638CE8F4  L_2;
		L_2 = List_1_GetEnumerator_m364FE8EB7E663EEC71E574FD554BE600FD5A0D86(L_1, /*hidden argument*/List_1_GetEnumerator_m364FE8EB7E663EEC71E574FD554BE600FD5A0D86_RuntimeMethod_var);
		V_1 = L_2;
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0025;
		}

IL_0016:
		{
			// foreach(ARTrackedImage trackedImage in eventArgs.added)
			ARTrackedImage_t32B829A81320BCDF3A743DCD4DC4383BA266C5B7 * L_3;
			L_3 = Enumerator_get_Current_m8F54706BF35C304C986CE96C30148CF4911A9374_inline((Enumerator_t38DCEDBB06600CDABFF1967A5F011738638CE8F4 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m8F54706BF35C304C986CE96C30148CF4911A9374_RuntimeMethod_var);
			V_2 = L_3;
			// UpdateImage(trackedImage);
			ARTrackedImage_t32B829A81320BCDF3A743DCD4DC4383BA266C5B7 * L_4 = V_2;
			ImageTracking_UpdateImage_m6EA667E6284B239584418E7AA908EE43D6403BE2(__this, L_4, /*hidden argument*/NULL);
		}

IL_0025:
		{
			// foreach(ARTrackedImage trackedImage in eventArgs.added)
			bool L_5;
			L_5 = Enumerator_MoveNext_m89255A16DAE894CEA174A88A674162B09592C8C7((Enumerator_t38DCEDBB06600CDABFF1967A5F011738638CE8F4 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m89255A16DAE894CEA174A88A674162B09592C8C7_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_0016;
			}
		}

IL_002e:
		{
			IL2CPP_LEAVE(0x3E, FINALLY_0030);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0030;
	}

FINALLY_0030:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m037FDB6FB9E61ECDB0D7F5AB2373A57E01AE500C((Enumerator_t38DCEDBB06600CDABFF1967A5F011738638CE8F4 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m037FDB6FB9E61ECDB0D7F5AB2373A57E01AE500C_RuntimeMethod_var);
		IL2CPP_END_FINALLY(48)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(48)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3E, IL_003e)
	}

IL_003e:
	{
		// foreach (ARTrackedImage trackedImage in eventArgs.updated)
		List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * L_6;
		L_6 = ARTrackedImagesChangedEventArgs_get_updated_mBEB295B97B6C25E4DC4447383F529C9E475E4041_inline((ARTrackedImagesChangedEventArgs_t6EA8225CE7DB5A2148855F99D437DFA5786A1B7C *)(&___eventArgs0), /*hidden argument*/NULL);
		NullCheck(L_6);
		Enumerator_t38DCEDBB06600CDABFF1967A5F011738638CE8F4  L_7;
		L_7 = List_1_GetEnumerator_m364FE8EB7E663EEC71E574FD554BE600FD5A0D86(L_6, /*hidden argument*/List_1_GetEnumerator_m364FE8EB7E663EEC71E574FD554BE600FD5A0D86_RuntimeMethod_var);
		V_1 = L_7;
	}

IL_004b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005c;
		}

IL_004d:
		{
			// foreach (ARTrackedImage trackedImage in eventArgs.updated)
			ARTrackedImage_t32B829A81320BCDF3A743DCD4DC4383BA266C5B7 * L_8;
			L_8 = Enumerator_get_Current_m8F54706BF35C304C986CE96C30148CF4911A9374_inline((Enumerator_t38DCEDBB06600CDABFF1967A5F011738638CE8F4 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m8F54706BF35C304C986CE96C30148CF4911A9374_RuntimeMethod_var);
			V_3 = L_8;
			// UpdateImage(trackedImage);
			ARTrackedImage_t32B829A81320BCDF3A743DCD4DC4383BA266C5B7 * L_9 = V_3;
			ImageTracking_UpdateImage_m6EA667E6284B239584418E7AA908EE43D6403BE2(__this, L_9, /*hidden argument*/NULL);
		}

IL_005c:
		{
			// foreach (ARTrackedImage trackedImage in eventArgs.updated)
			bool L_10;
			L_10 = Enumerator_MoveNext_m89255A16DAE894CEA174A88A674162B09592C8C7((Enumerator_t38DCEDBB06600CDABFF1967A5F011738638CE8F4 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m89255A16DAE894CEA174A88A674162B09592C8C7_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_004d;
			}
		}

IL_0065:
		{
			IL2CPP_LEAVE(0x75, FINALLY_0067);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0067;
	}

FINALLY_0067:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m037FDB6FB9E61ECDB0D7F5AB2373A57E01AE500C((Enumerator_t38DCEDBB06600CDABFF1967A5F011738638CE8F4 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m037FDB6FB9E61ECDB0D7F5AB2373A57E01AE500C_RuntimeMethod_var);
		IL2CPP_END_FINALLY(103)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(103)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x75, IL_0075)
	}

IL_0075:
	{
		// if (prevSeenObjects < numSeenObjects)
		int32_t L_11 = V_0;
		int32_t L_12 = __this->get_numSeenObjects_9();
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_008a;
		}
	}
	{
		// setItemsText();
		ImageTracking_setItemsText_m51D023AC6427F8AF897CE4E78778D776C9DF8C82(__this, /*hidden argument*/NULL);
		// setRecipes();
		ImageTracking_setRecipes_m4F86CEEA8BEA6DA461C5F7E5BA1923DF50714AE0(__this, /*hidden argument*/NULL);
	}

IL_008a:
	{
		// }
		return;
	}
}
// System.Void ImageTracking::setItemsText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTracking_setItemsText_m51D023AC6427F8AF897CE4E78778D776C9DF8C82 (ImageTracking_t06C356D3B06EA642613D7FC66E71B6D57A5AFF80 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m3FC6EB738CC4A9E285D6330B2352769B37B32B20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReferenceImageLibrary_t442603E2283A3DE643D30BC7A02DB47E6F4B6B4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// for (int i = 0; i < refLibrary.count; i++)
		V_1 = 0;
		goto IL_0050;
	}

IL_0004:
	{
		// name = refLibrary[i].name;
		RuntimeObject* L_0 = __this->get_refLibrary_11();
		int32_t L_1 = V_1;
		NullCheck(L_0);
		XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467  L_2;
		L_2 = InterfaceFuncInvoker1< XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467 , int32_t >::Invoke(1 /* UnityEngine.XR.ARSubsystems.XRReferenceImage UnityEngine.XR.ARSubsystems.IReferenceImageLibrary::get_Item(System.Int32) */, IReferenceImageLibrary_t442603E2283A3DE643D30BC7A02DB47E6F4B6B4F_il2cpp_TypeInfo_var, L_0, L_1);
		V_2 = L_2;
		String_t* L_3;
		L_3 = XRReferenceImage_get_name_mE8F3368C2587552333AB78EA72A02E5B73E355C7_inline((XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467 *)(&V_2), /*hidden argument*/NULL);
		V_0 = L_3;
		// if (seenObjects[name] == true && !itemsString.Contains(name))
		Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C * L_4 = __this->get_seenObjects_10();
		String_t* L_5 = V_0;
		NullCheck(L_4);
		bool L_6;
		L_6 = Dictionary_2_get_Item_m3FC6EB738CC4A9E285D6330B2352769B37B32B20(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_m3FC6EB738CC4A9E285D6330B2352769B37B32B20_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_7 = __this->get_itemsString_8();
		String_t* L_8 = V_0;
		NullCheck(L_7);
		bool L_9;
		L_9 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_7, L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_004c;
		}
	}
	{
		// itemsString += name + "\n";
		String_t* L_10 = __this->get_itemsString_8();
		String_t* L_11 = V_0;
		String_t* L_12;
		L_12 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_10, L_11, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, /*hidden argument*/NULL);
		__this->set_itemsString_8(L_12);
	}

IL_004c:
	{
		// for (int i = 0; i < refLibrary.count; i++)
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0050:
	{
		// for (int i = 0; i < refLibrary.count; i++)
		int32_t L_14 = V_1;
		RuntimeObject* L_15 = __this->get_refLibrary_11();
		NullCheck(L_15);
		int32_t L_16;
		L_16 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 UnityEngine.XR.ARSubsystems.IReferenceImageLibrary::get_count() */, IReferenceImageLibrary_t442603E2283A3DE643D30BC7A02DB47E6F4B6B4F_il2cpp_TypeInfo_var, L_15);
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_0004;
		}
	}
	{
		// itemsText.text = itemsString;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_17 = __this->get_itemsText_7();
		String_t* L_18 = __this->get_itemsString_8();
		NullCheck(L_17);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_17, L_18);
		// }
		return;
	}
}
// System.Void ImageTracking::setRecipes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTracking_setRecipes_m4F86CEEA8BEA6DA461C5F7E5BA1923DF50714AE0 (ImageTracking_t06C356D3B06EA642613D7FC66E71B6D57A5AFF80 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m3FC6EB738CC4A9E285D6330B2352769B37B32B20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC2611000DA97145D1DFC867ECA604FBB3E8628EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A4583387AD11127A0B32E8648102D6F8D7DC1D3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3B04FC3FACFFF139443741AEA1D528AE16125D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD791C66A3CB34CB17907C57EDD95A45D4C08CDDE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (seenObjects["Pasta"] && seenObjects["Pot"])
		Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C * L_0 = __this->get_seenObjects_10();
		NullCheck(L_0);
		bool L_1;
		L_1 = Dictionary_2_get_Item_m3FC6EB738CC4A9E285D6330B2352769B37B32B20(L_0, _stringLiteralD791C66A3CB34CB17907C57EDD95A45D4C08CDDE, /*hidden argument*/Dictionary_2_get_Item_m3FC6EB738CC4A9E285D6330B2352769B37B32B20_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0071;
		}
	}
	{
		Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C * L_2 = __this->get_seenObjects_10();
		NullCheck(L_2);
		bool L_3;
		L_3 = Dictionary_2_get_Item_m3FC6EB738CC4A9E285D6330B2352769B37B32B20(L_2, _stringLiteralA3B04FC3FACFFF139443741AEA1D528AE16125D7, /*hidden argument*/Dictionary_2_get_Item_m3FC6EB738CC4A9E285D6330B2352769B37B32B20_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0071;
		}
	}
	{
		// if (!recipeList.Contains("Spaghetti"))
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_4 = __this->get_recipeList_5();
		NullCheck(L_4);
		bool L_5;
		L_5 = List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F(L_4, _stringLiteral4A4583387AD11127A0B32E8648102D6F8D7DC1D3, /*hidden argument*/List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0071;
		}
	}
	{
		// recipeList.Add("Spaghetti");
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_6 = __this->get_recipeList_5();
		NullCheck(L_6);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_6, _stringLiteral4A4583387AD11127A0B32E8648102D6F8D7DC1D3, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// recipeDropDown.options.Add(new Dropdown.OptionData() { text = "Spaghetti" });
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_7 = __this->get_recipeDropDown_4();
		NullCheck(L_7);
		List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * L_8;
		L_8 = Dropdown_get_options_mF427A2157CDD901C12F1B160C4D1F8207D7111D0(L_7, /*hidden argument*/NULL);
		OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * L_9 = (OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 *)il2cpp_codegen_object_new(OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857_il2cpp_TypeInfo_var);
		OptionData__ctor_mA1D3FE8359A7237C62D802A3E94221D451364056(L_9, /*hidden argument*/NULL);
		OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * L_10 = L_9;
		NullCheck(L_10);
		OptionData_set_text_m23C74889CF93559CD64F90EC8DA69C20C13FC549_inline(L_10, _stringLiteral4A4583387AD11127A0B32E8648102D6F8D7DC1D3, /*hidden argument*/NULL);
		NullCheck(L_8);
		List_1_Add_mC2611000DA97145D1DFC867ECA604FBB3E8628EC(L_8, L_10, /*hidden argument*/List_1_Add_mC2611000DA97145D1DFC867ECA604FBB3E8628EC_RuntimeMethod_var);
		// recipeDropDownAnim.playAnimation();
		AnimDropdown_t734E84963601DD70BDA49545C64952B6CCB52FD7 * L_11 = __this->get_recipeDropDownAnim_6();
		NullCheck(L_11);
		AnimDropdown_playAnimation_m059CBF28D79CA2F19206FFF1F5ADA0A980C9A259(L_11, /*hidden argument*/NULL);
	}

IL_0071:
	{
		// }
		return;
	}
}
// System.Void ImageTracking::UpdateImage(UnityEngine.XR.ARFoundation.ARTrackedImage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTracking_UpdateImage_m6EA667E6284B239584418E7AA908EE43D6403BE2 (ImageTracking_t06C356D3B06EA642613D7FC66E71B6D57A5AFF80 * __this, ARTrackedImage_t32B829A81320BCDF3A743DCD4DC4383BA266C5B7 * ___trackedImage0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m80950D4BAC47AA3A0B7E50B2C2E0606342C9011D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// string name = trackedImage.referenceImage.name;
		ARTrackedImage_t32B829A81320BCDF3A743DCD4DC4383BA266C5B7 * L_0 = ___trackedImage0;
		NullCheck(L_0);
		XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467  L_1;
		L_1 = ARTrackedImage_get_referenceImage_m6061DE2D46F8060065B64EF3860A0B0085B569E4_inline(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		String_t* L_2;
		L_2 = XRReferenceImage_get_name_mE8F3368C2587552333AB78EA72A02E5B73E355C7_inline((XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_2;
		// seenObjects[name] = true;
		Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C * L_3 = __this->get_seenObjects_10();
		String_t* L_4 = V_0;
		NullCheck(L_3);
		Dictionary_2_set_Item_m80950D4BAC47AA3A0B7E50B2C2E0606342C9011D(L_3, L_4, (bool)1, /*hidden argument*/Dictionary_2_set_Item_m80950D4BAC47AA3A0B7E50B2C2E0606342C9011D_RuntimeMethod_var);
		// numSeenObjects += 1;
		int32_t L_5 = __this->get_numSeenObjects_9();
		__this->set_numSeenObjects_9(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		// }
		return;
	}
}
// System.Void ImageTracking::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTracking__ctor_m38B2704678FE908B59FA0336C39D8DBBA47EA1F2 (ImageTracking_t06C356D3B06EA642613D7FC66E71B6D57A5AFF80 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void PlaneDetectionToggle::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaneDetectionToggle_Awake_mCFDDC7378FE330D24E0AA21EA8125CED7E679960 (PlaneDetectionToggle_t46401949F3D814B54B51A92A03383100AC6A7A67 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4_m7BA2917E127FC45DCAF97AF959F8BE832F8D1846_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// planeManager = GetComponent<ARPlaneManager>();
		ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4 * L_0;
		L_0 = Component_GetComponent_TisARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4_m7BA2917E127FC45DCAF97AF959F8BE832F8D1846(__this, /*hidden argument*/Component_GetComponent_TisARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4_m7BA2917E127FC45DCAF97AF959F8BE832F8D1846_RuntimeMethod_var);
		__this->set_planeManager_4(L_0);
		// TogglePlaneDetection();
		PlaneDetectionToggle_TogglePlaneDetection_mD73219E46A17C747E4393C4262D79DEEA232BB59(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlaneDetectionToggle::TogglePlaneDetection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaneDetectionToggle_TogglePlaneDetection_mD73219E46A17C747E4393C4262D79DEEA232BB59 (PlaneDetectionToggle_t46401949F3D814B54B51A92A03383100AC6A7A67 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral515AE8FDB9C25ACAE2FBF81A8470F0F8B3FDD6FC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECAC9756AB416770CE66B9411AB7AEB8B8181309);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// planeManager.enabled = !planeManager.enabled;
		ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4 * L_0 = __this->get_planeManager_4();
		ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4 * L_1 = __this->get_planeManager_4();
		NullCheck(L_1);
		bool L_2;
		L_2 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_0, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// string toggleButtonMessage = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// if (planeManager.enabled)
		ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4 * L_3 = __this->get_planeManager_4();
		NullCheck(L_3);
		bool L_4;
		L_4 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		// toggleButtonMessage = "Disable";
		V_0 = _stringLiteralECAC9756AB416770CE66B9411AB7AEB8B8181309;
		// SetAllPlanesActive(true);
		PlaneDetectionToggle_SetAllPlanesActive_m8EF64038C8B636C1B53B35505E1DD9EA651016AE(__this, (bool)1, /*hidden argument*/NULL);
		// }
		goto IL_0048;
	}

IL_003b:
	{
		// toggleButtonMessage = "Enable";
		V_0 = _stringLiteral515AE8FDB9C25ACAE2FBF81A8470F0F8B3FDD6FC;
		// SetAllPlanesActive(false);
		PlaneDetectionToggle_SetAllPlanesActive_m8EF64038C8B636C1B53B35505E1DD9EA651016AE(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_0048:
	{
		// toggleButtonText.text = toggleButtonMessage;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_toggleButtonText_5();
		String_t* L_6 = V_0;
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_6);
		// }
		return;
	}
}
// System.Void PlaneDetectionToggle::SetAllPlanesActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaneDetectionToggle_SetAllPlanesActive_m8EF64038C8B636C1B53B35505E1DD9EA651016AE (PlaneDetectionToggle_t46401949F3D814B54B51A92A03383100AC6A7A67 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARTrackableManager_5_get_trackables_m1868AA38C59A0E75D2FA03964898FB15577FD7E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mAD42DB33FFA5B95D44127214BCD44B64BE5FE094_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m3D5E7C33ACC22CA9FBB0725D35D75D86592FFB29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableCollection_1_GetEnumerator_mAB63B26E604CFE12281E5B212826C7609CF11A5C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t7966991B2B4ED87E60D0CB1DA4C8228004A3D386  V_0;
	memset((&V_0), 0, sizeof(V_0));
	TrackableCollection_1_tF901F9001ABC2CCCF561F7CB246E74516ABB8EFB  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// foreach (var plane in planeManager.trackables)
		ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4 * L_0 = __this->get_planeManager_4();
		NullCheck(L_0);
		TrackableCollection_1_tF901F9001ABC2CCCF561F7CB246E74516ABB8EFB  L_1;
		L_1 = ARTrackableManager_5_get_trackables_m1868AA38C59A0E75D2FA03964898FB15577FD7E9(L_0, /*hidden argument*/ARTrackableManager_5_get_trackables_m1868AA38C59A0E75D2FA03964898FB15577FD7E9_RuntimeMethod_var);
		V_1 = L_1;
		Enumerator_t7966991B2B4ED87E60D0CB1DA4C8228004A3D386  L_2;
		L_2 = TrackableCollection_1_GetEnumerator_mAB63B26E604CFE12281E5B212826C7609CF11A5C((TrackableCollection_1_tF901F9001ABC2CCCF561F7CB246E74516ABB8EFB *)(&V_1), /*hidden argument*/TrackableCollection_1_GetEnumerator_mAB63B26E604CFE12281E5B212826C7609CF11A5C_RuntimeMethod_var);
		V_0 = L_2;
		goto IL_0028;
	}

IL_0016:
	{
		// foreach (var plane in planeManager.trackables)
		ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * L_3;
		L_3 = Enumerator_get_Current_m3D5E7C33ACC22CA9FBB0725D35D75D86592FFB29((Enumerator_t7966991B2B4ED87E60D0CB1DA4C8228004A3D386 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m3D5E7C33ACC22CA9FBB0725D35D75D86592FFB29_RuntimeMethod_var);
		// plane.gameObject.SetActive(value);
		NullCheck(L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_3, /*hidden argument*/NULL);
		bool L_5 = ___value0;
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, L_5, /*hidden argument*/NULL);
	}

IL_0028:
	{
		// foreach (var plane in planeManager.trackables)
		bool L_6;
		L_6 = Enumerator_MoveNext_mAD42DB33FFA5B95D44127214BCD44B64BE5FE094((Enumerator_t7966991B2B4ED87E60D0CB1DA4C8228004A3D386 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mAD42DB33FFA5B95D44127214BCD44B64BE5FE094_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_0016;
		}
	}
	{
		// }
		return;
	}
}
// System.Void PlaneDetectionToggle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaneDetectionToggle__ctor_mEBB1EFFCC4772D685C16F50ABBA5886A70E2E60D (PlaneDetectionToggle_t46401949F3D814B54B51A92A03383100AC6A7A67 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void SpawnObjectOnPlane::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnObjectOnPlane_Awake_m7A8F021BDFCA8C8AC80BA304C4F7F4F2D2F0092C (SpawnObjectOnPlane_t01B265C88B0D8D2D33A765C082A0B4CADF163032 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F_m06FA2C50C4CE43EB1459B81753EFF12567E93770_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// raycastManager = GetComponent<ARRaycastManager>();
		ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * L_0;
		L_0 = Component_GetComponent_TisARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F_m06FA2C50C4CE43EB1459B81753EFF12567E93770(__this, /*hidden argument*/Component_GetComponent_TisARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F_m06FA2C50C4CE43EB1459B81753EFF12567E93770_RuntimeMethod_var);
		__this->set_raycastManager_4(L_0);
		// actionText.text = "";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_actionText_8();
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// }
		return;
	}
}
// System.Boolean SpawnObjectOnPlane::TryGetTouchPosition(UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpawnObjectOnPlane_TryGetTouchPosition_m0FD1FE55B6C6F2F071C4F0CCD80C576CE2527C3E (SpawnObjectOnPlane_t01B265C88B0D8D2D33A765C082A0B4CADF163032 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___touchPosition0, const RuntimeMethod* method)
{
	Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
		int32_t L_0;
		L_0 = Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6(/*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_1;
		L_1 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F(0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_002e;
		}
	}
	{
		// touchPosition = Input.GetTouch(0).position;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_3 = ___touchPosition0;
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_4;
		L_4 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F(0, /*hidden argument*/NULL);
		V_0 = L_4;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_3 = L_5;
		// return true;
		return (bool)1;
	}

IL_002e:
	{
		// touchPosition = default;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_6 = ___touchPosition0;
		il2cpp_codegen_initobj(L_6, sizeof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 ));
		// return false;
		return (bool)0;
	}
}
// System.Void SpawnObjectOnPlane::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnObjectOnPlane_Update_m284ED7A2C83886E7048DC154E6264E61F56D63D7 (SpawnObjectOnPlane_t01B265C88B0D8D2D33A765C082A0B4CADF163032 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m200A6C390D1FAEF2378D70230BD6E96D492ABE04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF979E11037D572E72D866EC260EF0434EF296E67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpawnObjectOnPlane_t01B265C88B0D8D2D33A765C082A0B4CADF163032_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral515AE8FDB9C25ACAE2FBF81A8470F0F8B3FDD6FC);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (!TryGetTouchPosition(out Vector2 touchPosition)  || toggleButtonText.text == "Enable")
		bool L_0;
		L_0 = SpawnObjectOnPlane_TryGetTouchPosition_m0FD1FE55B6C6F2F071C4F0CCD80C576CE2527C3E(__this, (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_toggleButtonText_7();
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_1);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral515AE8FDB9C25ACAE2FBF81A8470F0F8B3FDD6FC, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}

IL_0021:
	{
		// return;
		return;
	}

IL_0022:
	{
		// if (raycastManager.Raycast(touchPosition, s_Hits, TrackableType.PlaneWithinPolygon))
		ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * L_4 = __this->get_raycastManager_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SpawnObjectOnPlane_t01B265C88B0D8D2D33A765C082A0B4CADF163032_il2cpp_TypeInfo_var);
		List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * L_6 = ((SpawnObjectOnPlane_t01B265C88B0D8D2D33A765C082A0B4CADF163032_StaticFields*)il2cpp_codegen_static_fields_for(SpawnObjectOnPlane_t01B265C88B0D8D2D33A765C082A0B4CADF163032_il2cpp_TypeInfo_var))->get_s_Hits_18();
		NullCheck(L_4);
		bool L_7;
		L_7 = ARRaycastManager_Raycast_mCC2851DAC2542C59528FCE21242231DFAF024650(L_4, L_5, L_6, 1, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0073;
		}
	}
	{
		// var hitPose = s_Hits[0].pose;
		IL2CPP_RUNTIME_CLASS_INIT(SpawnObjectOnPlane_t01B265C88B0D8D2D33A765C082A0B4CADF163032_il2cpp_TypeInfo_var);
		List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * L_8 = ((SpawnObjectOnPlane_t01B265C88B0D8D2D33A765C082A0B4CADF163032_StaticFields*)il2cpp_codegen_static_fields_for(SpawnObjectOnPlane_t01B265C88B0D8D2D33A765C082A0B4CADF163032_il2cpp_TypeInfo_var))->get_s_Hits_18();
		NullCheck(L_8);
		ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  L_9;
		L_9 = List_1_get_Item_m200A6C390D1FAEF2378D70230BD6E96D492ABE04_inline(L_8, 0, /*hidden argument*/List_1_get_Item_m200A6C390D1FAEF2378D70230BD6E96D492ABE04_RuntimeMethod_var);
		V_3 = L_9;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_10;
		L_10 = ARRaycastHit_get_pose_mB4D8BC45F23D9F2C2C8DCAFA88DB1221D76EF02B((ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E *)(&V_3), /*hidden argument*/NULL);
		V_1 = L_10;
		// string dropDownText = recipeDropDown.options[recipeDropDown.value].text;
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_11 = __this->get_recipeDropDown_6();
		NullCheck(L_11);
		List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * L_12;
		L_12 = Dropdown_get_options_mF427A2157CDD901C12F1B160C4D1F8207D7111D0(L_11, /*hidden argument*/NULL);
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_13 = __this->get_recipeDropDown_6();
		NullCheck(L_13);
		int32_t L_14;
		L_14 = Dropdown_get_value_mFBF47E0C72050C5CB96B8B6D33F41BA2D1368F26_inline(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * L_15;
		L_15 = List_1_get_Item_mF979E11037D572E72D866EC260EF0434EF296E67_inline(L_12, L_14, /*hidden argument*/List_1_get_Item_mF979E11037D572E72D866EC260EF0434EF296E67_RuntimeMethod_var);
		NullCheck(L_15);
		String_t* L_16;
		L_16 = OptionData_get_text_m8652FE3866405C4C7C3782659009EF2C7E54D232_inline(L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		// SpawnPrefab(hitPose, dropDownText);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_17 = V_1;
		String_t* L_18 = V_2;
		SpawnObjectOnPlane_SpawnPrefab_mEB89CABE639B24FBC7618333F914D3103018779B(__this, L_17, L_18, /*hidden argument*/NULL);
	}

IL_0073:
	{
		// }
		return;
	}
}
// System.Void SpawnObjectOnPlane::SpawnPrefab(UnityEngine.Pose,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnObjectOnPlane_SpawnPrefab_mEB89CABE639B24FBC7618333F914D3103018779B (SpawnObjectOnPlane_t01B265C88B0D8D2D33A765C082A0B4CADF163032 * __this, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___hitPose0, String_t* ___dropDownText1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisVideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86_mD1CFC66F6C6D8A6EF825A2012512F0709B2D3188_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A4583387AD11127A0B32E8648102D6F8D7DC1D3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59DD422190FC4AEEE5245F9E29DFD871FFCDFEEF);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 position = hitPose.position;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_0 = ___hitPose0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = L_0.get_position_0();
		V_0 = L_1;
		// if (dropDownText == "Cooking Helper")
		String_t* L_2 = ___dropDownText1;
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral59DD422190FC4AEEE5245F9E29DFD871FFCDFEEF, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_00d4;
		}
	}
	{
		// if (spawnedVideoScreen == null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_spawnedVideoScreen_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0088;
		}
	}
	{
		// spawnedVideoScreen = Instantiate(videoScreenPrefab, position, hitPose.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_videoScreenPrefab_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_8 = ___hitPose0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9 = L_8.get_rotation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_6, L_7, L_9, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		__this->set_spawnedVideoScreen_14(L_10);
		// spawnedVideoScreen.transform.Rotate(0.0f, 180.0f, 0.0f, Space.Self);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_spawnedVideoScreen_14();
		NullCheck(L_11);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_Rotate_mE77655C011C18F49CAD740CED7940EF1C7000357(L_12, (0.0f), (180.0f), (0.0f), 1, /*hidden argument*/NULL);
		// videoPlayer = spawnedVideoScreen.AddComponent<UnityEngine.Video.VideoPlayer>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_spawnedVideoScreen_14();
		NullCheck(L_13);
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_14;
		L_14 = GameObject_AddComponent_TisVideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86_mD1CFC66F6C6D8A6EF825A2012512F0709B2D3188(L_13, /*hidden argument*/GameObject_AddComponent_TisVideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86_mD1CFC66F6C6D8A6EF825A2012512F0709B2D3188_RuntimeMethod_var);
		__this->set_videoPlayer_16(L_14);
		// videoPlayer.isLooping = true;
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_15 = __this->get_videoPlayer_16();
		NullCheck(L_15);
		VideoPlayer_set_isLooping_mBA932FED6AA886C07C4770D7FAC369D249F0E7C2(L_15, (bool)1, /*hidden argument*/NULL);
		// videoPlayer.playOnAwake = false;
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_16 = __this->get_videoPlayer_16();
		NullCheck(L_16);
		VideoPlayer_set_playOnAwake_m30420ABD3827A5A7BD663815D64DBA68CF88A8D2(L_16, (bool)0, /*hidden argument*/NULL);
		// }
		goto IL_00d4;
	}

IL_0088:
	{
		// spawnedVideoScreen.transform.position = hitPose.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = __this->get_spawnedVideoScreen_14();
		NullCheck(L_17);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_17, /*hidden argument*/NULL);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_19 = ___hitPose0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = L_19.get_position_0();
		NullCheck(L_18);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_18, L_20, /*hidden argument*/NULL);
		// spawnedVideoScreen.transform.rotation = hitPose.rotation;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = __this->get_spawnedVideoScreen_14();
		NullCheck(L_21);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_21, /*hidden argument*/NULL);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_23 = ___hitPose0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_24 = L_23.get_rotation_1();
		NullCheck(L_22);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_22, L_24, /*hidden argument*/NULL);
		// spawnedVideoScreen.transform.Rotate(0.0f, 180.0f, 0.0f, Space.Self);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = __this->get_spawnedVideoScreen_14();
		NullCheck(L_25);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		Transform_Rotate_mE77655C011C18F49CAD740CED7940EF1C7000357(L_26, (0.0f), (180.0f), (0.0f), 1, /*hidden argument*/NULL);
	}

IL_00d4:
	{
		// if (dropDownText == "Spaghetti")
		String_t* L_27 = ___dropDownText1;
		bool L_28;
		L_28 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_27, _stringLiteral4A4583387AD11127A0B32E8648102D6F8D7DC1D3, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_013b;
		}
	}
	{
		// position.x = (float)(position.x + meatballX);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29 = V_0;
		float L_30 = L_29.get_x_2();
		double L_31 = __this->get_meatballX_10();
		(&V_0)->set_x_2(((float)((float)((double)il2cpp_codegen_add((double)((double)((double)L_30)), (double)L_31)))));
		// position.y = (float)(position.y + meatballY);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32 = V_0;
		float L_33 = L_32.get_y_3();
		double L_34 = __this->get_meatballY_11();
		(&V_0)->set_y_3(((float)((float)((double)il2cpp_codegen_add((double)((double)((double)L_33)), (double)L_34)))));
		// position.z = (float)(position.z + meatballZ);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35 = V_0;
		float L_36 = L_35.get_z_4();
		double L_37 = __this->get_meatballZ_12();
		(&V_0)->set_z_4(((float)((float)((double)il2cpp_codegen_add((double)((double)((double)L_36)), (double)L_37)))));
		// spawnedObject = Instantiate(meatballPrefab, position, hitPose.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_38 = __this->get_meatballPrefab_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39 = V_0;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_40 = ___hitPose0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_41 = L_40.get_rotation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_42;
		L_42 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_38, L_39, L_41, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		__this->set_spawnedObject_5(L_42);
	}

IL_013b:
	{
		// }
		return;
	}
}
// System.Void SpawnObjectOnPlane::playVideoScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnObjectOnPlane_playVideoScreen_m8799499D95AF4EEEF3BD9E8084AFFCCB1E89385F (SpawnObjectOnPlane_t01B265C88B0D8D2D33A765C082A0B4CADF163032 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (spawnedVideoScreen == null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_spawnedVideoScreen_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (videoNumPlays == videos.Length-1)
		int32_t L_2 = __this->get_videoNumPlays_17();
		VideoClipU5BU5D_t6683BD7FA0E3C2C85483295CBB3727AD422ED431* L_3 = __this->get_videos_15();
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))), (int32_t)1))))))
		{
			goto IL_0044;
		}
	}
	{
		// videoPlayer.Stop();
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_4 = __this->get_videoPlayer_16();
		NullCheck(L_4);
		VideoPlayer_Stop_mC65F299C170F41E6823207427F782982031DE293(L_4, /*hidden argument*/NULL);
		// videoNumPlays = 0;
		__this->set_videoNumPlays_17(0);
		// actionText.text = "";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_actionText_8();
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// }
		return;
	}

IL_0044:
	{
		// videoPlayer.clip = videos[videoNumPlays];
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_6 = __this->get_videoPlayer_16();
		VideoClipU5BU5D_t6683BD7FA0E3C2C85483295CBB3727AD422ED431* L_7 = __this->get_videos_15();
		int32_t L_8 = __this->get_videoNumPlays_17();
		NullCheck(L_7);
		int32_t L_9 = L_8;
		VideoClip_tA8C2507553BEE394C46B7A876D6F56DD09F6C90F * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_6);
		VideoPlayer_set_clip_mECA56632F836FE1297D1A10115570E07D05FDB6C(L_6, L_10, /*hidden argument*/NULL);
		// actionText.text = videos[videoNumPlays].ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_11 = __this->get_actionText_8();
		VideoClipU5BU5D_t6683BD7FA0E3C2C85483295CBB3727AD422ED431* L_12 = __this->get_videos_15();
		int32_t L_13 = __this->get_videoNumPlays_17();
		NullCheck(L_12);
		int32_t L_14 = L_13;
		VideoClip_tA8C2507553BEE394C46B7A876D6F56DD09F6C90F * L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		String_t* L_16;
		L_16 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_15);
		NullCheck(L_11);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, L_16);
		// videoNumPlays++;
		int32_t L_17 = __this->get_videoNumPlays_17();
		__this->set_videoNumPlays_17(((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1)));
		// videoPlayer.Play();
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_18 = __this->get_videoPlayer_16();
		NullCheck(L_18);
		VideoPlayer_Play_m2AD0D39D70055A5AADCF63430D3D9CEC7DCB0516(L_18, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SpawnObjectOnPlane::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnObjectOnPlane__ctor_mFCEDA3EFC3EF4C1191427C7B95655878AE3DCF27 (SpawnObjectOnPlane_t01B265C88B0D8D2D33A765C082A0B4CADF163032 * __this, const RuntimeMethod* method)
{
	{
		// private double meatballX = 0.1933;
		__this->set_meatballX_10((0.1933));
		// private double meatballY = -0.0594;
		__this->set_meatballY_11((-0.059400000000000001));
		// private double meatballZ = 0.1017;
		__this->set_meatballZ_12((0.1017));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SpawnObjectOnPlane::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnObjectOnPlane__cctor_mDD6C1E2BB998358743216EE44CEFA3B9541026A3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC26889C0423CCF594A8C363532AC63BB0DB25201_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpawnObjectOnPlane_t01B265C88B0D8D2D33A765C082A0B4CADF163032_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static List<ARRaycastHit> s_Hits = new List<ARRaycastHit>();
		List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * L_0 = (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D *)il2cpp_codegen_object_new(List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D_il2cpp_TypeInfo_var);
		List_1__ctor_mC26889C0423CCF594A8C363532AC63BB0DB25201(L_0, /*hidden argument*/List_1__ctor_mC26889C0423CCF594A8C363532AC63BB0DB25201_RuntimeMethod_var);
		((SpawnObjectOnPlane_t01B265C88B0D8D2D33A765C082A0B4CADF163032_StaticFields*)il2cpp_codegen_static_fields_for(SpawnObjectOnPlane_t01B265C88B0D8D2D33A765C082A0B4CADF163032_il2cpp_TypeInfo_var))->set_s_Hits_18(L_0);
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
// System.Void TextureScale::Point(UnityEngine.Texture2D,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureScale_Point_m7E6DCAA95F1A388FDB08AB9D57F2675CC72BA657 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___tex0, int32_t ___newWidth1, int32_t ___newHeight2, const RuntimeMethod* method)
{
	{
		// ThreadedScale(tex, newWidth, newHeight, false);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = ___tex0;
		int32_t L_1 = ___newWidth1;
		int32_t L_2 = ___newHeight2;
		TextureScale_ThreadedScale_m64614D8D733CF2D471F557C822F9ABFF70FE9C26(L_0, L_1, L_2, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TextureScale::Bilinear(UnityEngine.Texture2D,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureScale_Bilinear_mD4AEEF3577915E32E5F2697F7B3DB17A7955E7DD (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___tex0, int32_t ___newWidth1, int32_t ___newHeight2, const RuntimeMethod* method)
{
	{
		// ThreadedScale(tex, newWidth, newHeight, true);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = ___tex0;
		int32_t L_1 = ___newWidth1;
		int32_t L_2 = ___newHeight2;
		TextureScale_ThreadedScale_m64614D8D733CF2D471F557C822F9ABFF70FE9C26(L_0, L_1, L_2, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TextureScale::ThreadedScale(UnityEngine.Texture2D,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureScale_ThreadedScale_m64614D8D733CF2D471F557C822F9ABFF70FE9C26 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___tex0, int32_t ___newWidth1, int32_t ___newHeight2, bool ___useBilinear3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterizedThreadStart_t5C6FC428171B904D8547954B337B373083E89516_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureScale_BilinearScale_m8083AFB865014130774167B8D017933D18B4C3B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureScale_PointScale_m4C9D1E67BF1A55E2F553312F9824145EA8DD0331_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A * V_3 = NULL;
	ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A * V_4 = NULL;
	ParameterizedThreadStart_t5C6FC428171B904D8547954B337B373083E89516 * G_B10_0 = NULL;
	{
		// texColors = tex.GetPixels();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = ___tex0;
		NullCheck(L_0);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_1;
		L_1 = Texture2D_GetPixels_m702E1E59DE60A5A11197DA3F6474F9E6716D9699(L_0, /*hidden argument*/NULL);
		((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->set_texColors_0(L_1);
		// newColors = new Color[newWidth * newHeight];
		int32_t L_2 = ___newWidth1;
		int32_t L_3 = ___newHeight2;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_4 = (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)SZArrayNew(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)L_3)));
		((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->set_newColors_1(L_4);
		// if (useBilinear)
		bool L_5 = ___useBilinear3;
		if (!L_5)
		{
			goto IL_004b;
		}
	}
	{
		// ratioX = 1.0f / ((float)newWidth / (tex.width - 1));
		int32_t L_6 = ___newWidth1;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_7 = ___tex0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_7);
		((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->set_ratioX_3(((float)((float)(1.0f)/(float)((float)((float)((float)((float)L_6))/(float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1)))))))));
		// ratioY = 1.0f / ((float)newHeight / (tex.height - 1));
		int32_t L_9 = ___newHeight2;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_10 = ___tex0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_10);
		((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->set_ratioY_4(((float)((float)(1.0f)/(float)((float)((float)((float)((float)L_9))/(float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)1)))))))));
		// }
		goto IL_0069;
	}

IL_004b:
	{
		// ratioX = ((float)tex.width) / newWidth;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_12 = ___tex0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_12);
		int32_t L_14 = ___newWidth1;
		((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->set_ratioX_3(((float)((float)((float)((float)L_13))/(float)((float)((float)L_14)))));
		// ratioY = ((float)tex.height) / newHeight;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_15 = ___tex0;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_15);
		int32_t L_17 = ___newHeight2;
		((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->set_ratioY_4(((float)((float)((float)((float)L_16))/(float)((float)((float)L_17)))));
	}

IL_0069:
	{
		// w = tex.width;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_18 = ___tex0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_18);
		((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->set_w_2(L_19);
		// w2 = newWidth;
		int32_t L_20 = ___newWidth1;
		((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->set_w2_5(L_20);
		// var cores = Mathf.Min(SystemInfo.processorCount, newHeight);
		int32_t L_21;
		L_21 = SystemInfo_get_processorCount_mBAA6A01218CF7F03638A6016B6881466830FD0D5(/*hidden argument*/NULL);
		int32_t L_22 = ___newHeight2;
		int32_t L_23;
		L_23 = Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519(L_21, L_22, /*hidden argument*/NULL);
		V_0 = L_23;
		// var slice = newHeight / cores;
		int32_t L_24 = ___newHeight2;
		int32_t L_25 = V_0;
		V_1 = ((int32_t)((int32_t)L_24/(int32_t)L_25));
		// finishCount = 0;
		((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->set_finishCount_6(0);
		// if (mutex == null)
		Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5 * L_26 = ((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->get_mutex_7();
		if (L_26)
		{
			goto IL_00a2;
		}
	}
	{
		// mutex = new Mutex(false);
		Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5 * L_27 = (Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5 *)il2cpp_codegen_object_new(Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5_il2cpp_TypeInfo_var);
		Mutex__ctor_mE64D51F0538989539F6C059AB7E247423B699BBE(L_27, (bool)0, /*hidden argument*/NULL);
		((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->set_mutex_7(L_27);
	}

IL_00a2:
	{
		// if (cores > 1)
		int32_t L_28 = V_0;
		if ((((int32_t)L_28) <= ((int32_t)1)))
		{
			goto IL_0119;
		}
	}
	{
		// int i = 0;
		V_2 = 0;
		// for (i = 0; i < cores - 1; i++)
		V_2 = 0;
		goto IL_00e6;
	}

IL_00ac:
	{
		// threadData = new ThreadData(slice * i, slice * (i + 1));
		int32_t L_29 = V_1;
		int32_t L_30 = V_2;
		int32_t L_31 = V_1;
		int32_t L_32 = V_2;
		ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A * L_33 = (ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A *)il2cpp_codegen_object_new(ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A_il2cpp_TypeInfo_var);
		ThreadData__ctor_mA2E955D69EA603EB22B6B27718C8F195C3825D83(L_33, ((int32_t)il2cpp_codegen_multiply((int32_t)L_29, (int32_t)L_30)), ((int32_t)il2cpp_codegen_multiply((int32_t)L_31, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1)))), /*hidden argument*/NULL);
		V_3 = L_33;
		// ParameterizedThreadStart ts = useBilinear ? new ParameterizedThreadStart(BilinearScale) : new ParameterizedThreadStart(PointScale);
		bool L_34 = ___useBilinear3;
		if (L_34)
		{
			goto IL_00cb;
		}
	}
	{
		ParameterizedThreadStart_t5C6FC428171B904D8547954B337B373083E89516 * L_35 = (ParameterizedThreadStart_t5C6FC428171B904D8547954B337B373083E89516 *)il2cpp_codegen_object_new(ParameterizedThreadStart_t5C6FC428171B904D8547954B337B373083E89516_il2cpp_TypeInfo_var);
		ParameterizedThreadStart__ctor_m6F49448AAE802068CE1DB1BE519962708DA871B0(L_35, NULL, (intptr_t)((intptr_t)TextureScale_PointScale_m4C9D1E67BF1A55E2F553312F9824145EA8DD0331_RuntimeMethod_var), /*hidden argument*/NULL);
		G_B10_0 = L_35;
		goto IL_00d7;
	}

IL_00cb:
	{
		ParameterizedThreadStart_t5C6FC428171B904D8547954B337B373083E89516 * L_36 = (ParameterizedThreadStart_t5C6FC428171B904D8547954B337B373083E89516 *)il2cpp_codegen_object_new(ParameterizedThreadStart_t5C6FC428171B904D8547954B337B373083E89516_il2cpp_TypeInfo_var);
		ParameterizedThreadStart__ctor_m6F49448AAE802068CE1DB1BE519962708DA871B0(L_36, NULL, (intptr_t)((intptr_t)TextureScale_BilinearScale_m8083AFB865014130774167B8D017933D18B4C3B5_RuntimeMethod_var), /*hidden argument*/NULL);
		G_B10_0 = L_36;
	}

IL_00d7:
	{
		// Thread thread = new Thread(ts);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_37 = (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 *)il2cpp_codegen_object_new(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var);
		Thread__ctor_m4E8C9D36164CFCFD65989CAE0F6456AC40BC4492(L_37, G_B10_0, /*hidden argument*/NULL);
		// thread.Start(threadData);
		ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A * L_38 = V_3;
		NullCheck(L_37);
		Thread_Start_m11EE2B4E0C1BC8520655644C1C31C0CFFC23B5B7(L_37, L_38, /*hidden argument*/NULL);
		// for (i = 0; i < cores - 1; i++)
		int32_t L_39 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
	}

IL_00e6:
	{
		// for (i = 0; i < cores - 1; i++)
		int32_t L_40 = V_2;
		int32_t L_41 = V_0;
		if ((((int32_t)L_40) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_41, (int32_t)1)))))
		{
			goto IL_00ac;
		}
	}
	{
		// threadData = new ThreadData(slice * i, newHeight);
		int32_t L_42 = V_1;
		int32_t L_43 = V_2;
		int32_t L_44 = ___newHeight2;
		ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A * L_45 = (ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A *)il2cpp_codegen_object_new(ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A_il2cpp_TypeInfo_var);
		ThreadData__ctor_mA2E955D69EA603EB22B6B27718C8F195C3825D83(L_45, ((int32_t)il2cpp_codegen_multiply((int32_t)L_42, (int32_t)L_43)), L_44, /*hidden argument*/NULL);
		V_3 = L_45;
		// if (useBilinear)
		bool L_46 = ___useBilinear3;
		if (!L_46)
		{
			goto IL_0101;
		}
	}
	{
		// BilinearScale(threadData);
		ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A * L_47 = V_3;
		TextureScale_BilinearScale_m8083AFB865014130774167B8D017933D18B4C3B5(L_47, /*hidden argument*/NULL);
		// }
		goto IL_010f;
	}

IL_0101:
	{
		// PointScale(threadData);
		ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A * L_48 = V_3;
		TextureScale_PointScale_m4C9D1E67BF1A55E2F553312F9824145EA8DD0331(L_48, /*hidden argument*/NULL);
		goto IL_010f;
	}

IL_0109:
	{
		// Thread.Sleep(1);
		Thread_Sleep_m8E61FC80BD38981CB18CA549909710790283DDCC(1, /*hidden argument*/NULL);
	}

IL_010f:
	{
		// while (finishCount < cores)
		int32_t L_49 = ((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->get_finishCount_6();
		int32_t L_50 = V_0;
		if ((((int32_t)L_49) < ((int32_t)L_50)))
		{
			goto IL_0109;
		}
	}
	{
		// }
		goto IL_0135;
	}

IL_0119:
	{
		// ThreadData threadData = new ThreadData(0, newHeight);
		int32_t L_51 = ___newHeight2;
		ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A * L_52 = (ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A *)il2cpp_codegen_object_new(ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A_il2cpp_TypeInfo_var);
		ThreadData__ctor_mA2E955D69EA603EB22B6B27718C8F195C3825D83(L_52, 0, L_51, /*hidden argument*/NULL);
		V_4 = L_52;
		// if (useBilinear)
		bool L_53 = ___useBilinear3;
		if (!L_53)
		{
			goto IL_012e;
		}
	}
	{
		// BilinearScale(threadData);
		ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A * L_54 = V_4;
		TextureScale_BilinearScale_m8083AFB865014130774167B8D017933D18B4C3B5(L_54, /*hidden argument*/NULL);
		// }
		goto IL_0135;
	}

IL_012e:
	{
		// PointScale(threadData);
		ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A * L_55 = V_4;
		TextureScale_PointScale_m4C9D1E67BF1A55E2F553312F9824145EA8DD0331(L_55, /*hidden argument*/NULL);
	}

IL_0135:
	{
		// tex.Resize(newWidth, newHeight);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_56 = ___tex0;
		int32_t L_57 = ___newWidth1;
		int32_t L_58 = ___newHeight2;
		NullCheck(L_56);
		bool L_59;
		L_59 = Texture2D_Resize_m3B472A6ED37D683DC4162504F6DCF42E1FA2195C(L_56, L_57, L_58, /*hidden argument*/NULL);
		// tex.SetPixels(newColors);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_60 = ___tex0;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_61 = ((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->get_newColors_1();
		NullCheck(L_60);
		Texture2D_SetPixels_m5FBA81041D65F8641C3107195D390EE65467FB4F(L_60, L_61, /*hidden argument*/NULL);
		// tex.Apply();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_62 = ___tex0;
		NullCheck(L_62);
		Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(L_62, /*hidden argument*/NULL);
		// texColors = null;
		((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->set_texColors_0((ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)NULL);
		// newColors = null;
		((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->set_newColors_1((ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)NULL);
		// }
		return;
	}
}
// System.Void TextureScale::BilinearScale(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureScale_BilinearScale_m8083AFB865014130774167B8D017933D18B4C3B5 (RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	float V_8 = 0.0f;
	{
		// ThreadData threadData = (ThreadData)obj;
		RuntimeObject * L_0 = ___obj0;
		V_0 = ((ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A *)CastclassClass((RuntimeObject*)L_0, ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A_il2cpp_TypeInfo_var));
		// for (var y = threadData.start; y < threadData.end; y++)
		ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A * L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->get_start_0();
		V_1 = L_2;
		goto IL_00e7;
	}

IL_0013:
	{
		// int yFloor = (int)Mathf.Floor(y * ratioY);
		int32_t L_3 = V_1;
		float L_4 = ((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->get_ratioY_4();
		float L_5;
		L_5 = floorf(((float)il2cpp_codegen_multiply((float)((float)((float)L_3)), (float)L_4)));
		V_2 = ((int32_t)((int32_t)L_5));
		// var y1 = yFloor * w;
		int32_t L_6 = V_2;
		int32_t L_7 = ((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->get_w_2();
		V_3 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_6, (int32_t)L_7));
		// var y2 = (yFloor + 1) * w;
		int32_t L_8 = V_2;
		int32_t L_9 = ((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->get_w_2();
		V_4 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)), (int32_t)L_9));
		// var yw = y * w2;
		int32_t L_10 = V_1;
		int32_t L_11 = ((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->get_w2_5();
		V_5 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)L_11));
		// for (var x = 0; x < w2; x++)
		V_6 = 0;
		goto IL_00d7;
	}

IL_0046:
	{
		// int xFloor = (int)Mathf.Floor(x * ratioX);
		int32_t L_12 = V_6;
		float L_13 = ((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->get_ratioX_3();
		float L_14;
		L_14 = floorf(((float)il2cpp_codegen_multiply((float)((float)((float)L_12)), (float)L_13)));
		V_7 = ((int32_t)((int32_t)L_14));
		// var xLerp = x * ratioX - xFloor;
		int32_t L_15 = V_6;
		float L_16 = ((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->get_ratioX_3();
		int32_t L_17 = V_7;
		V_8 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)((float)((float)L_15)), (float)L_16)), (float)((float)((float)L_17))));
		// newColors[yw + x] = ColorLerpUnclamped(ColorLerpUnclamped(texColors[y1 + xFloor], texColors[y1 + xFloor + 1], xLerp),
		//                                        ColorLerpUnclamped(texColors[y2 + xFloor], texColors[y2 + xFloor + 1], xLerp),
		//                                        y * ratioY - yFloor);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_18 = ((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->get_newColors_1();
		int32_t L_19 = V_5;
		int32_t L_20 = V_6;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_21 = ((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->get_texColors_0();
		int32_t L_22 = V_3;
		int32_t L_23 = V_7;
		NullCheck(L_21);
		int32_t L_24 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)L_23));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_25 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_26 = ((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->get_texColors_0();
		int32_t L_27 = V_3;
		int32_t L_28 = V_7;
		NullCheck(L_26);
		int32_t L_29 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)L_28)), (int32_t)1));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_30 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		float L_31 = V_8;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_32;
		L_32 = TextureScale_ColorLerpUnclamped_m17AEA77F6A498CAC07EA55DF16E7A46774D31138(L_25, L_30, L_31, /*hidden argument*/NULL);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_33 = ((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->get_texColors_0();
		int32_t L_34 = V_4;
		int32_t L_35 = V_7;
		NullCheck(L_33);
		int32_t L_36 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)L_35));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_37 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_38 = ((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->get_texColors_0();
		int32_t L_39 = V_4;
		int32_t L_40 = V_7;
		NullCheck(L_38);
		int32_t L_41 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)L_40)), (int32_t)1));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_42 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		float L_43 = V_8;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_44;
		L_44 = TextureScale_ColorLerpUnclamped_m17AEA77F6A498CAC07EA55DF16E7A46774D31138(L_37, L_42, L_43, /*hidden argument*/NULL);
		int32_t L_45 = V_1;
		float L_46 = ((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->get_ratioY_4();
		int32_t L_47 = V_2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_48;
		L_48 = TextureScale_ColorLerpUnclamped_m17AEA77F6A498CAC07EA55DF16E7A46774D31138(L_32, L_44, ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)((float)((float)L_45)), (float)L_46)), (float)((float)((float)L_47)))), /*hidden argument*/NULL);
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)L_20))), (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_48);
		// for (var x = 0; x < w2; x++)
		int32_t L_49 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1));
	}

IL_00d7:
	{
		// for (var x = 0; x < w2; x++)
		int32_t L_50 = V_6;
		int32_t L_51 = ((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->get_w2_5();
		if ((((int32_t)L_50) < ((int32_t)L_51)))
		{
			goto IL_0046;
		}
	}
	{
		// for (var y = threadData.start; y < threadData.end; y++)
		int32_t L_52 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1));
	}

IL_00e7:
	{
		// for (var y = threadData.start; y < threadData.end; y++)
		int32_t L_53 = V_1;
		ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A * L_54 = V_0;
		NullCheck(L_54);
		int32_t L_55 = L_54->get_end_1();
		if ((((int32_t)L_53) < ((int32_t)L_55)))
		{
			goto IL_0013;
		}
	}
	{
		// mutex.WaitOne();
		Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5 * L_56 = ((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->get_mutex_7();
		NullCheck(L_56);
		bool L_57;
		L_57 = VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_56);
		// finishCount++;
		int32_t L_58 = ((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->get_finishCount_6();
		((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->set_finishCount_6(((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)1)));
		// mutex.ReleaseMutex();
		Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5 * L_59 = ((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->get_mutex_7();
		NullCheck(L_59);
		Mutex_ReleaseMutex_mDF6C95C5F169F7345539CAECFA264A4D4687B190(L_59, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TextureScale::PointScale(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureScale_PointScale_m4C9D1E67BF1A55E2F553312F9824145EA8DD0331 (RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// ThreadData threadData = (ThreadData)obj;
		RuntimeObject * L_0 = ___obj0;
		V_0 = ((ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A *)CastclassClass((RuntimeObject*)L_0, ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A_il2cpp_TypeInfo_var));
		// for (var y = threadData.start; y < threadData.end; y++)
		ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A * L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->get_start_0();
		V_1 = L_2;
		goto IL_0065;
	}

IL_0010:
	{
		// var thisY = (int)(ratioY * y) * w;
		float L_3 = ((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->get_ratioY_4();
		int32_t L_4 = V_1;
		int32_t L_5 = ((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->get_w_2();
		V_2 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)L_3, (float)((float)((float)L_4)))))), (int32_t)L_5));
		// var yw = y * w2;
		int32_t L_6 = V_1;
		int32_t L_7 = ((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->get_w2_5();
		V_3 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_6, (int32_t)L_7));
		// for (var x = 0; x < w2; x++)
		V_4 = 0;
		goto IL_0058;
	}

IL_002d:
	{
		// newColors[yw + x] = texColors[(int)(thisY + ratioX * x)];
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_8 = ((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->get_newColors_1();
		int32_t L_9 = V_3;
		int32_t L_10 = V_4;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_11 = ((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->get_texColors_0();
		int32_t L_12 = V_2;
		float L_13 = ((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->get_ratioX_3();
		int32_t L_14 = V_4;
		NullCheck(L_11);
		int32_t L_15 = ((int32_t)((int32_t)((float)il2cpp_codegen_add((float)((float)((float)L_12)), (float)((float)il2cpp_codegen_multiply((float)L_13, (float)((float)((float)L_14))))))));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_16 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_10))), (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_16);
		// for (var x = 0; x < w2; x++)
		int32_t L_17 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_0058:
	{
		// for (var x = 0; x < w2; x++)
		int32_t L_18 = V_4;
		int32_t L_19 = ((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->get_w2_5();
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_002d;
		}
	}
	{
		// for (var y = threadData.start; y < threadData.end; y++)
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0065:
	{
		// for (var y = threadData.start; y < threadData.end; y++)
		int32_t L_21 = V_1;
		ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A * L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23 = L_22->get_end_1();
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_0010;
		}
	}
	{
		// mutex.WaitOne();
		Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5 * L_24 = ((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->get_mutex_7();
		NullCheck(L_24);
		bool L_25;
		L_25 = VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_24);
		// finishCount++;
		int32_t L_26 = ((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->get_finishCount_6();
		((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->set_finishCount_6(((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1)));
		// mutex.ReleaseMutex();
		Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5 * L_27 = ((TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_StaticFields*)il2cpp_codegen_static_fields_for(TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6_il2cpp_TypeInfo_var))->get_mutex_7();
		NullCheck(L_27);
		Mutex_ReleaseMutex_mDF6C95C5F169F7345539CAECFA264A4D4687B190(L_27, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Color TextureScale::ColorLerpUnclamped(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  TextureScale_ColorLerpUnclamped_m17AEA77F6A498CAC07EA55DF16E7A46774D31138 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___c10, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___c21, float ___value2, const RuntimeMethod* method)
{
	{
		// return new Color(c1.r + (c2.r - c1.r) * value,
		//                   c1.g + (c2.g - c1.g) * value,
		//                   c1.b + (c2.b - c1.b) * value,
		//                   c1.a + (c2.a - c1.a) * value);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = ___c10;
		float L_1 = L_0.get_r_0();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2 = ___c21;
		float L_3 = L_2.get_r_0();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4 = ___c10;
		float L_5 = L_4.get_r_0();
		float L_6 = ___value2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_7 = ___c10;
		float L_8 = L_7.get_g_1();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_9 = ___c21;
		float L_10 = L_9.get_g_1();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_11 = ___c10;
		float L_12 = L_11.get_g_1();
		float L_13 = ___value2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_14 = ___c10;
		float L_15 = L_14.get_b_2();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_16 = ___c21;
		float L_17 = L_16.get_b_2();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_18 = ___c10;
		float L_19 = L_18.get_b_2();
		float L_20 = ___value2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_21 = ___c10;
		float L_22 = L_21.get_a_3();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_23 = ___c21;
		float L_24 = L_23.get_a_3();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_25 = ___c10;
		float L_26 = L_25.get_a_3();
		float L_27 = ___value2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_28;
		memset((&L_28), 0, sizeof(L_28));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_28), ((float)il2cpp_codegen_add((float)L_1, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_3, (float)L_5)), (float)L_6)))), ((float)il2cpp_codegen_add((float)L_8, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_10, (float)L_12)), (float)L_13)))), ((float)il2cpp_codegen_add((float)L_15, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_17, (float)L_19)), (float)L_20)))), ((float)il2cpp_codegen_add((float)L_22, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_24, (float)L_26)), (float)L_27)))), /*hidden argument*/NULL);
		return L_28;
	}
}
// System.Void TextureScale::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureScale__ctor_m85BC47BFDE3895789BA670CD1BCADD254BFB88D0 (TextureScale_t67D9A31FB87E21ED4421175E5600EBC1E49428E6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void TextureScale/ThreadData::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadData__ctor_mA2E955D69EA603EB22B6B27718C8F195C3825D83 (ThreadData_t48129B9ABFDA8AC6858043DE45A3370AE88A9B7A * __this, int32_t ___s0, int32_t ___e1, const RuntimeMethod* method)
{
	{
		// public ThreadData(int s, int e)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// start = s;
		int32_t L_0 = ___s0;
		__this->set_start_0(L_0);
		// end = e;
		int32_t L_1 = ___e1;
		__this->set_end_1(L_1);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XRReferenceImage_get_name_mE8F3368C2587552333AB78EA72A02E5B73E355C7_inline (XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467 * __this, const RuntimeMethod* method)
{
	{
		// public string name => m_Name;
		String_t* L_0 = __this->get_m_Name_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * ARTrackedImagesChangedEventArgs_get_added_m0E81E3C161242C2508B90BCC73605F551AD53B4E_inline (ARTrackedImagesChangedEventArgs_t6EA8225CE7DB5A2148855F99D437DFA5786A1B7C * __this, const RuntimeMethod* method)
{
	{
		// public List<ARTrackedImage> added { get; private set; }
		List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * L_0 = __this->get_U3CaddedU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * ARTrackedImagesChangedEventArgs_get_updated_mBEB295B97B6C25E4DC4447383F529C9E475E4041_inline (ARTrackedImagesChangedEventArgs_t6EA8225CE7DB5A2148855F99D437DFA5786A1B7C * __this, const RuntimeMethod* method)
{
	{
		// public List<ARTrackedImage> updated { get; private set; }
		List_1_t2922678FB1CE71E23AD351AE6FAEC20D68F8984F * L_0 = __this->get_U3CupdatedU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OptionData_set_text_m23C74889CF93559CD64F90EC8DA69C20C13FC549_inline (OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string text  { get { return m_Text; }  set { m_Text = value;  } }
		String_t* L_0 = ___value0;
		__this->set_m_Text_0(L_0);
		// public string text  { get { return m_Text; }  set { m_Text = value;  } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467  ARTrackedImage_get_referenceImage_m6061DE2D46F8060065B64EF3860A0B0085B569E4_inline (ARTrackedImage_t32B829A81320BCDF3A743DCD4DC4383BA266C5B7 * __this, const RuntimeMethod* method)
{
	{
		// public XRReferenceImage referenceImage { get; internal set; }
		XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467  L_0 = __this->get_U3CreferenceImageU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Dropdown_get_value_mFBF47E0C72050C5CB96B8B6D33F41BA2D1368F26_inline (Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * __this, const RuntimeMethod* method)
{
	{
		// return m_Value;
		int32_t L_0 = __this->get_m_Value_25();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* OptionData_get_text_m8652FE3866405C4C7C3782659009EF2C7E54D232_inline (OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * __this, const RuntimeMethod* method)
{
	{
		// public string text  { get { return m_Text; }  set { m_Text = value;  } }
		String_t* L_0 = __this->get_m_Text_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  List_1_get_Item_m200A6C390D1FAEF2378D70230BD6E96D492ABE04_gshared_inline (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA* L_2 = (ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA*)__this->get__items_1();
		int32_t L_3 = ___index0;
		ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA*)L_2, (int32_t)L_3);
		return (ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
