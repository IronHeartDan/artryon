#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// <>f__AnonymousType0`4<System.Int32,System.Object,System.Object,System.Object>
struct U3CU3Ef__AnonymousType0_4_t6AD706F84E39BA82CD246ACA839166C93733D2BF;
// <>f__AnonymousType0`4<System.Int32,System.String,System.String,Newtonsoft.Json.Linq.JObject>
struct U3CU3Ef__AnonymousType0_4_tA4B468AA51ACFB35812852DE80F87F89E0F51F14;
// <>f__AnonymousType0`4<System.Int32,System.String,System.String,System.Object>
struct U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6;
// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRHumanBody,UnityEngine.XR.ARFoundation.ARHumanBody>
struct ARTrackable_2_t482FF6DE9326FFF166148DA7425768F6FA9EB9B0;
// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRHumanBody,System.Object>
struct ARTrackable_2_tCE2D4C1D7EFE9958ED83E153C360A21B8E4D3CF6;
// System.Action`1<UnityEngine.XR.ARFoundation.ARHumanBodiesChangedEventArgs>
struct Action_1_t6F3641BB0F5489AC32B6649DD5BA9D07DD0C5301;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityMessage>
struct Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARHumanBody>
struct Dictionary_2_t875E70525C711130925F3854722CF17DC974E6D7;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.Samples.BoneController>
struct Dictionary_2_t1BED71E67D13B3EB44A49DC3BE7C8300EB1E41E7;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>
struct Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>
struct IEnumerable_1_tAA90B0A114C70EBF9CC4A6380409C4899CB35DD5;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.XR.ARSubsystems.TrackableId>
struct IEqualityComparer_1_tD2AF20E67D8624289AE792EE7E48B879EEF614ED;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityMessage>
struct KeyCollection_tF6E2BD1A51688398F2D4F85FB9190FBB4A9DAFA6;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.Samples.BoneController>
struct KeyCollection_tA2DE1730FA6CA0499AD14F96A4A6AC7261A186F8;
// System.Lazy`1<UnityMessageManager>
struct Lazy_1_t1F6F28AE3A12C39616C210625F3C610F09E23E0D;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARHumanBody>
struct List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem>
struct List_1_tF313C639A10A550C756E883EFADA75B9D6D2D936;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRHumanBodySubsystemDescriptor>
struct List_1_tB23F14817387B6E0CF6BC3F698BE74D4321CBBD4;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64;
// System.Collections.Generic.Queue`1<UnityEngine.Transform>
struct Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177;
// SingletonMonoBehaviour`1<System.Object>
struct SingletonMonoBehaviour_1_tE14741F2799AE3F949345E77B1A572DC11A30DDE;
// SingletonMonoBehaviour`1<UnityMessageManager>
struct SingletonMonoBehaviour_1_tCE345733DAFD7C69997F22704982E2372C4BFCDD;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>
struct UnityAction_2_t808E43EBC9AA89CEA5830BD187EC213182A02B50;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityMessage>
struct ValueCollection_tA403EAC50EF5A2B6760B999D4B5F8E0C2668B997;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.Samples.BoneController>
struct ValueCollection_tDB65493EE000D5CF2976E885EE8D55AA23D6E4E2;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,UnityMessage>[]
struct EntryU5BU5D_tC02CA0AEDB81B33CE8B173EFD9E9B400F7656DC3;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.Samples.BoneController>[]
struct EntryU5BU5D_t6D2933EB059736903F9A6A4C5CEB4B97CCB17A45;
// UnityEngine.XR.ARFoundation.ARHumanBody[]
struct ARHumanBodyU5BU5D_t10A32F710B0093CF19C6913E7A365C61F6FEC0D0;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// Newtonsoft.Json.Linq.JTokenType[]
struct JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
// UnityEngine.XR.ARFoundation.ARHumanBody
struct ARHumanBody_tD50BBE7B486B76556A46BE9C799EE268D4ABB3B5;
// UnityEngine.XR.ARFoundation.ARHumanBodyManager
struct ARHumanBodyManager_t901B9F11785ED05D74F4FAC50D14259488D800B4;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1;
// System.ComponentModel.AddingNewEventHandler
struct AddingNewEventHandler_tF21F6F9D1D0611177846250B5CF81B55B5F6B785;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.XR.ARFoundation.Samples.BoneController
struct BoneController_tE016B260A258DA0FE0B6DC25A5C29E37A65F5538;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.XR.ARFoundation.Samples.HumanBodyTracker
struct HumanBodyTracker_t08D6DEC180E29CF2B63BF7DDB757E0B9CCAF1802;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Newtonsoft.Json.Linq.JContainer
struct JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B;
// Newtonsoft.Json.Linq.JObject
struct JObject_t55E456F4BAFC1A97265C571EDE7F421663976807;
// Newtonsoft.Json.Linq.JPropertyKeyedCollection
struct JPropertyKeyedCollection_t6A2B68E3332E7964E0E7CC57B6A06FE4895381E2;
// Newtonsoft.Json.Linq.JToken
struct JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E;
// Newtonsoft.Json.Linq.JTokenEqualityComparer
struct JTokenEqualityComparer_t4B6750AB73A0DD4C352768B8B429B014C4C2401D;
// System.ComponentModel.ListChangedEventHandler
struct ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C;
// MessageHandler
struct MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// NativeAPI
struct NativeAPI_tCF1B87942D24DC16E49B82348757D460312951F7;
// System.Collections.Specialized.NotifyCollectionChangedEventHandler
struct NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99;
// System.ComponentModel.PropertyChangingEventHandler
struct PropertyChangingEventHandler_t5EA6F6EAA933D35C0AAD9D347A3BD53D343E4C22;
// System.Text.RegularExpressions.Regex
struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityMessage
struct UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD;
// UnityMessageManager
struct UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem
struct XRHumanBodySubsystem_t71FBF94503DCE781657FA4F362464EA389CD9F2B;
// UnityMessageManager/MessageDelegate
struct MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9;
// UnityMessageManager/MessageHandlerDelegate
struct MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t6F3641BB0F5489AC32B6649DD5BA9D07DD0C5301_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t1BED71E67D13B3EB44A49DC3BE7C8300EB1E41E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingletonMonoBehaviour_1_tCE345733DAFD7C69997F22704982E2372C4BFCDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ef__AnonymousType0_4_tA4B468AA51ACFB35812852DE80F87F89E0F51F14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0933BD6773EB584271818C3FFE8D0E09C7041D59;
IL2CPP_EXTERN_C String_t* _stringLiteral24C049E512CD1B48036BD162FF63700A57CA3469;
IL2CPP_EXTERN_C String_t* _stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD;
IL2CPP_EXTERN_C String_t* _stringLiteral37E2FC7EB30787F303093E947C9C7AB9A31BED4D;
IL2CPP_EXTERN_C String_t* _stringLiteral582845C691E515C821F38ECA4056669ACD3A652E;
IL2CPP_EXTERN_C String_t* _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694;
IL2CPP_EXTERN_C String_t* _stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1;
IL2CPP_EXTERN_C String_t* _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC;
IL2CPP_EXTERN_C const RuntimeMethod* ARTrackable_2_get_trackableId_m166B48FCC8B0B15515F203B11A241F94F439E04F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m29DED49AF95994B55DBD78F6E52AA52DC12E05D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m2097BED9B4E3EDCC2144E58088BF028DB0B48D99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mA9D4183640FBCF66BB8B45977423E5E98758C9ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m273238F996359EBF987A2836DA52FBF359AEFB67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mCBE547B802663CB07E47AE37E93A3EC5318C324D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m0382483D7D84AC88696EFBBD3566B8B7B4C927D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m68772E681F040467DB264AC470FCAA5FFDBE4CE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCDC1ED9FB26C45BCA609A92B7AA9757038C7C147_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mDA6348EB93751BA2207AEEC208E9B817606F0854_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enum_TryParse_TisJointIndices_tC39C20C4C1CF1F68CEA9B6833554EAC0B3F1A53B_m2D26CACF03D6B93E4E0DC5D7E2A5DDF14E645BF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mBB619088F9B19CF7EF4B85EC1F094C24ADA5FC6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mB37A4977FC667CD454E27CB5C54AD408BDCFC907_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m097CEA7A6AB1D5800994E7E6A7D71599C8F1E694_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Extensions_Value_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m93F62F5FBC6403976ABF2EAB5A45219B76DE92C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Extensions_Value_TisString_t_mE454079DDACB55830A1DEB2BADFC211055C63984_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisBoneController_tE016B260A258DA0FE0B6DC25A5C29E37A65F5538_m78CDE8D27CA6251E5249A2388551AF3D09ED3240_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HumanBodyTracker_OnHumanBodiesChanged_mCA0BA7F2AAC9D2A12EB37B819B86A2D793EDE86F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m54655BA773DBD1A5BFAF33F22390461DD5222E82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessageHandler_getData_TisRuntimeObject_m4B0F54A0EA8EBDB824898342D0FB18471D377EC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_get_IsCreated_mE0158704D7D59BC6278CFFD35923EB5370D9D623_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_mDAEEC4B9916560EEC844B655D3E6E2BE20D91812_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mFF54572C8717A7CFE90F925376E9D6BD9E74FADB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mA0338FD7CCC05D92DE06FB933502F90C3420B78B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m69913970BDC0D766ABCABA9E63B260328EDFE031_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SingletonMonoBehaviour_1__ctor_m0FD850D200F04E2F76476533783D9581729AB59F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SingletonMonoBehaviour_1_get_Instance_m2219FD0089F95EA990F58F8DC6D47F79E9FCECC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ef__AnonymousType0_4__ctor_m3C493629DA20D23984AAEB32CBBAEEB67F0017BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ef__AnonymousType0_4__ctor_m82B466E8D610611C6867BC66AB3DA978BFB62E70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityMessageManager_OnSceneLoaded_mD7DA9C76ADA8D8F30198B4D274FE391150DF7192_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;

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


// <>f__AnonymousType0`4<System.Int32,System.String,System.String,Newtonsoft.Json.Linq.JObject>
struct U3CU3Ef__AnonymousType0_4_tA4B468AA51ACFB35812852DE80F87F89E0F51F14  : public RuntimeObject
{
public:
	// <id>j__TPar <>f__AnonymousType0`4::<id>i__Field
	int32_t ___U3CidU3Ei__Field_0;
	// <seq>j__TPar <>f__AnonymousType0`4::<seq>i__Field
	String_t* ___U3CseqU3Ei__Field_1;
	// <name>j__TPar <>f__AnonymousType0`4::<name>i__Field
	String_t* ___U3CnameU3Ei__Field_2;
	// <data>j__TPar <>f__AnonymousType0`4::<data>i__Field
	JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * ___U3CdataU3Ei__Field_3;

public:
	inline static int32_t get_offset_of_U3CidU3Ei__Field_0() { return static_cast<int32_t>(offsetof(U3CU3Ef__AnonymousType0_4_tA4B468AA51ACFB35812852DE80F87F89E0F51F14, ___U3CidU3Ei__Field_0)); }
	inline int32_t get_U3CidU3Ei__Field_0() const { return ___U3CidU3Ei__Field_0; }
	inline int32_t* get_address_of_U3CidU3Ei__Field_0() { return &___U3CidU3Ei__Field_0; }
	inline void set_U3CidU3Ei__Field_0(int32_t value)
	{
		___U3CidU3Ei__Field_0 = value;
	}

	inline static int32_t get_offset_of_U3CseqU3Ei__Field_1() { return static_cast<int32_t>(offsetof(U3CU3Ef__AnonymousType0_4_tA4B468AA51ACFB35812852DE80F87F89E0F51F14, ___U3CseqU3Ei__Field_1)); }
	inline String_t* get_U3CseqU3Ei__Field_1() const { return ___U3CseqU3Ei__Field_1; }
	inline String_t** get_address_of_U3CseqU3Ei__Field_1() { return &___U3CseqU3Ei__Field_1; }
	inline void set_U3CseqU3Ei__Field_1(String_t* value)
	{
		___U3CseqU3Ei__Field_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CseqU3Ei__Field_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnameU3Ei__Field_2() { return static_cast<int32_t>(offsetof(U3CU3Ef__AnonymousType0_4_tA4B468AA51ACFB35812852DE80F87F89E0F51F14, ___U3CnameU3Ei__Field_2)); }
	inline String_t* get_U3CnameU3Ei__Field_2() const { return ___U3CnameU3Ei__Field_2; }
	inline String_t** get_address_of_U3CnameU3Ei__Field_2() { return &___U3CnameU3Ei__Field_2; }
	inline void set_U3CnameU3Ei__Field_2(String_t* value)
	{
		___U3CnameU3Ei__Field_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ei__Field_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdataU3Ei__Field_3() { return static_cast<int32_t>(offsetof(U3CU3Ef__AnonymousType0_4_tA4B468AA51ACFB35812852DE80F87F89E0F51F14, ___U3CdataU3Ei__Field_3)); }
	inline JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * get_U3CdataU3Ei__Field_3() const { return ___U3CdataU3Ei__Field_3; }
	inline JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 ** get_address_of_U3CdataU3Ei__Field_3() { return &___U3CdataU3Ei__Field_3; }
	inline void set_U3CdataU3Ei__Field_3(JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * value)
	{
		___U3CdataU3Ei__Field_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdataU3Ei__Field_3), (void*)value);
	}
};


// <>f__AnonymousType0`4<System.Int32,System.String,System.String,System.Object>
struct U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6  : public RuntimeObject
{
public:
	// <id>j__TPar <>f__AnonymousType0`4::<id>i__Field
	int32_t ___U3CidU3Ei__Field_0;
	// <seq>j__TPar <>f__AnonymousType0`4::<seq>i__Field
	String_t* ___U3CseqU3Ei__Field_1;
	// <name>j__TPar <>f__AnonymousType0`4::<name>i__Field
	String_t* ___U3CnameU3Ei__Field_2;
	// <data>j__TPar <>f__AnonymousType0`4::<data>i__Field
	RuntimeObject * ___U3CdataU3Ei__Field_3;

public:
	inline static int32_t get_offset_of_U3CidU3Ei__Field_0() { return static_cast<int32_t>(offsetof(U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6, ___U3CidU3Ei__Field_0)); }
	inline int32_t get_U3CidU3Ei__Field_0() const { return ___U3CidU3Ei__Field_0; }
	inline int32_t* get_address_of_U3CidU3Ei__Field_0() { return &___U3CidU3Ei__Field_0; }
	inline void set_U3CidU3Ei__Field_0(int32_t value)
	{
		___U3CidU3Ei__Field_0 = value;
	}

	inline static int32_t get_offset_of_U3CseqU3Ei__Field_1() { return static_cast<int32_t>(offsetof(U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6, ___U3CseqU3Ei__Field_1)); }
	inline String_t* get_U3CseqU3Ei__Field_1() const { return ___U3CseqU3Ei__Field_1; }
	inline String_t** get_address_of_U3CseqU3Ei__Field_1() { return &___U3CseqU3Ei__Field_1; }
	inline void set_U3CseqU3Ei__Field_1(String_t* value)
	{
		___U3CseqU3Ei__Field_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CseqU3Ei__Field_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnameU3Ei__Field_2() { return static_cast<int32_t>(offsetof(U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6, ___U3CnameU3Ei__Field_2)); }
	inline String_t* get_U3CnameU3Ei__Field_2() const { return ___U3CnameU3Ei__Field_2; }
	inline String_t** get_address_of_U3CnameU3Ei__Field_2() { return &___U3CnameU3Ei__Field_2; }
	inline void set_U3CnameU3Ei__Field_2(String_t* value)
	{
		___U3CnameU3Ei__Field_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ei__Field_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdataU3Ei__Field_3() { return static_cast<int32_t>(offsetof(U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6, ___U3CdataU3Ei__Field_3)); }
	inline RuntimeObject * get_U3CdataU3Ei__Field_3() const { return ___U3CdataU3Ei__Field_3; }
	inline RuntimeObject ** get_address_of_U3CdataU3Ei__Field_3() { return &___U3CdataU3Ei__Field_3; }
	inline void set_U3CdataU3Ei__Field_3(RuntimeObject * value)
	{
		___U3CdataU3Ei__Field_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdataU3Ei__Field_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Int32,UnityMessage>
struct Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tC02CA0AEDB81B33CE8B173EFD9E9B400F7656DC3* ___entries_1;
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
	KeyCollection_tF6E2BD1A51688398F2D4F85FB9190FBB4A9DAFA6 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tA403EAC50EF5A2B6760B999D4B5F8E0C2668B997 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E, ___entries_1)); }
	inline EntryU5BU5D_tC02CA0AEDB81B33CE8B173EFD9E9B400F7656DC3* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tC02CA0AEDB81B33CE8B173EFD9E9B400F7656DC3** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tC02CA0AEDB81B33CE8B173EFD9E9B400F7656DC3* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E, ___keys_7)); }
	inline KeyCollection_tF6E2BD1A51688398F2D4F85FB9190FBB4A9DAFA6 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tF6E2BD1A51688398F2D4F85FB9190FBB4A9DAFA6 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tF6E2BD1A51688398F2D4F85FB9190FBB4A9DAFA6 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E, ___values_8)); }
	inline ValueCollection_tA403EAC50EF5A2B6760B999D4B5F8E0C2668B997 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tA403EAC50EF5A2B6760B999D4B5F8E0C2668B997 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tA403EAC50EF5A2B6760B999D4B5F8E0C2668B997 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.Samples.BoneController>
struct Dictionary_2_t1BED71E67D13B3EB44A49DC3BE7C8300EB1E41E7  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t6D2933EB059736903F9A6A4C5CEB4B97CCB17A45* ___entries_1;
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
	KeyCollection_tA2DE1730FA6CA0499AD14F96A4A6AC7261A186F8 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tDB65493EE000D5CF2976E885EE8D55AA23D6E4E2 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BED71E67D13B3EB44A49DC3BE7C8300EB1E41E7, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BED71E67D13B3EB44A49DC3BE7C8300EB1E41E7, ___entries_1)); }
	inline EntryU5BU5D_t6D2933EB059736903F9A6A4C5CEB4B97CCB17A45* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t6D2933EB059736903F9A6A4C5CEB4B97CCB17A45** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t6D2933EB059736903F9A6A4C5CEB4B97CCB17A45* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BED71E67D13B3EB44A49DC3BE7C8300EB1E41E7, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BED71E67D13B3EB44A49DC3BE7C8300EB1E41E7, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BED71E67D13B3EB44A49DC3BE7C8300EB1E41E7, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BED71E67D13B3EB44A49DC3BE7C8300EB1E41E7, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BED71E67D13B3EB44A49DC3BE7C8300EB1E41E7, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BED71E67D13B3EB44A49DC3BE7C8300EB1E41E7, ___keys_7)); }
	inline KeyCollection_tA2DE1730FA6CA0499AD14F96A4A6AC7261A186F8 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tA2DE1730FA6CA0499AD14F96A4A6AC7261A186F8 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tA2DE1730FA6CA0499AD14F96A4A6AC7261A186F8 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BED71E67D13B3EB44A49DC3BE7C8300EB1E41E7, ___values_8)); }
	inline ValueCollection_tDB65493EE000D5CF2976E885EE8D55AA23D6E4E2 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tDB65493EE000D5CF2976E885EE8D55AA23D6E4E2 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tDB65493EE000D5CF2976E885EE8D55AA23D6E4E2 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BED71E67D13B3EB44A49DC3BE7C8300EB1E41E7, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARHumanBody>
struct List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ARHumanBodyU5BU5D_t10A32F710B0093CF19C6913E7A365C61F6FEC0D0* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64, ____items_1)); }
	inline ARHumanBodyU5BU5D_t10A32F710B0093CF19C6913E7A365C61F6FEC0D0* get__items_1() const { return ____items_1; }
	inline ARHumanBodyU5BU5D_t10A32F710B0093CF19C6913E7A365C61F6FEC0D0** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ARHumanBodyU5BU5D_t10A32F710B0093CF19C6913E7A365C61F6FEC0D0* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ARHumanBodyU5BU5D_t10A32F710B0093CF19C6913E7A365C61F6FEC0D0* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64_StaticFields, ____emptyArray_5)); }
	inline ARHumanBodyU5BU5D_t10A32F710B0093CF19C6913E7A365C61F6FEC0D0* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ARHumanBodyU5BU5D_t10A32F710B0093CF19C6913E7A365C61F6FEC0D0** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ARHumanBodyU5BU5D_t10A32F710B0093CF19C6913E7A365C61F6FEC0D0* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____array_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<UnityEngine.Transform>
struct Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177, ____array_0)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get__array_0() const { return ____array_0; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Newtonsoft.Json.Linq.JToken
struct JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Linq.JContainer Newtonsoft.Json.Linq.JToken::_parent
	JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B * ____parent_1;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_previous
	JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * ____previous_2;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_next
	JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * ____next_3;
	// System.Object Newtonsoft.Json.Linq.JToken::_annotations
	RuntimeObject * ____annotations_4;

public:
	inline static int32_t get_offset_of__parent_1() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E, ____parent_1)); }
	inline JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B * get__parent_1() const { return ____parent_1; }
	inline JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B ** get_address_of__parent_1() { return &____parent_1; }
	inline void set__parent_1(JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B * value)
	{
		____parent_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parent_1), (void*)value);
	}

	inline static int32_t get_offset_of__previous_2() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E, ____previous_2)); }
	inline JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * get__previous_2() const { return ____previous_2; }
	inline JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E ** get_address_of__previous_2() { return &____previous_2; }
	inline void set__previous_2(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * value)
	{
		____previous_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____previous_2), (void*)value);
	}

	inline static int32_t get_offset_of__next_3() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E, ____next_3)); }
	inline JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * get__next_3() const { return ____next_3; }
	inline JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E ** get_address_of__next_3() { return &____next_3; }
	inline void set__next_3(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * value)
	{
		____next_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____next_3), (void*)value);
	}

	inline static int32_t get_offset_of__annotations_4() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E, ____annotations_4)); }
	inline RuntimeObject * get__annotations_4() const { return ____annotations_4; }
	inline RuntimeObject ** get_address_of__annotations_4() { return &____annotations_4; }
	inline void set__annotations_4(RuntimeObject * value)
	{
		____annotations_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____annotations_4), (void*)value);
	}
};

struct JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields
{
public:
	// Newtonsoft.Json.Linq.JTokenEqualityComparer Newtonsoft.Json.Linq.JToken::_equalityComparer
	JTokenEqualityComparer_t4B6750AB73A0DD4C352768B8B429B014C4C2401D * ____equalityComparer_0;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BooleanTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___BooleanTypes_5;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::NumberTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___NumberTypes_6;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BigIntegerTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___BigIntegerTypes_7;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::StringTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___StringTypes_8;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::GuidTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___GuidTypes_9;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::TimeSpanTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___TimeSpanTypes_10;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::UriTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___UriTypes_11;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::CharTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___CharTypes_12;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::DateTimeTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___DateTimeTypes_13;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BytesTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___BytesTypes_14;

public:
	inline static int32_t get_offset_of__equalityComparer_0() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ____equalityComparer_0)); }
	inline JTokenEqualityComparer_t4B6750AB73A0DD4C352768B8B429B014C4C2401D * get__equalityComparer_0() const { return ____equalityComparer_0; }
	inline JTokenEqualityComparer_t4B6750AB73A0DD4C352768B8B429B014C4C2401D ** get_address_of__equalityComparer_0() { return &____equalityComparer_0; }
	inline void set__equalityComparer_0(JTokenEqualityComparer_t4B6750AB73A0DD4C352768B8B429B014C4C2401D * value)
	{
		____equalityComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____equalityComparer_0), (void*)value);
	}

	inline static int32_t get_offset_of_BooleanTypes_5() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___BooleanTypes_5)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_BooleanTypes_5() const { return ___BooleanTypes_5; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_BooleanTypes_5() { return &___BooleanTypes_5; }
	inline void set_BooleanTypes_5(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___BooleanTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BooleanTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_NumberTypes_6() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___NumberTypes_6)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_NumberTypes_6() const { return ___NumberTypes_6; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_NumberTypes_6() { return &___NumberTypes_6; }
	inline void set_NumberTypes_6(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___NumberTypes_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NumberTypes_6), (void*)value);
	}

	inline static int32_t get_offset_of_BigIntegerTypes_7() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___BigIntegerTypes_7)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_BigIntegerTypes_7() const { return ___BigIntegerTypes_7; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_BigIntegerTypes_7() { return &___BigIntegerTypes_7; }
	inline void set_BigIntegerTypes_7(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___BigIntegerTypes_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BigIntegerTypes_7), (void*)value);
	}

	inline static int32_t get_offset_of_StringTypes_8() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___StringTypes_8)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_StringTypes_8() const { return ___StringTypes_8; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_StringTypes_8() { return &___StringTypes_8; }
	inline void set_StringTypes_8(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___StringTypes_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StringTypes_8), (void*)value);
	}

	inline static int32_t get_offset_of_GuidTypes_9() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___GuidTypes_9)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_GuidTypes_9() const { return ___GuidTypes_9; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_GuidTypes_9() { return &___GuidTypes_9; }
	inline void set_GuidTypes_9(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___GuidTypes_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GuidTypes_9), (void*)value);
	}

	inline static int32_t get_offset_of_TimeSpanTypes_10() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___TimeSpanTypes_10)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_TimeSpanTypes_10() const { return ___TimeSpanTypes_10; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_TimeSpanTypes_10() { return &___TimeSpanTypes_10; }
	inline void set_TimeSpanTypes_10(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___TimeSpanTypes_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TimeSpanTypes_10), (void*)value);
	}

	inline static int32_t get_offset_of_UriTypes_11() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___UriTypes_11)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_UriTypes_11() const { return ___UriTypes_11; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_UriTypes_11() { return &___UriTypes_11; }
	inline void set_UriTypes_11(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___UriTypes_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriTypes_11), (void*)value);
	}

	inline static int32_t get_offset_of_CharTypes_12() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___CharTypes_12)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_CharTypes_12() const { return ___CharTypes_12; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_CharTypes_12() { return &___CharTypes_12; }
	inline void set_CharTypes_12(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___CharTypes_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CharTypes_12), (void*)value);
	}

	inline static int32_t get_offset_of_DateTimeTypes_13() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___DateTimeTypes_13)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_DateTimeTypes_13() const { return ___DateTimeTypes_13; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_DateTimeTypes_13() { return &___DateTimeTypes_13; }
	inline void set_DateTimeTypes_13(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___DateTimeTypes_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DateTimeTypes_13), (void*)value);
	}

	inline static int32_t get_offset_of_BytesTypes_14() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___BytesTypes_14)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_BytesTypes_14() const { return ___BytesTypes_14; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_BytesTypes_14() { return &___BytesTypes_14; }
	inline void set_BytesTypes_14(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___BytesTypes_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BytesTypes_14), (void*)value);
	}
};


// MessageHandler
struct MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7  : public RuntimeObject
{
public:
	// System.Int32 MessageHandler::id
	int32_t ___id_0;
	// System.String MessageHandler::seq
	String_t* ___seq_1;
	// System.String MessageHandler::name
	String_t* ___name_2;
	// Newtonsoft.Json.Linq.JToken MessageHandler::data
	JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * ___data_3;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_seq_1() { return static_cast<int32_t>(offsetof(MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7, ___seq_1)); }
	inline String_t* get_seq_1() const { return ___seq_1; }
	inline String_t** get_address_of_seq_1() { return &___seq_1; }
	inline void set_seq_1(String_t* value)
	{
		___seq_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___seq_1), (void*)value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_2), (void*)value);
	}

	inline static int32_t get_offset_of_data_3() { return static_cast<int32_t>(offsetof(MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7, ___data_3)); }
	inline JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * get_data_3() const { return ___data_3; }
	inline JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E ** get_address_of_data_3() { return &___data_3; }
	inline void set_data_3(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * value)
	{
		___data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_3), (void*)value);
	}
};


// NativeAPI
struct NativeAPI_tCF1B87942D24DC16E49B82348757D460312951F7  : public RuntimeObject
{
public:

public:
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


// UnityMessage
struct UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD  : public RuntimeObject
{
public:
	// System.String UnityMessage::name
	String_t* ___name_0;
	// Newtonsoft.Json.Linq.JObject UnityMessage::data
	JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * ___data_1;
	// System.Action`1<System.Object> UnityMessage::callBack
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___callBack_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD, ___data_1)); }
	inline JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * get_data_1() const { return ___data_1; }
	inline JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 ** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_1), (void*)value);
	}

	inline static int32_t get_offset_of_callBack_2() { return static_cast<int32_t>(offsetof(UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD, ___callBack_2)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_callBack_2() const { return ___callBack_2; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_callBack_2() { return &___callBack_2; }
	inline void set_callBack_2(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___callBack_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callBack_2), (void*)value);
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

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARHumanBody>
struct Enumerator_tD4EC69EA64503815479081028D89ABDC9B688E29 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	ARHumanBody_tD50BBE7B486B76556A46BE9C799EE268D4ABB3B5 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tD4EC69EA64503815479081028D89ABDC9B688E29, ___list_0)); }
	inline List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * get_list_0() const { return ___list_0; }
	inline List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tD4EC69EA64503815479081028D89ABDC9B688E29, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tD4EC69EA64503815479081028D89ABDC9B688E29, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tD4EC69EA64503815479081028D89ABDC9B688E29, ___current_3)); }
	inline ARHumanBody_tD50BBE7B486B76556A46BE9C799EE268D4ABB3B5 * get_current_3() const { return ___current_3; }
	inline ARHumanBody_tD50BBE7B486B76556A46BE9C799EE268D4ABB3B5 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(ARHumanBody_tD50BBE7B486B76556A46BE9C799EE268D4ABB3B5 * value)
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


// UnityEngine.XR.ARFoundation.ARHumanBodiesChangedEventArgs
struct ARHumanBodiesChangedEventArgs_t03BC9E10B0F7EA109F54F589571A7FCE26B18729 
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARHumanBody> UnityEngine.XR.ARFoundation.ARHumanBodiesChangedEventArgs::<added>k__BackingField
	List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * ___U3CaddedU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARHumanBody> UnityEngine.XR.ARFoundation.ARHumanBodiesChangedEventArgs::<updated>k__BackingField
	List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * ___U3CupdatedU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARHumanBody> UnityEngine.XR.ARFoundation.ARHumanBodiesChangedEventArgs::<removed>k__BackingField
	List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * ___U3CremovedU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CaddedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ARHumanBodiesChangedEventArgs_t03BC9E10B0F7EA109F54F589571A7FCE26B18729, ___U3CaddedU3Ek__BackingField_0)); }
	inline List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * get_U3CaddedU3Ek__BackingField_0() const { return ___U3CaddedU3Ek__BackingField_0; }
	inline List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 ** get_address_of_U3CaddedU3Ek__BackingField_0() { return &___U3CaddedU3Ek__BackingField_0; }
	inline void set_U3CaddedU3Ek__BackingField_0(List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * value)
	{
		___U3CaddedU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CaddedU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CupdatedU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ARHumanBodiesChangedEventArgs_t03BC9E10B0F7EA109F54F589571A7FCE26B18729, ___U3CupdatedU3Ek__BackingField_1)); }
	inline List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * get_U3CupdatedU3Ek__BackingField_1() const { return ___U3CupdatedU3Ek__BackingField_1; }
	inline List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 ** get_address_of_U3CupdatedU3Ek__BackingField_1() { return &___U3CupdatedU3Ek__BackingField_1; }
	inline void set_U3CupdatedU3Ek__BackingField_1(List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * value)
	{
		___U3CupdatedU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CupdatedU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CremovedU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ARHumanBodiesChangedEventArgs_t03BC9E10B0F7EA109F54F589571A7FCE26B18729, ___U3CremovedU3Ek__BackingField_2)); }
	inline List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * get_U3CremovedU3Ek__BackingField_2() const { return ___U3CremovedU3Ek__BackingField_2; }
	inline List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 ** get_address_of_U3CremovedU3Ek__BackingField_2() { return &___U3CremovedU3Ek__BackingField_2; }
	inline void set_U3CremovedU3Ek__BackingField_2(List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * value)
	{
		___U3CremovedU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CremovedU3Ek__BackingField_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARHumanBodiesChangedEventArgs
struct ARHumanBodiesChangedEventArgs_t03BC9E10B0F7EA109F54F589571A7FCE26B18729_marshaled_pinvoke
{
	List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * ___U3CaddedU3Ek__BackingField_0;
	List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * ___U3CupdatedU3Ek__BackingField_1;
	List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * ___U3CremovedU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARHumanBodiesChangedEventArgs
struct ARHumanBodiesChangedEventArgs_t03BC9E10B0F7EA109F54F589571A7FCE26B18729_marshaled_com
{
	List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * ___U3CaddedU3Ek__BackingField_0;
	List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * ___U3CupdatedU3Ek__BackingField_1;
	List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * ___U3CremovedU3Ek__BackingField_2;
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


// Newtonsoft.Json.Linq.JContainer
struct JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B  : public JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E
{
public:
	// System.ComponentModel.ListChangedEventHandler Newtonsoft.Json.Linq.JContainer::_listChanged
	ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C * ____listChanged_15;
	// System.ComponentModel.AddingNewEventHandler Newtonsoft.Json.Linq.JContainer::_addingNew
	AddingNewEventHandler_tF21F6F9D1D0611177846250B5CF81B55B5F6B785 * ____addingNew_16;
	// System.Collections.Specialized.NotifyCollectionChangedEventHandler Newtonsoft.Json.Linq.JContainer::_collectionChanged
	NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621 * ____collectionChanged_17;
	// System.Object Newtonsoft.Json.Linq.JContainer::_syncRoot
	RuntimeObject * ____syncRoot_18;
	// System.Boolean Newtonsoft.Json.Linq.JContainer::_busy
	bool ____busy_19;

public:
	inline static int32_t get_offset_of__listChanged_15() { return static_cast<int32_t>(offsetof(JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B, ____listChanged_15)); }
	inline ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C * get__listChanged_15() const { return ____listChanged_15; }
	inline ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C ** get_address_of__listChanged_15() { return &____listChanged_15; }
	inline void set__listChanged_15(ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C * value)
	{
		____listChanged_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____listChanged_15), (void*)value);
	}

	inline static int32_t get_offset_of__addingNew_16() { return static_cast<int32_t>(offsetof(JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B, ____addingNew_16)); }
	inline AddingNewEventHandler_tF21F6F9D1D0611177846250B5CF81B55B5F6B785 * get__addingNew_16() const { return ____addingNew_16; }
	inline AddingNewEventHandler_tF21F6F9D1D0611177846250B5CF81B55B5F6B785 ** get_address_of__addingNew_16() { return &____addingNew_16; }
	inline void set__addingNew_16(AddingNewEventHandler_tF21F6F9D1D0611177846250B5CF81B55B5F6B785 * value)
	{
		____addingNew_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____addingNew_16), (void*)value);
	}

	inline static int32_t get_offset_of__collectionChanged_17() { return static_cast<int32_t>(offsetof(JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B, ____collectionChanged_17)); }
	inline NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621 * get__collectionChanged_17() const { return ____collectionChanged_17; }
	inline NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621 ** get_address_of__collectionChanged_17() { return &____collectionChanged_17; }
	inline void set__collectionChanged_17(NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621 * value)
	{
		____collectionChanged_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____collectionChanged_17), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_18() { return static_cast<int32_t>(offsetof(JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B, ____syncRoot_18)); }
	inline RuntimeObject * get__syncRoot_18() const { return ____syncRoot_18; }
	inline RuntimeObject ** get_address_of__syncRoot_18() { return &____syncRoot_18; }
	inline void set__syncRoot_18(RuntimeObject * value)
	{
		____syncRoot_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_18), (void*)value);
	}

	inline static int32_t get_offset_of__busy_19() { return static_cast<int32_t>(offsetof(JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B, ____busy_19)); }
	inline bool get__busy_19() const { return ____busy_19; }
	inline bool* get_address_of__busy_19() { return &____busy_19; }
	inline void set__busy_19(bool value)
	{
		____busy_19 = value;
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


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
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

// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.Linq.JObject
struct JObject_t55E456F4BAFC1A97265C571EDE7F421663976807  : public JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B
{
public:
	// Newtonsoft.Json.Linq.JPropertyKeyedCollection Newtonsoft.Json.Linq.JObject::_properties
	JPropertyKeyedCollection_t6A2B68E3332E7964E0E7CC57B6A06FE4895381E2 * ____properties_20;
	// System.ComponentModel.PropertyChangedEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanged
	PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * ___PropertyChanged_21;
	// System.ComponentModel.PropertyChangingEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanging
	PropertyChangingEventHandler_t5EA6F6EAA933D35C0AAD9D347A3BD53D343E4C22 * ___PropertyChanging_22;

public:
	inline static int32_t get_offset_of__properties_20() { return static_cast<int32_t>(offsetof(JObject_t55E456F4BAFC1A97265C571EDE7F421663976807, ____properties_20)); }
	inline JPropertyKeyedCollection_t6A2B68E3332E7964E0E7CC57B6A06FE4895381E2 * get__properties_20() const { return ____properties_20; }
	inline JPropertyKeyedCollection_t6A2B68E3332E7964E0E7CC57B6A06FE4895381E2 ** get_address_of__properties_20() { return &____properties_20; }
	inline void set__properties_20(JPropertyKeyedCollection_t6A2B68E3332E7964E0E7CC57B6A06FE4895381E2 * value)
	{
		____properties_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____properties_20), (void*)value);
	}

	inline static int32_t get_offset_of_PropertyChanged_21() { return static_cast<int32_t>(offsetof(JObject_t55E456F4BAFC1A97265C571EDE7F421663976807, ___PropertyChanged_21)); }
	inline PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * get_PropertyChanged_21() const { return ___PropertyChanged_21; }
	inline PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 ** get_address_of_PropertyChanged_21() { return &___PropertyChanged_21; }
	inline void set_PropertyChanged_21(PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * value)
	{
		___PropertyChanged_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyChanged_21), (void*)value);
	}

	inline static int32_t get_offset_of_PropertyChanging_22() { return static_cast<int32_t>(offsetof(JObject_t55E456F4BAFC1A97265C571EDE7F421663976807, ___PropertyChanging_22)); }
	inline PropertyChangingEventHandler_t5EA6F6EAA933D35C0AAD9D347A3BD53D343E4C22 * get_PropertyChanging_22() const { return ___PropertyChanging_22; }
	inline PropertyChangingEventHandler_t5EA6F6EAA933D35C0AAD9D347A3BD53D343E4C22 ** get_address_of_PropertyChanging_22() { return &___PropertyChanging_22; }
	inline void set_PropertyChanging_22(PropertyChangingEventHandler_t5EA6F6EAA933D35C0AAD9D347A3BD53D343E4C22 * value)
	{
		___PropertyChanging_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyChanging_22), (void*)value);
	}
};


// UnityEngine.SceneManagement.LoadSceneMode
struct LoadSceneMode_tF5060E18B71D524860ECBF7B9B56193B1907E5CC 
{
public:
	// System.Int32 UnityEngine.SceneManagement.LoadSceneMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoadSceneMode_tF5060E18B71D524860ECBF7B9B56193B1907E5CC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// UnityEngine.XR.ARFoundation.Samples.BoneController/JointIndices
struct JointIndices_tC39C20C4C1CF1F68CEA9B6833554EAC0B3F1A53B 
{
public:
	// System.Int32 UnityEngine.XR.ARFoundation.Samples.BoneController/JointIndices::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JointIndices_tC39C20C4C1CF1F68CEA9B6833554EAC0B3F1A53B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRHumanBodyJoint>
struct NativeArray_1_t733A71EE29E0C7D2F944E30A1729F085DEB1138C 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t733A71EE29E0C7D2F944E30A1729F085DEB1138C, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t733A71EE29E0C7D2F944E30A1729F085DEB1138C, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t733A71EE29E0C7D2F944E30A1729F085DEB1138C, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
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

// UnityEngine.XR.ARSubsystems.XRHumanBody
struct XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRHumanBody::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRHumanBody::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_1;
	// System.Single UnityEngine.XR.ARSubsystems.XRHumanBody::m_EstimatedHeightScaleFactor
	float ___m_EstimatedHeightScaleFactor_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRHumanBody::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRHumanBody::m_NativePtr
	intptr_t ___m_NativePtr_4;

public:
	inline static int32_t get_offset_of_m_TrackableId_0() { return static_cast<int32_t>(offsetof(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B, ___m_TrackableId_0)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_0() const { return ___m_TrackableId_0; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_0() { return &___m_TrackableId_0; }
	inline void set_m_TrackableId_0(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_m_Pose_1() { return static_cast<int32_t>(offsetof(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B, ___m_Pose_1)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_1() const { return ___m_Pose_1; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_1() { return &___m_Pose_1; }
	inline void set_m_Pose_1(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_1 = value;
	}

	inline static int32_t get_offset_of_m_EstimatedHeightScaleFactor_2() { return static_cast<int32_t>(offsetof(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B, ___m_EstimatedHeightScaleFactor_2)); }
	inline float get_m_EstimatedHeightScaleFactor_2() const { return ___m_EstimatedHeightScaleFactor_2; }
	inline float* get_address_of_m_EstimatedHeightScaleFactor_2() { return &___m_EstimatedHeightScaleFactor_2; }
	inline void set_m_EstimatedHeightScaleFactor_2(float value)
	{
		___m_EstimatedHeightScaleFactor_2 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_3() { return static_cast<int32_t>(offsetof(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B, ___m_TrackingState_3)); }
	inline int32_t get_m_TrackingState_3() const { return ___m_TrackingState_3; }
	inline int32_t* get_address_of_m_TrackingState_3() { return &___m_TrackingState_3; }
	inline void set_m_TrackingState_3(int32_t value)
	{
		___m_TrackingState_3 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_4() { return static_cast<int32_t>(offsetof(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B, ___m_NativePtr_4)); }
	inline intptr_t get_m_NativePtr_4() const { return ___m_NativePtr_4; }
	inline intptr_t* get_address_of_m_NativePtr_4() { return &___m_NativePtr_4; }
	inline void set_m_NativePtr_4(intptr_t value)
	{
		___m_NativePtr_4 = value;
	}
};

struct XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRHumanBody UnityEngine.XR.ARSubsystems.XRHumanBody::s_Default
	XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  ___s_Default_5;

public:
	inline static int32_t get_offset_of_s_Default_5() { return static_cast<int32_t>(offsetof(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B_StaticFields, ___s_Default_5)); }
	inline XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  get_s_Default_5() const { return ___s_Default_5; }
	inline XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B * get_address_of_s_Default_5() { return &___s_Default_5; }
	inline void set_s_Default_5(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  value)
	{
		___s_Default_5 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRHumanBodyJoint
struct XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.XRHumanBodyJoint::m_Index
	int32_t ___m_Index_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRHumanBodyJoint::m_ParentIndex
	int32_t ___m_ParentIndex_1;
	// UnityEngine.Vector3 UnityEngine.XR.ARSubsystems.XRHumanBodyJoint::m_LocalScale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_LocalScale_2;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRHumanBodyJoint::m_LocalPose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_LocalPose_3;
	// UnityEngine.Vector3 UnityEngine.XR.ARSubsystems.XRHumanBodyJoint::m_AnchorScale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_AnchorScale_4;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRHumanBodyJoint::m_AnchorPose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_AnchorPose_5;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRHumanBodyJoint::m_Tracked
	int32_t ___m_Tracked_6;

public:
	inline static int32_t get_offset_of_m_Index_0() { return static_cast<int32_t>(offsetof(XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4, ___m_Index_0)); }
	inline int32_t get_m_Index_0() const { return ___m_Index_0; }
	inline int32_t* get_address_of_m_Index_0() { return &___m_Index_0; }
	inline void set_m_Index_0(int32_t value)
	{
		___m_Index_0 = value;
	}

	inline static int32_t get_offset_of_m_ParentIndex_1() { return static_cast<int32_t>(offsetof(XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4, ___m_ParentIndex_1)); }
	inline int32_t get_m_ParentIndex_1() const { return ___m_ParentIndex_1; }
	inline int32_t* get_address_of_m_ParentIndex_1() { return &___m_ParentIndex_1; }
	inline void set_m_ParentIndex_1(int32_t value)
	{
		___m_ParentIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_LocalScale_2() { return static_cast<int32_t>(offsetof(XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4, ___m_LocalScale_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_LocalScale_2() const { return ___m_LocalScale_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_LocalScale_2() { return &___m_LocalScale_2; }
	inline void set_m_LocalScale_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_LocalScale_2 = value;
	}

	inline static int32_t get_offset_of_m_LocalPose_3() { return static_cast<int32_t>(offsetof(XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4, ___m_LocalPose_3)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_LocalPose_3() const { return ___m_LocalPose_3; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_LocalPose_3() { return &___m_LocalPose_3; }
	inline void set_m_LocalPose_3(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_LocalPose_3 = value;
	}

	inline static int32_t get_offset_of_m_AnchorScale_4() { return static_cast<int32_t>(offsetof(XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4, ___m_AnchorScale_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_AnchorScale_4() const { return ___m_AnchorScale_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_AnchorScale_4() { return &___m_AnchorScale_4; }
	inline void set_m_AnchorScale_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_AnchorScale_4 = value;
	}

	inline static int32_t get_offset_of_m_AnchorPose_5() { return static_cast<int32_t>(offsetof(XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4, ___m_AnchorPose_5)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_AnchorPose_5() const { return ___m_AnchorPose_5; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_AnchorPose_5() { return &___m_AnchorPose_5; }
	inline void set_m_AnchorPose_5(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_AnchorPose_5 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_6() { return static_cast<int32_t>(offsetof(XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4, ___m_Tracked_6)); }
	inline int32_t get_m_Tracked_6() const { return ___m_Tracked_6; }
	inline int32_t* get_address_of_m_Tracked_6() { return &___m_Tracked_6; }
	inline void set_m_Tracked_6(int32_t value)
	{
		___m_Tracked_6 = value;
	}
};


// System.Action`1<UnityEngine.XR.ARFoundation.ARHumanBodiesChangedEventArgs>
struct Action_1_t6F3641BB0F5489AC32B6649DD5BA9D07DD0C5301  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
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


// UnityMessageManager/MessageDelegate
struct MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9  : public MulticastDelegate_t
{
public:

public:
};


// UnityMessageManager/MessageHandlerDelegate
struct MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28  : public MulticastDelegate_t
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


// SingletonMonoBehaviour`1<UnityMessageManager>
struct SingletonMonoBehaviour_1_tCE345733DAFD7C69997F22704982E2372C4BFCDD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct SingletonMonoBehaviour_1_tCE345733DAFD7C69997F22704982E2372C4BFCDD_StaticFields
{
public:
	// System.Lazy`1<T> SingletonMonoBehaviour`1::LazyInstance
	Lazy_1_t1F6F28AE3A12C39616C210625F3C610F09E23E0D * ___LazyInstance_4;

public:
	inline static int32_t get_offset_of_LazyInstance_4() { return static_cast<int32_t>(offsetof(SingletonMonoBehaviour_1_tCE345733DAFD7C69997F22704982E2372C4BFCDD_StaticFields, ___LazyInstance_4)); }
	inline Lazy_1_t1F6F28AE3A12C39616C210625F3C610F09E23E0D * get_LazyInstance_4() const { return ___LazyInstance_4; }
	inline Lazy_1_t1F6F28AE3A12C39616C210625F3C610F09E23E0D ** get_address_of_LazyInstance_4() { return &___LazyInstance_4; }
	inline void set_LazyInstance_4(Lazy_1_t1F6F28AE3A12C39616C210625F3C610F09E23E0D * value)
	{
		___LazyInstance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LazyInstance_4), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem,UnityEngine.XR.ARSubsystems.XRHumanBodySubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem/Provider>
struct SubsystemLifecycleManager_3_tFD8C4FEF1CAD89AF6B0223AF63BA0FFF0F7939AA  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRHumanBodySubsystem_t71FBF94503DCE781657FA4F362464EA389CD9F2B * ___U3CsubsystemU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CsubsystemU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_tFD8C4FEF1CAD89AF6B0223AF63BA0FFF0F7939AA, ___U3CsubsystemU3Ek__BackingField_4)); }
	inline XRHumanBodySubsystem_t71FBF94503DCE781657FA4F362464EA389CD9F2B * get_U3CsubsystemU3Ek__BackingField_4() const { return ___U3CsubsystemU3Ek__BackingField_4; }
	inline XRHumanBodySubsystem_t71FBF94503DCE781657FA4F362464EA389CD9F2B ** get_address_of_U3CsubsystemU3Ek__BackingField_4() { return &___U3CsubsystemU3Ek__BackingField_4; }
	inline void set_U3CsubsystemU3Ek__BackingField_4(XRHumanBodySubsystem_t71FBF94503DCE781657FA4F362464EA389CD9F2B * value)
	{
		___U3CsubsystemU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemU3Ek__BackingField_4), (void*)value);
	}
};

struct SubsystemLifecycleManager_3_tFD8C4FEF1CAD89AF6B0223AF63BA0FFF0F7939AA_StaticFields
{
public:
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tB23F14817387B6E0CF6BC3F698BE74D4321CBBD4 * ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_tF313C639A10A550C756E883EFADA75B9D6D2D936 * ___s_SubsystemInstances_6;

public:
	inline static int32_t get_offset_of_s_SubsystemDescriptors_5() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_tFD8C4FEF1CAD89AF6B0223AF63BA0FFF0F7939AA_StaticFields, ___s_SubsystemDescriptors_5)); }
	inline List_1_tB23F14817387B6E0CF6BC3F698BE74D4321CBBD4 * get_s_SubsystemDescriptors_5() const { return ___s_SubsystemDescriptors_5; }
	inline List_1_tB23F14817387B6E0CF6BC3F698BE74D4321CBBD4 ** get_address_of_s_SubsystemDescriptors_5() { return &___s_SubsystemDescriptors_5; }
	inline void set_s_SubsystemDescriptors_5(List_1_tB23F14817387B6E0CF6BC3F698BE74D4321CBBD4 * value)
	{
		___s_SubsystemDescriptors_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemDescriptors_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_SubsystemInstances_6() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_tFD8C4FEF1CAD89AF6B0223AF63BA0FFF0F7939AA_StaticFields, ___s_SubsystemInstances_6)); }
	inline List_1_tF313C639A10A550C756E883EFADA75B9D6D2D936 * get_s_SubsystemInstances_6() const { return ___s_SubsystemInstances_6; }
	inline List_1_tF313C639A10A550C756E883EFADA75B9D6D2D936 ** get_address_of_s_SubsystemInstances_6() { return &___s_SubsystemInstances_6; }
	inline void set_s_SubsystemInstances_6(List_1_tF313C639A10A550C756E883EFADA75B9D6D2D936 * value)
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


// UnityEngine.XR.ARFoundation.Samples.BoneController
struct BoneController_tE016B260A258DA0FE0B6DC25A5C29E37A65F5538  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.Samples.BoneController::m_SkeletonRoot
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_SkeletonRoot_5;
	// UnityEngine.Transform[] UnityEngine.XR.ARFoundation.Samples.BoneController::m_BoneMapping
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ___m_BoneMapping_6;

public:
	inline static int32_t get_offset_of_m_SkeletonRoot_5() { return static_cast<int32_t>(offsetof(BoneController_tE016B260A258DA0FE0B6DC25A5C29E37A65F5538, ___m_SkeletonRoot_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_SkeletonRoot_5() const { return ___m_SkeletonRoot_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_SkeletonRoot_5() { return &___m_SkeletonRoot_5; }
	inline void set_m_SkeletonRoot_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_SkeletonRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SkeletonRoot_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_BoneMapping_6() { return static_cast<int32_t>(offsetof(BoneController_tE016B260A258DA0FE0B6DC25A5C29E37A65F5538, ___m_BoneMapping_6)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get_m_BoneMapping_6() const { return ___m_BoneMapping_6; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of_m_BoneMapping_6() { return &___m_BoneMapping_6; }
	inline void set_m_BoneMapping_6(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		___m_BoneMapping_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BoneMapping_6), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.Samples.HumanBodyTracker
struct HumanBodyTracker_t08D6DEC180E29CF2B63BF7DDB757E0B9CCAF1802  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.Samples.HumanBodyTracker::m_SkeletonPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_SkeletonPrefab_4;
	// UnityEngine.XR.ARFoundation.ARHumanBodyManager UnityEngine.XR.ARFoundation.Samples.HumanBodyTracker::m_HumanBodyManager
	ARHumanBodyManager_t901B9F11785ED05D74F4FAC50D14259488D800B4 * ___m_HumanBodyManager_5;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.Samples.BoneController> UnityEngine.XR.ARFoundation.Samples.HumanBodyTracker::m_SkeletonTracker
	Dictionary_2_t1BED71E67D13B3EB44A49DC3BE7C8300EB1E41E7 * ___m_SkeletonTracker_6;

public:
	inline static int32_t get_offset_of_m_SkeletonPrefab_4() { return static_cast<int32_t>(offsetof(HumanBodyTracker_t08D6DEC180E29CF2B63BF7DDB757E0B9CCAF1802, ___m_SkeletonPrefab_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_SkeletonPrefab_4() const { return ___m_SkeletonPrefab_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_SkeletonPrefab_4() { return &___m_SkeletonPrefab_4; }
	inline void set_m_SkeletonPrefab_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_SkeletonPrefab_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SkeletonPrefab_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_HumanBodyManager_5() { return static_cast<int32_t>(offsetof(HumanBodyTracker_t08D6DEC180E29CF2B63BF7DDB757E0B9CCAF1802, ___m_HumanBodyManager_5)); }
	inline ARHumanBodyManager_t901B9F11785ED05D74F4FAC50D14259488D800B4 * get_m_HumanBodyManager_5() const { return ___m_HumanBodyManager_5; }
	inline ARHumanBodyManager_t901B9F11785ED05D74F4FAC50D14259488D800B4 ** get_address_of_m_HumanBodyManager_5() { return &___m_HumanBodyManager_5; }
	inline void set_m_HumanBodyManager_5(ARHumanBodyManager_t901B9F11785ED05D74F4FAC50D14259488D800B4 * value)
	{
		___m_HumanBodyManager_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HumanBodyManager_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_SkeletonTracker_6() { return static_cast<int32_t>(offsetof(HumanBodyTracker_t08D6DEC180E29CF2B63BF7DDB757E0B9CCAF1802, ___m_SkeletonTracker_6)); }
	inline Dictionary_2_t1BED71E67D13B3EB44A49DC3BE7C8300EB1E41E7 * get_m_SkeletonTracker_6() const { return ___m_SkeletonTracker_6; }
	inline Dictionary_2_t1BED71E67D13B3EB44A49DC3BE7C8300EB1E41E7 ** get_address_of_m_SkeletonTracker_6() { return &___m_SkeletonTracker_6; }
	inline void set_m_SkeletonTracker_6(Dictionary_2_t1BED71E67D13B3EB44A49DC3BE7C8300EB1E41E7 * value)
	{
		___m_SkeletonTracker_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SkeletonTracker_6), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem,UnityEngine.XR.ARSubsystems.XRHumanBodySubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem/Provider,UnityEngine.XR.ARSubsystems.XRHumanBody,UnityEngine.XR.ARFoundation.ARHumanBody>
struct ARTrackableManager_5_tBF03E2FD1615218DA910F13396AC5FBC8895A950  : public SubsystemLifecycleManager_3_tFD8C4FEF1CAD89AF6B0223AF63BA0FFF0F7939AA
{
public:
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t875E70525C711130925F3854722CF17DC974E6D7 * ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t875E70525C711130925F3854722CF17DC974E6D7 * ___m_PendingAdds_10;

public:
	inline static int32_t get_offset_of_U3CsessionOriginU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tBF03E2FD1615218DA910F13396AC5FBC8895A950, ___U3CsessionOriginU3Ek__BackingField_8)); }
	inline ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * get_U3CsessionOriginU3Ek__BackingField_8() const { return ___U3CsessionOriginU3Ek__BackingField_8; }
	inline ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 ** get_address_of_U3CsessionOriginU3Ek__BackingField_8() { return &___U3CsessionOriginU3Ek__BackingField_8; }
	inline void set_U3CsessionOriginU3Ek__BackingField_8(ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * value)
	{
		___U3CsessionOriginU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsessionOriginU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Trackables_9() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tBF03E2FD1615218DA910F13396AC5FBC8895A950, ___m_Trackables_9)); }
	inline Dictionary_2_t875E70525C711130925F3854722CF17DC974E6D7 * get_m_Trackables_9() const { return ___m_Trackables_9; }
	inline Dictionary_2_t875E70525C711130925F3854722CF17DC974E6D7 ** get_address_of_m_Trackables_9() { return &___m_Trackables_9; }
	inline void set_m_Trackables_9(Dictionary_2_t875E70525C711130925F3854722CF17DC974E6D7 * value)
	{
		___m_Trackables_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Trackables_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_PendingAdds_10() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tBF03E2FD1615218DA910F13396AC5FBC8895A950, ___m_PendingAdds_10)); }
	inline Dictionary_2_t875E70525C711130925F3854722CF17DC974E6D7 * get_m_PendingAdds_10() const { return ___m_PendingAdds_10; }
	inline Dictionary_2_t875E70525C711130925F3854722CF17DC974E6D7 ** get_address_of_m_PendingAdds_10() { return &___m_PendingAdds_10; }
	inline void set_m_PendingAdds_10(Dictionary_2_t875E70525C711130925F3854722CF17DC974E6D7 * value)
	{
		___m_PendingAdds_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PendingAdds_10), (void*)value);
	}
};

struct ARTrackableManager_5_tBF03E2FD1615218DA910F13396AC5FBC8895A950_StaticFields
{
public:
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_tBF03E2FD1615218DA910F13396AC5FBC8895A950 * ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * ___s_Removed_13;

public:
	inline static int32_t get_offset_of_U3CinstanceU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tBF03E2FD1615218DA910F13396AC5FBC8895A950_StaticFields, ___U3CinstanceU3Ek__BackingField_7)); }
	inline ARTrackableManager_5_tBF03E2FD1615218DA910F13396AC5FBC8895A950 * get_U3CinstanceU3Ek__BackingField_7() const { return ___U3CinstanceU3Ek__BackingField_7; }
	inline ARTrackableManager_5_tBF03E2FD1615218DA910F13396AC5FBC8895A950 ** get_address_of_U3CinstanceU3Ek__BackingField_7() { return &___U3CinstanceU3Ek__BackingField_7; }
	inline void set_U3CinstanceU3Ek__BackingField_7(ARTrackableManager_5_tBF03E2FD1615218DA910F13396AC5FBC8895A950 * value)
	{
		___U3CinstanceU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinstanceU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_s_Added_11() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tBF03E2FD1615218DA910F13396AC5FBC8895A950_StaticFields, ___s_Added_11)); }
	inline List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * get_s_Added_11() const { return ___s_Added_11; }
	inline List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 ** get_address_of_s_Added_11() { return &___s_Added_11; }
	inline void set_s_Added_11(List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * value)
	{
		___s_Added_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Added_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_Updated_12() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tBF03E2FD1615218DA910F13396AC5FBC8895A950_StaticFields, ___s_Updated_12)); }
	inline List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * get_s_Updated_12() const { return ___s_Updated_12; }
	inline List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 ** get_address_of_s_Updated_12() { return &___s_Updated_12; }
	inline void set_s_Updated_12(List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * value)
	{
		___s_Updated_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Updated_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_Removed_13() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tBF03E2FD1615218DA910F13396AC5FBC8895A950_StaticFields, ___s_Removed_13)); }
	inline List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * get_s_Removed_13() const { return ___s_Removed_13; }
	inline List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 ** get_address_of_s_Removed_13() { return &___s_Removed_13; }
	inline void set_s_Removed_13(List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * value)
	{
		___s_Removed_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Removed_13), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRHumanBody,UnityEngine.XR.ARFoundation.ARHumanBody>
struct ARTrackable_2_t482FF6DE9326FFF166148DA7425768F6FA9EB9B0  : public ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3
{
public:
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  ___U3CsessionRelativeDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_m_DestroyOnRemoval_4() { return static_cast<int32_t>(offsetof(ARTrackable_2_t482FF6DE9326FFF166148DA7425768F6FA9EB9B0, ___m_DestroyOnRemoval_4)); }
	inline bool get_m_DestroyOnRemoval_4() const { return ___m_DestroyOnRemoval_4; }
	inline bool* get_address_of_m_DestroyOnRemoval_4() { return &___m_DestroyOnRemoval_4; }
	inline void set_m_DestroyOnRemoval_4(bool value)
	{
		___m_DestroyOnRemoval_4 = value;
	}

	inline static int32_t get_offset_of_U3CpendingU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ARTrackable_2_t482FF6DE9326FFF166148DA7425768F6FA9EB9B0, ___U3CpendingU3Ek__BackingField_5)); }
	inline bool get_U3CpendingU3Ek__BackingField_5() const { return ___U3CpendingU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CpendingU3Ek__BackingField_5() { return &___U3CpendingU3Ek__BackingField_5; }
	inline void set_U3CpendingU3Ek__BackingField_5(bool value)
	{
		___U3CpendingU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsessionRelativeDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ARTrackable_2_t482FF6DE9326FFF166148DA7425768F6FA9EB9B0, ___U3CsessionRelativeDataU3Ek__BackingField_6)); }
	inline XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  get_U3CsessionRelativeDataU3Ek__BackingField_6() const { return ___U3CsessionRelativeDataU3Ek__BackingField_6; }
	inline XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B * get_address_of_U3CsessionRelativeDataU3Ek__BackingField_6() { return &___U3CsessionRelativeDataU3Ek__BackingField_6; }
	inline void set_U3CsessionRelativeDataU3Ek__BackingField_6(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  value)
	{
		___U3CsessionRelativeDataU3Ek__BackingField_6 = value;
	}
};


// UnityMessageManager
struct UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831  : public SingletonMonoBehaviour_1_tCE345733DAFD7C69997F22704982E2372C4BFCDD
{
public:
	// UnityMessageManager/MessageDelegate UnityMessageManager::OnMessage
	MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * ___OnMessage_7;
	// UnityMessageManager/MessageHandlerDelegate UnityMessageManager::OnFlutterMessage
	MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * ___OnFlutterMessage_8;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityMessage> UnityMessageManager::waitCallbackMessageMap
	Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E * ___waitCallbackMessageMap_9;

public:
	inline static int32_t get_offset_of_OnMessage_7() { return static_cast<int32_t>(offsetof(UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831, ___OnMessage_7)); }
	inline MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * get_OnMessage_7() const { return ___OnMessage_7; }
	inline MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 ** get_address_of_OnMessage_7() { return &___OnMessage_7; }
	inline void set_OnMessage_7(MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * value)
	{
		___OnMessage_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMessage_7), (void*)value);
	}

	inline static int32_t get_offset_of_OnFlutterMessage_8() { return static_cast<int32_t>(offsetof(UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831, ___OnFlutterMessage_8)); }
	inline MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * get_OnFlutterMessage_8() const { return ___OnFlutterMessage_8; }
	inline MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 ** get_address_of_OnFlutterMessage_8() { return &___OnFlutterMessage_8; }
	inline void set_OnFlutterMessage_8(MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * value)
	{
		___OnFlutterMessage_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFlutterMessage_8), (void*)value);
	}

	inline static int32_t get_offset_of_waitCallbackMessageMap_9() { return static_cast<int32_t>(offsetof(UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831, ___waitCallbackMessageMap_9)); }
	inline Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E * get_waitCallbackMessageMap_9() const { return ___waitCallbackMessageMap_9; }
	inline Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E ** get_address_of_waitCallbackMessageMap_9() { return &___waitCallbackMessageMap_9; }
	inline void set_waitCallbackMessageMap_9(Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E * value)
	{
		___waitCallbackMessageMap_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitCallbackMessageMap_9), (void*)value);
	}
};

struct UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831_StaticFields
{
public:
	// System.Int32 UnityMessageManager::ID
	int32_t ___ID_6;

public:
	inline static int32_t get_offset_of_ID_6() { return static_cast<int32_t>(offsetof(UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831_StaticFields, ___ID_6)); }
	inline int32_t get_ID_6() const { return ___ID_6; }
	inline int32_t* get_address_of_ID_6() { return &___ID_6; }
	inline void set_ID_6(int32_t value)
	{
		___ID_6 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARHumanBody
struct ARHumanBody_tD50BBE7B486B76556A46BE9C799EE268D4ABB3B5  : public ARTrackable_2_t482FF6DE9326FFF166148DA7425768F6FA9EB9B0
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRHumanBodyJoint> UnityEngine.XR.ARFoundation.ARHumanBody::m_Joints
	NativeArray_1_t733A71EE29E0C7D2F944E30A1729F085DEB1138C  ___m_Joints_7;

public:
	inline static int32_t get_offset_of_m_Joints_7() { return static_cast<int32_t>(offsetof(ARHumanBody_tD50BBE7B486B76556A46BE9C799EE268D4ABB3B5, ___m_Joints_7)); }
	inline NativeArray_1_t733A71EE29E0C7D2F944E30A1729F085DEB1138C  get_m_Joints_7() const { return ___m_Joints_7; }
	inline NativeArray_1_t733A71EE29E0C7D2F944E30A1729F085DEB1138C * get_address_of_m_Joints_7() { return &___m_Joints_7; }
	inline void set_m_Joints_7(NativeArray_1_t733A71EE29E0C7D2F944E30A1729F085DEB1138C  value)
	{
		___m_Joints_7 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARHumanBodyManager
struct ARHumanBodyManager_t901B9F11785ED05D74F4FAC50D14259488D800B4  : public ARTrackableManager_5_tBF03E2FD1615218DA910F13396AC5FBC8895A950
{
public:
	// System.Boolean UnityEngine.XR.ARFoundation.ARHumanBodyManager::m_Pose2D
	bool ___m_Pose2D_14;
	// System.Boolean UnityEngine.XR.ARFoundation.ARHumanBodyManager::m_Pose3D
	bool ___m_Pose3D_15;
	// System.Boolean UnityEngine.XR.ARFoundation.ARHumanBodyManager::m_Pose3DScaleEstimation
	bool ___m_Pose3DScaleEstimation_16;
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARHumanBodyManager::m_HumanBodyPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_HumanBodyPrefab_17;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARHumanBodiesChangedEventArgs> UnityEngine.XR.ARFoundation.ARHumanBodyManager::humanBodiesChanged
	Action_1_t6F3641BB0F5489AC32B6649DD5BA9D07DD0C5301 * ___humanBodiesChanged_18;

public:
	inline static int32_t get_offset_of_m_Pose2D_14() { return static_cast<int32_t>(offsetof(ARHumanBodyManager_t901B9F11785ED05D74F4FAC50D14259488D800B4, ___m_Pose2D_14)); }
	inline bool get_m_Pose2D_14() const { return ___m_Pose2D_14; }
	inline bool* get_address_of_m_Pose2D_14() { return &___m_Pose2D_14; }
	inline void set_m_Pose2D_14(bool value)
	{
		___m_Pose2D_14 = value;
	}

	inline static int32_t get_offset_of_m_Pose3D_15() { return static_cast<int32_t>(offsetof(ARHumanBodyManager_t901B9F11785ED05D74F4FAC50D14259488D800B4, ___m_Pose3D_15)); }
	inline bool get_m_Pose3D_15() const { return ___m_Pose3D_15; }
	inline bool* get_address_of_m_Pose3D_15() { return &___m_Pose3D_15; }
	inline void set_m_Pose3D_15(bool value)
	{
		___m_Pose3D_15 = value;
	}

	inline static int32_t get_offset_of_m_Pose3DScaleEstimation_16() { return static_cast<int32_t>(offsetof(ARHumanBodyManager_t901B9F11785ED05D74F4FAC50D14259488D800B4, ___m_Pose3DScaleEstimation_16)); }
	inline bool get_m_Pose3DScaleEstimation_16() const { return ___m_Pose3DScaleEstimation_16; }
	inline bool* get_address_of_m_Pose3DScaleEstimation_16() { return &___m_Pose3DScaleEstimation_16; }
	inline void set_m_Pose3DScaleEstimation_16(bool value)
	{
		___m_Pose3DScaleEstimation_16 = value;
	}

	inline static int32_t get_offset_of_m_HumanBodyPrefab_17() { return static_cast<int32_t>(offsetof(ARHumanBodyManager_t901B9F11785ED05D74F4FAC50D14259488D800B4, ___m_HumanBodyPrefab_17)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_HumanBodyPrefab_17() const { return ___m_HumanBodyPrefab_17; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_HumanBodyPrefab_17() { return &___m_HumanBodyPrefab_17; }
	inline void set_m_HumanBodyPrefab_17(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_HumanBodyPrefab_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HumanBodyPrefab_17), (void*)value);
	}

	inline static int32_t get_offset_of_humanBodiesChanged_18() { return static_cast<int32_t>(offsetof(ARHumanBodyManager_t901B9F11785ED05D74F4FAC50D14259488D800B4, ___humanBodiesChanged_18)); }
	inline Action_1_t6F3641BB0F5489AC32B6649DD5BA9D07DD0C5301 * get_humanBodiesChanged_18() const { return ___humanBodiesChanged_18; }
	inline Action_1_t6F3641BB0F5489AC32B6649DD5BA9D07DD0C5301 ** get_address_of_humanBodiesChanged_18() { return &___humanBodiesChanged_18; }
	inline void set_humanBodiesChanged_18(Action_1_t6F3641BB0F5489AC32B6649DD5BA9D07DD0C5301 * value)
	{
		___humanBodiesChanged_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___humanBodiesChanged_18), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * m_Items[1];

public:
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mCACF312F04BD04D69E3FBA7D779B5DBF39BB3728_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRHumanBodyJoint>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_mE0158704D7D59BC6278CFFD35923EB5370D9D623_gshared (NativeArray_1_t733A71EE29E0C7D2F944E30A1729F085DEB1138C * __this, const RuntimeMethod* method);
// System.Boolean System.Enum::TryParse<System.Int32Enum>(System.String,!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_TryParse_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_m41610E72E4BC8727099F8EF765A76BBE6841ADAC_gshared (String_t* ___value0, int32_t* ___result1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARHumanBodiesChangedEventArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m29DED49AF95994B55DBD78F6E52AA52DC12E05D5_gshared (Action_1_t6F3641BB0F5489AC32B6649DD5BA9D07DD0C5301 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRHumanBody,System.Object>::get_trackableId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ARTrackable_2_get_trackableId_m20D61C0024DA9503EDB68658C8CC3CA33D428DD3_gshared (ARTrackable_2_tCE2D4C1D7EFE9958ED83E153C360A21B8E4D3CF6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mB80A6B055D918B329802041E0EC45781F33E254C_gshared (Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared (RuntimeObject * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m6512758895DEC959EE632E5C4417B5E155ADC1CD_gshared (Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mA7B8EEEF70AB708689FD22F3F98BBDC746BF2C1F_gshared (Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB6B6697225BEDAF7CB9619BD1239C469621F0D20_gshared (Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * __this, const RuntimeMethod* method);
// !!0 Newtonsoft.Json.Linq.Extensions::Value<System.Int32>(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Extensions_Value_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m93F62F5FBC6403976ABF2EAB5A45219B76DE92C7_gshared (RuntimeObject* ___value0, const RuntimeMethod* method);
// !!0 Newtonsoft.Json.Linq.Extensions::Value<System.Object>(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Extensions_Value_TisRuntimeObject_mFD998B98327E94D4CCADB61467E889A820AABACC_gshared (RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void <>f__AnonymousType0`4<System.Int32,System.Object,System.Object,System.Object>::.ctor(<id>j__TPar,<seq>j__TPar,<name>j__TPar,<data>j__TPar)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ef__AnonymousType0_4__ctor_mA42D0E885207E71D6D8CE9CC4A204CF6FDCA8565_gshared (U3CU3Ef__AnonymousType0_4_t6AD706F84E39BA82CD246ACA839166C93733D2BF * __this, int32_t ___id0, RuntimeObject * ___seq1, RuntimeObject * ___name2, RuntimeObject * ___data3, const RuntimeMethod* method);
// T SingletonMonoBehaviour`1<System.Object>::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SingletonMonoBehaviour_1_get_Instance_mCA27DE8B40FBF13AC39B556178FCEE9909F030E4_gshared (const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m50E7B823E46CB327D49A2D55A761F57472037634_gshared (UnityAction_2_t808E43EBC9AA89CEA5830BD187EC213182A02B50 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m39BC00F21EE9459BB8DEF5479F95F79C5C740682_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mAC77908EC28C242ACC8C3C4CDEA945E73B95CFA4_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, const RuntimeMethod* method);
// T MessageHandler::getData<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MessageHandler_getData_TisRuntimeObject_m4B0F54A0EA8EBDB824898342D0FB18471D377EC9_gshared (MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method);
// System.Void SingletonMonoBehaviour`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingletonMonoBehaviour_1__ctor_mFE92A122FFAD62C1BBD57040124CFB238F2301E3_gshared (SingletonMonoBehaviour_1_tE14741F2799AE3F949345E77B1A572DC11A30DDE * __this, const RuntimeMethod* method);

// System.Void System.Collections.Generic.Queue`1<UnityEngine.Transform>::.ctor()
inline void Queue_1__ctor_mA0338FD7CCC05D92DE06FB933502F90C3420B78B (Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 *, const RuntimeMethod*))Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Transform>::Enqueue(!0)
inline void Queue_1_Enqueue_mFF54572C8717A7CFE90F925376E9D6BD9E74FADB (Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))Queue_1_Enqueue_mCACF312F04BD04D69E3FBA7D779B5DBF39BB3728_gshared)(__this, ___item0, method);
}
// !0 System.Collections.Generic.Queue`1<UnityEngine.Transform>::Dequeue()
inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Queue_1_Dequeue_mDAEEC4B9916560EEC844B655D3E6E2BE20D91812 (Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 * __this, const RuntimeMethod* method)
{
	return ((  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * (*) (Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 *, const RuntimeMethod*))Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.Samples.BoneController::ProcessJoint(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneController_ProcessJoint_m30129C62C2813FDCA741CB988F479972B2B68FF0 (BoneController_tE016B260A258DA0FE0B6DC25A5C29E37A65F5538 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___joint0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<UnityEngine.Transform>::get_Count()
inline int32_t Queue_1_get_Count_m69913970BDC0D766ABCABA9E63B260328EDFE031_inline (Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 *, const RuntimeMethod*))Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRHumanBodyJoint> UnityEngine.XR.ARFoundation.ARHumanBody::get_joints()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t733A71EE29E0C7D2F944E30A1729F085DEB1138C  ARHumanBody_get_joints_m3258FB1C8BB0B82F3F2E92DE025201E931A8C443_inline (ARHumanBody_tD50BBE7B486B76556A46BE9C799EE268D4ABB3B5 * __this, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRHumanBodyJoint>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_mE0158704D7D59BC6278CFFD35923EB5370D9D623 (NativeArray_1_t733A71EE29E0C7D2F944E30A1729F085DEB1138C * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t733A71EE29E0C7D2F944E30A1729F085DEB1138C *, const RuntimeMethod*))NativeArray_1_get_IsCreated_mE0158704D7D59BC6278CFFD35923EB5370D9D623_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRHumanBodyJoint::get_localPose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  XRHumanBodyJoint_get_localPose_m0E5E0376C5F794FCEB47D6A55AD21945FD52864C_inline (XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARFoundation.Samples.BoneController::GetJointIndex(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoneController_GetJointIndex_mCC196D3A8A3842E5BA8F9182A50F3A809F58DD9C (BoneController_tE016B260A258DA0FE0B6DC25A5C29E37A65F5538 * __this, String_t* ___jointName0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean System.Enum::TryParse<UnityEngine.XR.ARFoundation.Samples.BoneController/JointIndices>(System.String,!!0&)
inline bool Enum_TryParse_TisJointIndices_tC39C20C4C1CF1F68CEA9B6833554EAC0B3F1A53B_m2D26CACF03D6B93E4E0DC5D7E2A5DDF14E645BF9 (String_t* ___value0, int32_t* ___result1, const RuntimeMethod* method)
{
	return ((  bool (*) (String_t*, int32_t*, const RuntimeMethod*))Enum_TryParse_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_m41610E72E4BC8727099F8EF765A76BBE6841ADAC_gshared)(___value0, ___result1, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARHumanBodiesChangedEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m29DED49AF95994B55DBD78F6E52AA52DC12E05D5 (Action_1_t6F3641BB0F5489AC32B6649DD5BA9D07DD0C5301 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6F3641BB0F5489AC32B6649DD5BA9D07DD0C5301 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m29DED49AF95994B55DBD78F6E52AA52DC12E05D5_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.ARFoundation.ARHumanBodyManager::add_humanBodiesChanged(System.Action`1<UnityEngine.XR.ARFoundation.ARHumanBodiesChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARHumanBodyManager_add_humanBodiesChanged_m5E861DCF1B0CE714D0A76302F92A8FF864D6A39B (ARHumanBodyManager_t901B9F11785ED05D74F4FAC50D14259488D800B4 * __this, Action_1_t6F3641BB0F5489AC32B6649DD5BA9D07DD0C5301 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.ARHumanBodyManager::remove_humanBodiesChanged(System.Action`1<UnityEngine.XR.ARFoundation.ARHumanBodiesChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARHumanBodyManager_remove_humanBodiesChanged_mB1CFD6EAB3111E5FF3351CE7B9B934D70F7979A9 (ARHumanBodyManager_t901B9F11785ED05D74F4FAC50D14259488D800B4 * __this, Action_1_t6F3641BB0F5489AC32B6649DD5BA9D07DD0C5301 * ___value0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARHumanBody> UnityEngine.XR.ARFoundation.ARHumanBodiesChangedEventArgs::get_added()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * ARHumanBodiesChangedEventArgs_get_added_mAB8A9ED730BF7C3F5B699DB4BE6A620912BD65E5_inline (ARHumanBodiesChangedEventArgs_t03BC9E10B0F7EA109F54F589571A7FCE26B18729 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARHumanBody>::GetEnumerator()
inline Enumerator_tD4EC69EA64503815479081028D89ABDC9B688E29  List_1_GetEnumerator_m54655BA773DBD1A5BFAF33F22390461DD5222E82 (List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tD4EC69EA64503815479081028D89ABDC9B688E29  (*) (List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARHumanBody>::get_Current()
inline ARHumanBody_tD50BBE7B486B76556A46BE9C799EE268D4ABB3B5 * Enumerator_get_Current_m097CEA7A6AB1D5800994E7E6A7D71599C8F1E694_inline (Enumerator_tD4EC69EA64503815479081028D89ABDC9B688E29 * __this, const RuntimeMethod* method)
{
	return ((  ARHumanBody_tD50BBE7B486B76556A46BE9C799EE268D4ABB3B5 * (*) (Enumerator_tD4EC69EA64503815479081028D89ABDC9B688E29 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRHumanBody,UnityEngine.XR.ARFoundation.ARHumanBody>::get_trackableId()
inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ARTrackable_2_get_trackableId_m166B48FCC8B0B15515F203B11A241F94F439E04F (ARTrackable_2_t482FF6DE9326FFF166148DA7425768F6FA9EB9B0 * __this, const RuntimeMethod* method)
{
	return ((  TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  (*) (ARTrackable_2_t482FF6DE9326FFF166148DA7425768F6FA9EB9B0 *, const RuntimeMethod*))ARTrackable_2_get_trackableId_m20D61C0024DA9503EDB68658C8CC3CA33D428DD3_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.Samples.BoneController>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m68772E681F040467DB264AC470FCAA5FFDBE4CE5 (Dictionary_2_t1BED71E67D13B3EB44A49DC3BE7C8300EB1E41E7 * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___key0, BoneController_tE016B260A258DA0FE0B6DC25A5C29E37A65F5538 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t1BED71E67D13B3EB44A49DC3BE7C8300EB1E41E7 *, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B , BoneController_tE016B260A258DA0FE0B6DC25A5C29E37A65F5538 **, const RuntimeMethod*))Dictionary_2_TryGetValue_mB80A6B055D918B329802041E0EC45781F33E254C_gshared)(__this, ___key0, ___value1, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared)(___original0, ___parent1, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.XR.ARFoundation.Samples.BoneController>()
inline BoneController_tE016B260A258DA0FE0B6DC25A5C29E37A65F5538 * GameObject_GetComponent_TisBoneController_tE016B260A258DA0FE0B6DC25A5C29E37A65F5538_m78CDE8D27CA6251E5249A2388551AF3D09ED3240 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  BoneController_tE016B260A258DA0FE0B6DC25A5C29E37A65F5538 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.Samples.BoneController>::Add(!0,!1)
inline void Dictionary_2_Add_mA9D4183640FBCF66BB8B45977423E5E98758C9ED (Dictionary_2_t1BED71E67D13B3EB44A49DC3BE7C8300EB1E41E7 * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___key0, BoneController_tE016B260A258DA0FE0B6DC25A5C29E37A65F5538 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1BED71E67D13B3EB44A49DC3BE7C8300EB1E41E7 *, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B , BoneController_tE016B260A258DA0FE0B6DC25A5C29E37A65F5538 *, const RuntimeMethod*))Dictionary_2_Add_m6512758895DEC959EE632E5C4417B5E155ADC1CD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void UnityEngine.XR.ARFoundation.Samples.BoneController::InitializeSkeletonJoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneController_InitializeSkeletonJoints_m7D3A632559B7682732BC315D41D5773075835908 (BoneController_tE016B260A258DA0FE0B6DC25A5C29E37A65F5538 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.Samples.BoneController::ApplyBodyPose(UnityEngine.XR.ARFoundation.ARHumanBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneController_ApplyBodyPose_m56466BFEAEB2AAE2690B972D1D1183282B702B2A (BoneController_tE016B260A258DA0FE0B6DC25A5C29E37A65F5538 * __this, ARHumanBody_tD50BBE7B486B76556A46BE9C799EE268D4ABB3B5 * ___body0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARHumanBody>::MoveNext()
inline bool Enumerator_MoveNext_mB37A4977FC667CD454E27CB5C54AD408BDCFC907 (Enumerator_tD4EC69EA64503815479081028D89ABDC9B688E29 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tD4EC69EA64503815479081028D89ABDC9B688E29 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARHumanBody>::Dispose()
inline void Enumerator_Dispose_mBB619088F9B19CF7EF4B85EC1F094C24ADA5FC6C (Enumerator_tD4EC69EA64503815479081028D89ABDC9B688E29 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD4EC69EA64503815479081028D89ABDC9B688E29 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARHumanBody> UnityEngine.XR.ARFoundation.ARHumanBodiesChangedEventArgs::get_updated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * ARHumanBodiesChangedEventArgs_get_updated_mC866F2A6E79A64291950D3DC79A4FEB320A0064B_inline (ARHumanBodiesChangedEventArgs_t03BC9E10B0F7EA109F54F589571A7FCE26B18729 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARHumanBody> UnityEngine.XR.ARFoundation.ARHumanBodiesChangedEventArgs::get_removed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * ARHumanBodiesChangedEventArgs_get_removed_m46187A1E3346C24439D3DADF25F3780B74EC452C_inline (ARHumanBodiesChangedEventArgs_t03BC9E10B0F7EA109F54F589571A7FCE26B18729 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.Samples.BoneController>::Remove(!0)
inline bool Dictionary_2_Remove_mCBE547B802663CB07E47AE37E93A3EC5318C324D (Dictionary_2_t1BED71E67D13B3EB44A49DC3BE7C8300EB1E41E7 * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t1BED71E67D13B3EB44A49DC3BE7C8300EB1E41E7 *, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B , const RuntimeMethod*))Dictionary_2_Remove_mA7B8EEEF70AB708689FD22F3F98BBDC746BF2C1F_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.Samples.BoneController>::.ctor()
inline void Dictionary_2__ctor_mDA6348EB93751BA2207AEEC208E9B817606F0854 (Dictionary_2_t1BED71E67D13B3EB44A49DC3BE7C8300EB1E41E7 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1BED71E67D13B3EB44A49DC3BE7C8300EB1E41E7 *, const RuntimeMethod*))Dictionary_2__ctor_mB6B6697225BEDAF7CB9619BD1239C469621F0D20_gshared)(__this, method);
}
// Newtonsoft.Json.Linq.JObject Newtonsoft.Json.Linq.JObject::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * JObject_Parse_mC11381640E6167C288580E6797E60FC950896C21 (String_t* ___json0, const RuntimeMethod* method);
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JObject::GetValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * JObject_GetValue_m0AAB5836A67C6D57A98083361102AAEDF5ECE682 (JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * __this, String_t* ___propertyName0, const RuntimeMethod* method);
// !!0 Newtonsoft.Json.Linq.Extensions::Value<System.Int32>(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>)
inline int32_t Extensions_Value_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m93F62F5FBC6403976ABF2EAB5A45219B76DE92C7 (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))Extensions_Value_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m93F62F5FBC6403976ABF2EAB5A45219B76DE92C7_gshared)(___value0, method);
}
// !!0 Newtonsoft.Json.Linq.Extensions::Value<System.String>(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>)
inline String_t* Extensions_Value_TisString_t_mE454079DDACB55830A1DEB2BADFC211055C63984 (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (RuntimeObject*, const RuntimeMethod*))Extensions_Value_TisRuntimeObject_mFD998B98327E94D4CCADB61467E889A820AABACC_gshared)(___value0, method);
}
// System.Void MessageHandler::.ctor(System.Int32,System.String,System.String,Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandler__ctor_m88684D58D64080CE7766BEE3D2D32EA5193A00B4 (MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * __this, int32_t ___id0, String_t* ___seq1, String_t* ___name2, JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * ___data3, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void <>f__AnonymousType0`4<System.Int32,System.String,System.String,System.Object>::.ctor(<id>j__TPar,<seq>j__TPar,<name>j__TPar,<data>j__TPar)
inline void U3CU3Ef__AnonymousType0_4__ctor_m3C493629DA20D23984AAEB32CBBAEEB67F0017BD (U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6 * __this, int32_t ___id0, String_t* ___seq1, String_t* ___name2, RuntimeObject * ___data3, const RuntimeMethod* method)
{
	((  void (*) (U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6 *, int32_t, String_t*, String_t*, RuntimeObject *, const RuntimeMethod*))U3CU3Ef__AnonymousType0_4__ctor_mA42D0E885207E71D6D8CE9CC4A204CF6FDCA8565_gshared)(__this, ___id0, ___seq1, ___name2, ___data3, method);
}
// Newtonsoft.Json.Linq.JObject Newtonsoft.Json.Linq.JObject::FromObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * JObject_FromObject_m467B80E8812E8B4494FCCED0AE9CBC7A050C10CE (RuntimeObject * ___o0, const RuntimeMethod* method);
// T SingletonMonoBehaviour`1<UnityMessageManager>::get_Instance()
inline UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * SingletonMonoBehaviour_1_get_Instance_m2219FD0089F95EA990F58F8DC6D47F79E9FCECC2 (const RuntimeMethod* method)
{
	return ((  UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * (*) (const RuntimeMethod*))SingletonMonoBehaviour_1_get_Instance_mCA27DE8B40FBF13AC39B556178FCEE9909F030E4_gshared)(method);
}
// System.Void UnityMessageManager::SendMessageToFlutter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_SendMessageToFlutter_mABF45FAA298107DDF065EC21C6925F3C7A4C3FA7 (UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.SceneManagement.Scene::get_isLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Scene_get_isLoaded_m040A3D274F4FAD21BC95C6154FEA557ADE5C8E93 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.SceneManagement.Scene::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Scene_IsValid_mC8AE24868A5020050F6A544ECAF5465C2CFB7CED (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Void NativeAPI::OnUnitySceneLoaded(System.String,System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_OnUnitySceneLoaded_m2F3C71B76C7BC469B27E51DB6FDD828BC2F54384 (String_t* ___name0, int32_t ___buildIndex1, bool ___isLoaded2, bool ___IsValid3, const RuntimeMethod* method);
// System.Void NativeAPI::OnUnityMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_OnUnityMessage_m1CF7151340955DF0256F5C6AD708DBE71F45AFB5 (String_t* ___message0, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0 (UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_2__ctor_m50E7B823E46CB327D49A2D55A761F57472037634_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.SceneManagement.SceneManager::add_sceneLoaded(UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_add_sceneLoaded_m54990A485E2E66739E31090BDC3A4C01EF7729BA (UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 * ___value0, const RuntimeMethod* method);
// System.Void NativeAPI::OnSceneLoaded(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_OnSceneLoaded_m3664DB25D28063B8628236EA7338D05DEB78694A (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___scene0, int32_t ___mode1, const RuntimeMethod* method);
// System.Void NativeAPI::ShowHostMainWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_ShowHostMainWindow_mF11F3AE0A8A16104D2546D5225A967CAEF20F494 (const RuntimeMethod* method);
// System.Void NativeAPI::UnloadMainWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_UnloadMainWindow_mC078E094545CA94E5BAF399E7C8B75E39274A855 (const RuntimeMethod* method);
// System.Void NativeAPI::QuitUnityWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_QuitUnityWindow_m53C753446251C8F1D17D43FAC31BFC8DAEB12607 (const RuntimeMethod* method);
// System.Void NativeAPI::SendMessageToFlutter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_SendMessageToFlutter_m589A00F5AE6DABEECC576A5E6BC709850513AE9B (String_t* ___message0, const RuntimeMethod* method);
// System.Int32 UnityMessageManager::generateId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityMessageManager_generateId_m044493EEA44FD0FE6040EAAC4F26AF0AA65D32B1 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityMessage>::Add(!0,!1)
inline void Dictionary_2_Add_m2097BED9B4E3EDCC2144E58088BF028DB0B48D99 (Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E * __this, int32_t ___key0, UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E *, int32_t, UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD *, const RuntimeMethod*))Dictionary_2_Add_m39BC00F21EE9459BB8DEF5479F95F79C5C740682_gshared)(__this, ___key0, ___value1, method);
}
// System.Void <>f__AnonymousType0`4<System.Int32,System.String,System.String,Newtonsoft.Json.Linq.JObject>::.ctor(<id>j__TPar,<seq>j__TPar,<name>j__TPar,<data>j__TPar)
inline void U3CU3Ef__AnonymousType0_4__ctor_m82B466E8D610611C6867BC66AB3DA978BFB62E70 (U3CU3Ef__AnonymousType0_4_tA4B468AA51ACFB35812852DE80F87F89E0F51F14 * __this, int32_t ___id0, String_t* ___seq1, String_t* ___name2, JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * ___data3, const RuntimeMethod* method)
{
	((  void (*) (U3CU3Ef__AnonymousType0_4_tA4B468AA51ACFB35812852DE80F87F89E0F51F14 *, int32_t, String_t*, String_t*, JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 *, const RuntimeMethod*))U3CU3Ef__AnonymousType0_4__ctor_mA42D0E885207E71D6D8CE9CC4A204CF6FDCA8565_gshared)(__this, ___id0, ___seq1, ___name2, ___data3, method);
}
// System.Void UnityMessageManager/MessageDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDelegate_Invoke_m38A45D4D87F60621AB4E4B6A68DDDE146B332DDD (MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method);
// MessageHandler MessageHandler::Deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * MessageHandler_Deserialize_mFD7001A5166EDD8386B2979B3C0FDC4544D0F123 (String_t* ___message0, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityMessage>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m0382483D7D84AC88696EFBBD3566B8B7B4C927D5 (Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E * __this, int32_t ___key0, UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E *, int32_t, UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD **, const RuntimeMethod*))Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityMessage>::Remove(!0)
inline bool Dictionary_2_Remove_m273238F996359EBF987A2836DA52FBF359AEFB67 (Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E *, int32_t, const RuntimeMethod*))Dictionary_2_Remove_mAC77908EC28C242ACC8C3C4CDEA945E73B95CFA4_gshared)(__this, ___key0, method);
}
// T MessageHandler::getData<System.Object>()
inline RuntimeObject * MessageHandler_getData_TisRuntimeObject_m4B0F54A0EA8EBDB824898342D0FB18471D377EC9 (MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 *, const RuntimeMethod*))MessageHandler_getData_TisRuntimeObject_m4B0F54A0EA8EBDB824898342D0FB18471D377EC9_gshared)(__this, method);
}
// System.Void System.Action`1<System.Object>::Invoke(!0)
inline void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744 (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *, RuntimeObject *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void UnityMessageManager/MessageHandlerDelegate::Invoke(MessageHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandlerDelegate_Invoke_m001CCB602D2B55DD220BF06E2AA4828575197FFE (MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * __this, MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * ___handler0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityMessage>::.ctor()
inline void Dictionary_2__ctor_mCDC1ED9FB26C45BCA609A92B7AA9757038C7C147 (Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E *, const RuntimeMethod*))Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared)(__this, method);
}
// System.Void SingletonMonoBehaviour`1<UnityMessageManager>::.ctor()
inline void SingletonMonoBehaviour_1__ctor_m0FD850D200F04E2F76476533783D9581729AB59F (SingletonMonoBehaviour_1_tCE345733DAFD7C69997F22704982E2372C4BFCDD * __this, const RuntimeMethod* method)
{
	((  void (*) (SingletonMonoBehaviour_1_tCE345733DAFD7C69997F22704982E2372C4BFCDD *, const RuntimeMethod*))SingletonMonoBehaviour_1__ctor_mFE92A122FFAD62C1BBD57040124CFB238F2301E3_gshared)(__this, method);
}
IL2CPP_EXTERN_C void DEFAULT_CALL OnUnityMessage(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL OnUnitySceneLoaded(char*, int32_t, int32_t, int32_t);
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
// UnityEngine.Transform UnityEngine.XR.ARFoundation.Samples.BoneController::get_skeletonRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * BoneController_get_skeletonRoot_m697B5CE6F22C45E1B14D11D825CC1752246593C8 (BoneController_tE016B260A258DA0FE0B6DC25A5C29E37A65F5538 * __this, const RuntimeMethod* method)
{
	{
		// return m_SkeletonRoot;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_m_SkeletonRoot_5();
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.BoneController::set_skeletonRoot(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneController_set_skeletonRoot_m55AB83224C341EB9A485028D6B36DA0BAB87AA00 (BoneController_tE016B260A258DA0FE0B6DC25A5C29E37A65F5538 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method)
{
	{
		// m_SkeletonRoot = value;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___value0;
		__this->set_m_SkeletonRoot_5(L_0);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.BoneController::InitializeSkeletonJoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneController_InitializeSkeletonJoints_m7D3A632559B7682732BC315D41D5773075835908 (BoneController_tE016B260A258DA0FE0B6DC25A5C29E37A65F5538 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_mDAEEC4B9916560EEC844B655D3E6E2BE20D91812_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mFF54572C8717A7CFE90F925376E9D6BD9E74FADB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mA0338FD7CCC05D92DE06FB933502F90C3420B78B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m69913970BDC0D766ABCABA9E63B260328EDFE031_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 * V_0 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		// Queue<Transform> nodes = new Queue<Transform>();
		Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 * L_0 = (Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 *)il2cpp_codegen_object_new(Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177_il2cpp_TypeInfo_var);
		Queue_1__ctor_mA0338FD7CCC05D92DE06FB933502F90C3420B78B(L_0, /*hidden argument*/Queue_1__ctor_mA0338FD7CCC05D92DE06FB933502F90C3420B78B_RuntimeMethod_var);
		V_0 = L_0;
		// nodes.Enqueue(m_SkeletonRoot);
		Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 * L_1 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = __this->get_m_SkeletonRoot_5();
		NullCheck(L_1);
		Queue_1_Enqueue_mFF54572C8717A7CFE90F925376E9D6BD9E74FADB(L_1, L_2, /*hidden argument*/Queue_1_Enqueue_mFF54572C8717A7CFE90F925376E9D6BD9E74FADB_RuntimeMethod_var);
		goto IL_0040;
	}

IL_0014:
	{
		// Transform next = nodes.Dequeue();
		Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 * L_3 = V_0;
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Queue_1_Dequeue_mDAEEC4B9916560EEC844B655D3E6E2BE20D91812(L_3, /*hidden argument*/Queue_1_Dequeue_mDAEEC4B9916560EEC844B655D3E6E2BE20D91812_RuntimeMethod_var);
		V_1 = L_4;
		// for (int i = 0; i < next.childCount; ++i)
		V_2 = 0;
		goto IL_0030;
	}

IL_001f:
	{
		// nodes.Enqueue(next.GetChild(i));
		Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 * L_5 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = V_1;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		Queue_1_Enqueue_mFF54572C8717A7CFE90F925376E9D6BD9E74FADB(L_5, L_8, /*hidden argument*/Queue_1_Enqueue_mFF54572C8717A7CFE90F925376E9D6BD9E74FADB_RuntimeMethod_var);
		// for (int i = 0; i < next.childCount; ++i)
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0030:
	{
		// for (int i = 0; i < next.childCount; ++i)
		int32_t L_10 = V_2;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_11, /*hidden argument*/NULL);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		// ProcessJoint(next);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13 = V_1;
		BoneController_ProcessJoint_m30129C62C2813FDCA741CB988F479972B2B68FF0(__this, L_13, /*hidden argument*/NULL);
	}

IL_0040:
	{
		// while (nodes.Count > 0)
		Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 * L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = Queue_1_get_Count_m69913970BDC0D766ABCABA9E63B260328EDFE031_inline(L_14, /*hidden argument*/Queue_1_get_Count_m69913970BDC0D766ABCABA9E63B260328EDFE031_RuntimeMethod_var);
		if ((((int32_t)L_15) > ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.BoneController::ApplyBodyPose(UnityEngine.XR.ARFoundation.ARHumanBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneController_ApplyBodyPose_m56466BFEAEB2AAE2690B972D1D1183282B702B2A (BoneController_tE016B260A258DA0FE0B6DC25A5C29E37A65F5538 * __this, ARHumanBody_tD50BBE7B486B76556A46BE9C799EE268D4ABB3B5 * ___body0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_mE0158704D7D59BC6278CFFD35923EB5370D9D623_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_t733A71EE29E0C7D2F944E30A1729F085DEB1138C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_3 = NULL;
	{
		// var joints = body.joints;
		ARHumanBody_tD50BBE7B486B76556A46BE9C799EE268D4ABB3B5 * L_0 = ___body0;
		NullCheck(L_0);
		NativeArray_1_t733A71EE29E0C7D2F944E30A1729F085DEB1138C  L_1;
		L_1 = ARHumanBody_get_joints_m3258FB1C8BB0B82F3F2E92DE025201E931A8C443_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (!joints.IsCreated)
		bool L_2;
		L_2 = NativeArray_1_get_IsCreated_mE0158704D7D59BC6278CFFD35923EB5370D9D623((NativeArray_1_t733A71EE29E0C7D2F944E30A1729F085DEB1138C *)(&V_0), /*hidden argument*/NativeArray_1_get_IsCreated_mE0158704D7D59BC6278CFFD35923EB5370D9D623_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		// return;
		return;
	}

IL_0011:
	{
		// for (int i = 0; i < k_NumSkeletonJoints; ++i)
		V_1 = 0;
		goto IL_0062;
	}

IL_0015:
	{
		// XRHumanBodyJoint joint = joints[i];
		int32_t L_3 = V_1;
		XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4  L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_ITEM(XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4 , ((NativeArray_1_t733A71EE29E0C7D2F944E30A1729F085DEB1138C *)(&V_0))->___m_Buffer_0, L_3);
		V_2 = L_4;
		// var bone = m_BoneMapping[i];
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_5 = __this->get_m_BoneMapping_6();
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = L_8;
		// if (bone != null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_9, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_005e;
		}
	}
	{
		// bone.transform.localPosition = joint.localPose.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = V_3;
		NullCheck(L_11);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_11, /*hidden argument*/NULL);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_13;
		L_13 = XRHumanBodyJoint_get_localPose_m0E5E0376C5F794FCEB47D6A55AD21945FD52864C_inline((XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4 *)(&V_2), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = L_13.get_position_0();
		NullCheck(L_12);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_12, L_14, /*hidden argument*/NULL);
		// bone.transform.localRotation = joint.localPose.rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15 = V_3;
		NullCheck(L_15);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_15, /*hidden argument*/NULL);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_17;
		L_17 = XRHumanBodyJoint_get_localPose_m0E5E0376C5F794FCEB47D6A55AD21945FD52864C_inline((XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4 *)(&V_2), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_18 = L_17.get_rotation_1();
		NullCheck(L_16);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_16, L_18, /*hidden argument*/NULL);
	}

IL_005e:
	{
		// for (int i = 0; i < k_NumSkeletonJoints; ++i)
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_0062:
	{
		// for (int i = 0; i < k_NumSkeletonJoints; ++i)
		int32_t L_20 = V_1;
		if ((((int32_t)L_20) < ((int32_t)((int32_t)91))))
		{
			goto IL_0015;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.BoneController::ProcessJoint(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneController_ProcessJoint_m30129C62C2813FDCA741CB988F479972B2B68FF0 (BoneController_tE016B260A258DA0FE0B6DC25A5C29E37A65F5538 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___joint0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral582845C691E515C821F38ECA4056669ACD3A652E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int index = GetJointIndex(joint.name);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___joint0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_0, /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = BoneController_GetJointIndex_mCC196D3A8A3842E5BA8F9182A50F3A809F58DD9C(__this, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (index >= 0 && index < k_NumSkeletonJoints)
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) >= ((int32_t)((int32_t)91))))
		{
			goto IL_0020;
		}
	}
	{
		// m_BoneMapping[index] = joint;
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_5 = __this->get_m_BoneMapping_6();
		int32_t L_6 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = ___joint0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)L_7);
		// }
		return;
	}

IL_0020:
	{
		// Debug.LogWarning($"{joint.name} was not found.");
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = ___joint0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_8, /*hidden argument*/NULL);
		String_t* L_10;
		L_10 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_9, _stringLiteral582845C691E515C821F38ECA4056669ACD3A652E, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 UnityEngine.XR.ARFoundation.Samples.BoneController::GetJointIndex(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoneController_GetJointIndex_mCC196D3A8A3842E5BA8F9182A50F3A809F58DD9C (BoneController_tE016B260A258DA0FE0B6DC25A5C29E37A65F5538 * __this, String_t* ___jointName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_TryParse_TisJointIndices_tC39C20C4C1CF1F68CEA9B6833554EAC0B3F1A53B_m2D26CACF03D6B93E4E0DC5D7E2A5DDF14E645BF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (Enum.TryParse(jointName, out val))
		String_t* L_0 = ___jointName0;
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Enum_TryParse_TisJointIndices_tC39C20C4C1CF1F68CEA9B6833554EAC0B3F1A53B_m2D26CACF03D6B93E4E0DC5D7E2A5DDF14E645BF9(L_0, (int32_t*)(&V_0), /*hidden argument*/Enum_TryParse_TisJointIndices_tC39C20C4C1CF1F68CEA9B6833554EAC0B3F1A53B_m2D26CACF03D6B93E4E0DC5D7E2A5DDF14E645BF9_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		// return (int)val;
		int32_t L_2 = V_0;
		return L_2;
	}

IL_000c:
	{
		// return -1;
		return (-1);
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.BoneController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneController__ctor_m3F59B437317CD5417C12D28337377FC2CC39566B (BoneController_tE016B260A258DA0FE0B6DC25A5C29E37A65F5538 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Transform[] m_BoneMapping = new Transform[k_NumSkeletonJoints];
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_0 = (TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D*)(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D*)SZArrayNew(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)91));
		__this->set_m_BoneMapping_6(L_0);
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
// UnityEngine.XR.ARFoundation.ARHumanBodyManager UnityEngine.XR.ARFoundation.Samples.HumanBodyTracker::get_humanBodyManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARHumanBodyManager_t901B9F11785ED05D74F4FAC50D14259488D800B4 * HumanBodyTracker_get_humanBodyManager_mC4B8945E39D5320F9979435792D262AC93C4D073 (HumanBodyTracker_t08D6DEC180E29CF2B63BF7DDB757E0B9CCAF1802 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_HumanBodyManager; }
		ARHumanBodyManager_t901B9F11785ED05D74F4FAC50D14259488D800B4 * L_0 = __this->get_m_HumanBodyManager_5();
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.HumanBodyTracker::set_humanBodyManager(UnityEngine.XR.ARFoundation.ARHumanBodyManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanBodyTracker_set_humanBodyManager_mD698CD4F92BECC8322CA17ED80CF62114B690FB3 (HumanBodyTracker_t08D6DEC180E29CF2B63BF7DDB757E0B9CCAF1802 * __this, ARHumanBodyManager_t901B9F11785ED05D74F4FAC50D14259488D800B4 * ___value0, const RuntimeMethod* method)
{
	{
		// set { m_HumanBodyManager = value; }
		ARHumanBodyManager_t901B9F11785ED05D74F4FAC50D14259488D800B4 * L_0 = ___value0;
		__this->set_m_HumanBodyManager_5(L_0);
		// set { m_HumanBodyManager = value; }
		return;
	}
}
// UnityEngine.GameObject UnityEngine.XR.ARFoundation.Samples.HumanBodyTracker::get_skeletonPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * HumanBodyTracker_get_skeletonPrefab_m682A136691745238FA4425FBBD3B777E7AD42FFB (HumanBodyTracker_t08D6DEC180E29CF2B63BF7DDB757E0B9CCAF1802 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_SkeletonPrefab; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_SkeletonPrefab_4();
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.HumanBodyTracker::set_skeletonPrefab(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanBodyTracker_set_skeletonPrefab_m9A137EC0A4552DEA901F4EBFF84851E4EC7EA881 (HumanBodyTracker_t08D6DEC180E29CF2B63BF7DDB757E0B9CCAF1802 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method)
{
	{
		// set { m_SkeletonPrefab = value; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___value0;
		__this->set_m_SkeletonPrefab_4(L_0);
		// set { m_SkeletonPrefab = value; }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.HumanBodyTracker::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanBodyTracker_OnEnable_mB8955E62494A0CDD4402ACFC172A62496CA26394 (HumanBodyTracker_t08D6DEC180E29CF2B63BF7DDB757E0B9CCAF1802 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m29DED49AF95994B55DBD78F6E52AA52DC12E05D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F3641BB0F5489AC32B6649DD5BA9D07DD0C5301_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HumanBodyTracker_OnHumanBodiesChanged_mCA0BA7F2AAC9D2A12EB37B819B86A2D793EDE86F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_HumanBodyManager.humanBodiesChanged += OnHumanBodiesChanged;
		ARHumanBodyManager_t901B9F11785ED05D74F4FAC50D14259488D800B4 * L_0 = __this->get_m_HumanBodyManager_5();
		Action_1_t6F3641BB0F5489AC32B6649DD5BA9D07DD0C5301 * L_1 = (Action_1_t6F3641BB0F5489AC32B6649DD5BA9D07DD0C5301 *)il2cpp_codegen_object_new(Action_1_t6F3641BB0F5489AC32B6649DD5BA9D07DD0C5301_il2cpp_TypeInfo_var);
		Action_1__ctor_m29DED49AF95994B55DBD78F6E52AA52DC12E05D5(L_1, __this, (intptr_t)((intptr_t)HumanBodyTracker_OnHumanBodiesChanged_mCA0BA7F2AAC9D2A12EB37B819B86A2D793EDE86F_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m29DED49AF95994B55DBD78F6E52AA52DC12E05D5_RuntimeMethod_var);
		NullCheck(L_0);
		ARHumanBodyManager_add_humanBodiesChanged_m5E861DCF1B0CE714D0A76302F92A8FF864D6A39B(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.HumanBodyTracker::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanBodyTracker_OnDisable_m7E3C3D6DEAF82B58346242D91653ECB81487823A (HumanBodyTracker_t08D6DEC180E29CF2B63BF7DDB757E0B9CCAF1802 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m29DED49AF95994B55DBD78F6E52AA52DC12E05D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F3641BB0F5489AC32B6649DD5BA9D07DD0C5301_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HumanBodyTracker_OnHumanBodiesChanged_mCA0BA7F2AAC9D2A12EB37B819B86A2D793EDE86F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_HumanBodyManager != null)
		ARHumanBodyManager_t901B9F11785ED05D74F4FAC50D14259488D800B4 * L_0 = __this->get_m_HumanBodyManager_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// m_HumanBodyManager.humanBodiesChanged -= OnHumanBodiesChanged;
		ARHumanBodyManager_t901B9F11785ED05D74F4FAC50D14259488D800B4 * L_2 = __this->get_m_HumanBodyManager_5();
		Action_1_t6F3641BB0F5489AC32B6649DD5BA9D07DD0C5301 * L_3 = (Action_1_t6F3641BB0F5489AC32B6649DD5BA9D07DD0C5301 *)il2cpp_codegen_object_new(Action_1_t6F3641BB0F5489AC32B6649DD5BA9D07DD0C5301_il2cpp_TypeInfo_var);
		Action_1__ctor_m29DED49AF95994B55DBD78F6E52AA52DC12E05D5(L_3, __this, (intptr_t)((intptr_t)HumanBodyTracker_OnHumanBodiesChanged_mCA0BA7F2AAC9D2A12EB37B819B86A2D793EDE86F_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m29DED49AF95994B55DBD78F6E52AA52DC12E05D5_RuntimeMethod_var);
		NullCheck(L_2);
		ARHumanBodyManager_remove_humanBodiesChanged_mB1CFD6EAB3111E5FF3351CE7B9B934D70F7979A9(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.HumanBodyTracker::OnHumanBodiesChanged(UnityEngine.XR.ARFoundation.ARHumanBodiesChangedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanBodyTracker_OnHumanBodiesChanged_mCA0BA7F2AAC9D2A12EB37B819B86A2D793EDE86F (HumanBodyTracker_t08D6DEC180E29CF2B63BF7DDB757E0B9CCAF1802 * __this, ARHumanBodiesChangedEventArgs_t03BC9E10B0F7EA109F54F589571A7FCE26B18729  ___eventArgs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARTrackable_2_get_trackableId_m166B48FCC8B0B15515F203B11A241F94F439E04F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mA9D4183640FBCF66BB8B45977423E5E98758C9ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mCBE547B802663CB07E47AE37E93A3EC5318C324D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m68772E681F040467DB264AC470FCAA5FFDBE4CE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mBB619088F9B19CF7EF4B85EC1F094C24ADA5FC6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB37A4977FC667CD454E27CB5C54AD408BDCFC907_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m097CEA7A6AB1D5800994E7E6A7D71599C8F1E694_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBoneController_tE016B260A258DA0FE0B6DC25A5C29E37A65F5538_m78CDE8D27CA6251E5249A2388551AF3D09ED3240_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m54655BA773DBD1A5BFAF33F22390461DD5222E82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0933BD6773EB584271818C3FFE8D0E09C7041D59);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37E2FC7EB30787F303093E947C9C7AB9A31BED4D);
		s_Il2CppMethodInitialized = true;
	}
	BoneController_tE016B260A258DA0FE0B6DC25A5C29E37A65F5538 * V_0 = NULL;
	Enumerator_tD4EC69EA64503815479081028D89ABDC9B688E29  V_1;
	memset((&V_1), 0, sizeof(V_1));
	ARHumanBody_tD50BBE7B486B76556A46BE9C799EE268D4ABB3B5 * V_2 = NULL;
	ARHumanBody_tD50BBE7B486B76556A46BE9C799EE268D4ABB3B5 * V_3 = NULL;
	ARHumanBody_tD50BBE7B486B76556A46BE9C799EE268D4ABB3B5 * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		// foreach (var humanBody in eventArgs.added)
		List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * L_0;
		L_0 = ARHumanBodiesChangedEventArgs_get_added_mAB8A9ED730BF7C3F5B699DB4BE6A620912BD65E5_inline((ARHumanBodiesChangedEventArgs_t03BC9E10B0F7EA109F54F589571A7FCE26B18729 *)(&___eventArgs0), /*hidden argument*/NULL);
		NullCheck(L_0);
		Enumerator_tD4EC69EA64503815479081028D89ABDC9B688E29  L_1;
		L_1 = List_1_GetEnumerator_m54655BA773DBD1A5BFAF33F22390461DD5222E82(L_0, /*hidden argument*/List_1_GetEnumerator_m54655BA773DBD1A5BFAF33F22390461DD5222E82_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_007c;
		}

IL_000f:
		{
			// foreach (var humanBody in eventArgs.added)
			ARHumanBody_tD50BBE7B486B76556A46BE9C799EE268D4ABB3B5 * L_2;
			L_2 = Enumerator_get_Current_m097CEA7A6AB1D5800994E7E6A7D71599C8F1E694_inline((Enumerator_tD4EC69EA64503815479081028D89ABDC9B688E29 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m097CEA7A6AB1D5800994E7E6A7D71599C8F1E694_RuntimeMethod_var);
			V_2 = L_2;
			// if (!m_SkeletonTracker.TryGetValue(humanBody.trackableId, out boneController))
			Dictionary_2_t1BED71E67D13B3EB44A49DC3BE7C8300EB1E41E7 * L_3 = __this->get_m_SkeletonTracker_6();
			ARHumanBody_tD50BBE7B486B76556A46BE9C799EE268D4ABB3B5 * L_4 = V_2;
			NullCheck(L_4);
			TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_5;
			L_5 = ARTrackable_2_get_trackableId_m166B48FCC8B0B15515F203B11A241F94F439E04F(L_4, /*hidden argument*/ARTrackable_2_get_trackableId_m166B48FCC8B0B15515F203B11A241F94F439E04F_RuntimeMethod_var);
			NullCheck(L_3);
			bool L_6;
			L_6 = Dictionary_2_TryGetValue_m68772E681F040467DB264AC470FCAA5FFDBE4CE5(L_3, L_5, (BoneController_tE016B260A258DA0FE0B6DC25A5C29E37A65F5538 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m68772E681F040467DB264AC470FCAA5FFDBE4CE5_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_006f;
			}
		}

IL_002c:
		{
			// Debug.Log($"Adding a new skeleton [{humanBody.trackableId}].");
			ARHumanBody_tD50BBE7B486B76556A46BE9C799EE268D4ABB3B5 * L_7 = V_2;
			NullCheck(L_7);
			TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_8;
			L_8 = ARTrackable_2_get_trackableId_m166B48FCC8B0B15515F203B11A241F94F439E04F(L_7, /*hidden argument*/ARTrackable_2_get_trackableId_m166B48FCC8B0B15515F203B11A241F94F439E04F_RuntimeMethod_var);
			TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_9 = L_8;
			RuntimeObject * L_10 = Box(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_il2cpp_TypeInfo_var, &L_9);
			String_t* L_11;
			L_11 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral37E2FC7EB30787F303093E947C9C7AB9A31BED4D, L_10, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_11, /*hidden argument*/NULL);
			// var newSkeletonGO = Instantiate(m_SkeletonPrefab, humanBody.transform);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_m_SkeletonPrefab_4();
			ARHumanBody_tD50BBE7B486B76556A46BE9C799EE268D4ABB3B5 * L_13 = V_2;
			NullCheck(L_13);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
			L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_13, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15;
			L_15 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_12, L_14, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
			// boneController = newSkeletonGO.GetComponent<BoneController>();
			NullCheck(L_15);
			BoneController_tE016B260A258DA0FE0B6DC25A5C29E37A65F5538 * L_16;
			L_16 = GameObject_GetComponent_TisBoneController_tE016B260A258DA0FE0B6DC25A5C29E37A65F5538_m78CDE8D27CA6251E5249A2388551AF3D09ED3240(L_15, /*hidden argument*/GameObject_GetComponent_TisBoneController_tE016B260A258DA0FE0B6DC25A5C29E37A65F5538_m78CDE8D27CA6251E5249A2388551AF3D09ED3240_RuntimeMethod_var);
			V_0 = L_16;
			// m_SkeletonTracker.Add(humanBody.trackableId, boneController);
			Dictionary_2_t1BED71E67D13B3EB44A49DC3BE7C8300EB1E41E7 * L_17 = __this->get_m_SkeletonTracker_6();
			ARHumanBody_tD50BBE7B486B76556A46BE9C799EE268D4ABB3B5 * L_18 = V_2;
			NullCheck(L_18);
			TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_19;
			L_19 = ARTrackable_2_get_trackableId_m166B48FCC8B0B15515F203B11A241F94F439E04F(L_18, /*hidden argument*/ARTrackable_2_get_trackableId_m166B48FCC8B0B15515F203B11A241F94F439E04F_RuntimeMethod_var);
			BoneController_tE016B260A258DA0FE0B6DC25A5C29E37A65F5538 * L_20 = V_0;
			NullCheck(L_17);
			Dictionary_2_Add_mA9D4183640FBCF66BB8B45977423E5E98758C9ED(L_17, L_19, L_20, /*hidden argument*/Dictionary_2_Add_mA9D4183640FBCF66BB8B45977423E5E98758C9ED_RuntimeMethod_var);
		}

IL_006f:
		{
			// boneController.InitializeSkeletonJoints();
			BoneController_tE016B260A258DA0FE0B6DC25A5C29E37A65F5538 * L_21 = V_0;
			NullCheck(L_21);
			BoneController_InitializeSkeletonJoints_m7D3A632559B7682732BC315D41D5773075835908(L_21, /*hidden argument*/NULL);
			// boneController.ApplyBodyPose(humanBody);
			BoneController_tE016B260A258DA0FE0B6DC25A5C29E37A65F5538 * L_22 = V_0;
			ARHumanBody_tD50BBE7B486B76556A46BE9C799EE268D4ABB3B5 * L_23 = V_2;
			NullCheck(L_22);
			BoneController_ApplyBodyPose_m56466BFEAEB2AAE2690B972D1D1183282B702B2A(L_22, L_23, /*hidden argument*/NULL);
		}

IL_007c:
		{
			// foreach (var humanBody in eventArgs.added)
			bool L_24;
			L_24 = Enumerator_MoveNext_mB37A4977FC667CD454E27CB5C54AD408BDCFC907((Enumerator_tD4EC69EA64503815479081028D89ABDC9B688E29 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mB37A4977FC667CD454E27CB5C54AD408BDCFC907_RuntimeMethod_var);
			if (L_24)
			{
				goto IL_000f;
			}
		}

IL_0085:
		{
			IL2CPP_LEAVE(0x95, FINALLY_0087);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0087;
	}

FINALLY_0087:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mBB619088F9B19CF7EF4B85EC1F094C24ADA5FC6C((Enumerator_tD4EC69EA64503815479081028D89ABDC9B688E29 *)(&V_1), /*hidden argument*/Enumerator_Dispose_mBB619088F9B19CF7EF4B85EC1F094C24ADA5FC6C_RuntimeMethod_var);
		IL2CPP_END_FINALLY(135)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(135)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x95, IL_0095)
	}

IL_0095:
	{
		// foreach (var humanBody in eventArgs.updated)
		List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * L_25;
		L_25 = ARHumanBodiesChangedEventArgs_get_updated_mC866F2A6E79A64291950D3DC79A4FEB320A0064B_inline((ARHumanBodiesChangedEventArgs_t03BC9E10B0F7EA109F54F589571A7FCE26B18729 *)(&___eventArgs0), /*hidden argument*/NULL);
		NullCheck(L_25);
		Enumerator_tD4EC69EA64503815479081028D89ABDC9B688E29  L_26;
		L_26 = List_1_GetEnumerator_m54655BA773DBD1A5BFAF33F22390461DD5222E82(L_25, /*hidden argument*/List_1_GetEnumerator_m54655BA773DBD1A5BFAF33F22390461DD5222E82_RuntimeMethod_var);
		V_1 = L_26;
	}

IL_00a2:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00c8;
		}

IL_00a4:
		{
			// foreach (var humanBody in eventArgs.updated)
			ARHumanBody_tD50BBE7B486B76556A46BE9C799EE268D4ABB3B5 * L_27;
			L_27 = Enumerator_get_Current_m097CEA7A6AB1D5800994E7E6A7D71599C8F1E694_inline((Enumerator_tD4EC69EA64503815479081028D89ABDC9B688E29 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m097CEA7A6AB1D5800994E7E6A7D71599C8F1E694_RuntimeMethod_var);
			V_3 = L_27;
			// if (m_SkeletonTracker.TryGetValue(humanBody.trackableId, out boneController))
			Dictionary_2_t1BED71E67D13B3EB44A49DC3BE7C8300EB1E41E7 * L_28 = __this->get_m_SkeletonTracker_6();
			ARHumanBody_tD50BBE7B486B76556A46BE9C799EE268D4ABB3B5 * L_29 = V_3;
			NullCheck(L_29);
			TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_30;
			L_30 = ARTrackable_2_get_trackableId_m166B48FCC8B0B15515F203B11A241F94F439E04F(L_29, /*hidden argument*/ARTrackable_2_get_trackableId_m166B48FCC8B0B15515F203B11A241F94F439E04F_RuntimeMethod_var);
			NullCheck(L_28);
			bool L_31;
			L_31 = Dictionary_2_TryGetValue_m68772E681F040467DB264AC470FCAA5FFDBE4CE5(L_28, L_30, (BoneController_tE016B260A258DA0FE0B6DC25A5C29E37A65F5538 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m68772E681F040467DB264AC470FCAA5FFDBE4CE5_RuntimeMethod_var);
			if (!L_31)
			{
				goto IL_00c8;
			}
		}

IL_00c1:
		{
			// boneController.ApplyBodyPose(humanBody);
			BoneController_tE016B260A258DA0FE0B6DC25A5C29E37A65F5538 * L_32 = V_0;
			ARHumanBody_tD50BBE7B486B76556A46BE9C799EE268D4ABB3B5 * L_33 = V_3;
			NullCheck(L_32);
			BoneController_ApplyBodyPose_m56466BFEAEB2AAE2690B972D1D1183282B702B2A(L_32, L_33, /*hidden argument*/NULL);
		}

IL_00c8:
		{
			// foreach (var humanBody in eventArgs.updated)
			bool L_34;
			L_34 = Enumerator_MoveNext_mB37A4977FC667CD454E27CB5C54AD408BDCFC907((Enumerator_tD4EC69EA64503815479081028D89ABDC9B688E29 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mB37A4977FC667CD454E27CB5C54AD408BDCFC907_RuntimeMethod_var);
			if (L_34)
			{
				goto IL_00a4;
			}
		}

IL_00d1:
		{
			IL2CPP_LEAVE(0xE1, FINALLY_00d3);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00d3;
	}

FINALLY_00d3:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mBB619088F9B19CF7EF4B85EC1F094C24ADA5FC6C((Enumerator_tD4EC69EA64503815479081028D89ABDC9B688E29 *)(&V_1), /*hidden argument*/Enumerator_Dispose_mBB619088F9B19CF7EF4B85EC1F094C24ADA5FC6C_RuntimeMethod_var);
		IL2CPP_END_FINALLY(211)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(211)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xE1, IL_00e1)
	}

IL_00e1:
	{
		// foreach (var humanBody in eventArgs.removed)
		List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * L_35;
		L_35 = ARHumanBodiesChangedEventArgs_get_removed_m46187A1E3346C24439D3DADF25F3780B74EC452C_inline((ARHumanBodiesChangedEventArgs_t03BC9E10B0F7EA109F54F589571A7FCE26B18729 *)(&___eventArgs0), /*hidden argument*/NULL);
		NullCheck(L_35);
		Enumerator_tD4EC69EA64503815479081028D89ABDC9B688E29  L_36;
		L_36 = List_1_GetEnumerator_m54655BA773DBD1A5BFAF33F22390461DD5222E82(L_35, /*hidden argument*/List_1_GetEnumerator_m54655BA773DBD1A5BFAF33F22390461DD5222E82_RuntimeMethod_var);
		V_1 = L_36;
	}

IL_00ee:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0148;
		}

IL_00f0:
		{
			// foreach (var humanBody in eventArgs.removed)
			ARHumanBody_tD50BBE7B486B76556A46BE9C799EE268D4ABB3B5 * L_37;
			L_37 = Enumerator_get_Current_m097CEA7A6AB1D5800994E7E6A7D71599C8F1E694_inline((Enumerator_tD4EC69EA64503815479081028D89ABDC9B688E29 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m097CEA7A6AB1D5800994E7E6A7D71599C8F1E694_RuntimeMethod_var);
			V_4 = L_37;
			// Debug.Log($"Removing a skeleton [{humanBody.trackableId}].");
			ARHumanBody_tD50BBE7B486B76556A46BE9C799EE268D4ABB3B5 * L_38 = V_4;
			NullCheck(L_38);
			TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_39;
			L_39 = ARTrackable_2_get_trackableId_m166B48FCC8B0B15515F203B11A241F94F439E04F(L_38, /*hidden argument*/ARTrackable_2_get_trackableId_m166B48FCC8B0B15515F203B11A241F94F439E04F_RuntimeMethod_var);
			TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_40 = L_39;
			RuntimeObject * L_41 = Box(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_il2cpp_TypeInfo_var, &L_40);
			String_t* L_42;
			L_42 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral0933BD6773EB584271818C3FFE8D0E09C7041D59, L_41, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_42, /*hidden argument*/NULL);
			// if (m_SkeletonTracker.TryGetValue(humanBody.trackableId, out boneController))
			Dictionary_2_t1BED71E67D13B3EB44A49DC3BE7C8300EB1E41E7 * L_43 = __this->get_m_SkeletonTracker_6();
			ARHumanBody_tD50BBE7B486B76556A46BE9C799EE268D4ABB3B5 * L_44 = V_4;
			NullCheck(L_44);
			TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_45;
			L_45 = ARTrackable_2_get_trackableId_m166B48FCC8B0B15515F203B11A241F94F439E04F(L_44, /*hidden argument*/ARTrackable_2_get_trackableId_m166B48FCC8B0B15515F203B11A241F94F439E04F_RuntimeMethod_var);
			NullCheck(L_43);
			bool L_46;
			L_46 = Dictionary_2_TryGetValue_m68772E681F040467DB264AC470FCAA5FFDBE4CE5(L_43, L_45, (BoneController_tE016B260A258DA0FE0B6DC25A5C29E37A65F5538 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m68772E681F040467DB264AC470FCAA5FFDBE4CE5_RuntimeMethod_var);
			if (!L_46)
			{
				goto IL_0148;
			}
		}

IL_012a:
		{
			// Destroy(boneController.gameObject);
			BoneController_tE016B260A258DA0FE0B6DC25A5C29E37A65F5538 * L_47 = V_0;
			NullCheck(L_47);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_48;
			L_48 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_47, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_48, /*hidden argument*/NULL);
			// m_SkeletonTracker.Remove(humanBody.trackableId);
			Dictionary_2_t1BED71E67D13B3EB44A49DC3BE7C8300EB1E41E7 * L_49 = __this->get_m_SkeletonTracker_6();
			ARHumanBody_tD50BBE7B486B76556A46BE9C799EE268D4ABB3B5 * L_50 = V_4;
			NullCheck(L_50);
			TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_51;
			L_51 = ARTrackable_2_get_trackableId_m166B48FCC8B0B15515F203B11A241F94F439E04F(L_50, /*hidden argument*/ARTrackable_2_get_trackableId_m166B48FCC8B0B15515F203B11A241F94F439E04F_RuntimeMethod_var);
			NullCheck(L_49);
			bool L_52;
			L_52 = Dictionary_2_Remove_mCBE547B802663CB07E47AE37E93A3EC5318C324D(L_49, L_51, /*hidden argument*/Dictionary_2_Remove_mCBE547B802663CB07E47AE37E93A3EC5318C324D_RuntimeMethod_var);
		}

IL_0148:
		{
			// foreach (var humanBody in eventArgs.removed)
			bool L_53;
			L_53 = Enumerator_MoveNext_mB37A4977FC667CD454E27CB5C54AD408BDCFC907((Enumerator_tD4EC69EA64503815479081028D89ABDC9B688E29 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mB37A4977FC667CD454E27CB5C54AD408BDCFC907_RuntimeMethod_var);
			if (L_53)
			{
				goto IL_00f0;
			}
		}

IL_0151:
		{
			IL2CPP_LEAVE(0x161, FINALLY_0153);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0153;
	}

FINALLY_0153:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mBB619088F9B19CF7EF4B85EC1F094C24ADA5FC6C((Enumerator_tD4EC69EA64503815479081028D89ABDC9B688E29 *)(&V_1), /*hidden argument*/Enumerator_Dispose_mBB619088F9B19CF7EF4B85EC1F094C24ADA5FC6C_RuntimeMethod_var);
		IL2CPP_END_FINALLY(339)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(339)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x161, IL_0161)
	}

IL_0161:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.HumanBodyTracker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanBodyTracker__ctor_m5BE66EF9DEF2A47385D9E29D6C693C97F910392A (HumanBodyTracker_t08D6DEC180E29CF2B63BF7DDB757E0B9CCAF1802 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mDA6348EB93751BA2207AEEC208E9B817606F0854_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t1BED71E67D13B3EB44A49DC3BE7C8300EB1E41E7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Dictionary<TrackableId, BoneController> m_SkeletonTracker = new Dictionary<TrackableId, BoneController>();
		Dictionary_2_t1BED71E67D13B3EB44A49DC3BE7C8300EB1E41E7 * L_0 = (Dictionary_2_t1BED71E67D13B3EB44A49DC3BE7C8300EB1E41E7 *)il2cpp_codegen_object_new(Dictionary_2_t1BED71E67D13B3EB44A49DC3BE7C8300EB1E41E7_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mDA6348EB93751BA2207AEEC208E9B817606F0854(L_0, /*hidden argument*/Dictionary_2__ctor_mDA6348EB93751BA2207AEEC208E9B817606F0854_RuntimeMethod_var);
		__this->set_m_SkeletonTracker_6(L_0);
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
// MessageHandler MessageHandler::Deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * MessageHandler_Deserialize_mFD7001A5166EDD8386B2979B3C0FDC4544D0F123 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_Value_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m93F62F5FBC6403976ABF2EAB5A45219B76DE92C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_Value_TisString_t_mE454079DDACB55830A1DEB2BADFC211055C63984_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24C049E512CD1B48036BD162FF63700A57CA3469);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * V_0 = NULL;
	{
		// JObject m = JObject.Parse(message);
		String_t* L_0 = ___message0;
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_1;
		L_1 = JObject_Parse_mC11381640E6167C288580E6797E60FC950896C21(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// MessageHandler handler = new MessageHandler(
		//     m.GetValue("id").Value<int>(),
		//     m.GetValue("seq").Value<string>(),
		//     m.GetValue("name").Value<string>(),
		//     m.GetValue("data")
		// );
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_2 = V_0;
		NullCheck(L_2);
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_3;
		L_3 = JObject_GetValue_m0AAB5836A67C6D57A98083361102AAEDF5ECE682(L_2, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, /*hidden argument*/NULL);
		int32_t L_4;
		L_4 = Extensions_Value_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m93F62F5FBC6403976ABF2EAB5A45219B76DE92C7(L_3, /*hidden argument*/Extensions_Value_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m93F62F5FBC6403976ABF2EAB5A45219B76DE92C7_RuntimeMethod_var);
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_5 = V_0;
		NullCheck(L_5);
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_6;
		L_6 = JObject_GetValue_m0AAB5836A67C6D57A98083361102AAEDF5ECE682(L_5, _stringLiteral24C049E512CD1B48036BD162FF63700A57CA3469, /*hidden argument*/NULL);
		String_t* L_7;
		L_7 = Extensions_Value_TisString_t_mE454079DDACB55830A1DEB2BADFC211055C63984(L_6, /*hidden argument*/Extensions_Value_TisString_t_mE454079DDACB55830A1DEB2BADFC211055C63984_RuntimeMethod_var);
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_8 = V_0;
		NullCheck(L_8);
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_9;
		L_9 = JObject_GetValue_m0AAB5836A67C6D57A98083361102AAEDF5ECE682(L_8, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, /*hidden argument*/NULL);
		String_t* L_10;
		L_10 = Extensions_Value_TisString_t_mE454079DDACB55830A1DEB2BADFC211055C63984(L_9, /*hidden argument*/Extensions_Value_TisString_t_mE454079DDACB55830A1DEB2BADFC211055C63984_RuntimeMethod_var);
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_11 = V_0;
		NullCheck(L_11);
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_12;
		L_12 = JObject_GetValue_m0AAB5836A67C6D57A98083361102AAEDF5ECE682(L_11, _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469, /*hidden argument*/NULL);
		MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * L_13 = (MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 *)il2cpp_codegen_object_new(MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7_il2cpp_TypeInfo_var);
		MessageHandler__ctor_m88684D58D64080CE7766BEE3D2D32EA5193A00B4(L_13, L_4, L_7, L_10, L_12, /*hidden argument*/NULL);
		// return handler;
		return L_13;
	}
}
// System.Void MessageHandler::.ctor(System.Int32,System.String,System.String,Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandler__ctor_m88684D58D64080CE7766BEE3D2D32EA5193A00B4 (MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * __this, int32_t ___id0, String_t* ___seq1, String_t* ___name2, JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * ___data3, const RuntimeMethod* method)
{
	{
		// public MessageHandler(int id, string seq, string name, JToken data)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.id = id;
		int32_t L_0 = ___id0;
		__this->set_id_0(L_0);
		// this.seq = seq;
		String_t* L_1 = ___seq1;
		__this->set_seq_1(L_1);
		// this.name = name;
		String_t* L_2 = ___name2;
		__this->set_name_2(L_2);
		// this.data = data;
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_3 = ___data3;
		__this->set_data_3(L_3);
		// }
		return;
	}
}
// System.Void MessageHandler::send(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandler_send_m9EF609A41518571430690AFA490250C054CA5C4B (MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * __this, RuntimeObject * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_get_Instance_m2219FD0089F95EA990F58F8DC6D47F79E9FCECC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_tCE345733DAFD7C69997F22704982E2372C4BFCDD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ef__AnonymousType0_4__ctor_m3C493629DA20D23984AAEB32CBBAEEB67F0017BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC);
		s_Il2CppMethodInitialized = true;
	}
	JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * V_0 = NULL;
	{
		// JObject o = JObject.FromObject(new
		// {
		//     id = id,
		//     seq = "end",
		//     name = name,
		//     data = data
		// });
		int32_t L_0 = __this->get_id_0();
		String_t* L_1 = __this->get_name_2();
		RuntimeObject * L_2 = ___data0;
		U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6 * L_3 = (U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6 *)il2cpp_codegen_object_new(U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6_il2cpp_TypeInfo_var);
		U3CU3Ef__AnonymousType0_4__ctor_m3C493629DA20D23984AAEB32CBBAEEB67F0017BD(L_3, L_0, _stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1, L_1, L_2, /*hidden argument*/U3CU3Ef__AnonymousType0_4__ctor_m3C493629DA20D23984AAEB32CBBAEEB67F0017BD_RuntimeMethod_var);
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_4;
		L_4 = JObject_FromObject_m467B80E8812E8B4494FCCED0AE9CBC7A050C10CE(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// UnityMessageManager.Instance.SendMessageToFlutter(UnityMessageManager.MessagePrefix + o.ToString());
		IL2CPP_RUNTIME_CLASS_INIT(SingletonMonoBehaviour_1_tCE345733DAFD7C69997F22704982E2372C4BFCDD_il2cpp_TypeInfo_var);
		UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * L_5;
		L_5 = SingletonMonoBehaviour_1_get_Instance_m2219FD0089F95EA990F58F8DC6D47F79E9FCECC2(/*hidden argument*/SingletonMonoBehaviour_1_get_Instance_m2219FD0089F95EA990F58F8DC6D47F79E9FCECC2_RuntimeMethod_var);
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		String_t* L_8;
		L_8 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC, L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		UnityMessageManager_SendMessageToFlutter_mABF45FAA298107DDF065EC21C6925F3C7A4C3FA7(L_5, L_8, /*hidden argument*/NULL);
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
// System.Void NativeAPI::OnUnityMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_OnUnityMessage_m1CF7151340955DF0256F5C6AD708DBE71F45AFB5 (String_t* ___message0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(OnUnityMessage)(____message0_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

}
// System.Void NativeAPI::OnUnitySceneLoaded(System.String,System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_OnUnitySceneLoaded_m2F3C71B76C7BC469B27E51DB6FDD828BC2F54384 (String_t* ___name0, int32_t ___buildIndex1, bool ___isLoaded2, bool ___IsValid3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t, int32_t, int32_t);

	// Marshaling of parameter '___name0' to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(OnUnitySceneLoaded)(____name0_marshaled, ___buildIndex1, static_cast<int32_t>(___isLoaded2), static_cast<int32_t>(___IsValid3));

	// Marshaling cleanup of parameter '___name0' native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

}
// System.Void NativeAPI::OnSceneLoaded(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_OnSceneLoaded_m3664DB25D28063B8628236EA7338D05DEB78694A (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___scene0, int32_t ___mode1, const RuntimeMethod* method)
{
	{
		// OnUnitySceneLoaded(scene.name, scene.buildIndex, scene.isLoaded, scene.IsValid());
		String_t* L_0;
		L_0 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&___scene0), /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&___scene0), /*hidden argument*/NULL);
		bool L_2;
		L_2 = Scene_get_isLoaded_m040A3D274F4FAD21BC95C6154FEA557ADE5C8E93((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&___scene0), /*hidden argument*/NULL);
		bool L_3;
		L_3 = Scene_IsValid_mC8AE24868A5020050F6A544ECAF5465C2CFB7CED((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&___scene0), /*hidden argument*/NULL);
		NativeAPI_OnUnitySceneLoaded_m2F3C71B76C7BC469B27E51DB6FDD828BC2F54384(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NativeAPI::SendMessageToFlutter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_SendMessageToFlutter_m589A00F5AE6DABEECC576A5E6BC709850513AE9B (String_t* ___message0, const RuntimeMethod* method)
{
	{
		// OnUnityMessage(message);
		String_t* L_0 = ___message0;
		NativeAPI_OnUnityMessage_m1CF7151340955DF0256F5C6AD708DBE71F45AFB5(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NativeAPI::ShowHostMainWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_ShowHostMainWindow_mF11F3AE0A8A16104D2546D5225A967CAEF20F494 (const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void NativeAPI::UnloadMainWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_UnloadMainWindow_mC078E094545CA94E5BAF399E7C8B75E39274A855 (const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void NativeAPI::QuitUnityWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_QuitUnityWindow_m53C753446251C8F1D17D43FAC31BFC8DAEB12607 (const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void NativeAPI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI__ctor_m078F288AC03B02E77E2017CB3EBD3E42B9FED0E4 (NativeAPI_tCF1B87942D24DC16E49B82348757D460312951F7 * __this, const RuntimeMethod* method)
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
// System.Void UnityMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessage__ctor_m31453D518E0E54753A5581B23A7ABEFD6165C537 (UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD * __this, const RuntimeMethod* method)
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
// System.Int32 UnityMessageManager::generateId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityMessageManager_generateId_m044493EEA44FD0FE6040EAAC4F26AF0AA65D32B1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ID = ID + 1;
		IL2CPP_RUNTIME_CLASS_INIT(UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831_il2cpp_TypeInfo_var);
		int32_t L_0 = ((UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831_StaticFields*)il2cpp_codegen_static_fields_for(UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831_il2cpp_TypeInfo_var))->get_ID_6();
		((UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831_StaticFields*)il2cpp_codegen_static_fields_for(UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831_il2cpp_TypeInfo_var))->set_ID_6(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// return ID;
		int32_t L_1 = ((UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831_StaticFields*)il2cpp_codegen_static_fields_for(UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831_il2cpp_TypeInfo_var))->get_ID_6();
		return L_1;
	}
}
// System.Void UnityMessageManager::add_OnMessage(UnityMessageManager/MessageDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_add_OnMessage_m7F72EFB7A6934E92EE91211BE100AAFAC60F1EF8 (UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * __this, MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * V_0 = NULL;
	MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * V_1 = NULL;
	MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * V_2 = NULL;
	{
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_0 = __this->get_OnMessage_7();
		V_0 = L_0;
	}

IL_0007:
	{
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_1 = V_0;
		V_1 = L_1;
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_2 = V_1;
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 *)CastclassSealed((RuntimeObject*)L_4, MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9_il2cpp_TypeInfo_var));
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 ** L_5 = __this->get_address_of_OnMessage_7();
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_6 = V_2;
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_7 = V_1;
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_8;
		L_8 = InterlockedCompareExchangeImpl<MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 *>((MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 **)L_5, L_6, L_7);
		V_0 = L_8;
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_9 = V_0;
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_10 = V_1;
		if ((!(((RuntimeObject*)(MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 *)L_9) == ((RuntimeObject*)(MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityMessageManager::remove_OnMessage(UnityMessageManager/MessageDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_remove_OnMessage_mFBE226643D6E84B5D7931C507A60D9C965B8E2B0 (UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * __this, MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * V_0 = NULL;
	MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * V_1 = NULL;
	MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * V_2 = NULL;
	{
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_0 = __this->get_OnMessage_7();
		V_0 = L_0;
	}

IL_0007:
	{
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_1 = V_0;
		V_1 = L_1;
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_2 = V_1;
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 *)CastclassSealed((RuntimeObject*)L_4, MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9_il2cpp_TypeInfo_var));
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 ** L_5 = __this->get_address_of_OnMessage_7();
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_6 = V_2;
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_7 = V_1;
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_8;
		L_8 = InterlockedCompareExchangeImpl<MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 *>((MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 **)L_5, L_6, L_7);
		V_0 = L_8;
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_9 = V_0;
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_10 = V_1;
		if ((!(((RuntimeObject*)(MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 *)L_9) == ((RuntimeObject*)(MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityMessageManager::add_OnFlutterMessage(UnityMessageManager/MessageHandlerDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_add_OnFlutterMessage_m739FF9E4E00FCB9BC32CB2D7892444941B0601AC (UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * __this, MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * V_0 = NULL;
	MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * V_1 = NULL;
	MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * V_2 = NULL;
	{
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_0 = __this->get_OnFlutterMessage_8();
		V_0 = L_0;
	}

IL_0007:
	{
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_1 = V_0;
		V_1 = L_1;
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_2 = V_1;
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 *)CastclassSealed((RuntimeObject*)L_4, MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28_il2cpp_TypeInfo_var));
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 ** L_5 = __this->get_address_of_OnFlutterMessage_8();
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_6 = V_2;
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_7 = V_1;
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_8;
		L_8 = InterlockedCompareExchangeImpl<MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 *>((MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 **)L_5, L_6, L_7);
		V_0 = L_8;
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_9 = V_0;
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_10 = V_1;
		if ((!(((RuntimeObject*)(MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 *)L_9) == ((RuntimeObject*)(MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityMessageManager::remove_OnFlutterMessage(UnityMessageManager/MessageHandlerDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_remove_OnFlutterMessage_m6407A819093B1AFEF9270B4453A3E479124326A5 (UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * __this, MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * V_0 = NULL;
	MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * V_1 = NULL;
	MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * V_2 = NULL;
	{
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_0 = __this->get_OnFlutterMessage_8();
		V_0 = L_0;
	}

IL_0007:
	{
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_1 = V_0;
		V_1 = L_1;
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_2 = V_1;
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 *)CastclassSealed((RuntimeObject*)L_4, MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28_il2cpp_TypeInfo_var));
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 ** L_5 = __this->get_address_of_OnFlutterMessage_8();
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_6 = V_2;
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_7 = V_1;
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_8;
		L_8 = InterlockedCompareExchangeImpl<MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 *>((MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 **)L_5, L_6, L_7);
		V_0 = L_8;
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_9 = V_0;
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_10 = V_1;
		if ((!(((RuntimeObject*)(MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 *)L_9) == ((RuntimeObject*)(MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityMessageManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_Start_m366A7C3E50AE07BA45A2A49FE9382E9AA838F54B (UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessageManager_OnSceneLoaded_mD7DA9C76ADA8D8F30198B4D274FE391150DF7192_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.sceneLoaded += OnSceneLoaded;
		UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 * L_0 = (UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 *)il2cpp_codegen_object_new(UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906_il2cpp_TypeInfo_var);
		UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0(L_0, __this, (intptr_t)((intptr_t)UnityMessageManager_OnSceneLoaded_mD7DA9C76ADA8D8F30198B4D274FE391150DF7192_RuntimeMethod_var), /*hidden argument*/UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_add_sceneLoaded_m54990A485E2E66739E31090BDC3A4C01EF7729BA(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityMessageManager::OnSceneLoaded(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_OnSceneLoaded_mD7DA9C76ADA8D8F30198B4D274FE391150DF7192 (UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * __this, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___scene0, int32_t ___mode1, const RuntimeMethod* method)
{
	{
		// NativeAPI.OnSceneLoaded(scene, mode);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0 = ___scene0;
		int32_t L_1 = ___mode1;
		NativeAPI_OnSceneLoaded_m3664DB25D28063B8628236EA7338D05DEB78694A(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityMessageManager::ShowHostMainWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_ShowHostMainWindow_m247203DD3FC1D1995A57C0302A6E23E594A927D2 (UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * __this, const RuntimeMethod* method)
{
	{
		// NativeAPI.ShowHostMainWindow();
		NativeAPI_ShowHostMainWindow_mF11F3AE0A8A16104D2546D5225A967CAEF20F494(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityMessageManager::UnloadMainWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_UnloadMainWindow_m37214FA2AE636F567825DB030434D31C80223593 (UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * __this, const RuntimeMethod* method)
{
	{
		// NativeAPI.UnloadMainWindow();
		NativeAPI_UnloadMainWindow_mC078E094545CA94E5BAF399E7C8B75E39274A855(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityMessageManager::QuitUnityWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_QuitUnityWindow_m08F6EEDA9F59BB793055A6101DD1ACD62F18F49F (UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * __this, const RuntimeMethod* method)
{
	{
		// NativeAPI.QuitUnityWindow();
		NativeAPI_QuitUnityWindow_m53C753446251C8F1D17D43FAC31BFC8DAEB12607(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityMessageManager::SendMessageToFlutter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_SendMessageToFlutter_mABF45FAA298107DDF065EC21C6925F3C7A4C3FA7 (UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		// NativeAPI.SendMessageToFlutter(message);
		String_t* L_0 = ___message0;
		NativeAPI_SendMessageToFlutter_m589A00F5AE6DABEECC576A5E6BC709850513AE9B(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityMessageManager::SendMessageToFlutter(UnityMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_SendMessageToFlutter_m72DFFAE91711298BB40833DC9C92B0D3BD778C65 (UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * __this, UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD * ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m2097BED9B4E3EDCC2144E58088BF028DB0B48D99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_get_Instance_m2219FD0089F95EA990F58F8DC6D47F79E9FCECC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_tCE345733DAFD7C69997F22704982E2372C4BFCDD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ef__AnonymousType0_4__ctor_m82B466E8D610611C6867BC66AB3DA978BFB62E70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ef__AnonymousType0_4_tA4B468AA51ACFB35812852DE80F87F89E0F51F14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * V_1 = NULL;
	int32_t G_B4_0 = 0;
	int32_t G_B3_0 = 0;
	String_t* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	{
		// int id = generateId();
		IL2CPP_RUNTIME_CLASS_INIT(UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = UnityMessageManager_generateId_m044493EEA44FD0FE6040EAAC4F26AF0AA65D32B1(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (message.callBack != null)
		UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD * L_1 = ___message0;
		NullCheck(L_1);
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_2 = L_1->get_callBack_2();
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// waitCallbackMessageMap.Add(id, message);
		Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E * L_3 = __this->get_waitCallbackMessageMap_9();
		int32_t L_4 = V_0;
		UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD * L_5 = ___message0;
		NullCheck(L_3);
		Dictionary_2_Add_m2097BED9B4E3EDCC2144E58088BF028DB0B48D99(L_3, L_4, L_5, /*hidden argument*/Dictionary_2_Add_m2097BED9B4E3EDCC2144E58088BF028DB0B48D99_RuntimeMethod_var);
	}

IL_001b:
	{
		// JObject o = JObject.FromObject(new
		// {
		//     id = id,
		//     seq = message.callBack != null ? "start" : "",
		//     name = message.name,
		//     data = message.data
		// });
		int32_t L_6 = V_0;
		UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD * L_7 = ___message0;
		NullCheck(L_7);
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_8 = L_7->get_callBack_2();
		G_B3_0 = L_6;
		if (L_8)
		{
			G_B4_0 = L_6;
			goto IL_002b;
		}
	}
	{
		G_B5_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B5_1 = G_B3_0;
		goto IL_0030;
	}

IL_002b:
	{
		G_B5_0 = _stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD;
		G_B5_1 = G_B4_0;
	}

IL_0030:
	{
		UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD * L_9 = ___message0;
		NullCheck(L_9);
		String_t* L_10 = L_9->get_name_0();
		UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD * L_11 = ___message0;
		NullCheck(L_11);
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_12 = L_11->get_data_1();
		U3CU3Ef__AnonymousType0_4_tA4B468AA51ACFB35812852DE80F87F89E0F51F14 * L_13 = (U3CU3Ef__AnonymousType0_4_tA4B468AA51ACFB35812852DE80F87F89E0F51F14 *)il2cpp_codegen_object_new(U3CU3Ef__AnonymousType0_4_tA4B468AA51ACFB35812852DE80F87F89E0F51F14_il2cpp_TypeInfo_var);
		U3CU3Ef__AnonymousType0_4__ctor_m82B466E8D610611C6867BC66AB3DA978BFB62E70(L_13, G_B5_1, G_B5_0, L_10, L_12, /*hidden argument*/U3CU3Ef__AnonymousType0_4__ctor_m82B466E8D610611C6867BC66AB3DA978BFB62E70_RuntimeMethod_var);
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_14;
		L_14 = JObject_FromObject_m467B80E8812E8B4494FCCED0AE9CBC7A050C10CE(L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		// UnityMessageManager.Instance.SendMessageToFlutter(MessagePrefix + o.ToString());
		IL2CPP_RUNTIME_CLASS_INIT(SingletonMonoBehaviour_1_tCE345733DAFD7C69997F22704982E2372C4BFCDD_il2cpp_TypeInfo_var);
		UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * L_15;
		L_15 = SingletonMonoBehaviour_1_get_Instance_m2219FD0089F95EA990F58F8DC6D47F79E9FCECC2(/*hidden argument*/SingletonMonoBehaviour_1_get_Instance_m2219FD0089F95EA990F58F8DC6D47F79E9FCECC2_RuntimeMethod_var);
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_16 = V_1;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_16);
		String_t* L_18;
		L_18 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC, L_17, /*hidden argument*/NULL);
		NullCheck(L_15);
		UnityMessageManager_SendMessageToFlutter_mABF45FAA298107DDF065EC21C6925F3C7A4C3FA7(L_15, L_18, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityMessageManager::onMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_onMessage_m4D0F43F8D328F97496576D9930AAB3686E6A8558 (UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		// if (OnMessage != null)
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_0 = __this->get_OnMessage_7();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// OnMessage(message);
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_1 = __this->get_OnMessage_7();
		String_t* L_2 = ___message0;
		NullCheck(L_1);
		MessageDelegate_Invoke_m38A45D4D87F60621AB4E4B6A68DDDE146B332DDD(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void UnityMessageManager::onFlutterMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_onFlutterMessage_m1A5DC207EFB4A24E9571BDA6EBD3D8E3AFBB576F (UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m273238F996359EBF987A2836DA52FBF359AEFB67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m0382483D7D84AC88696EFBBD3566B8B7B4C927D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageHandler_getData_TisRuntimeObject_m4B0F54A0EA8EBDB824898342D0FB18471D377EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC);
		s_Il2CppMethodInitialized = true;
	}
	MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * V_0 = NULL;
	UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD * V_1 = NULL;
	{
		// if (message.StartsWith(MessagePrefix))
		String_t* L_0 = ___message0;
		NullCheck(L_0);
		bool L_1;
		L_1 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(L_0, _stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// message = message.Replace(MessagePrefix, "");
		String_t* L_2 = ___message0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_2, _stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		___message0 = L_3;
		// }
		goto IL_0022;
	}

IL_0021:
	{
		// return;
		return;
	}

IL_0022:
	{
		// MessageHandler handler = MessageHandler.Deserialize(message);
		String_t* L_4 = ___message0;
		MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * L_5;
		L_5 = MessageHandler_Deserialize_mFD7001A5166EDD8386B2979B3C0FDC4544D0F123(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// if ("end".Equals(handler.seq))
		MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = L_6->get_seq_1();
		NullCheck(_stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1);
		bool L_8;
		L_8 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(_stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_007c;
		}
	}
	{
		// if (waitCallbackMessageMap.TryGetValue(handler.id, out m))
		Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E * L_9 = __this->get_waitCallbackMessageMap_9();
		MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = L_10->get_id_0();
		NullCheck(L_9);
		bool L_12;
		L_12 = Dictionary_2_TryGetValue_m0382483D7D84AC88696EFBBD3566B8B7B4C927D5(L_9, L_11, (UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD **)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_m0382483D7D84AC88696EFBBD3566B8B7B4C927D5_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_007b;
		}
	}
	{
		// waitCallbackMessageMap.Remove(handler.id);
		Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E * L_13 = __this->get_waitCallbackMessageMap_9();
		MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = L_14->get_id_0();
		NullCheck(L_13);
		bool L_16;
		L_16 = Dictionary_2_Remove_m273238F996359EBF987A2836DA52FBF359AEFB67(L_13, L_15, /*hidden argument*/Dictionary_2_Remove_m273238F996359EBF987A2836DA52FBF359AEFB67_RuntimeMethod_var);
		// if (m.callBack != null)
		UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD * L_17 = V_1;
		NullCheck(L_17);
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_18 = L_17->get_callBack_2();
		if (!L_18)
		{
			goto IL_007b;
		}
	}
	{
		// m.callBack(handler.getData<object>()); // todo
		UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD * L_19 = V_1;
		NullCheck(L_19);
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_20 = L_19->get_callBack_2();
		MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * L_21 = V_0;
		NullCheck(L_21);
		RuntimeObject * L_22;
		L_22 = MessageHandler_getData_TisRuntimeObject_m4B0F54A0EA8EBDB824898342D0FB18471D377EC9(L_21, /*hidden argument*/MessageHandler_getData_TisRuntimeObject_m4B0F54A0EA8EBDB824898342D0FB18471D377EC9_RuntimeMethod_var);
		NullCheck(L_20);
		Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744(L_20, L_22, /*hidden argument*/Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_RuntimeMethod_var);
	}

IL_007b:
	{
		// return;
		return;
	}

IL_007c:
	{
		// if (OnFlutterMessage != null)
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_23 = __this->get_OnFlutterMessage_8();
		if (!L_23)
		{
			goto IL_0090;
		}
	}
	{
		// OnFlutterMessage(handler);
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_24 = __this->get_OnFlutterMessage_8();
		MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * L_25 = V_0;
		NullCheck(L_24);
		MessageHandlerDelegate_Invoke_m001CCB602D2B55DD220BF06E2AA4828575197FFE(L_24, L_25, /*hidden argument*/NULL);
	}

IL_0090:
	{
		// }
		return;
	}
}
// System.Void UnityMessageManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager__ctor_m03CBB4E08C8BA079E07D430AD377D38400DB82BF (UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mCDC1ED9FB26C45BCA609A92B7AA9757038C7C147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1__ctor_m0FD850D200F04E2F76476533783D9581729AB59F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_tCE345733DAFD7C69997F22704982E2372C4BFCDD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Dictionary<int, UnityMessage> waitCallbackMessageMap = new Dictionary<int, UnityMessage>();
		Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E * L_0 = (Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E *)il2cpp_codegen_object_new(Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCDC1ED9FB26C45BCA609A92B7AA9757038C7C147(L_0, /*hidden argument*/Dictionary_2__ctor_mCDC1ED9FB26C45BCA609A92B7AA9757038C7C147_RuntimeMethod_var);
		__this->set_waitCallbackMessageMap_9(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(SingletonMonoBehaviour_1_tCE345733DAFD7C69997F22704982E2372C4BFCDD_il2cpp_TypeInfo_var);
		SingletonMonoBehaviour_1__ctor_m0FD850D200F04E2F76476533783D9581729AB59F(__this, /*hidden argument*/SingletonMonoBehaviour_1__ctor_m0FD850D200F04E2F76476533783D9581729AB59F_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityMessageManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager__cctor_m89611F0C2BAAF282BE647049B11F835262EFDB73 (const RuntimeMethod* method)
{
	{
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 (MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	il2cppPInvokeFunc(____message0_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

}
// System.Void UnityMessageManager/MessageDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDelegate__ctor_mABBBB0720CEC9ADB6560700A2EE640194D040EF8 (MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityMessageManager/MessageDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDelegate_Invoke_m38A45D4D87F60621AB4E4B6A68DDDE146B332DDD (MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___message0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___message0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityMessageManager/MessageDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MessageDelegate_BeginInvoke_m5FD705274B59AF179AE22FF30A248A4A24B4BECA (MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * __this, String_t* ___message0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void UnityMessageManager/MessageDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDelegate_EndInvoke_m8EB1088C4795F088A729524E99334E63ED48E6B7 (MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityMessageManager/MessageHandlerDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandlerDelegate__ctor_m27BFC33CA6935FF169ED735C704019CD4DF0E8C1 (MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityMessageManager/MessageHandlerDelegate::Invoke(MessageHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandlerDelegate_Invoke_m001CCB602D2B55DD220BF06E2AA4828575197FFE (MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * __this, MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * ___handler0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___handler0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___handler0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___handler0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___handler0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___handler0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___handler0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___handler0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * >::Invoke(targetMethod, targetThis, ___handler0);
					else
						GenericVirtActionInvoker1< MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * >::Invoke(targetMethod, targetThis, ___handler0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___handler0);
					else
						VirtActionInvoker1< MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___handler0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___handler0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___handler0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityMessageManager/MessageHandlerDelegate::BeginInvoke(MessageHandler,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MessageHandlerDelegate_BeginInvoke_m6F3C7C037B912D8BD1CB2FAB6CF0E8D8CB3825BA (MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * __this, MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * ___handler0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___handler0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void UnityMessageManager/MessageHandlerDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandlerDelegate_EndInvoke_mE67B6A56FC2D25FC6BAE72DF3DDA9A01260DF3D2 (MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t733A71EE29E0C7D2F944E30A1729F085DEB1138C  ARHumanBody_get_joints_m3258FB1C8BB0B82F3F2E92DE025201E931A8C443_inline (ARHumanBody_tD50BBE7B486B76556A46BE9C799EE268D4ABB3B5 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<XRHumanBodyJoint> joints => m_Joints;
		NativeArray_1_t733A71EE29E0C7D2F944E30A1729F085DEB1138C  L_0 = __this->get_m_Joints_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  XRHumanBodyJoint_get_localPose_m0E5E0376C5F794FCEB47D6A55AD21945FD52864C_inline (XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4 * __this, const RuntimeMethod* method)
{
	{
		// public Pose localPose => m_LocalPose;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_0 = __this->get_m_LocalPose_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * ARHumanBodiesChangedEventArgs_get_added_mAB8A9ED730BF7C3F5B699DB4BE6A620912BD65E5_inline (ARHumanBodiesChangedEventArgs_t03BC9E10B0F7EA109F54F589571A7FCE26B18729 * __this, const RuntimeMethod* method)
{
	{
		// public List<ARHumanBody> added { get; private set; }
		List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * L_0 = __this->get_U3CaddedU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * ARHumanBodiesChangedEventArgs_get_updated_mC866F2A6E79A64291950D3DC79A4FEB320A0064B_inline (ARHumanBodiesChangedEventArgs_t03BC9E10B0F7EA109F54F589571A7FCE26B18729 * __this, const RuntimeMethod* method)
{
	{
		// public List<ARHumanBody> updated { get; private set; }
		List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * L_0 = __this->get_U3CupdatedU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * ARHumanBodiesChangedEventArgs_get_removed_m46187A1E3346C24439D3DADF25F3780B74EC452C_inline (ARHumanBodiesChangedEventArgs_t03BC9E10B0F7EA109F54F589571A7FCE26B18729 * __this, const RuntimeMethod* method)
{
	{
		// public List<ARHumanBody> removed { get; private set; }
		List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * L_0 = __this->get_U3CremovedU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_3();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
