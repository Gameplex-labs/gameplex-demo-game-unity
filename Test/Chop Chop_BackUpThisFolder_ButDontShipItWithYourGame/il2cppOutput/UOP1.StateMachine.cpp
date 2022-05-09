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

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<UnityEngine.ScriptableObject,System.Object>
struct Dictionary_2_t701330DAA667B6BC6DC537F393DB4AC36321F406;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Component>
struct Dictionary_2_t85103725B10537B9AE52FB0E98C01B8242CBF8FA;
// System.Func`2<UOP1.StateMachine.ScriptableObjects.TransitionTableSO/TransitionItem,System.Object>
struct Func_2_t45931610286A980239531927E889EB3FAFE7E5D6;
// System.Func`2<UOP1.StateMachine.ScriptableObjects.TransitionTableSO/TransitionItem,UOP1.StateMachine.ScriptableObjects.StateSO>
struct Func_2_t61B7B56BD9205365B0DEF3368DD274FA1E163F4E;
// System.Collections.Generic.IEnumerable`1<System.Linq.IGrouping`2<System.Object,UOP1.StateMachine.ScriptableObjects.TransitionTableSO/TransitionItem>>
struct IEnumerable_1_tCA328FE3E5D163EF8AD41F49F9F3228BFF5CC42D;
// System.Collections.Generic.IEnumerable`1<System.Linq.IGrouping`2<UOP1.StateMachine.ScriptableObjects.StateSO,UOP1.StateMachine.ScriptableObjects.TransitionTableSO/TransitionItem>>
struct IEnumerable_1_tD755A93577BE129D19EB0A4A723A6B6FC872B40B;
// System.Collections.Generic.IEnumerable`1<UOP1.StateMachine.ScriptableObjects.TransitionTableSO/TransitionItem>
struct IEnumerable_1_tBC6148FA4EB6090E84662285E2642B57F9B664A1;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.ScriptableObject>
struct IEqualityComparer_1_t35E66E848A3D681948391B76B13AF9BA1B237E54;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t7EEC9B4006D6D425748908D52AA799197F29A165;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.ScriptableObject,System.Object>
struct KeyCollection_tB435F4B838531BEF55C3A9802FEA6835DB9D1453;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,UnityEngine.Component>
struct KeyCollection_t3BD8ACF12577D3AEB12E50A5C86BE67B4A3D5CCB;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UOP1.StateMachine.State>
struct List_1_tE077A81CF091F6F3535712AAF6459188ED461EEA;
// System.Collections.Generic.List`1<UOP1.StateMachine.StateTransition>
struct List_1_t5949E2873005DB039313FCF7FB69F28583DE10D5;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.ScriptableObject,System.Object>
struct ValueCollection_t500B9556DC700AE360FF5E1A976500D334AD41CB;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,UnityEngine.Component>
struct ValueCollection_t46D90772A1B3E5BF55E9D08D6930679F6337EEB9;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.ScriptableObject,System.Object>[]
struct EntryU5BU5D_tD57F2AD498DFADBBA4B40DD504B99837C2511160;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,UnityEngine.Component>[]
struct EntryU5BU5D_tECD06A24CAC99ADB257317CF8B9C483555C899E8;
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UOP1.StateMachine.IStateComponent[]
struct IStateComponentU5BU5D_t453B498EEAA39168FEE5CA4D000F5EFD804449D1;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UOP1.StateMachine.State[]
struct StateU5BU5D_tF638C5F5E2AE3F9E01E7505F31600E967E9BD785;
// UOP1.StateMachine.StateAction[]
struct StateActionU5BU5D_t78E8D648909411BB414715FCAE95ACF10F5869D7;
// UOP1.StateMachine.ScriptableObjects.StateActionSO[]
struct StateActionSOU5BU5D_tCB65969F8168B6B776CF8CD8C1838B209AD03339;
// UOP1.StateMachine.StateCondition[]
struct StateConditionU5BU5D_tAB59A90CA4CE595EBDD2E47AE6990F3E2C0A01A0;
// UOP1.StateMachine.StateTransition[]
struct StateTransitionU5BU5D_tD07E9FA7E8D70ED2696D86C41A41673A2F57D212;
// UOP1.StateMachine.ScriptableObjects.TransitionTableSO/ConditionUsage[]
struct ConditionUsageU5BU5D_tA4F67BFAB079BE9A29A37E7089C6027397347A81;
// UOP1.StateMachine.ScriptableObjects.TransitionTableSO/TransitionItem[]
struct TransitionItemU5BU5D_t48946B4E3EEF9A6B9D5501D02D81B6C8CD0C4C14;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UOP1.StateMachine.Condition
struct Condition_tF90A1BDDA617FE9E50B9EC09EBE9069291DACEBE;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UOP1.StateMachine.ScriptableObjects.DescriptionSMActionBaseSO
struct DescriptionSMActionBaseSO_t73BEA70154A0D4C4F83DBE2E14F709D2C548421D;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// UOP1.StateMachine.IStateComponent
struct IStateComponent_t391CB78967028D5ED5B6241BC2BD7E0E3E635D6F;
// UOP1.StateMachine.InitOnlyAttribute
struct InitOnlyAttribute_tC254EF4B7F9E4DFA3FFE48B5B5F9C0C02E4A0DED;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.PropertyAttribute
struct PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// UOP1.StateMachine.State
struct State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9;
// UOP1.StateMachine.StateAction
struct StateAction_t89AE978DB2427B6779144284E8D8990F2FCB89F5;
// UOP1.StateMachine.ScriptableObjects.StateActionSO
struct StateActionSO_t096FFFB367484F1D4001EB84C41F08FBBEE54464;
// UOP1.StateMachine.ScriptableObjects.StateConditionSO
struct StateConditionSO_t289259ED0499C139B5D115D98B5E6F981068C076;
// UOP1.StateMachine.StateMachine
struct StateMachine_tFB54EE0D17C72BF68C4199F5384DC5FA0A5EB715;
// UOP1.StateMachine.ScriptableObjects.StateSO
struct StateSO_tF4CE457955F5F6AE1566DA9CA381B389AA15C54A;
// UOP1.StateMachine.StateTransition
struct StateTransition_t0A8BCCF7B94D6D0F026E95E8748066423BF97077;
// System.String
struct String_t;
// UOP1.StateMachine.ScriptableObjects.TransitionTableSO
struct TransitionTableSO_t7C3E2776FE97CE6C269F81F8880745E200A12CC3;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UOP1.StateMachine.ScriptableObjects.TransitionTableSO/<>c
struct U3CU3Ec_t44EBF2D264D41EEF6EA90DA642F31B6AC8ED0379;
// UOP1.StateMachine.ScriptableObjects.TransitionTableSO/ConditionUsage
struct ConditionUsage_tB5A4FB8501060EF8D8F5CD9CC03064EE7B977B3E;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Condition_tF90A1BDDA617FE9E50B9EC09EBE9069291DACEBE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t701330DAA667B6BC6DC537F393DB4AC36321F406_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t85103725B10537B9AE52FB0E98C01B8242CBF8FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t61B7B56BD9205365B0DEF3368DD274FA1E163F4E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tBC6148FA4EB6090E84662285E2642B57F9B664A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tD755A93577BE129D19EB0A4A723A6B6FC872B40B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t0DB3554316EA15B682D6E7EA0D0A59F362E763EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t4029F825BAD948A13C17174D7D7898FC7720CE01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IGrouping_2_t5B3D87D174A0BFA10DE9B15D7F081424E4D40C40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStateComponent_t391CB78967028D5ED5B6241BC2BD7E0E3E635D6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t5949E2873005DB039313FCF7FB69F28583DE10D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE077A81CF091F6F3535712AAF6459188ED461EEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StateActionU5BU5D_t78E8D648909411BB414715FCAE95ACF10F5869D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StateAction_t89AE978DB2427B6779144284E8D8990F2FCB89F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StateConditionU5BU5D_tAB59A90CA4CE595EBDD2E47AE6990F3E2C0A01A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StateTransitionU5BU5D_tD07E9FA7E8D70ED2696D86C41A41673A2F57D212_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StateTransition_t0A8BCCF7B94D6D0F026E95E8748066423BF97077_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t44EBF2D264D41EEF6EA90DA642F31B6AC8ED0379_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral6E6FD40561D5ECBF4E509F159E8F2E38CE21CCE5;
IL2CPP_EXTERN_C String_t* _stringLiteral722B024FCA9E3161DA5ADB42442F7B4AFE7D1B40;
IL2CPP_EXTERN_C String_t* _stringLiteral772790A3A0B6A4F545FC12909FF7D055E3265B16;
IL2CPP_EXTERN_C String_t* _stringLiteralA151F9E52C2190AD8CD1AF032F2DC1E673A7EF62;
IL2CPP_EXTERN_C String_t* _stringLiteralB720A9AE58815DFF5576319E5228D318E7899C07;
IL2CPP_EXTERN_C String_t* _stringLiteralDB459CE61A68F02520742A399942F95B73B542AF;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mDBF533176920ACB60C2D3D2DEEE5B72A074D557A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m3060E96E67EC2DEBE23B4186D425A9FE8F8496D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC7A5AF370D0A97F954E753D5D3DEC7D72DDAF6D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mEE20691019BC8C1B512352003E8D9C44E0A3A1B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_GroupBy_TisTransitionItem_tC4F31A31024167F78AAC0F788A5F606F6055AE0A_TisStateSO_tF4CE457955F5F6AE1566DA9CA381B389AA15C54A_m6C512956F3595B1F62705F2BE641C1440DCCDFF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m05A132C1DA090BCE4B14548D9CD0C97D324C5B9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m787035E7D5BAE5D9F8987FF3CFBAC311CABD8FF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mABF8C4FB3AF6552FBD7630F0F68A63FFB861C0D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mC10D151B7215ADE22FA4046D0307FEF3153D6332_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mC08058A95C0AFA8892C925A5C87C41FC72D8321D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m00355B270860BD75B5AA31B2C81C487A190BE9FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m46B91DDD24C3311D7C33580F31089735F6CE450F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m701A5158B3DD8B9B2CB0A4C5BC5B6D7ADFB21D70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m9480C02B5F6372D50026AEDC262FF3192D63C8C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransitionTableSO_GetInitialState_mB5C0868BA5BCA574E80B5E4CB3FABB7368C4F840_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetInitialStateU3Eb__1_0_m0DE5A785F39D386D8E3593ED69019207EED04876_RuntimeMethod_var;
struct ConditionUsage_tB5A4FB8501060EF8D8F5CD9CC03064EE7B977B3E;;
struct ConditionUsage_tB5A4FB8501060EF8D8F5CD9CC03064EE7B977B3E_marshaled_com;
struct ConditionUsage_tB5A4FB8501060EF8D8F5CD9CC03064EE7B977B3E_marshaled_com;;
struct ConditionUsage_tB5A4FB8501060EF8D8F5CD9CC03064EE7B977B3E_marshaled_pinvoke;
struct ConditionUsage_tB5A4FB8501060EF8D8F5CD9CC03064EE7B977B3E_marshaled_pinvoke;;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
struct IStateComponentU5BU5D_t453B498EEAA39168FEE5CA4D000F5EFD804449D1;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StateActionU5BU5D_t78E8D648909411BB414715FCAE95ACF10F5869D7;
struct StateActionSOU5BU5D_tCB65969F8168B6B776CF8CD8C1838B209AD03339;
struct StateConditionU5BU5D_tAB59A90CA4CE595EBDD2E47AE6990F3E2C0A01A0;
struct StateTransitionU5BU5D_tD07E9FA7E8D70ED2696D86C41A41673A2F57D212;
struct ConditionUsageU5BU5D_tA4F67BFAB079BE9A29A37E7089C6027397347A81;
struct TransitionItemU5BU5D_t48946B4E3EEF9A6B9D5501D02D81B6C8CD0C4C14;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t1E414D4CF6663544D29106B17BFBEF0D22980480 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<UnityEngine.ScriptableObject,System.Object>
struct Dictionary_2_t701330DAA667B6BC6DC537F393DB4AC36321F406  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tD57F2AD498DFADBBA4B40DD504B99837C2511160* ___entries_1;
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
	KeyCollection_tB435F4B838531BEF55C3A9802FEA6835DB9D1453 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t500B9556DC700AE360FF5E1A976500D334AD41CB * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t701330DAA667B6BC6DC537F393DB4AC36321F406, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t701330DAA667B6BC6DC537F393DB4AC36321F406, ___entries_1)); }
	inline EntryU5BU5D_tD57F2AD498DFADBBA4B40DD504B99837C2511160* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tD57F2AD498DFADBBA4B40DD504B99837C2511160** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tD57F2AD498DFADBBA4B40DD504B99837C2511160* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t701330DAA667B6BC6DC537F393DB4AC36321F406, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t701330DAA667B6BC6DC537F393DB4AC36321F406, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t701330DAA667B6BC6DC537F393DB4AC36321F406, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t701330DAA667B6BC6DC537F393DB4AC36321F406, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t701330DAA667B6BC6DC537F393DB4AC36321F406, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t701330DAA667B6BC6DC537F393DB4AC36321F406, ___keys_7)); }
	inline KeyCollection_tB435F4B838531BEF55C3A9802FEA6835DB9D1453 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tB435F4B838531BEF55C3A9802FEA6835DB9D1453 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tB435F4B838531BEF55C3A9802FEA6835DB9D1453 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t701330DAA667B6BC6DC537F393DB4AC36321F406, ___values_8)); }
	inline ValueCollection_t500B9556DC700AE360FF5E1A976500D334AD41CB * get_values_8() const { return ___values_8; }
	inline ValueCollection_t500B9556DC700AE360FF5E1A976500D334AD41CB ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t500B9556DC700AE360FF5E1A976500D334AD41CB * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t701330DAA667B6BC6DC537F393DB4AC36321F406, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Component>
struct Dictionary_2_t85103725B10537B9AE52FB0E98C01B8242CBF8FA  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tECD06A24CAC99ADB257317CF8B9C483555C899E8* ___entries_1;
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
	KeyCollection_t3BD8ACF12577D3AEB12E50A5C86BE67B4A3D5CCB * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t46D90772A1B3E5BF55E9D08D6930679F6337EEB9 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t85103725B10537B9AE52FB0E98C01B8242CBF8FA, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t85103725B10537B9AE52FB0E98C01B8242CBF8FA, ___entries_1)); }
	inline EntryU5BU5D_tECD06A24CAC99ADB257317CF8B9C483555C899E8* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tECD06A24CAC99ADB257317CF8B9C483555C899E8** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tECD06A24CAC99ADB257317CF8B9C483555C899E8* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t85103725B10537B9AE52FB0E98C01B8242CBF8FA, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t85103725B10537B9AE52FB0E98C01B8242CBF8FA, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t85103725B10537B9AE52FB0E98C01B8242CBF8FA, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t85103725B10537B9AE52FB0E98C01B8242CBF8FA, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t85103725B10537B9AE52FB0E98C01B8242CBF8FA, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t85103725B10537B9AE52FB0E98C01B8242CBF8FA, ___keys_7)); }
	inline KeyCollection_t3BD8ACF12577D3AEB12E50A5C86BE67B4A3D5CCB * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t3BD8ACF12577D3AEB12E50A5C86BE67B4A3D5CCB ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t3BD8ACF12577D3AEB12E50A5C86BE67B4A3D5CCB * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t85103725B10537B9AE52FB0E98C01B8242CBF8FA, ___values_8)); }
	inline ValueCollection_t46D90772A1B3E5BF55E9D08D6930679F6337EEB9 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t46D90772A1B3E5BF55E9D08D6930679F6337EEB9 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t46D90772A1B3E5BF55E9D08D6930679F6337EEB9 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t85103725B10537B9AE52FB0E98C01B8242CBF8FA, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____items_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
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


// System.Collections.Generic.List`1<UOP1.StateMachine.State>
struct List_1_tE077A81CF091F6F3535712AAF6459188ED461EEA  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StateU5BU5D_tF638C5F5E2AE3F9E01E7505F31600E967E9BD785* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE077A81CF091F6F3535712AAF6459188ED461EEA, ____items_1)); }
	inline StateU5BU5D_tF638C5F5E2AE3F9E01E7505F31600E967E9BD785* get__items_1() const { return ____items_1; }
	inline StateU5BU5D_tF638C5F5E2AE3F9E01E7505F31600E967E9BD785** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StateU5BU5D_tF638C5F5E2AE3F9E01E7505F31600E967E9BD785* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE077A81CF091F6F3535712AAF6459188ED461EEA, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE077A81CF091F6F3535712AAF6459188ED461EEA, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE077A81CF091F6F3535712AAF6459188ED461EEA, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE077A81CF091F6F3535712AAF6459188ED461EEA_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StateU5BU5D_tF638C5F5E2AE3F9E01E7505F31600E967E9BD785* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE077A81CF091F6F3535712AAF6459188ED461EEA_StaticFields, ____emptyArray_5)); }
	inline StateU5BU5D_tF638C5F5E2AE3F9E01E7505F31600E967E9BD785* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StateU5BU5D_tF638C5F5E2AE3F9E01E7505F31600E967E9BD785** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StateU5BU5D_tF638C5F5E2AE3F9E01E7505F31600E967E9BD785* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UOP1.StateMachine.StateTransition>
struct List_1_t5949E2873005DB039313FCF7FB69F28583DE10D5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StateTransitionU5BU5D_tD07E9FA7E8D70ED2696D86C41A41673A2F57D212* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t5949E2873005DB039313FCF7FB69F28583DE10D5, ____items_1)); }
	inline StateTransitionU5BU5D_tD07E9FA7E8D70ED2696D86C41A41673A2F57D212* get__items_1() const { return ____items_1; }
	inline StateTransitionU5BU5D_tD07E9FA7E8D70ED2696D86C41A41673A2F57D212** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StateTransitionU5BU5D_tD07E9FA7E8D70ED2696D86C41A41673A2F57D212* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t5949E2873005DB039313FCF7FB69F28583DE10D5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t5949E2873005DB039313FCF7FB69F28583DE10D5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t5949E2873005DB039313FCF7FB69F28583DE10D5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t5949E2873005DB039313FCF7FB69F28583DE10D5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StateTransitionU5BU5D_tD07E9FA7E8D70ED2696D86C41A41673A2F57D212* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t5949E2873005DB039313FCF7FB69F28583DE10D5_StaticFields, ____emptyArray_5)); }
	inline StateTransitionU5BU5D_tD07E9FA7E8D70ED2696D86C41A41673A2F57D212* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StateTransitionU5BU5D_tD07E9FA7E8D70ED2696D86C41A41673A2F57D212** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StateTransitionU5BU5D_tD07E9FA7E8D70ED2696D86C41A41673A2F57D212* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// UOP1.StateMachine.Condition
struct Condition_tF90A1BDDA617FE9E50B9EC09EBE9069291DACEBE  : public RuntimeObject
{
public:
	// System.Boolean UOP1.StateMachine.Condition::_isCached
	bool ____isCached_0;
	// System.Boolean UOP1.StateMachine.Condition::_cachedStatement
	bool ____cachedStatement_1;
	// UOP1.StateMachine.ScriptableObjects.StateConditionSO UOP1.StateMachine.Condition::_originSO
	StateConditionSO_t289259ED0499C139B5D115D98B5E6F981068C076 * ____originSO_2;

public:
	inline static int32_t get_offset_of__isCached_0() { return static_cast<int32_t>(offsetof(Condition_tF90A1BDDA617FE9E50B9EC09EBE9069291DACEBE, ____isCached_0)); }
	inline bool get__isCached_0() const { return ____isCached_0; }
	inline bool* get_address_of__isCached_0() { return &____isCached_0; }
	inline void set__isCached_0(bool value)
	{
		____isCached_0 = value;
	}

	inline static int32_t get_offset_of__cachedStatement_1() { return static_cast<int32_t>(offsetof(Condition_tF90A1BDDA617FE9E50B9EC09EBE9069291DACEBE, ____cachedStatement_1)); }
	inline bool get__cachedStatement_1() const { return ____cachedStatement_1; }
	inline bool* get_address_of__cachedStatement_1() { return &____cachedStatement_1; }
	inline void set__cachedStatement_1(bool value)
	{
		____cachedStatement_1 = value;
	}

	inline static int32_t get_offset_of__originSO_2() { return static_cast<int32_t>(offsetof(Condition_tF90A1BDDA617FE9E50B9EC09EBE9069291DACEBE, ____originSO_2)); }
	inline StateConditionSO_t289259ED0499C139B5D115D98B5E6F981068C076 * get__originSO_2() const { return ____originSO_2; }
	inline StateConditionSO_t289259ED0499C139B5D115D98B5E6F981068C076 ** get_address_of__originSO_2() { return &____originSO_2; }
	inline void set__originSO_2(StateConditionSO_t289259ED0499C139B5D115D98B5E6F981068C076 * value)
	{
		____originSO_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____originSO_2), (void*)value);
	}
};


// UOP1.StateMachine.State
struct State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9  : public RuntimeObject
{
public:
	// UOP1.StateMachine.ScriptableObjects.StateSO UOP1.StateMachine.State::_originSO
	StateSO_tF4CE457955F5F6AE1566DA9CA381B389AA15C54A * ____originSO_0;
	// UOP1.StateMachine.StateMachine UOP1.StateMachine.State::_stateMachine
	StateMachine_tFB54EE0D17C72BF68C4199F5384DC5FA0A5EB715 * ____stateMachine_1;
	// UOP1.StateMachine.StateTransition[] UOP1.StateMachine.State::_transitions
	StateTransitionU5BU5D_tD07E9FA7E8D70ED2696D86C41A41673A2F57D212* ____transitions_2;
	// UOP1.StateMachine.StateAction[] UOP1.StateMachine.State::_actions
	StateActionU5BU5D_t78E8D648909411BB414715FCAE95ACF10F5869D7* ____actions_3;

public:
	inline static int32_t get_offset_of__originSO_0() { return static_cast<int32_t>(offsetof(State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9, ____originSO_0)); }
	inline StateSO_tF4CE457955F5F6AE1566DA9CA381B389AA15C54A * get__originSO_0() const { return ____originSO_0; }
	inline StateSO_tF4CE457955F5F6AE1566DA9CA381B389AA15C54A ** get_address_of__originSO_0() { return &____originSO_0; }
	inline void set__originSO_0(StateSO_tF4CE457955F5F6AE1566DA9CA381B389AA15C54A * value)
	{
		____originSO_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____originSO_0), (void*)value);
	}

	inline static int32_t get_offset_of__stateMachine_1() { return static_cast<int32_t>(offsetof(State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9, ____stateMachine_1)); }
	inline StateMachine_tFB54EE0D17C72BF68C4199F5384DC5FA0A5EB715 * get__stateMachine_1() const { return ____stateMachine_1; }
	inline StateMachine_tFB54EE0D17C72BF68C4199F5384DC5FA0A5EB715 ** get_address_of__stateMachine_1() { return &____stateMachine_1; }
	inline void set__stateMachine_1(StateMachine_tFB54EE0D17C72BF68C4199F5384DC5FA0A5EB715 * value)
	{
		____stateMachine_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stateMachine_1), (void*)value);
	}

	inline static int32_t get_offset_of__transitions_2() { return static_cast<int32_t>(offsetof(State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9, ____transitions_2)); }
	inline StateTransitionU5BU5D_tD07E9FA7E8D70ED2696D86C41A41673A2F57D212* get__transitions_2() const { return ____transitions_2; }
	inline StateTransitionU5BU5D_tD07E9FA7E8D70ED2696D86C41A41673A2F57D212** get_address_of__transitions_2() { return &____transitions_2; }
	inline void set__transitions_2(StateTransitionU5BU5D_tD07E9FA7E8D70ED2696D86C41A41673A2F57D212* value)
	{
		____transitions_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____transitions_2), (void*)value);
	}

	inline static int32_t get_offset_of__actions_3() { return static_cast<int32_t>(offsetof(State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9, ____actions_3)); }
	inline StateActionU5BU5D_t78E8D648909411BB414715FCAE95ACF10F5869D7* get__actions_3() const { return ____actions_3; }
	inline StateActionU5BU5D_t78E8D648909411BB414715FCAE95ACF10F5869D7** get_address_of__actions_3() { return &____actions_3; }
	inline void set__actions_3(StateActionU5BU5D_t78E8D648909411BB414715FCAE95ACF10F5869D7* value)
	{
		____actions_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____actions_3), (void*)value);
	}
};


// UOP1.StateMachine.StateAction
struct StateAction_t89AE978DB2427B6779144284E8D8990F2FCB89F5  : public RuntimeObject
{
public:
	// UOP1.StateMachine.ScriptableObjects.StateActionSO UOP1.StateMachine.StateAction::_originSO
	StateActionSO_t096FFFB367484F1D4001EB84C41F08FBBEE54464 * ____originSO_0;

public:
	inline static int32_t get_offset_of__originSO_0() { return static_cast<int32_t>(offsetof(StateAction_t89AE978DB2427B6779144284E8D8990F2FCB89F5, ____originSO_0)); }
	inline StateActionSO_t096FFFB367484F1D4001EB84C41F08FBBEE54464 * get__originSO_0() const { return ____originSO_0; }
	inline StateActionSO_t096FFFB367484F1D4001EB84C41F08FBBEE54464 ** get_address_of__originSO_0() { return &____originSO_0; }
	inline void set__originSO_0(StateActionSO_t096FFFB367484F1D4001EB84C41F08FBBEE54464 * value)
	{
		____originSO_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____originSO_0), (void*)value);
	}
};


// UOP1.StateMachine.StateTransition
struct StateTransition_t0A8BCCF7B94D6D0F026E95E8748066423BF97077  : public RuntimeObject
{
public:
	// UOP1.StateMachine.State UOP1.StateMachine.StateTransition::_targetState
	State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 * ____targetState_0;
	// UOP1.StateMachine.StateCondition[] UOP1.StateMachine.StateTransition::_conditions
	StateConditionU5BU5D_tAB59A90CA4CE595EBDD2E47AE6990F3E2C0A01A0* ____conditions_1;
	// System.Int32[] UOP1.StateMachine.StateTransition::_resultGroups
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____resultGroups_2;
	// System.Boolean[] UOP1.StateMachine.StateTransition::_results
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ____results_3;

public:
	inline static int32_t get_offset_of__targetState_0() { return static_cast<int32_t>(offsetof(StateTransition_t0A8BCCF7B94D6D0F026E95E8748066423BF97077, ____targetState_0)); }
	inline State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 * get__targetState_0() const { return ____targetState_0; }
	inline State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 ** get_address_of__targetState_0() { return &____targetState_0; }
	inline void set__targetState_0(State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 * value)
	{
		____targetState_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____targetState_0), (void*)value);
	}

	inline static int32_t get_offset_of__conditions_1() { return static_cast<int32_t>(offsetof(StateTransition_t0A8BCCF7B94D6D0F026E95E8748066423BF97077, ____conditions_1)); }
	inline StateConditionU5BU5D_tAB59A90CA4CE595EBDD2E47AE6990F3E2C0A01A0* get__conditions_1() const { return ____conditions_1; }
	inline StateConditionU5BU5D_tAB59A90CA4CE595EBDD2E47AE6990F3E2C0A01A0** get_address_of__conditions_1() { return &____conditions_1; }
	inline void set__conditions_1(StateConditionU5BU5D_tAB59A90CA4CE595EBDD2E47AE6990F3E2C0A01A0* value)
	{
		____conditions_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____conditions_1), (void*)value);
	}

	inline static int32_t get_offset_of__resultGroups_2() { return static_cast<int32_t>(offsetof(StateTransition_t0A8BCCF7B94D6D0F026E95E8748066423BF97077, ____resultGroups_2)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__resultGroups_2() const { return ____resultGroups_2; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__resultGroups_2() { return &____resultGroups_2; }
	inline void set__resultGroups_2(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____resultGroups_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____resultGroups_2), (void*)value);
	}

	inline static int32_t get_offset_of__results_3() { return static_cast<int32_t>(offsetof(StateTransition_t0A8BCCF7B94D6D0F026E95E8748066423BF97077, ____results_3)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get__results_3() const { return ____results_3; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of__results_3() { return &____results_3; }
	inline void set__results_3(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		____results_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____results_3), (void*)value);
	}
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

// UOP1.StateMachine.ScriptableObjects.TransitionTableSO/<>c
struct U3CU3Ec_t44EBF2D264D41EEF6EA90DA642F31B6AC8ED0379  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t44EBF2D264D41EEF6EA90DA642F31B6AC8ED0379_StaticFields
{
public:
	// UOP1.StateMachine.ScriptableObjects.TransitionTableSO/<>c UOP1.StateMachine.ScriptableObjects.TransitionTableSO/<>c::<>9
	U3CU3Ec_t44EBF2D264D41EEF6EA90DA642F31B6AC8ED0379 * ___U3CU3E9_0;
	// System.Func`2<UOP1.StateMachine.ScriptableObjects.TransitionTableSO/TransitionItem,UOP1.StateMachine.ScriptableObjects.StateSO> UOP1.StateMachine.ScriptableObjects.TransitionTableSO/<>c::<>9__1_0
	Func_2_t61B7B56BD9205365B0DEF3368DD274FA1E163F4E * ___U3CU3E9__1_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t44EBF2D264D41EEF6EA90DA642F31B6AC8ED0379_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t44EBF2D264D41EEF6EA90DA642F31B6AC8ED0379 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t44EBF2D264D41EEF6EA90DA642F31B6AC8ED0379 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t44EBF2D264D41EEF6EA90DA642F31B6AC8ED0379 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t44EBF2D264D41EEF6EA90DA642F31B6AC8ED0379_StaticFields, ___U3CU3E9__1_0_1)); }
	inline Func_2_t61B7B56BD9205365B0DEF3368DD274FA1E163F4E * get_U3CU3E9__1_0_1() const { return ___U3CU3E9__1_0_1; }
	inline Func_2_t61B7B56BD9205365B0DEF3368DD274FA1E163F4E ** get_address_of_U3CU3E9__1_0_1() { return &___U3CU3E9__1_0_1; }
	inline void set_U3CU3E9__1_0_1(Func_2_t61B7B56BD9205365B0DEF3368DD274FA1E163F4E * value)
	{
		___U3CU3E9__1_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__1_0_1), (void*)value);
	}
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


// UnityEngine.PropertyAttribute
struct PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// UOP1.StateMachine.StateCondition
struct StateCondition_t6D1708031DFC3FBA54B621BD5B684D0DD8F0CA8D 
{
public:
	// UOP1.StateMachine.StateMachine UOP1.StateMachine.StateCondition::_stateMachine
	StateMachine_tFB54EE0D17C72BF68C4199F5384DC5FA0A5EB715 * ____stateMachine_0;
	// UOP1.StateMachine.Condition UOP1.StateMachine.StateCondition::_condition
	Condition_tF90A1BDDA617FE9E50B9EC09EBE9069291DACEBE * ____condition_1;
	// System.Boolean UOP1.StateMachine.StateCondition::_expectedResult
	bool ____expectedResult_2;

public:
	inline static int32_t get_offset_of__stateMachine_0() { return static_cast<int32_t>(offsetof(StateCondition_t6D1708031DFC3FBA54B621BD5B684D0DD8F0CA8D, ____stateMachine_0)); }
	inline StateMachine_tFB54EE0D17C72BF68C4199F5384DC5FA0A5EB715 * get__stateMachine_0() const { return ____stateMachine_0; }
	inline StateMachine_tFB54EE0D17C72BF68C4199F5384DC5FA0A5EB715 ** get_address_of__stateMachine_0() { return &____stateMachine_0; }
	inline void set__stateMachine_0(StateMachine_tFB54EE0D17C72BF68C4199F5384DC5FA0A5EB715 * value)
	{
		____stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of__condition_1() { return static_cast<int32_t>(offsetof(StateCondition_t6D1708031DFC3FBA54B621BD5B684D0DD8F0CA8D, ____condition_1)); }
	inline Condition_tF90A1BDDA617FE9E50B9EC09EBE9069291DACEBE * get__condition_1() const { return ____condition_1; }
	inline Condition_tF90A1BDDA617FE9E50B9EC09EBE9069291DACEBE ** get_address_of__condition_1() { return &____condition_1; }
	inline void set__condition_1(Condition_tF90A1BDDA617FE9E50B9EC09EBE9069291DACEBE * value)
	{
		____condition_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____condition_1), (void*)value);
	}

	inline static int32_t get_offset_of__expectedResult_2() { return static_cast<int32_t>(offsetof(StateCondition_t6D1708031DFC3FBA54B621BD5B684D0DD8F0CA8D, ____expectedResult_2)); }
	inline bool get__expectedResult_2() const { return ____expectedResult_2; }
	inline bool* get_address_of__expectedResult_2() { return &____expectedResult_2; }
	inline void set__expectedResult_2(bool value)
	{
		____expectedResult_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UOP1.StateMachine.StateCondition
struct StateCondition_t6D1708031DFC3FBA54B621BD5B684D0DD8F0CA8D_marshaled_pinvoke
{
	StateMachine_tFB54EE0D17C72BF68C4199F5384DC5FA0A5EB715 * ____stateMachine_0;
	Condition_tF90A1BDDA617FE9E50B9EC09EBE9069291DACEBE * ____condition_1;
	int32_t ____expectedResult_2;
};
// Native definition for COM marshalling of UOP1.StateMachine.StateCondition
struct StateCondition_t6D1708031DFC3FBA54B621BD5B684D0DD8F0CA8D_marshaled_com
{
	StateMachine_tFB54EE0D17C72BF68C4199F5384DC5FA0A5EB715 * ____stateMachine_0;
	Condition_tF90A1BDDA617FE9E50B9EC09EBE9069291DACEBE * ____condition_1;
	int32_t ____expectedResult_2;
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


// UOP1.StateMachine.ScriptableObjects.TransitionTableSO/TransitionItem
struct TransitionItem_tC4F31A31024167F78AAC0F788A5F606F6055AE0A 
{
public:
	// UOP1.StateMachine.ScriptableObjects.StateSO UOP1.StateMachine.ScriptableObjects.TransitionTableSO/TransitionItem::FromState
	StateSO_tF4CE457955F5F6AE1566DA9CA381B389AA15C54A * ___FromState_0;
	// UOP1.StateMachine.ScriptableObjects.StateSO UOP1.StateMachine.ScriptableObjects.TransitionTableSO/TransitionItem::ToState
	StateSO_tF4CE457955F5F6AE1566DA9CA381B389AA15C54A * ___ToState_1;
	// UOP1.StateMachine.ScriptableObjects.TransitionTableSO/ConditionUsage[] UOP1.StateMachine.ScriptableObjects.TransitionTableSO/TransitionItem::Conditions
	ConditionUsageU5BU5D_tA4F67BFAB079BE9A29A37E7089C6027397347A81* ___Conditions_2;

public:
	inline static int32_t get_offset_of_FromState_0() { return static_cast<int32_t>(offsetof(TransitionItem_tC4F31A31024167F78AAC0F788A5F606F6055AE0A, ___FromState_0)); }
	inline StateSO_tF4CE457955F5F6AE1566DA9CA381B389AA15C54A * get_FromState_0() const { return ___FromState_0; }
	inline StateSO_tF4CE457955F5F6AE1566DA9CA381B389AA15C54A ** get_address_of_FromState_0() { return &___FromState_0; }
	inline void set_FromState_0(StateSO_tF4CE457955F5F6AE1566DA9CA381B389AA15C54A * value)
	{
		___FromState_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FromState_0), (void*)value);
	}

	inline static int32_t get_offset_of_ToState_1() { return static_cast<int32_t>(offsetof(TransitionItem_tC4F31A31024167F78AAC0F788A5F606F6055AE0A, ___ToState_1)); }
	inline StateSO_tF4CE457955F5F6AE1566DA9CA381B389AA15C54A * get_ToState_1() const { return ___ToState_1; }
	inline StateSO_tF4CE457955F5F6AE1566DA9CA381B389AA15C54A ** get_address_of_ToState_1() { return &___ToState_1; }
	inline void set_ToState_1(StateSO_tF4CE457955F5F6AE1566DA9CA381B389AA15C54A * value)
	{
		___ToState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ToState_1), (void*)value);
	}

	inline static int32_t get_offset_of_Conditions_2() { return static_cast<int32_t>(offsetof(TransitionItem_tC4F31A31024167F78AAC0F788A5F606F6055AE0A, ___Conditions_2)); }
	inline ConditionUsageU5BU5D_tA4F67BFAB079BE9A29A37E7089C6027397347A81* get_Conditions_2() const { return ___Conditions_2; }
	inline ConditionUsageU5BU5D_tA4F67BFAB079BE9A29A37E7089C6027397347A81** get_address_of_Conditions_2() { return &___Conditions_2; }
	inline void set_Conditions_2(ConditionUsageU5BU5D_tA4F67BFAB079BE9A29A37E7089C6027397347A81* value)
	{
		___Conditions_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Conditions_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UOP1.StateMachine.ScriptableObjects.TransitionTableSO/TransitionItem
struct TransitionItem_tC4F31A31024167F78AAC0F788A5F606F6055AE0A_marshaled_pinvoke
{
	StateSO_tF4CE457955F5F6AE1566DA9CA381B389AA15C54A * ___FromState_0;
	StateSO_tF4CE457955F5F6AE1566DA9CA381B389AA15C54A * ___ToState_1;
	ConditionUsage_tB5A4FB8501060EF8D8F5CD9CC03064EE7B977B3E_marshaled_pinvoke* ___Conditions_2;
};
// Native definition for COM marshalling of UOP1.StateMachine.ScriptableObjects.TransitionTableSO/TransitionItem
struct TransitionItem_tC4F31A31024167F78AAC0F788A5F606F6055AE0A_marshaled_com
{
	StateSO_tF4CE457955F5F6AE1566DA9CA381B389AA15C54A * ___FromState_0;
	StateSO_tF4CE457955F5F6AE1566DA9CA381B389AA15C54A * ___ToState_1;
	ConditionUsage_tB5A4FB8501060EF8D8F5CD9CC03064EE7B977B3E_marshaled_com* ___Conditions_2;
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

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UOP1.StateMachine.InitOnlyAttribute
struct InitOnlyAttribute_tC254EF4B7F9E4DFA3FFE48B5B5F9C0C02E4A0DED  : public PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052
{
public:

public:
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

// UOP1.StateMachine.StateAction/SpecificMoment
struct SpecificMoment_t878BABE7D1D89AAB20D3B1E819A15E1EB534A701 
{
public:
	// System.Int32 UOP1.StateMachine.StateAction/SpecificMoment::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpecificMoment_t878BABE7D1D89AAB20D3B1E819A15E1EB534A701, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UOP1.StateMachine.ScriptableObjects.TransitionTableSO/Operator
struct Operator_t05A723AC148F8C4BB93C8582510804C420D7339C 
{
public:
	// System.Int32 UOP1.StateMachine.ScriptableObjects.TransitionTableSO/Operator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Operator_t05A723AC148F8C4BB93C8582510804C420D7339C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UOP1.StateMachine.ScriptableObjects.TransitionTableSO/Result
struct Result_t8E8341C1A7CF4532AE8687ED3BFFA949A4522E51 
{
public:
	// System.Int32 UOP1.StateMachine.ScriptableObjects.TransitionTableSO/Result::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Result_t8E8341C1A7CF4532AE8687ED3BFFA949A4522E51, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
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

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UOP1.StateMachine.ScriptableObjects.TransitionTableSO/ConditionUsage
struct ConditionUsage_tB5A4FB8501060EF8D8F5CD9CC03064EE7B977B3E 
{
public:
	// UOP1.StateMachine.ScriptableObjects.TransitionTableSO/Result UOP1.StateMachine.ScriptableObjects.TransitionTableSO/ConditionUsage::ExpectedResult
	int32_t ___ExpectedResult_0;
	// UOP1.StateMachine.ScriptableObjects.StateConditionSO UOP1.StateMachine.ScriptableObjects.TransitionTableSO/ConditionUsage::Condition
	StateConditionSO_t289259ED0499C139B5D115D98B5E6F981068C076 * ___Condition_1;
	// UOP1.StateMachine.ScriptableObjects.TransitionTableSO/Operator UOP1.StateMachine.ScriptableObjects.TransitionTableSO/ConditionUsage::Operator
	int32_t ___Operator_2;

public:
	inline static int32_t get_offset_of_ExpectedResult_0() { return static_cast<int32_t>(offsetof(ConditionUsage_tB5A4FB8501060EF8D8F5CD9CC03064EE7B977B3E, ___ExpectedResult_0)); }
	inline int32_t get_ExpectedResult_0() const { return ___ExpectedResult_0; }
	inline int32_t* get_address_of_ExpectedResult_0() { return &___ExpectedResult_0; }
	inline void set_ExpectedResult_0(int32_t value)
	{
		___ExpectedResult_0 = value;
	}

	inline static int32_t get_offset_of_Condition_1() { return static_cast<int32_t>(offsetof(ConditionUsage_tB5A4FB8501060EF8D8F5CD9CC03064EE7B977B3E, ___Condition_1)); }
	inline StateConditionSO_t289259ED0499C139B5D115D98B5E6F981068C076 * get_Condition_1() const { return ___Condition_1; }
	inline StateConditionSO_t289259ED0499C139B5D115D98B5E6F981068C076 ** get_address_of_Condition_1() { return &___Condition_1; }
	inline void set_Condition_1(StateConditionSO_t289259ED0499C139B5D115D98B5E6F981068C076 * value)
	{
		___Condition_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Condition_1), (void*)value);
	}

	inline static int32_t get_offset_of_Operator_2() { return static_cast<int32_t>(offsetof(ConditionUsage_tB5A4FB8501060EF8D8F5CD9CC03064EE7B977B3E, ___Operator_2)); }
	inline int32_t get_Operator_2() const { return ___Operator_2; }
	inline int32_t* get_address_of_Operator_2() { return &___Operator_2; }
	inline void set_Operator_2(int32_t value)
	{
		___Operator_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UOP1.StateMachine.ScriptableObjects.TransitionTableSO/ConditionUsage
struct ConditionUsage_tB5A4FB8501060EF8D8F5CD9CC03064EE7B977B3E_marshaled_pinvoke
{
	int32_t ___ExpectedResult_0;
	StateConditionSO_t289259ED0499C139B5D115D98B5E6F981068C076 * ___Condition_1;
	int32_t ___Operator_2;
};
// Native definition for COM marshalling of UOP1.StateMachine.ScriptableObjects.TransitionTableSO/ConditionUsage
struct ConditionUsage_tB5A4FB8501060EF8D8F5CD9CC03064EE7B977B3E_marshaled_com
{
	int32_t ___ExpectedResult_0;
	StateConditionSO_t289259ED0499C139B5D115D98B5E6F981068C076 * ___Condition_1;
	int32_t ___Operator_2;
};

// System.Func`2<UOP1.StateMachine.ScriptableObjects.TransitionTableSO/TransitionItem,UOP1.StateMachine.ScriptableObjects.StateSO>
struct Func_2_t61B7B56BD9205365B0DEF3368DD274FA1E163F4E  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UOP1.StateMachine.ScriptableObjects.DescriptionSMActionBaseSO
struct DescriptionSMActionBaseSO_t73BEA70154A0D4C4F83DBE2E14F709D2C548421D  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.String UOP1.StateMachine.ScriptableObjects.DescriptionSMActionBaseSO::description
	String_t* ___description_4;

public:
	inline static int32_t get_offset_of_description_4() { return static_cast<int32_t>(offsetof(DescriptionSMActionBaseSO_t73BEA70154A0D4C4F83DBE2E14F709D2C548421D, ___description_4)); }
	inline String_t* get_description_4() const { return ___description_4; }
	inline String_t** get_address_of_description_4() { return &___description_4; }
	inline void set_description_4(String_t* value)
	{
		___description_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_4), (void*)value);
	}
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UOP1.StateMachine.ScriptableObjects.StateConditionSO
struct StateConditionSO_t289259ED0499C139B5D115D98B5E6F981068C076  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:

public:
};


// UOP1.StateMachine.ScriptableObjects.StateSO
struct StateSO_tF4CE457955F5F6AE1566DA9CA381B389AA15C54A  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// UOP1.StateMachine.ScriptableObjects.StateActionSO[] UOP1.StateMachine.ScriptableObjects.StateSO::_actions
	StateActionSOU5BU5D_tCB65969F8168B6B776CF8CD8C1838B209AD03339* ____actions_4;

public:
	inline static int32_t get_offset_of__actions_4() { return static_cast<int32_t>(offsetof(StateSO_tF4CE457955F5F6AE1566DA9CA381B389AA15C54A, ____actions_4)); }
	inline StateActionSOU5BU5D_tCB65969F8168B6B776CF8CD8C1838B209AD03339* get__actions_4() const { return ____actions_4; }
	inline StateActionSOU5BU5D_tCB65969F8168B6B776CF8CD8C1838B209AD03339** get_address_of__actions_4() { return &____actions_4; }
	inline void set__actions_4(StateActionSOU5BU5D_tCB65969F8168B6B776CF8CD8C1838B209AD03339* value)
	{
		____actions_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____actions_4), (void*)value);
	}
};


// UOP1.StateMachine.ScriptableObjects.TransitionTableSO
struct TransitionTableSO_t7C3E2776FE97CE6C269F81F8880745E200A12CC3  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// UOP1.StateMachine.ScriptableObjects.TransitionTableSO/TransitionItem[] UOP1.StateMachine.ScriptableObjects.TransitionTableSO::_transitions
	TransitionItemU5BU5D_t48946B4E3EEF9A6B9D5501D02D81B6C8CD0C4C14* ____transitions_4;

public:
	inline static int32_t get_offset_of__transitions_4() { return static_cast<int32_t>(offsetof(TransitionTableSO_t7C3E2776FE97CE6C269F81F8880745E200A12CC3, ____transitions_4)); }
	inline TransitionItemU5BU5D_t48946B4E3EEF9A6B9D5501D02D81B6C8CD0C4C14* get__transitions_4() const { return ____transitions_4; }
	inline TransitionItemU5BU5D_t48946B4E3EEF9A6B9D5501D02D81B6C8CD0C4C14** get_address_of__transitions_4() { return &____transitions_4; }
	inline void set__transitions_4(TransitionItemU5BU5D_t48946B4E3EEF9A6B9D5501D02D81B6C8CD0C4C14* value)
	{
		____transitions_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____transitions_4), (void*)value);
	}
};


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
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


// UOP1.StateMachine.ScriptableObjects.StateActionSO
struct StateActionSO_t096FFFB367484F1D4001EB84C41F08FBBEE54464  : public DescriptionSMActionBaseSO_t73BEA70154A0D4C4F83DBE2E14F709D2C548421D
{
public:

public:
};


// UOP1.StateMachine.StateMachine
struct StateMachine_tFB54EE0D17C72BF68C4199F5384DC5FA0A5EB715  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UOP1.StateMachine.ScriptableObjects.TransitionTableSO UOP1.StateMachine.StateMachine::_transitionTableSO
	TransitionTableSO_t7C3E2776FE97CE6C269F81F8880745E200A12CC3 * ____transitionTableSO_4;
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Component> UOP1.StateMachine.StateMachine::_cachedComponents
	Dictionary_2_t85103725B10537B9AE52FB0E98C01B8242CBF8FA * ____cachedComponents_5;
	// UOP1.StateMachine.State UOP1.StateMachine.StateMachine::_currentState
	State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 * ____currentState_6;

public:
	inline static int32_t get_offset_of__transitionTableSO_4() { return static_cast<int32_t>(offsetof(StateMachine_tFB54EE0D17C72BF68C4199F5384DC5FA0A5EB715, ____transitionTableSO_4)); }
	inline TransitionTableSO_t7C3E2776FE97CE6C269F81F8880745E200A12CC3 * get__transitionTableSO_4() const { return ____transitionTableSO_4; }
	inline TransitionTableSO_t7C3E2776FE97CE6C269F81F8880745E200A12CC3 ** get_address_of__transitionTableSO_4() { return &____transitionTableSO_4; }
	inline void set__transitionTableSO_4(TransitionTableSO_t7C3E2776FE97CE6C269F81F8880745E200A12CC3 * value)
	{
		____transitionTableSO_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____transitionTableSO_4), (void*)value);
	}

	inline static int32_t get_offset_of__cachedComponents_5() { return static_cast<int32_t>(offsetof(StateMachine_tFB54EE0D17C72BF68C4199F5384DC5FA0A5EB715, ____cachedComponents_5)); }
	inline Dictionary_2_t85103725B10537B9AE52FB0E98C01B8242CBF8FA * get__cachedComponents_5() const { return ____cachedComponents_5; }
	inline Dictionary_2_t85103725B10537B9AE52FB0E98C01B8242CBF8FA ** get_address_of__cachedComponents_5() { return &____cachedComponents_5; }
	inline void set__cachedComponents_5(Dictionary_2_t85103725B10537B9AE52FB0E98C01B8242CBF8FA * value)
	{
		____cachedComponents_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cachedComponents_5), (void*)value);
	}

	inline static int32_t get_offset_of__currentState_6() { return static_cast<int32_t>(offsetof(StateMachine_tFB54EE0D17C72BF68C4199F5384DC5FA0A5EB715, ____currentState_6)); }
	inline State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 * get__currentState_6() const { return ____currentState_6; }
	inline State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 ** get_address_of__currentState_6() { return &____currentState_6; }
	inline void set__currentState_6(State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 * value)
	{
		____currentState_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____currentState_6), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UOP1.StateMachine.StateTransition[]
struct StateTransitionU5BU5D_tD07E9FA7E8D70ED2696D86C41A41673A2F57D212  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) StateTransition_t0A8BCCF7B94D6D0F026E95E8748066423BF97077 * m_Items[1];

public:
	inline StateTransition_t0A8BCCF7B94D6D0F026E95E8748066423BF97077 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StateTransition_t0A8BCCF7B94D6D0F026E95E8748066423BF97077 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StateTransition_t0A8BCCF7B94D6D0F026E95E8748066423BF97077 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline StateTransition_t0A8BCCF7B94D6D0F026E95E8748066423BF97077 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StateTransition_t0A8BCCF7B94D6D0F026E95E8748066423BF97077 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StateTransition_t0A8BCCF7B94D6D0F026E95E8748066423BF97077 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UOP1.StateMachine.StateAction[]
struct StateActionU5BU5D_t78E8D648909411BB414715FCAE95ACF10F5869D7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) StateAction_t89AE978DB2427B6779144284E8D8990F2FCB89F5 * m_Items[1];

public:
	inline StateAction_t89AE978DB2427B6779144284E8D8990F2FCB89F5 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StateAction_t89AE978DB2427B6779144284E8D8990F2FCB89F5 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StateAction_t89AE978DB2427B6779144284E8D8990F2FCB89F5 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline StateAction_t89AE978DB2427B6779144284E8D8990F2FCB89F5 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StateAction_t89AE978DB2427B6779144284E8D8990F2FCB89F5 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StateAction_t89AE978DB2427B6779144284E8D8990F2FCB89F5 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UOP1.StateMachine.IStateComponent[]
struct IStateComponentU5BU5D_t453B498EEAA39168FEE5CA4D000F5EFD804449D1  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UOP1.StateMachine.ScriptableObjects.StateActionSO[]
struct StateActionSOU5BU5D_tCB65969F8168B6B776CF8CD8C1838B209AD03339  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) StateActionSO_t096FFFB367484F1D4001EB84C41F08FBBEE54464 * m_Items[1];

public:
	inline StateActionSO_t096FFFB367484F1D4001EB84C41F08FBBEE54464 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StateActionSO_t096FFFB367484F1D4001EB84C41F08FBBEE54464 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StateActionSO_t096FFFB367484F1D4001EB84C41F08FBBEE54464 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline StateActionSO_t096FFFB367484F1D4001EB84C41F08FBBEE54464 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StateActionSO_t096FFFB367484F1D4001EB84C41F08FBBEE54464 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StateActionSO_t096FFFB367484F1D4001EB84C41F08FBBEE54464 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UOP1.StateMachine.StateCondition[]
struct StateConditionU5BU5D_tAB59A90CA4CE595EBDD2E47AE6990F3E2C0A01A0  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) StateCondition_t6D1708031DFC3FBA54B621BD5B684D0DD8F0CA8D  m_Items[1];

public:
	inline StateCondition_t6D1708031DFC3FBA54B621BD5B684D0DD8F0CA8D  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StateCondition_t6D1708031DFC3FBA54B621BD5B684D0DD8F0CA8D * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StateCondition_t6D1708031DFC3FBA54B621BD5B684D0DD8F0CA8D  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____condition_1), (void*)NULL);
		#endif
	}
	inline StateCondition_t6D1708031DFC3FBA54B621BD5B684D0DD8F0CA8D  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StateCondition_t6D1708031DFC3FBA54B621BD5B684D0DD8F0CA8D * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StateCondition_t6D1708031DFC3FBA54B621BD5B684D0DD8F0CA8D  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____condition_1), (void*)NULL);
		#endif
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// UOP1.StateMachine.ScriptableObjects.TransitionTableSO/TransitionItem[]
struct TransitionItemU5BU5D_t48946B4E3EEF9A6B9D5501D02D81B6C8CD0C4C14  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TransitionItem_tC4F31A31024167F78AAC0F788A5F606F6055AE0A  m_Items[1];

public:
	inline TransitionItem_tC4F31A31024167F78AAC0F788A5F606F6055AE0A  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TransitionItem_tC4F31A31024167F78AAC0F788A5F606F6055AE0A * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TransitionItem_tC4F31A31024167F78AAC0F788A5F606F6055AE0A  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___FromState_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___ToState_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Conditions_2), (void*)NULL);
		#endif
	}
	inline TransitionItem_tC4F31A31024167F78AAC0F788A5F606F6055AE0A  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TransitionItem_tC4F31A31024167F78AAC0F788A5F606F6055AE0A * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TransitionItem_tC4F31A31024167F78AAC0F788A5F606F6055AE0A  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___FromState_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___ToState_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Conditions_2), (void*)NULL);
		#endif
	}
};
// UOP1.StateMachine.ScriptableObjects.TransitionTableSO/ConditionUsage[]
struct ConditionUsageU5BU5D_tA4F67BFAB079BE9A29A37E7089C6027397347A81  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ConditionUsage_tB5A4FB8501060EF8D8F5CD9CC03064EE7B977B3E  m_Items[1];

public:
	inline ConditionUsage_tB5A4FB8501060EF8D8F5CD9CC03064EE7B977B3E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ConditionUsage_tB5A4FB8501060EF8D8F5CD9CC03064EE7B977B3E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ConditionUsage_tB5A4FB8501060EF8D8F5CD9CC03064EE7B977B3E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Condition_1), (void*)NULL);
	}
	inline ConditionUsage_tB5A4FB8501060EF8D8F5CD9CC03064EE7B977B3E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ConditionUsage_tB5A4FB8501060EF8D8F5CD9CC03064EE7B977B3E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ConditionUsage_tB5A4FB8501060EF8D8F5CD9CC03064EE7B977B3E  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Condition_1), (void*)NULL);
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

IL2CPP_EXTERN_C void ConditionUsage_tB5A4FB8501060EF8D8F5CD9CC03064EE7B977B3E_marshal_pinvoke(const ConditionUsage_tB5A4FB8501060EF8D8F5CD9CC03064EE7B977B3E& unmarshaled, ConditionUsage_tB5A4FB8501060EF8D8F5CD9CC03064EE7B977B3E_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void ConditionUsage_tB5A4FB8501060EF8D8F5CD9CC03064EE7B977B3E_marshal_pinvoke_back(const ConditionUsage_tB5A4FB8501060EF8D8F5CD9CC03064EE7B977B3E_marshaled_pinvoke& marshaled, ConditionUsage_tB5A4FB8501060EF8D8F5CD9CC03064EE7B977B3E& unmarshaled);
IL2CPP_EXTERN_C void ConditionUsage_tB5A4FB8501060EF8D8F5CD9CC03064EE7B977B3E_marshal_pinvoke_cleanup(ConditionUsage_tB5A4FB8501060EF8D8F5CD9CC03064EE7B977B3E_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void ConditionUsage_tB5A4FB8501060EF8D8F5CD9CC03064EE7B977B3E_marshal_com(const ConditionUsage_tB5A4FB8501060EF8D8F5CD9CC03064EE7B977B3E& unmarshaled, ConditionUsage_tB5A4FB8501060EF8D8F5CD9CC03064EE7B977B3E_marshaled_com& marshaled);
IL2CPP_EXTERN_C void ConditionUsage_tB5A4FB8501060EF8D8F5CD9CC03064EE7B977B3E_marshal_com_back(const ConditionUsage_tB5A4FB8501060EF8D8F5CD9CC03064EE7B977B3E_marshaled_com& marshaled, ConditionUsage_tB5A4FB8501060EF8D8F5CD9CC03064EE7B977B3E& unmarshaled);
IL2CPP_EXTERN_C void ConditionUsage_tB5A4FB8501060EF8D8F5CD9CC03064EE7B977B3E_marshal_com_cleanup(ConditionUsage_tB5A4FB8501060EF8D8F5CD9CC03064EE7B977B3E_marshaled_com& marshaled);

// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<UOP1.StateMachine.ScriptableObjects.TransitionTableSO/TransitionItem,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m4EC9FC50AB42A05E134D56E9CCAC210BF05F2AC5_gshared (Func_2_t45931610286A980239531927E889EB3FAFE7E5D6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.Linq.IGrouping`2<!!1,!!0>> System.Linq.Enumerable::GroupBy<UOP1.StateMachine.ScriptableObjects.TransitionTableSO/TransitionItem,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_GroupBy_TisTransitionItem_tC4F31A31024167F78AAC0F788A5F606F6055AE0A_TisRuntimeObject_mCEF5A73C8FFB12559F0E51A11B8AD425C9423D2A_gshared (RuntimeObject* ___source0, Func_2_t45931610286A980239531927E889EB3FAFE7E5D6 * ___keySelector1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___index0, int32_t ___value1, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Int32>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063 (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.PropertyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAttribute__ctor_mA13181D93341AEAE429F0615989CB4647F2EB8A7 (PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052 * __this, const RuntimeMethod* method);
// System.Void UOP1.StateMachine.State::<OnStateEnter>g__OnStateEnter|6_0(UOP1.StateMachine.IStateComponent[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State_U3COnStateEnterU3Eg__OnStateEnterU7C6_0_mBB66B0BE7FF99DDECD90789DE7EFEF8DA4B81D23 (IStateComponentU5BU5D_t453B498EEAA39168FEE5CA4D000F5EFD804449D1* ___comps0, const RuntimeMethod* method);
// System.Void UOP1.StateMachine.State::<OnStateExit>g__OnStateExit|8_0(UOP1.StateMachine.IStateComponent[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State_U3COnStateExitU3Eg__OnStateExitU7C8_0_m14160F45ED4BB9B1A97485D301C083C4B3599042 (IStateComponentU5BU5D_t453B498EEAA39168FEE5CA4D000F5EFD804449D1* ___comps0, const RuntimeMethod* method);
// System.Boolean UOP1.StateMachine.StateTransition::TryGetTransiton(UOP1.StateMachine.State&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StateTransition_TryGetTransiton_m2D8EFBF3FC24873B2527CA493F3AC7BCF8A890C7 (StateTransition_t0A8BCCF7B94D6D0F026E95E8748066423BF97077 * __this, State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 ** ___state0, const RuntimeMethod* method);
// System.Void UOP1.StateMachine.StateTransition::ClearConditionsCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateTransition_ClearConditionsCache_m29C6CEBEA28D4258A93F0903E49D229A4DB859CF (StateTransition_t0A8BCCF7B94D6D0F026E95E8748066423BF97077 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.ScriptableObject,System.Object>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m3060E96E67EC2DEBE23B4186D425A9FE8F8496D8 (Dictionary_2_t701330DAA667B6BC6DC537F393DB4AC36321F406 * __this, ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t701330DAA667B6BC6DC537F393DB4AC36321F406 *, ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A *, RuntimeObject **, const RuntimeMethod*))Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.ScriptableObject,System.Object>::Add(!0,!1)
inline void Dictionary_2_Add_mDBF533176920ACB60C2D3D2DEEE5B72A074D557A (Dictionary_2_t701330DAA667B6BC6DC537F393DB4AC36321F406 * __this, ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t701330DAA667B6BC6DC537F393DB4AC36321F406 *, ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A *, RuntimeObject *, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// System.Void UOP1.StateMachine.ScriptableObjects.DescriptionSMActionBaseSO::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DescriptionSMActionBaseSO__ctor_mB0D5A2E98A2CEC2B0CFC349ED51516EB52684EB0 (DescriptionSMActionBaseSO_t73BEA70154A0D4C4F83DBE2E14F709D2C548421D * __this, const RuntimeMethod* method);
// System.Void UOP1.StateMachine.StateCondition::.ctor(UOP1.StateMachine.StateMachine,UOP1.StateMachine.Condition,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateCondition__ctor_m830329CF884D4274D6A68E2865BD32B852256D37 (StateCondition_t6D1708031DFC3FBA54B621BD5B684D0DD8F0CA8D * __this, StateMachine_tFB54EE0D17C72BF68C4199F5384DC5FA0A5EB715 * ___stateMachine0, Condition_tF90A1BDDA617FE9E50B9EC09EBE9069291DACEBE * ___condition1, bool ___expectedResult2, const RuntimeMethod* method);
// System.Boolean UOP1.StateMachine.Condition::GetStatement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Condition_GetStatement_m6B1C27C0B9C8DA91A42ACF65EFC146BA0B8242AB (Condition_tF90A1BDDA617FE9E50B9EC09EBE9069291DACEBE * __this, const RuntimeMethod* method);
// System.Boolean UOP1.StateMachine.StateCondition::IsMet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StateCondition_IsMet_m9B81FD6800389F3B74A6EC6EE3709DC855C688AA (StateCondition_t6D1708031DFC3FBA54B621BD5B684D0DD8F0CA8D * __this, const RuntimeMethod* method);
// UOP1.StateMachine.State UOP1.StateMachine.ScriptableObjects.TransitionTableSO::GetInitialState(UOP1.StateMachine.StateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 * TransitionTableSO_GetInitialState_mB5C0868BA5BCA574E80B5E4CB3FABB7368C4F840 (TransitionTableSO_t7C3E2776FE97CE6C269F81F8880745E200A12CC3 * __this, StateMachine_tFB54EE0D17C72BF68C4199F5384DC5FA0A5EB715 * ___stateMachine0, const RuntimeMethod* method);
// System.Void UOP1.StateMachine.State::OnStateEnter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State_OnStateEnter_m3A45C588D38628CEC99E5C9344CA5A8809D74F22 (State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 * __this, const RuntimeMethod* method);
// System.Boolean UOP1.StateMachine.State::TryGetTransition(UOP1.StateMachine.State&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool State_TryGetTransition_m738955C61A215278F78CA72942F7A113EF51EB02 (State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 * __this, State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 ** ___state0, const RuntimeMethod* method);
// System.Void UOP1.StateMachine.StateMachine::Transition(UOP1.StateMachine.State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachine_Transition_mEAE0955E4B46376440CE6E8C4DAA8B629BFD0CE1 (StateMachine_tFB54EE0D17C72BF68C4199F5384DC5FA0A5EB715 * __this, State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 * ___transitionState0, const RuntimeMethod* method);
// System.Void UOP1.StateMachine.State::OnUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State_OnUpdate_mAAA0191F35F39252FABB8FD5EB141B0C4EC82B1D (State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 * __this, const RuntimeMethod* method);
// System.Void UOP1.StateMachine.State::OnStateExit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State_OnStateExit_mC5BB402313375441A4E7315B100F586357B6A49B (State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Component>::.ctor()
inline void Dictionary_2__ctor_mC7A5AF370D0A97F954E753D5D3DEC7D72DDAF6D9 (Dictionary_2_t85103725B10537B9AE52FB0E98C01B8242CBF8FA * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t85103725B10537B9AE52FB0E98C01B8242CBF8FA *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void UOP1.StateMachine.State::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State__ctor_mE300ABE7BE78C2DA0C5AFA69AF7D97C6D17F7A3F (State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 * __this, const RuntimeMethod* method);
// UOP1.StateMachine.StateAction[] UOP1.StateMachine.ScriptableObjects.StateSO::GetActions(UOP1.StateMachine.ScriptableObjects.StateActionSO[],UOP1.StateMachine.StateMachine,System.Collections.Generic.Dictionary`2<UnityEngine.ScriptableObject,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StateActionU5BU5D_t78E8D648909411BB414715FCAE95ACF10F5869D7* StateSO_GetActions_mA33D4B0AE98E1AADFA71330AEE6D4F7B5893DF88 (StateActionSOU5BU5D_tCB65969F8168B6B776CF8CD8C1838B209AD03339* ___scriptableActions0, StateMachine_tFB54EE0D17C72BF68C4199F5384DC5FA0A5EB715 * ___stateMachine1, Dictionary_2_t701330DAA667B6BC6DC537F393DB4AC36321F406 * ___createdInstances2, const RuntimeMethod* method);
// UOP1.StateMachine.StateAction UOP1.StateMachine.ScriptableObjects.StateActionSO::GetAction(UOP1.StateMachine.StateMachine,System.Collections.Generic.Dictionary`2<UnityEngine.ScriptableObject,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StateAction_t89AE978DB2427B6779144284E8D8990F2FCB89F5 * StateActionSO_GetAction_m0DDCFE720CDFF357BC8D6071D6592EB587828C75 (StateActionSO_t096FFFB367484F1D4001EB84C41F08FBBEE54464 * __this, StateMachine_tFB54EE0D17C72BF68C4199F5384DC5FA0A5EB715 * ___stateMachine0, Dictionary_2_t701330DAA667B6BC6DC537F393DB4AC36321F406 * ___createdInstances1, const RuntimeMethod* method);
// System.Void UOP1.StateMachine.StateTransition::Init(UOP1.StateMachine.State,UOP1.StateMachine.StateCondition[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateTransition_Init_m3F6BAB5ACEDC195D31EEEDF36795EA1E97EE8E84 (StateTransition_t0A8BCCF7B94D6D0F026E95E8748066423BF97077 * __this, State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 * ___targetState0, StateConditionU5BU5D_tAB59A90CA4CE595EBDD2E47AE6990F3E2C0A01A0* ___conditions1, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___resultGroups2, const RuntimeMethod* method);
// System.Boolean UOP1.StateMachine.StateTransition::ShouldTransition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StateTransition_ShouldTransition_m4A3C712415CC611F518B7DB03EA24711BDBF0246 (StateTransition_t0A8BCCF7B94D6D0F026E95E8748066423BF97077 * __this, const RuntimeMethod* method);
// System.Void UOP1.StateMachine.Condition::ClearStatementCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Condition_ClearStatementCache_m22AF9E33AA23B16B6259658DABB5044846C87C42 (Condition_tF90A1BDDA617FE9E50B9EC09EBE9069291DACEBE * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UOP1.StateMachine.State>::.ctor()
inline void List_1__ctor_m00355B270860BD75B5AA31B2C81C487A190BE9FB (List_1_tE077A81CF091F6F3535712AAF6459188ED461EEA * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE077A81CF091F6F3535712AAF6459188ED461EEA *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UOP1.StateMachine.StateTransition>::.ctor()
inline void List_1__ctor_m46B91DDD24C3311D7C33580F31089735F6CE450F (List_1_t5949E2873005DB039313FCF7FB69F28583DE10D5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5949E2873005DB039313FCF7FB69F28583DE10D5 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.ScriptableObject,System.Object>::.ctor()
inline void Dictionary_2__ctor_mEE20691019BC8C1B512352003E8D9C44E0A3A1B6 (Dictionary_2_t701330DAA667B6BC6DC537F393DB4AC36321F406 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t701330DAA667B6BC6DC537F393DB4AC36321F406 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Func`2<UOP1.StateMachine.ScriptableObjects.TransitionTableSO/TransitionItem,UOP1.StateMachine.ScriptableObjects.StateSO>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m05A132C1DA090BCE4B14548D9CD0C97D324C5B9F (Func_2_t61B7B56BD9205365B0DEF3368DD274FA1E163F4E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t61B7B56BD9205365B0DEF3368DD274FA1E163F4E *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m4EC9FC50AB42A05E134D56E9CCAC210BF05F2AC5_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<System.Linq.IGrouping`2<!!1,!!0>> System.Linq.Enumerable::GroupBy<UOP1.StateMachine.ScriptableObjects.TransitionTableSO/TransitionItem,UOP1.StateMachine.ScriptableObjects.StateSO>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_GroupBy_TisTransitionItem_tC4F31A31024167F78AAC0F788A5F606F6055AE0A_TisStateSO_tF4CE457955F5F6AE1566DA9CA381B389AA15C54A_m6C512956F3595B1F62705F2BE641C1440DCCDFF3 (RuntimeObject* ___source0, Func_2_t61B7B56BD9205365B0DEF3368DD274FA1E163F4E * ___keySelector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t61B7B56BD9205365B0DEF3368DD274FA1E163F4E *, const RuntimeMethod*))Enumerable_GroupBy_TisTransitionItem_tC4F31A31024167F78AAC0F788A5F606F6055AE0A_TisRuntimeObject_mCEF5A73C8FFB12559F0E51A11B8AD425C9423D2A_gshared)(___source0, ___keySelector1, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mAD2F05A24C92A657CBCA8C43A9A373C53739A283 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// UOP1.StateMachine.State UOP1.StateMachine.ScriptableObjects.StateSO::GetState(UOP1.StateMachine.StateMachine,System.Collections.Generic.Dictionary`2<UnityEngine.ScriptableObject,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 * StateSO_GetState_m987C2B16950E1940D352B85A36DB14FE4B8F5C6D (StateSO_tF4CE457955F5F6AE1566DA9CA381B389AA15C54A * __this, StateMachine_tFB54EE0D17C72BF68C4199F5384DC5FA0A5EB715 * ___stateMachine0, Dictionary_2_t701330DAA667B6BC6DC537F393DB4AC36321F406 * ___createdInstances1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UOP1.StateMachine.State>::Add(!0)
inline void List_1_Add_m787035E7D5BAE5D9F8987FF3CFBAC311CABD8FF9 (List_1_tE077A81CF091F6F3535712AAF6459188ED461EEA * __this, State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE077A81CF091F6F3535712AAF6459188ED461EEA *, State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UOP1.StateMachine.StateTransition>::Clear()
inline void List_1_Clear_mC10D151B7215ADE22FA4046D0307FEF3153D6332 (List_1_t5949E2873005DB039313FCF7FB69F28583DE10D5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5949E2873005DB039313FCF7FB69F28583DE10D5 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void UOP1.StateMachine.ScriptableObjects.TransitionTableSO::ProcessConditionUsages(UOP1.StateMachine.StateMachine,UOP1.StateMachine.ScriptableObjects.TransitionTableSO/ConditionUsage[],System.Collections.Generic.Dictionary`2<UnityEngine.ScriptableObject,System.Object>,UOP1.StateMachine.StateCondition[]&,System.Int32[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionTableSO_ProcessConditionUsages_m5E9AC3A8546DA643D2DBA36ADE59BD898DBA7249 (StateMachine_tFB54EE0D17C72BF68C4199F5384DC5FA0A5EB715 * ___stateMachine0, ConditionUsageU5BU5D_tA4F67BFAB079BE9A29A37E7089C6027397347A81* ___conditionUsages1, Dictionary_2_t701330DAA667B6BC6DC537F393DB4AC36321F406 * ___createdInstances2, StateConditionU5BU5D_tAB59A90CA4CE595EBDD2E47AE6990F3E2C0A01A0** ___conditions3, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** ___resultGroups4, const RuntimeMethod* method);
// System.Void UOP1.StateMachine.StateTransition::.ctor(UOP1.StateMachine.State,UOP1.StateMachine.StateCondition[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateTransition__ctor_m389BE3F912EF99345D69EB08BABDFFFB46C58B40 (StateTransition_t0A8BCCF7B94D6D0F026E95E8748066423BF97077 * __this, State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 * ___targetState0, StateConditionU5BU5D_tAB59A90CA4CE595EBDD2E47AE6990F3E2C0A01A0* ___conditions1, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___resultGroups2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UOP1.StateMachine.StateTransition>::Add(!0)
inline void List_1_Add_mABF8C4FB3AF6552FBD7630F0F68A63FFB861C0D9 (List_1_t5949E2873005DB039313FCF7FB69F28583DE10D5 * __this, StateTransition_t0A8BCCF7B94D6D0F026E95E8748066423BF97077 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5949E2873005DB039313FCF7FB69F28583DE10D5 *, StateTransition_t0A8BCCF7B94D6D0F026E95E8748066423BF97077 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// !0[] System.Collections.Generic.List`1<UOP1.StateMachine.StateTransition>::ToArray()
inline StateTransitionU5BU5D_tD07E9FA7E8D70ED2696D86C41A41673A2F57D212* List_1_ToArray_mC08058A95C0AFA8892C925A5C87C41FC72D8321D (List_1_t5949E2873005DB039313FCF7FB69F28583DE10D5 * __this, const RuntimeMethod* method)
{
	return ((  StateTransitionU5BU5D_tD07E9FA7E8D70ED2696D86C41A41673A2F57D212* (*) (List_1_t5949E2873005DB039313FCF7FB69F28583DE10D5 *, const RuntimeMethod*))List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UOP1.StateMachine.State>::get_Count()
inline int32_t List_1_get_Count_m701A5158B3DD8B9B2CB0A4C5BC5B6D7ADFB21D70_inline (List_1_tE077A81CF091F6F3535712AAF6459188ED461EEA * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE077A81CF091F6F3535712AAF6459188ED461EEA *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UOP1.StateMachine.State>::get_Item(System.Int32)
inline State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 * List_1_get_Item_m9480C02B5F6372D50026AEDC262FF3192D63C8C5_inline (List_1_tE077A81CF091F6F3535712AAF6459188ED461EEA * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 * (*) (List_1_tE077A81CF091F6F3535712AAF6459188ED461EEA *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// UOP1.StateMachine.StateCondition UOP1.StateMachine.ScriptableObjects.StateConditionSO::GetCondition(UOP1.StateMachine.StateMachine,System.Boolean,System.Collections.Generic.Dictionary`2<UnityEngine.ScriptableObject,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StateCondition_t6D1708031DFC3FBA54B621BD5B684D0DD8F0CA8D  StateConditionSO_GetCondition_mBA40810A56E512AB5B16996ABB5783F776A9EEEF (StateConditionSO_t289259ED0499C139B5D115D98B5E6F981068C076 * __this, StateMachine_tFB54EE0D17C72BF68C4199F5384DC5FA0A5EB715 * ___stateMachine0, bool ___expectedResult1, Dictionary_2_t701330DAA667B6BC6DC537F393DB4AC36321F406 * ___createdInstances2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
inline void List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_gshared)(__this, ___item0, method);
}
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,!0)
inline void List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9 (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___index0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, int32_t, const RuntimeMethod*))List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9_gshared)(__this, ___index0, ___value1, method);
}
// !0[] System.Collections.Generic.List`1<System.Int32>::ToArray()
inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F_gshared)(__this, method);
}
// System.Void UOP1.StateMachine.ScriptableObjects.TransitionTableSO/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3484B5C7F1C20C3398708092CE95D263505594DE (U3CU3Ec_t44EBF2D264D41EEF6EA90DA642F31B6AC8ED0379 * __this, const RuntimeMethod* method);
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
// UOP1.StateMachine.ScriptableObjects.StateConditionSO UOP1.StateMachine.Condition::get_OriginSO()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StateConditionSO_t289259ED0499C139B5D115D98B5E6F981068C076 * Condition_get_OriginSO_m2D21890E716579172EB684909F85C89A50E89614 (Condition_tF90A1BDDA617FE9E50B9EC09EBE9069291DACEBE * __this, const RuntimeMethod* method)
{
	{
		// protected StateConditionSO OriginSO => _originSO;
		StateConditionSO_t289259ED0499C139B5D115D98B5E6F981068C076 * L_0 = __this->get__originSO_2();
		return L_0;
	}
}
// System.Boolean UOP1.StateMachine.Condition::GetStatement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Condition_GetStatement_m6B1C27C0B9C8DA91A42ACF65EFC146BA0B8242AB (Condition_tF90A1BDDA617FE9E50B9EC09EBE9069291DACEBE * __this, const RuntimeMethod* method)
{
	{
		// if (!_isCached)
		bool L_0 = __this->get__isCached_0();
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		// _isCached = true;
		__this->set__isCached_0((bool)1);
		// _cachedStatement = Statement();
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean UOP1.StateMachine.Condition::Statement() */, __this);
		__this->set__cachedStatement_1(L_1);
	}

IL_001b:
	{
		// return _cachedStatement;
		bool L_2 = __this->get__cachedStatement_1();
		return L_2;
	}
}
// System.Void UOP1.StateMachine.Condition::ClearStatementCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Condition_ClearStatementCache_m22AF9E33AA23B16B6259658DABB5044846C87C42 (Condition_tF90A1BDDA617FE9E50B9EC09EBE9069291DACEBE * __this, const RuntimeMethod* method)
{
	{
		// _isCached = false;
		__this->set__isCached_0((bool)0);
		// }
		return;
	}
}
// System.Void UOP1.StateMachine.Condition::Awake(UOP1.StateMachine.StateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Condition_Awake_mB86F547C3D712DABBC4C58E572C6708102A9C27D (Condition_tF90A1BDDA617FE9E50B9EC09EBE9069291DACEBE * __this, StateMachine_tFB54EE0D17C72BF68C4199F5384DC5FA0A5EB715 * ___stateMachine0, const RuntimeMethod* method)
{
	{
		// public virtual void Awake(StateMachine stateMachine) { }
		return;
	}
}
// System.Void UOP1.StateMachine.Condition::OnStateEnter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Condition_OnStateEnter_m805FD3E1E051075AF57E281F3C052023B8271B95 (Condition_tF90A1BDDA617FE9E50B9EC09EBE9069291DACEBE * __this, const RuntimeMethod* method)
{
	{
		// public virtual void OnStateEnter() { }
		return;
	}
}
// System.Void UOP1.StateMachine.Condition::OnStateExit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Condition_OnStateExit_mD9FFBF9A3EC11C9A1254422CA683B730EE94FED8 (Condition_tF90A1BDDA617FE9E50B9EC09EBE9069291DACEBE * __this, const RuntimeMethod* method)
{
	{
		// public virtual void OnStateExit() { }
		return;
	}
}
// System.Void UOP1.StateMachine.Condition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Condition__ctor_m9AEBC6EF2C746A2B6B0AA7934B3E2C1AFF5190C8 (Condition_tF90A1BDDA617FE9E50B9EC09EBE9069291DACEBE * __this, const RuntimeMethod* method)
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
// System.Void UOP1.StateMachine.ScriptableObjects.DescriptionSMActionBaseSO::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DescriptionSMActionBaseSO__ctor_mB0D5A2E98A2CEC2B0CFC349ED51516EB52684EB0 (DescriptionSMActionBaseSO_t73BEA70154A0D4C4F83DBE2E14F709D2C548421D * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.Void UOP1.StateMachine.InitOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitOnlyAttribute__ctor_m96BEE6B11FA56DDD9EC607982156B1E83C18057B (InitOnlyAttribute_tC254EF4B7F9E4DFA3FFE48B5B5F9C0C02E4A0DED * __this, const RuntimeMethod* method)
{
	{
		PropertyAttribute__ctor_mA13181D93341AEAE429F0615989CB4647F2EB8A7(__this, /*hidden argument*/NULL);
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
// System.Void UOP1.StateMachine.State::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State__ctor_mE300ABE7BE78C2DA0C5AFA69AF7D97C6D17F7A3F (State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 * __this, const RuntimeMethod* method)
{
	{
		// internal State() { }
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// internal State() { }
		return;
	}
}
// System.Void UOP1.StateMachine.State::.ctor(UOP1.StateMachine.ScriptableObjects.StateSO,UOP1.StateMachine.StateMachine,UOP1.StateMachine.StateTransition[],UOP1.StateMachine.StateAction[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State__ctor_m11A384679BC9C3A3F590F6A176B652B36FBFBF17 (State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 * __this, StateSO_tF4CE457955F5F6AE1566DA9CA381B389AA15C54A * ___originSO0, StateMachine_tFB54EE0D17C72BF68C4199F5384DC5FA0A5EB715 * ___stateMachine1, StateTransitionU5BU5D_tD07E9FA7E8D70ED2696D86C41A41673A2F57D212* ___transitions2, StateActionU5BU5D_t78E8D648909411BB414715FCAE95ACF10F5869D7* ___actions3, const RuntimeMethod* method)
{
	{
		// public State(
		//     StateSO originSO,
		//     StateMachine stateMachine,
		//     StateTransition[] transitions,
		//     StateAction[] actions)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// _originSO = originSO;
		StateSO_tF4CE457955F5F6AE1566DA9CA381B389AA15C54A * L_0 = ___originSO0;
		__this->set__originSO_0(L_0);
		// _stateMachine = stateMachine;
		StateMachine_tFB54EE0D17C72BF68C4199F5384DC5FA0A5EB715 * L_1 = ___stateMachine1;
		__this->set__stateMachine_1(L_1);
		// _transitions = transitions;
		StateTransitionU5BU5D_tD07E9FA7E8D70ED2696D86C41A41673A2F57D212* L_2 = ___transitions2;
		__this->set__transitions_2(L_2);
		// _actions = actions;
		StateActionU5BU5D_t78E8D648909411BB414715FCAE95ACF10F5869D7* L_3 = ___actions3;
		__this->set__actions_3(L_3);
		// }
		return;
	}
}
// System.Void UOP1.StateMachine.State::OnStateEnter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State_OnStateEnter_m3A45C588D38628CEC99E5C9344CA5A8809D74F22 (State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 * __this, const RuntimeMethod* method)
{
	IStateComponentU5BU5D_t453B498EEAA39168FEE5CA4D000F5EFD804449D1* V_0 = NULL;
	{
		// OnStateEnter(_transitions);
		StateTransitionU5BU5D_tD07E9FA7E8D70ED2696D86C41A41673A2F57D212* L_0 = __this->get__transitions_2();
		V_0 = (IStateComponentU5BU5D_t453B498EEAA39168FEE5CA4D000F5EFD804449D1*)L_0;
		IStateComponentU5BU5D_t453B498EEAA39168FEE5CA4D000F5EFD804449D1* L_1 = V_0;
		State_U3COnStateEnterU3Eg__OnStateEnterU7C6_0_mBB66B0BE7FF99DDECD90789DE7EFEF8DA4B81D23(L_1, /*hidden argument*/NULL);
		// OnStateEnter(_actions);
		StateActionU5BU5D_t78E8D648909411BB414715FCAE95ACF10F5869D7* L_2 = __this->get__actions_3();
		V_0 = (IStateComponentU5BU5D_t453B498EEAA39168FEE5CA4D000F5EFD804449D1*)L_2;
		IStateComponentU5BU5D_t453B498EEAA39168FEE5CA4D000F5EFD804449D1* L_3 = V_0;
		State_U3COnStateEnterU3Eg__OnStateEnterU7C6_0_mBB66B0BE7FF99DDECD90789DE7EFEF8DA4B81D23(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UOP1.StateMachine.State::OnUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State_OnUpdate_mAAA0191F35F39252FABB8FD5EB141B0C4EC82B1D (State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < _actions.Length; i++)
		V_0 = 0;
		goto IL_0015;
	}

IL_0004:
	{
		// _actions[i].OnUpdate();
		StateActionU5BU5D_t78E8D648909411BB414715FCAE95ACF10F5869D7* L_0 = __this->get__actions_3();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		StateAction_t89AE978DB2427B6779144284E8D8990F2FCB89F5 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		VirtActionInvoker0::Invoke(6 /* System.Void UOP1.StateMachine.StateAction::OnUpdate() */, L_3);
		// for (int i = 0; i < _actions.Length; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0015:
	{
		// for (int i = 0; i < _actions.Length; i++)
		int32_t L_5 = V_0;
		StateActionU5BU5D_t78E8D648909411BB414715FCAE95ACF10F5869D7* L_6 = __this->get__actions_3();
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UOP1.StateMachine.State::OnStateExit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State_OnStateExit_mC5BB402313375441A4E7315B100F586357B6A49B (State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 * __this, const RuntimeMethod* method)
{
	IStateComponentU5BU5D_t453B498EEAA39168FEE5CA4D000F5EFD804449D1* V_0 = NULL;
	{
		// OnStateExit(_transitions);
		StateTransitionU5BU5D_tD07E9FA7E8D70ED2696D86C41A41673A2F57D212* L_0 = __this->get__transitions_2();
		V_0 = (IStateComponentU5BU5D_t453B498EEAA39168FEE5CA4D000F5EFD804449D1*)L_0;
		IStateComponentU5BU5D_t453B498EEAA39168FEE5CA4D000F5EFD804449D1* L_1 = V_0;
		State_U3COnStateExitU3Eg__OnStateExitU7C8_0_m14160F45ED4BB9B1A97485D301C083C4B3599042(L_1, /*hidden argument*/NULL);
		// OnStateExit(_actions);
		StateActionU5BU5D_t78E8D648909411BB414715FCAE95ACF10F5869D7* L_2 = __this->get__actions_3();
		V_0 = (IStateComponentU5BU5D_t453B498EEAA39168FEE5CA4D000F5EFD804449D1*)L_2;
		IStateComponentU5BU5D_t453B498EEAA39168FEE5CA4D000F5EFD804449D1* L_3 = V_0;
		State_U3COnStateExitU3Eg__OnStateExitU7C8_0_m14160F45ED4BB9B1A97485D301C083C4B3599042(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean UOP1.StateMachine.State::TryGetTransition(UOP1.StateMachine.State&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool State_TryGetTransition_m738955C61A215278F78CA72942F7A113EF51EB02 (State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 * __this, State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 ** ___state0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// state = null;
		State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 ** L_0 = ___state0;
		*((RuntimeObject **)L_0) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)(RuntimeObject *)NULL);
		// for (int i = 0; i < _transitions.Length; i++)
		V_0 = 0;
		goto IL_001b;
	}

IL_0007:
	{
		// if (_transitions[i].TryGetTransiton(out state))
		StateTransitionU5BU5D_tD07E9FA7E8D70ED2696D86C41A41673A2F57D212* L_1 = __this->get__transitions_2();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		StateTransition_t0A8BCCF7B94D6D0F026E95E8748066423BF97077 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 ** L_5 = ___state0;
		NullCheck(L_4);
		bool L_6;
		L_6 = StateTransition_TryGetTransiton_m2D8EFBF3FC24873B2527CA493F3AC7BCF8A890C7(L_4, (State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 **)L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0026;
		}
	}
	{
		// for (int i = 0; i < _transitions.Length; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_001b:
	{
		// for (int i = 0; i < _transitions.Length; i++)
		int32_t L_8 = V_0;
		StateTransitionU5BU5D_tD07E9FA7E8D70ED2696D86C41A41673A2F57D212* L_9 = __this->get__transitions_2();
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_0007;
		}
	}

IL_0026:
	{
		// for (int i = 0; i < _transitions.Length; i++)
		V_1 = 0;
		goto IL_003b;
	}

IL_002a:
	{
		// _transitions[i].ClearConditionsCache();
		StateTransitionU5BU5D_tD07E9FA7E8D70ED2696D86C41A41673A2F57D212* L_10 = __this->get__transitions_2();
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		StateTransition_t0A8BCCF7B94D6D0F026E95E8748066423BF97077 * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		StateTransition_ClearConditionsCache_m29C6CEBEA28D4258A93F0903E49D229A4DB859CF(L_13, /*hidden argument*/NULL);
		// for (int i = 0; i < _transitions.Length; i++)
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_003b:
	{
		// for (int i = 0; i < _transitions.Length; i++)
		int32_t L_15 = V_1;
		StateTransitionU5BU5D_tD07E9FA7E8D70ED2696D86C41A41673A2F57D212* L_16 = __this->get__transitions_2();
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))))))
		{
			goto IL_002a;
		}
	}
	{
		// return state != null;
		State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 ** L_17 = ___state0;
		State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 * L_18 = *((State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 **)L_17);
		return (bool)((!(((RuntimeObject*)(State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 *)L_18) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Void UOP1.StateMachine.State::<OnStateEnter>g__OnStateEnter|6_0(UOP1.StateMachine.IStateComponent[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State_U3COnStateEnterU3Eg__OnStateEnterU7C6_0_mBB66B0BE7FF99DDECD90789DE7EFEF8DA4B81D23 (IStateComponentU5BU5D_t453B498EEAA39168FEE5CA4D000F5EFD804449D1* ___comps0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateComponent_t391CB78967028D5ED5B6241BC2BD7E0E3E635D6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < comps.Length; i++)
		V_0 = 0;
		goto IL_0010;
	}

IL_0004:
	{
		// comps[i].OnStateEnter();
		IStateComponentU5BU5D_t453B498EEAA39168FEE5CA4D000F5EFD804449D1* L_0 = ___comps0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(0 /* System.Void UOP1.StateMachine.IStateComponent::OnStateEnter() */, IStateComponent_t391CB78967028D5ED5B6241BC2BD7E0E3E635D6F_il2cpp_TypeInfo_var, L_3);
		// for (int i = 0; i < comps.Length; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0010:
	{
		// for (int i = 0; i < comps.Length; i++)
		int32_t L_5 = V_0;
		IStateComponentU5BU5D_t453B498EEAA39168FEE5CA4D000F5EFD804449D1* L_6 = ___comps0;
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UOP1.StateMachine.State::<OnStateExit>g__OnStateExit|8_0(UOP1.StateMachine.IStateComponent[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State_U3COnStateExitU3Eg__OnStateExitU7C8_0_m14160F45ED4BB9B1A97485D301C083C4B3599042 (IStateComponentU5BU5D_t453B498EEAA39168FEE5CA4D000F5EFD804449D1* ___comps0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateComponent_t391CB78967028D5ED5B6241BC2BD7E0E3E635D6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < comps.Length; i++)
		V_0 = 0;
		goto IL_0010;
	}

IL_0004:
	{
		// comps[i].OnStateExit();
		IStateComponentU5BU5D_t453B498EEAA39168FEE5CA4D000F5EFD804449D1* L_0 = ___comps0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(1 /* System.Void UOP1.StateMachine.IStateComponent::OnStateExit() */, IStateComponent_t391CB78967028D5ED5B6241BC2BD7E0E3E635D6F_il2cpp_TypeInfo_var, L_3);
		// for (int i = 0; i < comps.Length; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0010:
	{
		// for (int i = 0; i < comps.Length; i++)
		int32_t L_5 = V_0;
		IStateComponentU5BU5D_t453B498EEAA39168FEE5CA4D000F5EFD804449D1* L_6 = ___comps0;
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
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
// UOP1.StateMachine.ScriptableObjects.StateActionSO UOP1.StateMachine.StateAction::get_OriginSO()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StateActionSO_t096FFFB367484F1D4001EB84C41F08FBBEE54464 * StateAction_get_OriginSO_m6FA9BF5B52EC158EE91F709ED5B30891EAA23403 (StateAction_t89AE978DB2427B6779144284E8D8990F2FCB89F5 * __this, const RuntimeMethod* method)
{
	{
		// protected StateActionSO OriginSO => _originSO;
		StateActionSO_t096FFFB367484F1D4001EB84C41F08FBBEE54464 * L_0 = __this->get__originSO_0();
		return L_0;
	}
}
// System.Void UOP1.StateMachine.StateAction::Awake(UOP1.StateMachine.StateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateAction_Awake_mD5E51FB9F35CF1FAC0CD95DF49F8CE819A050810 (StateAction_t89AE978DB2427B6779144284E8D8990F2FCB89F5 * __this, StateMachine_tFB54EE0D17C72BF68C4199F5384DC5FA0A5EB715 * ___stateMachine0, const RuntimeMethod* method)
{
	{
		// public virtual void Awake(StateMachine stateMachine) { }
		return;
	}
}
// System.Void UOP1.StateMachine.StateAction::OnStateEnter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateAction_OnStateEnter_m8710212DFC1583CCE05A3C6AE9C40F06CFFACB7F (StateAction_t89AE978DB2427B6779144284E8D8990F2FCB89F5 * __this, const RuntimeMethod* method)
{
	{
		// public virtual void OnStateEnter() { }
		return;
	}
}
// System.Void UOP1.StateMachine.StateAction::OnStateExit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateAction_OnStateExit_m6A3334C1D85F2E90E069BAE7F9BC83864277E829 (StateAction_t89AE978DB2427B6779144284E8D8990F2FCB89F5 * __this, const RuntimeMethod* method)
{
	{
		// public virtual void OnStateExit() { }
		return;
	}
}
// System.Void UOP1.StateMachine.StateAction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateAction__ctor_m2EAB48990E8E7A1708D00AC582EBA3AE09DD14D5 (StateAction_t89AE978DB2427B6779144284E8D8990F2FCB89F5 * __this, const RuntimeMethod* method)
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
// UOP1.StateMachine.StateAction UOP1.StateMachine.ScriptableObjects.StateActionSO::GetAction(UOP1.StateMachine.StateMachine,System.Collections.Generic.Dictionary`2<UnityEngine.ScriptableObject,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StateAction_t89AE978DB2427B6779144284E8D8990F2FCB89F5 * StateActionSO_GetAction_m0DDCFE720CDFF357BC8D6071D6592EB587828C75 (StateActionSO_t096FFFB367484F1D4001EB84C41F08FBBEE54464 * __this, StateMachine_tFB54EE0D17C72BF68C4199F5384DC5FA0A5EB715 * ___stateMachine0, Dictionary_2_t701330DAA667B6BC6DC537F393DB4AC36321F406 * ___createdInstances1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mDBF533176920ACB60C2D3D2DEEE5B72A074D557A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m3060E96E67EC2DEBE23B4186D425A9FE8F8496D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateAction_t89AE978DB2427B6779144284E8D8990F2FCB89F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	StateAction_t89AE978DB2427B6779144284E8D8990F2FCB89F5 * V_1 = NULL;
	{
		// if (createdInstances.TryGetValue(this, out var obj))
		Dictionary_2_t701330DAA667B6BC6DC537F393DB4AC36321F406 * L_0 = ___createdInstances1;
		NullCheck(L_0);
		bool L_1;
		L_1 = Dictionary_2_TryGetValue_m3060E96E67EC2DEBE23B4186D425A9FE8F8496D8(L_0, __this, (RuntimeObject **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m3060E96E67EC2DEBE23B4186D425A9FE8F8496D8_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// return (StateAction)obj;
		RuntimeObject * L_2 = V_0;
		return ((StateAction_t89AE978DB2427B6779144284E8D8990F2FCB89F5 *)CastclassClass((RuntimeObject*)L_2, StateAction_t89AE978DB2427B6779144284E8D8990F2FCB89F5_il2cpp_TypeInfo_var));
	}

IL_0012:
	{
		// var action = CreateAction();
		StateAction_t89AE978DB2427B6779144284E8D8990F2FCB89F5 * L_3;
		L_3 = VirtFuncInvoker0< StateAction_t89AE978DB2427B6779144284E8D8990F2FCB89F5 * >::Invoke(4 /* UOP1.StateMachine.StateAction UOP1.StateMachine.ScriptableObjects.StateActionSO::CreateAction() */, __this);
		V_1 = L_3;
		// createdInstances.Add(this, action);
		Dictionary_2_t701330DAA667B6BC6DC537F393DB4AC36321F406 * L_4 = ___createdInstances1;
		StateAction_t89AE978DB2427B6779144284E8D8990F2FCB89F5 * L_5 = V_1;
		NullCheck(L_4);
		Dictionary_2_Add_mDBF533176920ACB60C2D3D2DEEE5B72A074D557A(L_4, __this, L_5, /*hidden argument*/Dictionary_2_Add_mDBF533176920ACB60C2D3D2DEEE5B72A074D557A_RuntimeMethod_var);
		// action._originSO = this;
		StateAction_t89AE978DB2427B6779144284E8D8990F2FCB89F5 * L_6 = V_1;
		NullCheck(L_6);
		L_6->set__originSO_0(__this);
		// action.Awake(stateMachine);
		StateAction_t89AE978DB2427B6779144284E8D8990F2FCB89F5 * L_7 = V_1;
		StateMachine_tFB54EE0D17C72BF68C4199F5384DC5FA0A5EB715 * L_8 = ___stateMachine0;
		NullCheck(L_7);
		VirtActionInvoker1< StateMachine_tFB54EE0D17C72BF68C4199F5384DC5FA0A5EB715 * >::Invoke(7 /* System.Void UOP1.StateMachine.StateAction::Awake(UOP1.StateMachine.StateMachine) */, L_7, L_8);
		// return action;
		StateAction_t89AE978DB2427B6779144284E8D8990F2FCB89F5 * L_9 = V_1;
		return L_9;
	}
}
// System.Void UOP1.StateMachine.ScriptableObjects.StateActionSO::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateActionSO__ctor_mD9E937E4B8244F0324BCDE46170CDD858806646B (StateActionSO_t096FFFB367484F1D4001EB84C41F08FBBEE54464 * __this, const RuntimeMethod* method)
{
	{
		DescriptionSMActionBaseSO__ctor_mB0D5A2E98A2CEC2B0CFC349ED51516EB52684EB0(__this, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: UOP1.StateMachine.StateCondition
IL2CPP_EXTERN_C void StateCondition_t6D1708031DFC3FBA54B621BD5B684D0DD8F0CA8D_marshal_pinvoke(const StateCondition_t6D1708031DFC3FBA54B621BD5B684D0DD8F0CA8D& unmarshaled, StateCondition_t6D1708031DFC3FBA54B621BD5B684D0DD8F0CA8D_marshaled_pinvoke& marshaled)
{
	Exception_t* ____stateMachine_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_stateMachine' of type 'StateCondition': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____stateMachine_0Exception, NULL);
}
IL2CPP_EXTERN_C void StateCondition_t6D1708031DFC3FBA54B621BD5B684D0DD8F0CA8D_marshal_pinvoke_back(const StateCondition_t6D1708031DFC3FBA54B621BD5B684D0DD8F0CA8D_marshaled_pinvoke& marshaled, StateCondition_t6D1708031DFC3FBA54B621BD5B684D0DD8F0CA8D& unmarshaled)
{
	Exception_t* ____stateMachine_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_stateMachine' of type 'StateCondition': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____stateMachine_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UOP1.StateMachine.StateCondition
IL2CPP_EXTERN_C void StateCondition_t6D1708031DFC3FBA54B621BD5B684D0DD8F0CA8D_marshal_pinvoke_cleanup(StateCondition_t6D1708031DFC3FBA54B621BD5B684D0DD8F0CA8D_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UOP1.StateMachine.StateCondition
IL2CPP_EXTERN_C void StateCondition_t6D1708031DFC3FBA54B621BD5B684D0DD8F0CA8D_marshal_com(const StateCondition_t6D1708031DFC3FBA54B621BD5B684D0DD8F0CA8D& unmarshaled, StateCondition_t6D1708031DFC3FBA54B621BD5B684D0DD8F0CA8D_marshaled_com& marshaled)
{
	Exception_t* ____stateMachine_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_stateMachine' of type 'StateCondition': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____stateMachine_0Exception, NULL);
}
IL2CPP_EXTERN_C void StateCondition_t6D1708031DFC3FBA54B621BD5B684D0DD8F0CA8D_marshal_com_back(const StateCondition_t6D1708031DFC3FBA54B621BD5B684D0DD8F0CA8D_marshaled_com& marshaled, StateCondition_t6D1708031DFC3FBA54B621BD5B684D0DD8F0CA8D& unmarshaled)
{
	Exception_t* ____stateMachine_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_stateMachine' of type 'StateCondition': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____stateMachine_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UOP1.StateMachine.StateCondition
IL2CPP_EXTERN_C void StateCondition_t6D1708031DFC3FBA54B621BD5B684D0DD8F0CA8D_marshal_com_cleanup(StateCondition_t6D1708031DFC3FBA54B621BD5B684D0DD8F0CA8D_marshaled_com& marshaled)
{
}
// System.Void UOP1.StateMachine.StateCondition::.ctor(UOP1.StateMachine.StateMachine,UOP1.StateMachine.Condition,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateCondition__ctor_m830329CF884D4274D6A68E2865BD32B852256D37 (StateCondition_t6D1708031DFC3FBA54B621BD5B684D0DD8F0CA8D * __this, StateMachine_tFB54EE0D17C72BF68C4199F5384DC5FA0A5EB715 * ___stateMachine0, Condition_tF90A1BDDA617FE9E50B9EC09EBE9069291DACEBE * ___condition1, bool ___expectedResult2, const RuntimeMethod* method)
{
	{
		// _stateMachine = stateMachine;
		StateMachine_tFB54EE0D17C72BF68C4199F5384DC5FA0A5EB715 * L_0 = ___stateMachine0;
		__this->set__stateMachine_0(L_0);
		// _condition = condition;
		Condition_tF90A1BDDA617FE9E50B9EC09EBE9069291DACEBE * L_1 = ___condition1;
		__this->set__condition_1(L_1);
		// _expectedResult = expectedResult;
		bool L_2 = ___expectedResult2;
		__this->set__expectedResult_2(L_2);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void StateCondition__ctor_m830329CF884D4274D6A68E2865BD32B852256D37_AdjustorThunk (RuntimeObject * __this, StateMachine_tFB54EE0D17C72BF68C4199F5384DC5FA0A5EB715 * ___stateMachine0, Condition_tF90A1BDDA617FE9E50B9EC09EBE9069291DACEBE * ___condition1, bool ___expectedResult2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StateCondition_t6D1708031DFC3FBA54B621BD5B684D0DD8F0CA8D * _thisAdjusted = reinterpret_cast<StateCondition_t6D1708031DFC3FBA54B621BD5B684D0DD8F0CA8D *>(__this + _offset);
	StateCondition__ctor_m830329CF884D4274D6A68E2865BD32B852256D37(_thisAdjusted, ___stateMachine0, ___condition1, ___expectedResult2, method);
}
// System.Boolean UOP1.StateMachine.StateCondition::IsMet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StateCondition_IsMet_m9B81FD6800389F3B74A6EC6EE3709DC855C688AA (StateCondition_t6D1708031DFC3FBA54B621BD5B684D0DD8F0CA8D * __this, const RuntimeMethod* method)
{
	{
		// bool statement = _condition.GetStatement();
		Condition_tF90A1BDDA617FE9E50B9EC09EBE9069291DACEBE * L_0 = __this->get__condition_1();
		NullCheck(L_0);
		bool L_1;
		L_1 = Condition_GetStatement_m6B1C27C0B9C8DA91A42ACF65EFC146BA0B8242AB(L_0, /*hidden argument*/NULL);
		// bool isMet = statement == _expectedResult;
		bool L_2 = __this->get__expectedResult_2();
		// return isMet;
		return (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool StateCondition_IsMet_m9B81FD6800389F3B74A6EC6EE3709DC855C688AA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StateCondition_t6D1708031DFC3FBA54B621BD5B684D0DD8F0CA8D * _thisAdjusted = reinterpret_cast<StateCondition_t6D1708031DFC3FBA54B621BD5B684D0DD8F0CA8D *>(__this + _offset);
	bool _returnValue;
	_returnValue = StateCondition_IsMet_m9B81FD6800389F3B74A6EC6EE3709DC855C688AA(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UOP1.StateMachine.StateCondition UOP1.StateMachine.ScriptableObjects.StateConditionSO::GetCondition(UOP1.StateMachine.StateMachine,System.Boolean,System.Collections.Generic.Dictionary`2<UnityEngine.ScriptableObject,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StateCondition_t6D1708031DFC3FBA54B621BD5B684D0DD8F0CA8D  StateConditionSO_GetCondition_mBA40810A56E512AB5B16996ABB5783F776A9EEEF (StateConditionSO_t289259ED0499C139B5D115D98B5E6F981068C076 * __this, StateMachine_tFB54EE0D17C72BF68C4199F5384DC5FA0A5EB715 * ___stateMachine0, bool ___expectedResult1, Dictionary_2_t701330DAA667B6BC6DC537F393DB4AC36321F406 * ___createdInstances2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Condition_tF90A1BDDA617FE9E50B9EC09EBE9069291DACEBE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mDBF533176920ACB60C2D3D2DEEE5B72A074D557A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m3060E96E67EC2DEBE23B4186D425A9FE8F8496D8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Condition_tF90A1BDDA617FE9E50B9EC09EBE9069291DACEBE * V_1 = NULL;
	{
		// if (!createdInstances.TryGetValue(this, out var obj))
		Dictionary_2_t701330DAA667B6BC6DC537F393DB4AC36321F406 * L_0 = ___createdInstances2;
		NullCheck(L_0);
		bool L_1;
		L_1 = Dictionary_2_TryGetValue_m3060E96E67EC2DEBE23B4186D425A9FE8F8496D8(L_0, __this, (RuntimeObject **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m3060E96E67EC2DEBE23B4186D425A9FE8F8496D8_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_002a;
		}
	}
	{
		// var condition = CreateCondition();
		Condition_tF90A1BDDA617FE9E50B9EC09EBE9069291DACEBE * L_2;
		L_2 = VirtFuncInvoker0< Condition_tF90A1BDDA617FE9E50B9EC09EBE9069291DACEBE * >::Invoke(4 /* UOP1.StateMachine.Condition UOP1.StateMachine.ScriptableObjects.StateConditionSO::CreateCondition() */, __this);
		V_1 = L_2;
		// condition._originSO = this;
		Condition_tF90A1BDDA617FE9E50B9EC09EBE9069291DACEBE * L_3 = V_1;
		NullCheck(L_3);
		L_3->set__originSO_2(__this);
		// createdInstances.Add(this, condition);
		Dictionary_2_t701330DAA667B6BC6DC537F393DB4AC36321F406 * L_4 = ___createdInstances2;
		Condition_tF90A1BDDA617FE9E50B9EC09EBE9069291DACEBE * L_5 = V_1;
		NullCheck(L_4);
		Dictionary_2_Add_mDBF533176920ACB60C2D3D2DEEE5B72A074D557A(L_4, __this, L_5, /*hidden argument*/Dictionary_2_Add_mDBF533176920ACB60C2D3D2DEEE5B72A074D557A_RuntimeMethod_var);
		// condition.Awake(stateMachine);
		Condition_tF90A1BDDA617FE9E50B9EC09EBE9069291DACEBE * L_6 = V_1;
		StateMachine_tFB54EE0D17C72BF68C4199F5384DC5FA0A5EB715 * L_7 = ___stateMachine0;
		NullCheck(L_6);
		VirtActionInvoker1< StateMachine_tFB54EE0D17C72BF68C4199F5384DC5FA0A5EB715 * >::Invoke(7 /* System.Void UOP1.StateMachine.Condition::Awake(UOP1.StateMachine.StateMachine) */, L_6, L_7);
		// obj = condition;
		Condition_tF90A1BDDA617FE9E50B9EC09EBE9069291DACEBE * L_8 = V_1;
		V_0 = L_8;
	}

IL_002a:
	{
		// return new StateCondition(stateMachine, (Condition)obj, expectedResult);
		StateMachine_tFB54EE0D17C72BF68C4199F5384DC5FA0A5EB715 * L_9 = ___stateMachine0;
		RuntimeObject * L_10 = V_0;
		bool L_11 = ___expectedResult1;
		StateCondition_t6D1708031DFC3FBA54B621BD5B684D0DD8F0CA8D  L_12;
		memset((&L_12), 0, sizeof(L_12));
		StateCondition__ctor_m830329CF884D4274D6A68E2865BD32B852256D37((&L_12), L_9, ((Condition_tF90A1BDDA617FE9E50B9EC09EBE9069291DACEBE *)CastclassClass((RuntimeObject*)L_10, Condition_tF90A1BDDA617FE9E50B9EC09EBE9069291DACEBE_il2cpp_TypeInfo_var)), L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Void UOP1.StateMachine.ScriptableObjects.StateConditionSO::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateConditionSO__ctor_m88DC0D3727C2A875FB62C21EB3337CBCD0E6B3BD (StateConditionSO_t289259ED0499C139B5D115D98B5E6F981068C076 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.Void UOP1.StateMachine.StateMachine::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachine_Awake_m022FCE1A5246D7958DE29EDA00197F67373F58EA (StateMachine_tFB54EE0D17C72BF68C4199F5384DC5FA0A5EB715 * __this, const RuntimeMethod* method)
{
	{
		// _currentState = _transitionTableSO.GetInitialState(this);
		TransitionTableSO_t7C3E2776FE97CE6C269F81F8880745E200A12CC3 * L_0 = __this->get__transitionTableSO_4();
		NullCheck(L_0);
		State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 * L_1;
		L_1 = TransitionTableSO_GetInitialState_mB5C0868BA5BCA574E80B5E4CB3FABB7368C4F840(L_0, __this, /*hidden argument*/NULL);
		__this->set__currentState_6(L_1);
		// }
		return;
	}
}
// System.Void UOP1.StateMachine.StateMachine::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachine_Start_m600746503690613F130ACB7F9D43720D9F436418 (StateMachine_tFB54EE0D17C72BF68C4199F5384DC5FA0A5EB715 * __this, const RuntimeMethod* method)
{
	{
		// _currentState.OnStateEnter();
		State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 * L_0 = __this->get__currentState_6();
		NullCheck(L_0);
		State_OnStateEnter_m3A45C588D38628CEC99E5C9344CA5A8809D74F22(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UOP1.StateMachine.StateMachine::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachine_Update_mD06A51727A85DFB6E5965BE5CBD502D4E48DCDE7 (StateMachine_tFB54EE0D17C72BF68C4199F5384DC5FA0A5EB715 * __this, const RuntimeMethod* method)
{
	State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 * V_0 = NULL;
	{
		// if (_currentState.TryGetTransition(out var transitionState))
		State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 * L_0 = __this->get__currentState_6();
		NullCheck(L_0);
		bool L_1;
		L_1 = State_TryGetTransition_m738955C61A215278F78CA72942F7A113EF51EB02(L_0, (State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 **)(&V_0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// Transition(transitionState);
		State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 * L_2 = V_0;
		StateMachine_Transition_mEAE0955E4B46376440CE6E8C4DAA8B629BFD0CE1(__this, L_2, /*hidden argument*/NULL);
	}

IL_0016:
	{
		// _currentState.OnUpdate();
		State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 * L_3 = __this->get__currentState_6();
		NullCheck(L_3);
		State_OnUpdate_mAAA0191F35F39252FABB8FD5EB141B0C4EC82B1D(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UOP1.StateMachine.StateMachine::Transition(UOP1.StateMachine.State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachine_Transition_mEAE0955E4B46376440CE6E8C4DAA8B629BFD0CE1 (StateMachine_tFB54EE0D17C72BF68C4199F5384DC5FA0A5EB715 * __this, State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 * ___transitionState0, const RuntimeMethod* method)
{
	{
		// _currentState.OnStateExit();
		State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 * L_0 = __this->get__currentState_6();
		NullCheck(L_0);
		State_OnStateExit_mC5BB402313375441A4E7315B100F586357B6A49B(L_0, /*hidden argument*/NULL);
		// _currentState = transitionState;
		State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 * L_1 = ___transitionState0;
		__this->set__currentState_6(L_1);
		// _currentState.OnStateEnter();
		State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 * L_2 = __this->get__currentState_6();
		NullCheck(L_2);
		State_OnStateEnter_m3A45C588D38628CEC99E5C9344CA5A8809D74F22(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UOP1.StateMachine.StateMachine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachine__ctor_m895BD558A6C3288E92803D181AA4CFE94117C6CA (StateMachine_tFB54EE0D17C72BF68C4199F5384DC5FA0A5EB715 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC7A5AF370D0A97F954E753D5D3DEC7D72DDAF6D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t85103725B10537B9AE52FB0E98C01B8242CBF8FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Dictionary<Type, Component> _cachedComponents = new Dictionary<Type, Component>();
		Dictionary_2_t85103725B10537B9AE52FB0E98C01B8242CBF8FA * L_0 = (Dictionary_2_t85103725B10537B9AE52FB0E98C01B8242CBF8FA *)il2cpp_codegen_object_new(Dictionary_2_t85103725B10537B9AE52FB0E98C01B8242CBF8FA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mC7A5AF370D0A97F954E753D5D3DEC7D72DDAF6D9(L_0, /*hidden argument*/Dictionary_2__ctor_mC7A5AF370D0A97F954E753D5D3DEC7D72DDAF6D9_RuntimeMethod_var);
		__this->set__cachedComponents_5(L_0);
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
// UOP1.StateMachine.State UOP1.StateMachine.ScriptableObjects.StateSO::GetState(UOP1.StateMachine.StateMachine,System.Collections.Generic.Dictionary`2<UnityEngine.ScriptableObject,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 * StateSO_GetState_m987C2B16950E1940D352B85A36DB14FE4B8F5C6D (StateSO_tF4CE457955F5F6AE1566DA9CA381B389AA15C54A * __this, StateMachine_tFB54EE0D17C72BF68C4199F5384DC5FA0A5EB715 * ___stateMachine0, Dictionary_2_t701330DAA667B6BC6DC537F393DB4AC36321F406 * ___createdInstances1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mDBF533176920ACB60C2D3D2DEEE5B72A074D557A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m3060E96E67EC2DEBE23B4186D425A9FE8F8496D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateTransitionU5BU5D_tD07E9FA7E8D70ED2696D86C41A41673A2F57D212_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 * V_1 = NULL;
	{
		// if (createdInstances.TryGetValue(this, out var obj))
		Dictionary_2_t701330DAA667B6BC6DC537F393DB4AC36321F406 * L_0 = ___createdInstances1;
		NullCheck(L_0);
		bool L_1;
		L_1 = Dictionary_2_TryGetValue_m3060E96E67EC2DEBE23B4186D425A9FE8F8496D8(L_0, __this, (RuntimeObject **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m3060E96E67EC2DEBE23B4186D425A9FE8F8496D8_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// return (State)obj;
		RuntimeObject * L_2 = V_0;
		return ((State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 *)CastclassClass((RuntimeObject*)L_2, State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9_il2cpp_TypeInfo_var));
	}

IL_0012:
	{
		// var state = new State();
		State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 * L_3 = (State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 *)il2cpp_codegen_object_new(State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9_il2cpp_TypeInfo_var);
		State__ctor_mE300ABE7BE78C2DA0C5AFA69AF7D97C6D17F7A3F(L_3, /*hidden argument*/NULL);
		V_1 = L_3;
		// createdInstances.Add(this, state);
		Dictionary_2_t701330DAA667B6BC6DC537F393DB4AC36321F406 * L_4 = ___createdInstances1;
		State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 * L_5 = V_1;
		NullCheck(L_4);
		Dictionary_2_Add_mDBF533176920ACB60C2D3D2DEEE5B72A074D557A(L_4, __this, L_5, /*hidden argument*/Dictionary_2_Add_mDBF533176920ACB60C2D3D2DEEE5B72A074D557A_RuntimeMethod_var);
		// state._originSO = this;
		State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 * L_6 = V_1;
		NullCheck(L_6);
		L_6->set__originSO_0(__this);
		// state._stateMachine = stateMachine;
		State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 * L_7 = V_1;
		StateMachine_tFB54EE0D17C72BF68C4199F5384DC5FA0A5EB715 * L_8 = ___stateMachine0;
		NullCheck(L_7);
		L_7->set__stateMachine_1(L_8);
		// state._transitions = new StateTransition[0];
		State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 * L_9 = V_1;
		StateTransitionU5BU5D_tD07E9FA7E8D70ED2696D86C41A41673A2F57D212* L_10 = (StateTransitionU5BU5D_tD07E9FA7E8D70ED2696D86C41A41673A2F57D212*)(StateTransitionU5BU5D_tD07E9FA7E8D70ED2696D86C41A41673A2F57D212*)SZArrayNew(StateTransitionU5BU5D_tD07E9FA7E8D70ED2696D86C41A41673A2F57D212_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_9);
		L_9->set__transitions_2(L_10);
		// state._actions = GetActions(_actions, stateMachine, createdInstances);
		State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 * L_11 = V_1;
		StateActionSOU5BU5D_tCB65969F8168B6B776CF8CD8C1838B209AD03339* L_12 = __this->get__actions_4();
		StateMachine_tFB54EE0D17C72BF68C4199F5384DC5FA0A5EB715 * L_13 = ___stateMachine0;
		Dictionary_2_t701330DAA667B6BC6DC537F393DB4AC36321F406 * L_14 = ___createdInstances1;
		StateActionU5BU5D_t78E8D648909411BB414715FCAE95ACF10F5869D7* L_15;
		L_15 = StateSO_GetActions_mA33D4B0AE98E1AADFA71330AEE6D4F7B5893DF88(L_12, L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_11);
		L_11->set__actions_3(L_15);
		// return state;
		State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 * L_16 = V_1;
		return L_16;
	}
}
// UOP1.StateMachine.StateAction[] UOP1.StateMachine.ScriptableObjects.StateSO::GetActions(UOP1.StateMachine.ScriptableObjects.StateActionSO[],UOP1.StateMachine.StateMachine,System.Collections.Generic.Dictionary`2<UnityEngine.ScriptableObject,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StateActionU5BU5D_t78E8D648909411BB414715FCAE95ACF10F5869D7* StateSO_GetActions_mA33D4B0AE98E1AADFA71330AEE6D4F7B5893DF88 (StateActionSOU5BU5D_tCB65969F8168B6B776CF8CD8C1838B209AD03339* ___scriptableActions0, StateMachine_tFB54EE0D17C72BF68C4199F5384DC5FA0A5EB715 * ___stateMachine1, Dictionary_2_t701330DAA667B6BC6DC537F393DB4AC36321F406 * ___createdInstances2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateActionU5BU5D_t78E8D648909411BB414715FCAE95ACF10F5869D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StateActionU5BU5D_t78E8D648909411BB414715FCAE95ACF10F5869D7* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// int count = scriptableActions.Length;
		StateActionSOU5BU5D_tCB65969F8168B6B776CF8CD8C1838B209AD03339* L_0 = ___scriptableActions0;
		NullCheck(L_0);
		V_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		// var actions = new StateAction[count];
		int32_t L_1 = V_0;
		StateActionU5BU5D_t78E8D648909411BB414715FCAE95ACF10F5869D7* L_2 = (StateActionU5BU5D_t78E8D648909411BB414715FCAE95ACF10F5869D7*)(StateActionU5BU5D_t78E8D648909411BB414715FCAE95ACF10F5869D7*)SZArrayNew(StateActionU5BU5D_t78E8D648909411BB414715FCAE95ACF10F5869D7_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_1 = L_2;
		// for (int i = 0; i < count; i++)
		V_2 = 0;
		goto IL_0020;
	}

IL_000f:
	{
		// actions[i] = scriptableActions[i].GetAction(stateMachine, createdInstances);
		StateActionU5BU5D_t78E8D648909411BB414715FCAE95ACF10F5869D7* L_3 = V_1;
		int32_t L_4 = V_2;
		StateActionSOU5BU5D_tCB65969F8168B6B776CF8CD8C1838B209AD03339* L_5 = ___scriptableActions0;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		StateActionSO_t096FFFB367484F1D4001EB84C41F08FBBEE54464 * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		StateMachine_tFB54EE0D17C72BF68C4199F5384DC5FA0A5EB715 * L_9 = ___stateMachine1;
		Dictionary_2_t701330DAA667B6BC6DC537F393DB4AC36321F406 * L_10 = ___createdInstances2;
		NullCheck(L_8);
		StateAction_t89AE978DB2427B6779144284E8D8990F2FCB89F5 * L_11;
		L_11 = StateActionSO_GetAction_m0DDCFE720CDFF357BC8D6071D6592EB587828C75(L_8, L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_11);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (StateAction_t89AE978DB2427B6779144284E8D8990F2FCB89F5 *)L_11);
		// for (int i = 0; i < count; i++)
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0020:
	{
		// for (int i = 0; i < count; i++)
		int32_t L_13 = V_2;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_000f;
		}
	}
	{
		// return actions;
		StateActionU5BU5D_t78E8D648909411BB414715FCAE95ACF10F5869D7* L_15 = V_1;
		return L_15;
	}
}
// System.Void UOP1.StateMachine.ScriptableObjects.StateSO::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateSO__ctor_mC2BC260D3E88632DDB0C6585FDFF5E1A6B25E24F (StateSO_tF4CE457955F5F6AE1566DA9CA381B389AA15C54A * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.Void UOP1.StateMachine.StateTransition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateTransition__ctor_m2B9DB56662FC0861208D69625E8CBFC9C38B7600 (StateTransition_t0A8BCCF7B94D6D0F026E95E8748066423BF97077 * __this, const RuntimeMethod* method)
{
	{
		// internal StateTransition() { }
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// internal StateTransition() { }
		return;
	}
}
// System.Void UOP1.StateMachine.StateTransition::.ctor(UOP1.StateMachine.State,UOP1.StateMachine.StateCondition[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateTransition__ctor_m389BE3F912EF99345D69EB08BABDFFFB46C58B40 (StateTransition_t0A8BCCF7B94D6D0F026E95E8748066423BF97077 * __this, State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 * ___targetState0, StateConditionU5BU5D_tAB59A90CA4CE595EBDD2E47AE6990F3E2C0A01A0* ___conditions1, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___resultGroups2, const RuntimeMethod* method)
{
	{
		// public StateTransition(State targetState, StateCondition[] conditions, int[] resultGroups = null)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Init(targetState, conditions, resultGroups);
		State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 * L_0 = ___targetState0;
		StateConditionU5BU5D_tAB59A90CA4CE595EBDD2E47AE6990F3E2C0A01A0* L_1 = ___conditions1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = ___resultGroups2;
		StateTransition_Init_m3F6BAB5ACEDC195D31EEEDF36795EA1E97EE8E84(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UOP1.StateMachine.StateTransition::Init(UOP1.StateMachine.State,UOP1.StateMachine.StateCondition[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateTransition_Init_m3F6BAB5ACEDC195D31EEEDF36795EA1E97EE8E84 (StateTransition_t0A8BCCF7B94D6D0F026E95E8748066423BF97077 * __this, State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 * ___targetState0, StateConditionU5BU5D_tAB59A90CA4CE595EBDD2E47AE6990F3E2C0A01A0* ___conditions1, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___resultGroups2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StateTransition_t0A8BCCF7B94D6D0F026E95E8748066423BF97077 * G_B2_0 = NULL;
	StateTransition_t0A8BCCF7B94D6D0F026E95E8748066423BF97077 * G_B1_0 = NULL;
	StateTransition_t0A8BCCF7B94D6D0F026E95E8748066423BF97077 * G_B3_0 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B4_0 = NULL;
	StateTransition_t0A8BCCF7B94D6D0F026E95E8748066423BF97077 * G_B4_1 = NULL;
	{
		// _targetState = targetState;
		State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 * L_0 = ___targetState0;
		__this->set__targetState_0(L_0);
		// _conditions = conditions;
		StateConditionU5BU5D_tAB59A90CA4CE595EBDD2E47AE6990F3E2C0A01A0* L_1 = ___conditions1;
		__this->set__conditions_1(L_1);
		// _resultGroups = resultGroups != null && resultGroups.Length > 0 ? resultGroups : new int[1];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = ___resultGroups2;
		G_B1_0 = __this;
		if (!L_2)
		{
			G_B2_0 = __this;
			goto IL_0016;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = ___resultGroups2;
		NullCheck(L_3);
		G_B2_0 = G_B1_0;
		if ((((RuntimeArray*)L_3)->max_length))
		{
			G_B3_0 = G_B1_0;
			goto IL_001e;
		}
	}

IL_0016:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		G_B4_0 = L_4;
		G_B4_1 = G_B2_0;
		goto IL_001f;
	}

IL_001e:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = ___resultGroups2;
		G_B4_0 = L_5;
		G_B4_1 = G_B3_0;
	}

IL_001f:
	{
		NullCheck(G_B4_1);
		G_B4_1->set__resultGroups_2(G_B4_0);
		// _results = new bool[_resultGroups.Length];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = __this->get__resultGroups_2();
		NullCheck(L_6);
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_7 = (BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)SZArrayNew(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))));
		__this->set__results_3(L_7);
		// }
		return;
	}
}
// System.Boolean UOP1.StateMachine.StateTransition::TryGetTransiton(UOP1.StateMachine.State&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StateTransition_TryGetTransiton_m2D8EFBF3FC24873B2527CA493F3AC7BCF8A890C7 (StateTransition_t0A8BCCF7B94D6D0F026E95E8748066423BF97077 * __this, State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 ** ___state0, const RuntimeMethod* method)
{
	State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 ** G_B2_0 = NULL;
	State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 ** G_B1_0 = NULL;
	State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 * G_B3_0 = NULL;
	State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 ** G_B3_1 = NULL;
	{
		// state = ShouldTransition() ? _targetState : null;
		State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 ** L_0 = ___state0;
		bool L_1;
		L_1 = StateTransition_ShouldTransition_m4A3C712415CC611F518B7DB03EA24711BDBF0246(__this, /*hidden argument*/NULL);
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_000c;
		}
	}
	{
		G_B3_0 = ((State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 *)(NULL));
		G_B3_1 = G_B1_0;
		goto IL_0012;
	}

IL_000c:
	{
		State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 * L_2 = __this->get__targetState_0();
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_0012:
	{
		*((RuntimeObject **)G_B3_1) = (RuntimeObject *)G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)G_B3_1, (void*)(RuntimeObject *)G_B3_0);
		// return state != null;
		State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 ** L_3 = ___state0;
		State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 * L_4 = *((State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 **)L_3);
		return (bool)((!(((RuntimeObject*)(State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Void UOP1.StateMachine.StateTransition::OnStateEnter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateTransition_OnStateEnter_m022A9CD4C75B356C18C9EDC662E5C3A933B6514E (StateTransition_t0A8BCCF7B94D6D0F026E95E8748066423BF97077 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < _conditions.Length; i++)
		V_0 = 0;
		goto IL_001e;
	}

IL_0004:
	{
		// _conditions[i]._condition.OnStateEnter();
		StateConditionU5BU5D_tAB59A90CA4CE595EBDD2E47AE6990F3E2C0A01A0* L_0 = __this->get__conditions_1();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Condition_tF90A1BDDA617FE9E50B9EC09EBE9069291DACEBE * L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->get__condition_1();
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(8 /* System.Void UOP1.StateMachine.Condition::OnStateEnter() */, L_2);
		// for (int i = 0; i < _conditions.Length; i++)
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_001e:
	{
		// for (int i = 0; i < _conditions.Length; i++)
		int32_t L_4 = V_0;
		StateConditionU5BU5D_tAB59A90CA4CE595EBDD2E47AE6990F3E2C0A01A0* L_5 = __this->get__conditions_1();
		NullCheck(L_5);
		if ((((int32_t)L_4) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UOP1.StateMachine.StateTransition::OnStateExit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateTransition_OnStateExit_m01C8692E844B5BD4FE4A9CB2E7D52F2C63D5AFDC (StateTransition_t0A8BCCF7B94D6D0F026E95E8748066423BF97077 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < _conditions.Length; i++)
		V_0 = 0;
		goto IL_001e;
	}

IL_0004:
	{
		// _conditions[i]._condition.OnStateExit();
		StateConditionU5BU5D_tAB59A90CA4CE595EBDD2E47AE6990F3E2C0A01A0* L_0 = __this->get__conditions_1();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Condition_tF90A1BDDA617FE9E50B9EC09EBE9069291DACEBE * L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->get__condition_1();
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(9 /* System.Void UOP1.StateMachine.Condition::OnStateExit() */, L_2);
		// for (int i = 0; i < _conditions.Length; i++)
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_001e:
	{
		// for (int i = 0; i < _conditions.Length; i++)
		int32_t L_4 = V_0;
		StateConditionU5BU5D_tAB59A90CA4CE595EBDD2E47AE6990F3E2C0A01A0* L_5 = __this->get__conditions_1();
		NullCheck(L_5);
		if ((((int32_t)L_4) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Boolean UOP1.StateMachine.StateTransition::ShouldTransition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StateTransition_ShouldTransition_m4A3C712415CC611F518B7DB03EA24711BDBF0246 (StateTransition_t0A8BCCF7B94D6D0F026E95E8748066423BF97077 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t G_B6_0 = 0;
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* G_B6_1 = NULL;
	int32_t G_B3_0 = 0;
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* G_B5_1 = NULL;
	int32_t G_B4_0 = 0;
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* G_B4_1 = NULL;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* G_B7_2 = NULL;
	int32_t G_B16_0 = 0;
	{
		// int count = _resultGroups.Length;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get__resultGroups_2();
		NullCheck(L_0);
		V_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		// for (int i = 0, idx = 0; i < count && idx < _conditions.Length; i++)
		V_2 = 0;
		// for (int i = 0, idx = 0; i < count && idx < _conditions.Length; i++)
		V_3 = 0;
		goto IL_006b;
	}

IL_000f:
	{
		// for (int j = 0; j < _resultGroups[i]; j++, idx++)
		V_4 = 0;
		goto IL_005b;
	}

IL_0014:
	{
		// _results[i] = j == 0 ?
		//     _conditions[idx].IsMet() :
		//     _results[i] && _conditions[idx].IsMet();
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_1 = __this->get__results_3();
		int32_t L_2 = V_2;
		int32_t L_3 = V_4;
		G_B3_0 = L_2;
		G_B3_1 = L_1;
		if (!L_3)
		{
			G_B6_0 = L_2;
			G_B6_1 = L_1;
			goto IL_003f;
		}
	}
	{
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_4 = __this->get__results_3();
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint8_t L_7 = (uint8_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
		if (!L_7)
		{
			G_B5_0 = G_B3_0;
			G_B5_1 = G_B3_1;
			goto IL_003c;
		}
	}
	{
		StateConditionU5BU5D_tAB59A90CA4CE595EBDD2E47AE6990F3E2C0A01A0* L_8 = __this->get__conditions_1();
		int32_t L_9 = V_3;
		NullCheck(L_8);
		bool L_10;
		L_10 = StateCondition_IsMet_m9B81FD6800389F3B74A6EC6EE3709DC855C688AA((StateCondition_t6D1708031DFC3FBA54B621BD5B684D0DD8F0CA8D *)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_10));
		G_B7_1 = G_B4_0;
		G_B7_2 = G_B4_1;
		goto IL_0050;
	}

IL_003c:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0050;
	}

IL_003f:
	{
		StateConditionU5BU5D_tAB59A90CA4CE595EBDD2E47AE6990F3E2C0A01A0* L_11 = __this->get__conditions_1();
		int32_t L_12 = V_3;
		NullCheck(L_11);
		bool L_13;
		L_13 = StateCondition_IsMet_m9B81FD6800389F3B74A6EC6EE3709DC855C688AA((StateCondition_t6D1708031DFC3FBA54B621BD5B684D0DD8F0CA8D *)((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12))), /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_13));
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0050:
	{
		NullCheck(G_B7_2);
		(G_B7_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B7_1), (bool)G_B7_0);
		// for (int j = 0; j < _resultGroups[i]; j++, idx++)
		int32_t L_14 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
		// for (int j = 0; j < _resultGroups[i]; j++, idx++)
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_005b:
	{
		// for (int j = 0; j < _resultGroups[i]; j++, idx++)
		int32_t L_16 = V_4;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_17 = __this->get__resultGroups_2();
		int32_t L_18 = V_2;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		int32_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		if ((((int32_t)L_16) < ((int32_t)L_20)))
		{
			goto IL_0014;
		}
	}
	{
		// for (int i = 0, idx = 0; i < count && idx < _conditions.Length; i++)
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_006b:
	{
		// for (int i = 0, idx = 0; i < count && idx < _conditions.Length; i++)
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_24 = V_3;
		StateConditionU5BU5D_tAB59A90CA4CE595EBDD2E47AE6990F3E2C0A01A0* L_25 = __this->get__conditions_1();
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length))))))
		{
			goto IL_000f;
		}
	}

IL_007a:
	{
		// bool ret = false;
		V_1 = (bool)0;
		// for (int i = 0; i < count && !ret; i++)
		V_5 = 0;
		goto IL_0097;
	}

IL_0081:
	{
		// ret = ret || _results[i];
		bool L_26 = V_1;
		if (L_26)
		{
			goto IL_008f;
		}
	}
	{
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_27 = __this->get__results_3();
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		uint8_t L_30 = (uint8_t)(L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		G_B16_0 = ((int32_t)(L_30));
		goto IL_0090;
	}

IL_008f:
	{
		G_B16_0 = 1;
	}

IL_0090:
	{
		V_1 = (bool)G_B16_0;
		// for (int i = 0; i < count && !ret; i++)
		int32_t L_31 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_0097:
	{
		// for (int i = 0; i < count && !ret; i++)
		int32_t L_32 = V_5;
		int32_t L_33 = V_0;
		if ((((int32_t)L_32) >= ((int32_t)L_33)))
		{
			goto IL_009f;
		}
	}
	{
		bool L_34 = V_1;
		if (!L_34)
		{
			goto IL_0081;
		}
	}

IL_009f:
	{
		// return ret;
		bool L_35 = V_1;
		return L_35;
	}
}
// System.Void UOP1.StateMachine.StateTransition::ClearConditionsCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateTransition_ClearConditionsCache_m29C6CEBEA28D4258A93F0903E49D229A4DB859CF (StateTransition_t0A8BCCF7B94D6D0F026E95E8748066423BF97077 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < _conditions.Length; i++)
		V_0 = 0;
		goto IL_001e;
	}

IL_0004:
	{
		// _conditions[i]._condition.ClearStatementCache();
		StateConditionU5BU5D_tAB59A90CA4CE595EBDD2E47AE6990F3E2C0A01A0* L_0 = __this->get__conditions_1();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Condition_tF90A1BDDA617FE9E50B9EC09EBE9069291DACEBE * L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->get__condition_1();
		NullCheck(L_2);
		Condition_ClearStatementCache_m22AF9E33AA23B16B6259658DABB5044846C87C42(L_2, /*hidden argument*/NULL);
		// for (int i = 0; i < _conditions.Length; i++)
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_001e:
	{
		// for (int i = 0; i < _conditions.Length; i++)
		int32_t L_4 = V_0;
		StateConditionU5BU5D_tAB59A90CA4CE595EBDD2E47AE6990F3E2C0A01A0* L_5 = __this->get__conditions_1();
		NullCheck(L_5);
		if ((((int32_t)L_4) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
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
// UOP1.StateMachine.State UOP1.StateMachine.ScriptableObjects.TransitionTableSO::GetInitialState(UOP1.StateMachine.StateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 * TransitionTableSO_GetInitialState_mB5C0868BA5BCA574E80B5E4CB3FABB7368C4F840 (TransitionTableSO_t7C3E2776FE97CE6C269F81F8880745E200A12CC3 * __this, StateMachine_tFB54EE0D17C72BF68C4199F5384DC5FA0A5EB715 * ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mEE20691019BC8C1B512352003E8D9C44E0A3A1B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t701330DAA667B6BC6DC537F393DB4AC36321F406_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_GroupBy_TisTransitionItem_tC4F31A31024167F78AAC0F788A5F606F6055AE0A_TisStateSO_tF4CE457955F5F6AE1566DA9CA381B389AA15C54A_m6C512956F3595B1F62705F2BE641C1440DCCDFF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m05A132C1DA090BCE4B14548D9CD0C97D324C5B9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t61B7B56BD9205365B0DEF3368DD274FA1E163F4E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tBC6148FA4EB6090E84662285E2642B57F9B664A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tD755A93577BE129D19EB0A4A723A6B6FC872B40B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t0DB3554316EA15B682D6E7EA0D0A59F362E763EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t4029F825BAD948A13C17174D7D7898FC7720CE01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGrouping_2_t5B3D87D174A0BFA10DE9B15D7F081424E4D40C40_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m787035E7D5BAE5D9F8987FF3CFBAC311CABD8FF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mABF8C4FB3AF6552FBD7630F0F68A63FFB861C0D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mC10D151B7215ADE22FA4046D0307FEF3153D6332_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mC08058A95C0AFA8892C925A5C87C41FC72D8321D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m00355B270860BD75B5AA31B2C81C487A190BE9FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m46B91DDD24C3311D7C33580F31089735F6CE450F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m701A5158B3DD8B9B2CB0A4C5BC5B6D7ADFB21D70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m9480C02B5F6372D50026AEDC262FF3192D63C8C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5949E2873005DB039313FCF7FB69F28583DE10D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE077A81CF091F6F3535712AAF6459188ED461EEA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateTransition_t0A8BCCF7B94D6D0F026E95E8748066423BF97077_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetInitialStateU3Eb__1_0_m0DE5A785F39D386D8E3593ED69019207EED04876_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t44EBF2D264D41EEF6EA90DA642F31B6AC8ED0379_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tE077A81CF091F6F3535712AAF6459188ED461EEA * V_0 = NULL;
	List_1_t5949E2873005DB039313FCF7FB69F28583DE10D5 * V_1 = NULL;
	Dictionary_2_t701330DAA667B6BC6DC537F393DB4AC36321F406 * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	TransitionItem_tC4F31A31024167F78AAC0F788A5F606F6055AE0A  V_7;
	memset((&V_7), 0, sizeof(V_7));
	State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 * V_8 = NULL;
	StateConditionU5BU5D_tAB59A90CA4CE595EBDD2E47AE6990F3E2C0A01A0* V_9 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_10 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	Func_2_t61B7B56BD9205365B0DEF3368DD274FA1E163F4E * G_B2_0 = NULL;
	TransitionItemU5BU5D_t48946B4E3EEF9A6B9D5501D02D81B6C8CD0C4C14* G_B2_1 = NULL;
	Func_2_t61B7B56BD9205365B0DEF3368DD274FA1E163F4E * G_B1_0 = NULL;
	TransitionItemU5BU5D_t48946B4E3EEF9A6B9D5501D02D81B6C8CD0C4C14* G_B1_1 = NULL;
	{
		// var states = new List<State>();
		List_1_tE077A81CF091F6F3535712AAF6459188ED461EEA * L_0 = (List_1_tE077A81CF091F6F3535712AAF6459188ED461EEA *)il2cpp_codegen_object_new(List_1_tE077A81CF091F6F3535712AAF6459188ED461EEA_il2cpp_TypeInfo_var);
		List_1__ctor_m00355B270860BD75B5AA31B2C81C487A190BE9FB(L_0, /*hidden argument*/List_1__ctor_m00355B270860BD75B5AA31B2C81C487A190BE9FB_RuntimeMethod_var);
		V_0 = L_0;
		// var transitions = new List<StateTransition>();
		List_1_t5949E2873005DB039313FCF7FB69F28583DE10D5 * L_1 = (List_1_t5949E2873005DB039313FCF7FB69F28583DE10D5 *)il2cpp_codegen_object_new(List_1_t5949E2873005DB039313FCF7FB69F28583DE10D5_il2cpp_TypeInfo_var);
		List_1__ctor_m46B91DDD24C3311D7C33580F31089735F6CE450F(L_1, /*hidden argument*/List_1__ctor_m46B91DDD24C3311D7C33580F31089735F6CE450F_RuntimeMethod_var);
		V_1 = L_1;
		// var createdInstances = new Dictionary<ScriptableObject, object>();
		Dictionary_2_t701330DAA667B6BC6DC537F393DB4AC36321F406 * L_2 = (Dictionary_2_t701330DAA667B6BC6DC537F393DB4AC36321F406 *)il2cpp_codegen_object_new(Dictionary_2_t701330DAA667B6BC6DC537F393DB4AC36321F406_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mEE20691019BC8C1B512352003E8D9C44E0A3A1B6(L_2, /*hidden argument*/Dictionary_2__ctor_mEE20691019BC8C1B512352003E8D9C44E0A3A1B6_RuntimeMethod_var);
		V_2 = L_2;
		// var fromStates = _transitions.GroupBy(transition => transition.FromState);
		TransitionItemU5BU5D_t48946B4E3EEF9A6B9D5501D02D81B6C8CD0C4C14* L_3 = __this->get__transitions_4();
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t44EBF2D264D41EEF6EA90DA642F31B6AC8ED0379_il2cpp_TypeInfo_var);
		Func_2_t61B7B56BD9205365B0DEF3368DD274FA1E163F4E * L_4 = ((U3CU3Ec_t44EBF2D264D41EEF6EA90DA642F31B6AC8ED0379_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t44EBF2D264D41EEF6EA90DA642F31B6AC8ED0379_il2cpp_TypeInfo_var))->get_U3CU3E9__1_0_1();
		Func_2_t61B7B56BD9205365B0DEF3368DD274FA1E163F4E * L_5 = L_4;
		G_B1_0 = L_5;
		G_B1_1 = L_3;
		if (L_5)
		{
			G_B2_0 = L_5;
			G_B2_1 = L_3;
			goto IL_0037;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t44EBF2D264D41EEF6EA90DA642F31B6AC8ED0379_il2cpp_TypeInfo_var);
		U3CU3Ec_t44EBF2D264D41EEF6EA90DA642F31B6AC8ED0379 * L_6 = ((U3CU3Ec_t44EBF2D264D41EEF6EA90DA642F31B6AC8ED0379_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t44EBF2D264D41EEF6EA90DA642F31B6AC8ED0379_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t61B7B56BD9205365B0DEF3368DD274FA1E163F4E * L_7 = (Func_2_t61B7B56BD9205365B0DEF3368DD274FA1E163F4E *)il2cpp_codegen_object_new(Func_2_t61B7B56BD9205365B0DEF3368DD274FA1E163F4E_il2cpp_TypeInfo_var);
		Func_2__ctor_m05A132C1DA090BCE4B14548D9CD0C97D324C5B9F(L_7, L_6, (intptr_t)((intptr_t)U3CU3Ec_U3CGetInitialStateU3Eb__1_0_m0DE5A785F39D386D8E3593ED69019207EED04876_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m05A132C1DA090BCE4B14548D9CD0C97D324C5B9F_RuntimeMethod_var);
		Func_2_t61B7B56BD9205365B0DEF3368DD274FA1E163F4E * L_8 = L_7;
		((U3CU3Ec_t44EBF2D264D41EEF6EA90DA642F31B6AC8ED0379_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t44EBF2D264D41EEF6EA90DA642F31B6AC8ED0379_il2cpp_TypeInfo_var))->set_U3CU3E9__1_0_1(L_8);
		G_B2_0 = L_8;
		G_B2_1 = G_B1_1;
	}

IL_0037:
	{
		RuntimeObject* L_9;
		L_9 = Enumerable_GroupBy_TisTransitionItem_tC4F31A31024167F78AAC0F788A5F606F6055AE0A_TisStateSO_tF4CE457955F5F6AE1566DA9CA381B389AA15C54A_m6C512956F3595B1F62705F2BE641C1440DCCDFF3((RuntimeObject*)(RuntimeObject*)G_B2_1, G_B2_0, /*hidden argument*/Enumerable_GroupBy_TisTransitionItem_tC4F31A31024167F78AAC0F788A5F606F6055AE0A_TisStateSO_tF4CE457955F5F6AE1566DA9CA381B389AA15C54A_m6C512956F3595B1F62705F2BE641C1440DCCDFF3_RuntimeMethod_var);
		// foreach (var fromState in fromStates)
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Linq.IGrouping`2<UOP1.StateMachine.ScriptableObjects.StateSO,UOP1.StateMachine.ScriptableObjects.TransitionTableSO/TransitionItem>>::GetEnumerator() */, IEnumerable_1_tD755A93577BE129D19EB0A4A723A6B6FC872B40B_il2cpp_TypeInfo_var, L_9);
		V_3 = L_10;
	}

IL_0042:
	try
	{ // begin try (depth: 1)
		{
			goto IL_013d;
		}

IL_0047:
		{
			// foreach (var fromState in fromStates)
			RuntimeObject* L_11 = V_3;
			NullCheck(L_11);
			RuntimeObject* L_12;
			L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Linq.IGrouping`2<UOP1.StateMachine.ScriptableObjects.StateSO,UOP1.StateMachine.ScriptableObjects.TransitionTableSO/TransitionItem>>::get_Current() */, IEnumerator_1_t4029F825BAD948A13C17174D7D7898FC7720CE01_il2cpp_TypeInfo_var, L_11);
			V_4 = L_12;
			// if (fromState.Key == null)
			RuntimeObject* L_13 = V_4;
			NullCheck(L_13);
			StateSO_tF4CE457955F5F6AE1566DA9CA381B389AA15C54A * L_14;
			L_14 = InterfaceFuncInvoker0< StateSO_tF4CE457955F5F6AE1566DA9CA381B389AA15C54A * >::Invoke(0 /* !0 System.Linq.IGrouping`2<UOP1.StateMachine.ScriptableObjects.StateSO,UOP1.StateMachine.ScriptableObjects.TransitionTableSO/TransitionItem>::get_Key() */, IGrouping_2_t5B3D87D174A0BFA10DE9B15D7F081424E4D40C40_il2cpp_TypeInfo_var, L_13);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_15;
			L_15 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_14, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_15)
			{
				goto IL_0079;
			}
		}

IL_005e:
		{
			// throw new ArgumentNullException(nameof(fromState.Key), $"TransitionTable: {name}");
			String_t* L_16;
			L_16 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(__this, /*hidden argument*/NULL);
			String_t* L_17;
			L_17 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral722B024FCA9E3161DA5ADB42442F7B4AFE7D1B40)), L_16, /*hidden argument*/NULL);
			ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_18 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
			ArgumentNullException__ctor_mAD2F05A24C92A657CBCA8C43A9A373C53739A283(L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB720A9AE58815DFF5576319E5228D318E7899C07)), L_17, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TransitionTableSO_GetInitialState_mB5C0868BA5BCA574E80B5E4CB3FABB7368C4F840_RuntimeMethod_var)));
		}

IL_0079:
		{
			// var state = fromState.Key.GetState(stateMachine, createdInstances);
			RuntimeObject* L_19 = V_4;
			NullCheck(L_19);
			StateSO_tF4CE457955F5F6AE1566DA9CA381B389AA15C54A * L_20;
			L_20 = InterfaceFuncInvoker0< StateSO_tF4CE457955F5F6AE1566DA9CA381B389AA15C54A * >::Invoke(0 /* !0 System.Linq.IGrouping`2<UOP1.StateMachine.ScriptableObjects.StateSO,UOP1.StateMachine.ScriptableObjects.TransitionTableSO/TransitionItem>::get_Key() */, IGrouping_2_t5B3D87D174A0BFA10DE9B15D7F081424E4D40C40_il2cpp_TypeInfo_var, L_19);
			StateMachine_tFB54EE0D17C72BF68C4199F5384DC5FA0A5EB715 * L_21 = ___stateMachine0;
			Dictionary_2_t701330DAA667B6BC6DC537F393DB4AC36321F406 * L_22 = V_2;
			NullCheck(L_20);
			State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 * L_23;
			L_23 = StateSO_GetState_m987C2B16950E1940D352B85A36DB14FE4B8F5C6D(L_20, L_21, L_22, /*hidden argument*/NULL);
			V_5 = L_23;
			// states.Add(state);
			List_1_tE077A81CF091F6F3535712AAF6459188ED461EEA * L_24 = V_0;
			State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 * L_25 = V_5;
			NullCheck(L_24);
			List_1_Add_m787035E7D5BAE5D9F8987FF3CFBAC311CABD8FF9(L_24, L_25, /*hidden argument*/List_1_Add_m787035E7D5BAE5D9F8987FF3CFBAC311CABD8FF9_RuntimeMethod_var);
			// transitions.Clear();
			List_1_t5949E2873005DB039313FCF7FB69F28583DE10D5 * L_26 = V_1;
			NullCheck(L_26);
			List_1_Clear_mC10D151B7215ADE22FA4046D0307FEF3153D6332(L_26, /*hidden argument*/List_1_Clear_mC10D151B7215ADE22FA4046D0307FEF3153D6332_RuntimeMethod_var);
			// foreach (var transitionItem in fromState)
			RuntimeObject* L_27 = V_4;
			NullCheck(L_27);
			RuntimeObject* L_28;
			L_28 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UOP1.StateMachine.ScriptableObjects.TransitionTableSO/TransitionItem>::GetEnumerator() */, IEnumerable_1_tBC6148FA4EB6090E84662285E2642B57F9B664A1_il2cpp_TypeInfo_var, L_27);
			V_6 = L_28;
		}

IL_00a0:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0119;
			}

IL_00a2:
			{
				// foreach (var transitionItem in fromState)
				RuntimeObject* L_29 = V_6;
				NullCheck(L_29);
				TransitionItem_tC4F31A31024167F78AAC0F788A5F606F6055AE0A  L_30;
				L_30 = InterfaceFuncInvoker0< TransitionItem_tC4F31A31024167F78AAC0F788A5F606F6055AE0A  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UOP1.StateMachine.ScriptableObjects.TransitionTableSO/TransitionItem>::get_Current() */, IEnumerator_1_t0DB3554316EA15B682D6E7EA0D0A59F362E763EF_il2cpp_TypeInfo_var, L_29);
				V_7 = L_30;
				// if (transitionItem.ToState == null)
				TransitionItem_tC4F31A31024167F78AAC0F788A5F606F6055AE0A  L_31 = V_7;
				StateSO_tF4CE457955F5F6AE1566DA9CA381B389AA15C54A * L_32 = L_31.get_ToState_1();
				IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
				bool L_33;
				L_33 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_32, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
				if (!L_33)
				{
					goto IL_00e6;
				}
			}

IL_00ba:
			{
				// throw new ArgumentNullException(nameof(transitionItem.ToState), $"TransitionTable: {name}, From State: {fromState.Key.name}");
				String_t* L_34;
				L_34 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(__this, /*hidden argument*/NULL);
				RuntimeObject* L_35 = V_4;
				NullCheck(L_35);
				StateSO_tF4CE457955F5F6AE1566DA9CA381B389AA15C54A * L_36;
				L_36 = InterfaceFuncInvoker0< StateSO_tF4CE457955F5F6AE1566DA9CA381B389AA15C54A * >::Invoke(0 /* !0 System.Linq.IGrouping`2<UOP1.StateMachine.ScriptableObjects.StateSO,UOP1.StateMachine.ScriptableObjects.TransitionTableSO/TransitionItem>::get_Key() */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IGrouping_2_t5B3D87D174A0BFA10DE9B15D7F081424E4D40C40_il2cpp_TypeInfo_var)), L_35);
				NullCheck(L_36);
				String_t* L_37;
				L_37 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_36, /*hidden argument*/NULL);
				String_t* L_38;
				L_38 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral722B024FCA9E3161DA5ADB42442F7B4AFE7D1B40)), L_34, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6E6FD40561D5ECBF4E509F159E8F2E38CE21CCE5)), L_37, /*hidden argument*/NULL);
				ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_39 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
				ArgumentNullException__ctor_mAD2F05A24C92A657CBCA8C43A9A373C53739A283(L_39, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA151F9E52C2190AD8CD1AF032F2DC1E673A7EF62)), L_38, /*hidden argument*/NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_39, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TransitionTableSO_GetInitialState_mB5C0868BA5BCA574E80B5E4CB3FABB7368C4F840_RuntimeMethod_var)));
			}

IL_00e6:
			{
				// var toState = transitionItem.ToState.GetState(stateMachine, createdInstances);
				TransitionItem_tC4F31A31024167F78AAC0F788A5F606F6055AE0A  L_40 = V_7;
				StateSO_tF4CE457955F5F6AE1566DA9CA381B389AA15C54A * L_41 = L_40.get_ToState_1();
				StateMachine_tFB54EE0D17C72BF68C4199F5384DC5FA0A5EB715 * L_42 = ___stateMachine0;
				Dictionary_2_t701330DAA667B6BC6DC537F393DB4AC36321F406 * L_43 = V_2;
				NullCheck(L_41);
				State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 * L_44;
				L_44 = StateSO_GetState_m987C2B16950E1940D352B85A36DB14FE4B8F5C6D(L_41, L_42, L_43, /*hidden argument*/NULL);
				V_8 = L_44;
				// ProcessConditionUsages(stateMachine, transitionItem.Conditions, createdInstances, out var conditions, out var resultGroups);
				StateMachine_tFB54EE0D17C72BF68C4199F5384DC5FA0A5EB715 * L_45 = ___stateMachine0;
				TransitionItem_tC4F31A31024167F78AAC0F788A5F606F6055AE0A  L_46 = V_7;
				ConditionUsageU5BU5D_tA4F67BFAB079BE9A29A37E7089C6027397347A81* L_47 = L_46.get_Conditions_2();
				Dictionary_2_t701330DAA667B6BC6DC537F393DB4AC36321F406 * L_48 = V_2;
				TransitionTableSO_ProcessConditionUsages_m5E9AC3A8546DA643D2DBA36ADE59BD898DBA7249(L_45, L_47, L_48, (StateConditionU5BU5D_tAB59A90CA4CE595EBDD2E47AE6990F3E2C0A01A0**)(&V_9), (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)(&V_10), /*hidden argument*/NULL);
				// transitions.Add(new StateTransition(toState, conditions, resultGroups));
				List_1_t5949E2873005DB039313FCF7FB69F28583DE10D5 * L_49 = V_1;
				State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 * L_50 = V_8;
				StateConditionU5BU5D_tAB59A90CA4CE595EBDD2E47AE6990F3E2C0A01A0* L_51 = V_9;
				Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_52 = V_10;
				StateTransition_t0A8BCCF7B94D6D0F026E95E8748066423BF97077 * L_53 = (StateTransition_t0A8BCCF7B94D6D0F026E95E8748066423BF97077 *)il2cpp_codegen_object_new(StateTransition_t0A8BCCF7B94D6D0F026E95E8748066423BF97077_il2cpp_TypeInfo_var);
				StateTransition__ctor_m389BE3F912EF99345D69EB08BABDFFFB46C58B40(L_53, L_50, L_51, L_52, /*hidden argument*/NULL);
				NullCheck(L_49);
				List_1_Add_mABF8C4FB3AF6552FBD7630F0F68A63FFB861C0D9(L_49, L_53, /*hidden argument*/List_1_Add_mABF8C4FB3AF6552FBD7630F0F68A63FFB861C0D9_RuntimeMethod_var);
			}

IL_0119:
			{
				// foreach (var transitionItem in fromState)
				RuntimeObject* L_54 = V_6;
				NullCheck(L_54);
				bool L_55;
				L_55 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_54);
				if (L_55)
				{
					goto IL_00a2;
				}
			}

IL_0122:
			{
				IL2CPP_LEAVE(0x130, FINALLY_0124);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0124;
		}

FINALLY_0124:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_56 = V_6;
				if (!L_56)
				{
					goto IL_012f;
				}
			}

IL_0128:
			{
				RuntimeObject* L_57 = V_6;
				NullCheck(L_57);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_57);
			}

IL_012f:
			{
				IL2CPP_END_FINALLY(292)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(292)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x130, IL_0130)
		}

IL_0130:
		{
			// state._transitions = transitions.ToArray();
			State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 * L_58 = V_5;
			List_1_t5949E2873005DB039313FCF7FB69F28583DE10D5 * L_59 = V_1;
			NullCheck(L_59);
			StateTransitionU5BU5D_tD07E9FA7E8D70ED2696D86C41A41673A2F57D212* L_60;
			L_60 = List_1_ToArray_mC08058A95C0AFA8892C925A5C87C41FC72D8321D(L_59, /*hidden argument*/List_1_ToArray_mC08058A95C0AFA8892C925A5C87C41FC72D8321D_RuntimeMethod_var);
			NullCheck(L_58);
			L_58->set__transitions_2(L_60);
		}

IL_013d:
		{
			// foreach (var fromState in fromStates)
			RuntimeObject* L_61 = V_3;
			NullCheck(L_61);
			bool L_62;
			L_62 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_61);
			if (L_62)
			{
				goto IL_0047;
			}
		}

IL_0148:
		{
			IL2CPP_LEAVE(0x154, FINALLY_014a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_014a;
	}

FINALLY_014a:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_63 = V_3;
			if (!L_63)
			{
				goto IL_0153;
			}
		}

IL_014d:
		{
			RuntimeObject* L_64 = V_3;
			NullCheck(L_64);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_64);
		}

IL_0153:
		{
			IL2CPP_END_FINALLY(330)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(330)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x154, IL_0154)
	}

IL_0154:
	{
		// return states.Count > 0 ? states[0]
		//     : throw new InvalidOperationException($"TransitionTable {name} is empty.");
		List_1_tE077A81CF091F6F3535712AAF6459188ED461EEA * L_65 = V_0;
		NullCheck(L_65);
		int32_t L_66;
		L_66 = List_1_get_Count_m701A5158B3DD8B9B2CB0A4C5BC5B6D7ADFB21D70_inline(L_65, /*hidden argument*/List_1_get_Count_m701A5158B3DD8B9B2CB0A4C5BC5B6D7ADFB21D70_RuntimeMethod_var);
		if ((((int32_t)L_66) > ((int32_t)0)))
		{
			goto IL_0178;
		}
	}
	{
		String_t* L_67;
		L_67 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(__this, /*hidden argument*/NULL);
		String_t* L_68;
		L_68 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral772790A3A0B6A4F545FC12909FF7D055E3265B16)), L_67, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDB459CE61A68F02520742A399942F95B73B542AF)), /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_69 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_69, L_68, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_69, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TransitionTableSO_GetInitialState_mB5C0868BA5BCA574E80B5E4CB3FABB7368C4F840_RuntimeMethod_var)));
	}

IL_0178:
	{
		List_1_tE077A81CF091F6F3535712AAF6459188ED461EEA * L_70 = V_0;
		NullCheck(L_70);
		State_t25BDE78BA065533F2536623C28AA07D6F5EC72F9 * L_71;
		L_71 = List_1_get_Item_m9480C02B5F6372D50026AEDC262FF3192D63C8C5_inline(L_70, 0, /*hidden argument*/List_1_get_Item_m9480C02B5F6372D50026AEDC262FF3192D63C8C5_RuntimeMethod_var);
		return L_71;
	}
}
// System.Void UOP1.StateMachine.ScriptableObjects.TransitionTableSO::ProcessConditionUsages(UOP1.StateMachine.StateMachine,UOP1.StateMachine.ScriptableObjects.TransitionTableSO/ConditionUsage[],System.Collections.Generic.Dictionary`2<UnityEngine.ScriptableObject,System.Object>,UOP1.StateMachine.StateCondition[]&,System.Int32[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionTableSO_ProcessConditionUsages_m5E9AC3A8546DA643D2DBA36ADE59BD898DBA7249 (StateMachine_tFB54EE0D17C72BF68C4199F5384DC5FA0A5EB715 * ___stateMachine0, ConditionUsageU5BU5D_tA4F67BFAB079BE9A29A37E7089C6027397347A81* ___conditionUsages1, Dictionary_2_t701330DAA667B6BC6DC537F393DB4AC36321F406 * ___createdInstances2, StateConditionU5BU5D_tAB59A90CA4CE595EBDD2E47AE6990F3E2C0A01A0** ___conditions3, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** ___resultGroups4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateConditionU5BU5D_tAB59A90CA4CE595EBDD2E47AE6990F3E2C0A01A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		// int count = conditionUsages.Length;
		ConditionUsageU5BU5D_tA4F67BFAB079BE9A29A37E7089C6027397347A81* L_0 = ___conditionUsages1;
		NullCheck(L_0);
		V_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		// conditions = new StateCondition[count];
		StateConditionU5BU5D_tAB59A90CA4CE595EBDD2E47AE6990F3E2C0A01A0** L_1 = ___conditions3;
		int32_t L_2 = V_0;
		StateConditionU5BU5D_tAB59A90CA4CE595EBDD2E47AE6990F3E2C0A01A0* L_3 = (StateConditionU5BU5D_tAB59A90CA4CE595EBDD2E47AE6990F3E2C0A01A0*)(StateConditionU5BU5D_tAB59A90CA4CE595EBDD2E47AE6990F3E2C0A01A0*)SZArrayNew(StateConditionU5BU5D_tAB59A90CA4CE595EBDD2E47AE6990F3E2C0A01A0_il2cpp_TypeInfo_var, (uint32_t)L_2);
		*((RuntimeObject **)L_1) = (RuntimeObject *)L_3;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_1, (void*)(RuntimeObject *)L_3);
		// for (int i = 0; i < count; i++)
		V_2 = 0;
		goto IL_003e;
	}

IL_0010:
	{
		// conditions[i] = conditionUsages[i].Condition.GetCondition(
		//     stateMachine, conditionUsages[i].ExpectedResult == Result.True, createdInstances);
		StateConditionU5BU5D_tAB59A90CA4CE595EBDD2E47AE6990F3E2C0A01A0** L_4 = ___conditions3;
		StateConditionU5BU5D_tAB59A90CA4CE595EBDD2E47AE6990F3E2C0A01A0* L_5 = *((StateConditionU5BU5D_tAB59A90CA4CE595EBDD2E47AE6990F3E2C0A01A0**)L_4);
		int32_t L_6 = V_2;
		ConditionUsageU5BU5D_tA4F67BFAB079BE9A29A37E7089C6027397347A81* L_7 = ___conditionUsages1;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		StateConditionSO_t289259ED0499C139B5D115D98B5E6F981068C076 * L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->get_Condition_1();
		StateMachine_tFB54EE0D17C72BF68C4199F5384DC5FA0A5EB715 * L_10 = ___stateMachine0;
		ConditionUsageU5BU5D_tA4F67BFAB079BE9A29A37E7089C6027397347A81* L_11 = ___conditionUsages1;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		int32_t L_13 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->get_ExpectedResult_0();
		Dictionary_2_t701330DAA667B6BC6DC537F393DB4AC36321F406 * L_14 = ___createdInstances2;
		NullCheck(L_9);
		StateCondition_t6D1708031DFC3FBA54B621BD5B684D0DD8F0CA8D  L_15;
		L_15 = StateConditionSO_GetCondition_mBA40810A56E512AB5B16996ABB5783F776A9EEEF(L_9, L_10, (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0), L_14, /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (StateCondition_t6D1708031DFC3FBA54B621BD5B684D0DD8F0CA8D )L_15);
		// for (int i = 0; i < count; i++)
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_003e:
	{
		// for (int i = 0; i < count; i++)
		int32_t L_17 = V_2;
		int32_t L_18 = V_0;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0010;
		}
	}
	{
		// List<int> resultGroupsList = new List<int>();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_19 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)il2cpp_codegen_object_new(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD(L_19, /*hidden argument*/List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		V_1 = L_19;
		// for (int i = 0; i < count; i++)
		V_3 = 0;
		goto IL_0093;
	}

IL_004c:
	{
		// int idx = resultGroupsList.Count;
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_20 = V_1;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_inline(L_20, /*hidden argument*/List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
		V_4 = L_21;
		// resultGroupsList.Add(1);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_22 = V_1;
		NullCheck(L_22);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_22, 1, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		goto IL_007b;
	}

IL_005d:
	{
		// i++;
		int32_t L_23 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		// resultGroupsList[idx]++;
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_24 = V_1;
		int32_t L_25 = V_4;
		V_5 = L_25;
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_26 = L_24;
		int32_t L_27 = V_5;
		NullCheck(L_26);
		int32_t L_28;
		L_28 = List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline(L_26, L_27, /*hidden argument*/List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		V_6 = L_28;
		int32_t L_29 = V_5;
		int32_t L_30 = V_6;
		NullCheck(L_26);
		List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9(L_26, L_29, ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1)), /*hidden argument*/List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9_RuntimeMethod_var);
	}

IL_007b:
	{
		// while (i < count - 1 && conditionUsages[i].Operator == Operator.And)
		int32_t L_31 = V_3;
		int32_t L_32 = V_0;
		if ((((int32_t)L_31) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)1)))))
		{
			goto IL_008f;
		}
	}
	{
		ConditionUsageU5BU5D_tA4F67BFAB079BE9A29A37E7089C6027397347A81* L_33 = ___conditionUsages1;
		int32_t L_34 = V_3;
		NullCheck(L_33);
		int32_t L_35 = ((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->get_Operator_2();
		if (!L_35)
		{
			goto IL_005d;
		}
	}

IL_008f:
	{
		// for (int i = 0; i < count; i++)
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
	}

IL_0093:
	{
		// for (int i = 0; i < count; i++)
		int32_t L_37 = V_3;
		int32_t L_38 = V_0;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_004c;
		}
	}
	{
		// resultGroups = resultGroupsList.ToArray();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** L_39 = ___resultGroups4;
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_40 = V_1;
		NullCheck(L_40);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_41;
		L_41 = List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F(L_40, /*hidden argument*/List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F_RuntimeMethod_var);
		*((RuntimeObject **)L_39) = (RuntimeObject *)L_41;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_39, (void*)(RuntimeObject *)L_41);
		// }
		return;
	}
}
// System.Void UOP1.StateMachine.ScriptableObjects.TransitionTableSO::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionTableSO__ctor_mDA3A0472BD27930B7ABBD14F8BF55684670441DD (TransitionTableSO_t7C3E2776FE97CE6C269F81F8880745E200A12CC3 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.Void UOP1.StateMachine.ScriptableObjects.TransitionTableSO/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mAC6CD9A687D44973E189AB33265679A8A45E8C61 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t44EBF2D264D41EEF6EA90DA642F31B6AC8ED0379_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t44EBF2D264D41EEF6EA90DA642F31B6AC8ED0379 * L_0 = (U3CU3Ec_t44EBF2D264D41EEF6EA90DA642F31B6AC8ED0379 *)il2cpp_codegen_object_new(U3CU3Ec_t44EBF2D264D41EEF6EA90DA642F31B6AC8ED0379_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m3484B5C7F1C20C3398708092CE95D263505594DE(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t44EBF2D264D41EEF6EA90DA642F31B6AC8ED0379_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t44EBF2D264D41EEF6EA90DA642F31B6AC8ED0379_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UOP1.StateMachine.ScriptableObjects.TransitionTableSO/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3484B5C7F1C20C3398708092CE95D263505594DE (U3CU3Ec_t44EBF2D264D41EEF6EA90DA642F31B6AC8ED0379 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UOP1.StateMachine.ScriptableObjects.StateSO UOP1.StateMachine.ScriptableObjects.TransitionTableSO/<>c::<GetInitialState>b__1_0(UOP1.StateMachine.ScriptableObjects.TransitionTableSO/TransitionItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StateSO_tF4CE457955F5F6AE1566DA9CA381B389AA15C54A * U3CU3Ec_U3CGetInitialStateU3Eb__1_0_m0DE5A785F39D386D8E3593ED69019207EED04876 (U3CU3Ec_t44EBF2D264D41EEF6EA90DA642F31B6AC8ED0379 * __this, TransitionItem_tC4F31A31024167F78AAC0F788A5F606F6055AE0A  ___transition0, const RuntimeMethod* method)
{
	{
		// var fromStates = _transitions.GroupBy(transition => transition.FromState);
		TransitionItem_tC4F31A31024167F78AAC0F788A5F606F6055AE0A  L_0 = ___transition0;
		StateSO_tF4CE457955F5F6AE1566DA9CA381B389AA15C54A * L_1 = L_0.get_FromState_0();
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
// Conversion methods for marshalling of: UOP1.StateMachine.ScriptableObjects.TransitionTableSO/ConditionUsage
IL2CPP_EXTERN_C void ConditionUsage_tB5A4FB8501060EF8D8F5CD9CC03064EE7B977B3E_marshal_pinvoke(const ConditionUsage_tB5A4FB8501060EF8D8F5CD9CC03064EE7B977B3E& unmarshaled, ConditionUsage_tB5A4FB8501060EF8D8F5CD9CC03064EE7B977B3E_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Condition_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Condition' of type 'ConditionUsage': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Condition_1Exception, NULL);
}
IL2CPP_EXTERN_C void ConditionUsage_tB5A4FB8501060EF8D8F5CD9CC03064EE7B977B3E_marshal_pinvoke_back(const ConditionUsage_tB5A4FB8501060EF8D8F5CD9CC03064EE7B977B3E_marshaled_pinvoke& marshaled, ConditionUsage_tB5A4FB8501060EF8D8F5CD9CC03064EE7B977B3E& unmarshaled)
{
	Exception_t* ___Condition_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Condition' of type 'ConditionUsage': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Condition_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UOP1.StateMachine.ScriptableObjects.TransitionTableSO/ConditionUsage
IL2CPP_EXTERN_C void ConditionUsage_tB5A4FB8501060EF8D8F5CD9CC03064EE7B977B3E_marshal_pinvoke_cleanup(ConditionUsage_tB5A4FB8501060EF8D8F5CD9CC03064EE7B977B3E_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UOP1.StateMachine.ScriptableObjects.TransitionTableSO/ConditionUsage
IL2CPP_EXTERN_C void ConditionUsage_tB5A4FB8501060EF8D8F5CD9CC03064EE7B977B3E_marshal_com(const ConditionUsage_tB5A4FB8501060EF8D8F5CD9CC03064EE7B977B3E& unmarshaled, ConditionUsage_tB5A4FB8501060EF8D8F5CD9CC03064EE7B977B3E_marshaled_com& marshaled)
{
	Exception_t* ___Condition_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Condition' of type 'ConditionUsage': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Condition_1Exception, NULL);
}
IL2CPP_EXTERN_C void ConditionUsage_tB5A4FB8501060EF8D8F5CD9CC03064EE7B977B3E_marshal_com_back(const ConditionUsage_tB5A4FB8501060EF8D8F5CD9CC03064EE7B977B3E_marshaled_com& marshaled, ConditionUsage_tB5A4FB8501060EF8D8F5CD9CC03064EE7B977B3E& unmarshaled)
{
	Exception_t* ___Condition_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Condition' of type 'ConditionUsage': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Condition_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UOP1.StateMachine.ScriptableObjects.TransitionTableSO/ConditionUsage
IL2CPP_EXTERN_C void ConditionUsage_tB5A4FB8501060EF8D8F5CD9CC03064EE7B977B3E_marshal_com_cleanup(ConditionUsage_tB5A4FB8501060EF8D8F5CD9CC03064EE7B977B3E_marshaled_com& marshaled)
{
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: UOP1.StateMachine.ScriptableObjects.TransitionTableSO/TransitionItem
IL2CPP_EXTERN_C void TransitionItem_tC4F31A31024167F78AAC0F788A5F606F6055AE0A_marshal_pinvoke(const TransitionItem_tC4F31A31024167F78AAC0F788A5F606F6055AE0A& unmarshaled, TransitionItem_tC4F31A31024167F78AAC0F788A5F606F6055AE0A_marshaled_pinvoke& marshaled)
{
	Exception_t* ___FromState_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'FromState' of type 'TransitionItem': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___FromState_0Exception, NULL);
}
IL2CPP_EXTERN_C void TransitionItem_tC4F31A31024167F78AAC0F788A5F606F6055AE0A_marshal_pinvoke_back(const TransitionItem_tC4F31A31024167F78AAC0F788A5F606F6055AE0A_marshaled_pinvoke& marshaled, TransitionItem_tC4F31A31024167F78AAC0F788A5F606F6055AE0A& unmarshaled)
{
	Exception_t* ___FromState_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'FromState' of type 'TransitionItem': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___FromState_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UOP1.StateMachine.ScriptableObjects.TransitionTableSO/TransitionItem
IL2CPP_EXTERN_C void TransitionItem_tC4F31A31024167F78AAC0F788A5F606F6055AE0A_marshal_pinvoke_cleanup(TransitionItem_tC4F31A31024167F78AAC0F788A5F606F6055AE0A_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: UOP1.StateMachine.ScriptableObjects.TransitionTableSO/TransitionItem
IL2CPP_EXTERN_C void TransitionItem_tC4F31A31024167F78AAC0F788A5F606F6055AE0A_marshal_com(const TransitionItem_tC4F31A31024167F78AAC0F788A5F606F6055AE0A& unmarshaled, TransitionItem_tC4F31A31024167F78AAC0F788A5F606F6055AE0A_marshaled_com& marshaled)
{
	Exception_t* ___FromState_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'FromState' of type 'TransitionItem': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___FromState_0Exception, NULL);
}
IL2CPP_EXTERN_C void TransitionItem_tC4F31A31024167F78AAC0F788A5F606F6055AE0A_marshal_com_back(const TransitionItem_tC4F31A31024167F78AAC0F788A5F606F6055AE0A_marshaled_com& marshaled, TransitionItem_tC4F31A31024167F78AAC0F788A5F606F6055AE0A& unmarshaled)
{
	Exception_t* ___FromState_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'FromState' of type 'TransitionItem': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___FromState_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UOP1.StateMachine.ScriptableObjects.TransitionTableSO/TransitionItem
IL2CPP_EXTERN_C void TransitionItem_tC4F31A31024167F78AAC0F788A5F606F6055AE0A_marshal_com_cleanup(TransitionItem_tC4F31A31024167F78AAC0F788A5F606F6055AE0A_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___index0, const RuntimeMethod* method)
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
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get__items_1();
		int32_t L_3 = ___index0;
		int32_t L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_2, (int32_t)L_3);
		return (int32_t)L_4;
	}
}
