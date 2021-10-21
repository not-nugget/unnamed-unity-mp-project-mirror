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
template <typename T1>
struct GenericVirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Func`2<System.Object,System.Collections.Generic.IEnumerable`1<System.Object>>
struct Func_2_tD457CA07229B6835F9D0AB141D4F1A7455A8AF29;
// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436;
// System.Func`2<Zenject.InjectTypeInfo/InjectMemberInfo,Zenject.InjectableInfo>
struct Func_2_tCA3B1A6676C318EB131D400C4BE116F6ADBB1BD7;
// System.Func`2<Zenject.InjectTypeInfo/InjectMethodInfo,System.Collections.Generic.IEnumerable`1<Zenject.InjectableInfo>>
struct Func_2_tA30947242D3FAC5B14085E3EBFA3DD52482584BD;
// System.Collections.Generic.IEnumerable`1<Zenject.InjectableInfo>
struct IEnumerable_1_t1C1AF820D5952C866FF348832BB46B9986FCA455;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<Zenject.InjectTypeInfo/InjectMemberInfo>
struct IEnumerable_1_tCD388120D797B305789F154298F27A5B1F70BB3A;
// System.Collections.Generic.IEnumerable`1<Zenject.InjectTypeInfo/InjectMethodInfo>
struct IEnumerable_1_t62EFAA645C997B01C8AF9994EADA37B4C34A799E;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// Zenject.InjectableInfo[]
struct InjectableInfoU5BU5D_tE39C90F66177150812A88425C78BBBAA65A55BEC;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// Zenject.InjectTypeInfo/InjectMemberInfo[]
struct InjectMemberInfoU5BU5D_tFCC8018D9FBBD77947427BCB8865379B8A6C15BB;
// Zenject.InjectTypeInfo/InjectMethodInfo[]
struct InjectMethodInfoU5BU5D_tB8D809F7145531960CFADE95AF6DC4A1EB0C90FA;
// JetBrains.Annotations.AspChildControlTypeAttribute
struct AspChildControlTypeAttribute_t49A97CE0D26CF6E5E0E908E25B04F3925302E1FD;
// JetBrains.Annotations.AspDataFieldAttribute
struct AspDataFieldAttribute_t349470D6FCE80A53F2628CBEDC6C5A745E0AD25A;
// JetBrains.Annotations.AspDataFieldsAttribute
struct AspDataFieldsAttribute_tBF6A4621D56B86BFF5464136947054BE22CBE904;
// JetBrains.Annotations.AspMethodPropertyAttribute
struct AspMethodPropertyAttribute_t6A97E645B11E75527DFDB1874C75737951A5948B;
// JetBrains.Annotations.AspMvcActionAttribute
struct AspMvcActionAttribute_t1AA0F64AB4FB867CEE224B5DEF970716B39CABBD;
// JetBrains.Annotations.AspMvcActionSelectorAttribute
struct AspMvcActionSelectorAttribute_t7FC9B52D939902F8CA974BAA276D63A3C630B888;
// JetBrains.Annotations.AspMvcAreaAttribute
struct AspMvcAreaAttribute_t0E39CB66C13C812B1E3409B2FD3BC7F85BDA2EA4;
// JetBrains.Annotations.AspMvcAreaMasterLocationFormatAttribute
struct AspMvcAreaMasterLocationFormatAttribute_tA876F76E524EC79F498B59D831D4A867D1689497;
// JetBrains.Annotations.AspMvcAreaPartialViewLocationFormatAttribute
struct AspMvcAreaPartialViewLocationFormatAttribute_t57222AD01A7A151F89DDFBAF11D70A2CD983ECA4;
// JetBrains.Annotations.AspMvcAreaViewLocationFormatAttribute
struct AspMvcAreaViewLocationFormatAttribute_t757C424B0E26E0F79D3F8465F66DE0B8B2B8F6D7;
// JetBrains.Annotations.AspMvcControllerAttribute
struct AspMvcControllerAttribute_t44AC2AF14A6C0038F0047A9145A43474B63C0A32;
// JetBrains.Annotations.AspMvcDisplayTemplateAttribute
struct AspMvcDisplayTemplateAttribute_t0459AA674E25AB0654E10E825D4AC2B9E9A820A1;
// JetBrains.Annotations.AspMvcEditorTemplateAttribute
struct AspMvcEditorTemplateAttribute_tE90FC5C4DA7CD804F5327945A850E077187AFA12;
// JetBrains.Annotations.AspMvcMasterAttribute
struct AspMvcMasterAttribute_t20E203D3BDAE714BC30632BEA5AFD2D9654CB481;
// JetBrains.Annotations.AspMvcMasterLocationFormatAttribute
struct AspMvcMasterLocationFormatAttribute_t34C965516F029FE3B2A99634953E5695F9C0214B;
// JetBrains.Annotations.AspMvcModelTypeAttribute
struct AspMvcModelTypeAttribute_t1D2F9FA8F936DBF7237D2D4D8B9C223AF0F5555C;
// JetBrains.Annotations.AspMvcPartialViewAttribute
struct AspMvcPartialViewAttribute_tEB46BBD0E95B2596E49EEF51273FBA4435BC96BF;
// JetBrains.Annotations.AspMvcPartialViewLocationFormatAttribute
struct AspMvcPartialViewLocationFormatAttribute_t2F1D639624F49B8FE32AD966DE7056E5C2270246;
// JetBrains.Annotations.AspMvcSuppressViewErrorAttribute
struct AspMvcSuppressViewErrorAttribute_t7E666A78163296298153F75E0B061CC3EAA102C3;
// JetBrains.Annotations.AspMvcTemplateAttribute
struct AspMvcTemplateAttribute_t3865623574DF6A7A99B2612E9BDB1BC3089FFFD9;
// JetBrains.Annotations.AspMvcViewAttribute
struct AspMvcViewAttribute_tD5ECE56D92B03F0DB6E75BA0D10B5C5F1B44F5BB;
// JetBrains.Annotations.AspMvcViewComponentAttribute
struct AspMvcViewComponentAttribute_t16D82E1397E7853D7394C5E687933319E4DEB89F;
// JetBrains.Annotations.AspMvcViewComponentViewAttribute
struct AspMvcViewComponentViewAttribute_tCC421624D6D544441E63FD9D59991D092CF32DAE;
// JetBrains.Annotations.AspMvcViewLocationFormatAttribute
struct AspMvcViewLocationFormatAttribute_t921715B41EE58D06C820B2916BF6D15709ACC0FB;
// JetBrains.Annotations.AspRequiredAttributeAttribute
struct AspRequiredAttributeAttribute_tB5767687A8A0598AF783288D7837CA6F3E9FD547;
// JetBrains.Annotations.AspTypePropertyAttribute
struct AspTypePropertyAttribute_tB5EC5DF211B5ABF34217E219C534A9F3BD97DBF6;
// JetBrains.Annotations.AssertionConditionAttribute
struct AssertionConditionAttribute_tA00B8F2B72E746630D065B41EF51B53F82DB0BEB;
// JetBrains.Annotations.AssertionMethodAttribute
struct AssertionMethodAttribute_t906D7F8988D20A1BC7A353D6F7B8A587F7D8E823;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// JetBrains.Annotations.BaseTypeRequiredAttribute
struct BaseTypeRequiredAttribute_t229CD06DD288A6CC18D3D73901C7895FB75F171E;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// JetBrains.Annotations.CanBeNullAttribute
struct CanBeNullAttribute_t7777C5F7E89806EAF87B53955346053586112BED;
// JetBrains.Annotations.CannotApplyEqualityOperatorAttribute
struct CannotApplyEqualityOperatorAttribute_tE091E5A92958B8484035EBD4815681840D644D72;
// JetBrains.Annotations.CollectionAccessAttribute
struct CollectionAccessAttribute_t95980E60D6D0FDA3EB0A757DD62BE4ED5505F104;
// JetBrains.Annotations.ContractAnnotationAttribute
struct ContractAnnotationAttribute_t662061C8A440CEE29A0551A18371537541300293;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// JetBrains.Annotations.HtmlAttributeValueAttribute
struct HtmlAttributeValueAttribute_t10B5BF21F421C7AB034A44845E84663710144E6A;
// JetBrains.Annotations.HtmlElementAttributesAttribute
struct HtmlElementAttributesAttribute_t1A2629419BE6B1A61AE33540D9827FD90F92B151;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Zenject.InjectAttribute
struct InjectAttribute_tACFFF08424F2C68DF426C0B4CA3CE270C3A0E5CD;
// Zenject.InjectAttributeBase
struct InjectAttributeBase_tBEA6A6FCBD9B487AAF830C7FD5F089DE74551DC7;
// Zenject.InjectLocalAttribute
struct InjectLocalAttribute_tB6069B3CEBA4F1F1A606B876EEEF84670F87FBFF;
// Zenject.InjectOptionalAttribute
struct InjectOptionalAttribute_tAE1940FDC35B6C11EA38885101EF8582FE530BAA;
// Zenject.InjectTypeInfo
struct InjectTypeInfo_t7F36F1C82FE757B5EEFB849FCFFECF96B02B6DF5;
// Zenject.InjectableInfo
struct InjectableInfo_tFFB881101BEB9ED7BB1E856224E096C168EF76F5;
// JetBrains.Annotations.InstantHandleAttribute
struct InstantHandleAttribute_tFE284194DECA240887744A8F1701C71C81645BD3;
// JetBrains.Annotations.InvokerParameterNameAttribute
struct InvokerParameterNameAttribute_t588C7E8C5F51B2DD15A6F5C10480431E44982AE5;
// JetBrains.Annotations.ItemCanBeNullAttribute
struct ItemCanBeNullAttribute_t52A59F189C083D2D4733983814B6DBEC4696F14F;
// JetBrains.Annotations.ItemNotNullAttribute
struct ItemNotNullAttribute_t9A942540370A63F10861BD3E67E285405C71F376;
// JetBrains.Annotations.LinqTunnelAttribute
struct LinqTunnelAttribute_tF0DF691AEC2D0FDD48774C452C76403C2817409B;
// JetBrains.Annotations.LocalizationRequiredAttribute
struct LocalizationRequiredAttribute_t66D489EB8A17C5151FF39FAAA1F784E5E2B81681;
// JetBrains.Annotations.MacroAttribute
struct MacroAttribute_tC064E892C66536B9F196499466EF5ED60108D40E;
// JetBrains.Annotations.MeansImplicitUseAttribute
struct MeansImplicitUseAttribute_t68C979918C00E35B6B176826596CA3FF5295743E;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// JetBrains.Annotations.MustUseReturnValueAttribute
struct MustUseReturnValueAttribute_t649AC1C4D27CBC9BF4E22DC4B15D00D7EE845DD3;
// JetBrains.Annotations.NoEnumerationAttribute
struct NoEnumerationAttribute_t1A176F2BE1AA8DAF6D5C0F607C37FB5217F6A0F6;
// Zenject.NoReflectionBakingAttribute
struct NoReflectionBakingAttribute_t00B2AA73672895518C17BB47BC21B4085A983997;
// JetBrains.Annotations.NoReorderAttribute
struct NoReorderAttribute_t24C07ED89302B2482B5354ADE5F80AA06021A808;
// JetBrains.Annotations.NotNullAttribute
struct NotNullAttribute_t44A925B33322011233CD36F85C5840CF606D868B;
// JetBrains.Annotations.NotifyPropertyChangedInvocatorAttribute
struct NotifyPropertyChangedInvocatorAttribute_t58A7B14D9749D65C80751BFBA1B83CD6FE69CD05;
// JetBrains.Annotations.PathReferenceAttribute
struct PathReferenceAttribute_t041CA1FB39BB1371780D4A942BA71171F43B5BAE;
// Zenject.Internal.PreserveAttribute
struct PreserveAttribute_t917FF99C161EA919E410C46999AFD6D1A7BFEA27;
// JetBrains.Annotations.ProvidesContextAttribute
struct ProvidesContextAttribute_t2FCFAA7CD099FF2A71BD311A41A84197894AD49B;
// JetBrains.Annotations.PublicAPIAttribute
struct PublicAPIAttribute_t92C190C0D7EF5A6216EF4C2D09A48190D77BAC90;
// JetBrains.Annotations.PureAttribute
struct PureAttribute_t7B5C1EEEC4680EF364694E4F7558D4C1DB286141;
// JetBrains.Annotations.RazorDirectiveAttribute
struct RazorDirectiveAttribute_t943675864F4EADEAC34BD4083E2F3110F60EECDD;
// JetBrains.Annotations.RazorHelperCommonAttribute
struct RazorHelperCommonAttribute_t2B210F56FDE5BB4D1F8727EA8BAB43106FDC7DF7;
// JetBrains.Annotations.RazorImportNamespaceAttribute
struct RazorImportNamespaceAttribute_t6ECF9AF0F0E5BABE7877D542DBB1E4956544544E;
// JetBrains.Annotations.RazorInjectionAttribute
struct RazorInjectionAttribute_t31349804B2E881DA010DABB2743459FE32CF6F64;
// JetBrains.Annotations.RazorLayoutAttribute
struct RazorLayoutAttribute_t37C9039AF772469049A6E51775703D0E0657BDAA;
// JetBrains.Annotations.RazorPageBaseTypeAttribute
struct RazorPageBaseTypeAttribute_t3FD1DFA391FD51100312D02ADA84FBBFB9D7A651;
// JetBrains.Annotations.RazorSectionAttribute
struct RazorSectionAttribute_tB43478DF4831017D096125DD727A8B70B93B194C;
// JetBrains.Annotations.RazorWriteLiteralMethodAttribute
struct RazorWriteLiteralMethodAttribute_tEFFC6AF0FBE401D1AB95E081C5914D6DEA2165CA;
// JetBrains.Annotations.RazorWriteMethodAttribute
struct RazorWriteMethodAttribute_t10030D82E14AB68920BBFAAFD867918CB18E5C26;
// JetBrains.Annotations.RazorWriteMethodParameterAttribute
struct RazorWriteMethodParameterAttribute_tB38269FF3A960AA7105BF2297988471EAA11F07F;
// JetBrains.Annotations.RegexPatternAttribute
struct RegexPatternAttribute_t775244BB3AF4FB5DE7DCD3C5EBEAF3D4A7CAC67A;
// JetBrains.Annotations.SourceTemplateAttribute
struct SourceTemplateAttribute_t9EC542871BCA2EB9635F8D7585821B9590C49CCA;
// System.String
struct String_t;
// JetBrains.Annotations.StringFormatMethodAttribute
struct StringFormatMethodAttribute_t5C06E2FCA4DC5B963F6828463C37C2324B7B13BA;
// JetBrains.Annotations.TerminatesProgramAttribute
struct TerminatesProgramAttribute_t73F78A9D717DCA2598A6484AD4E053E839535380;
// System.Type
struct Type_t;
// JetBrains.Annotations.UsedImplicitlyAttribute
struct UsedImplicitlyAttribute_tC5D03412CABF6E0A3A6AA73BB4A685F8D670FD90;
// JetBrains.Annotations.ValueProviderAttribute
struct ValueProviderAttribute_t340091F92CE5A4F428B8AB7194E66DBF94549B8E;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// JetBrains.Annotations.XamlItemBindingOfItemsControlAttribute
struct XamlItemBindingOfItemsControlAttribute_tB97613DD893E4A4627461FFD3D529B5297BE303D;
// JetBrains.Annotations.XamlItemsControlAttribute
struct XamlItemsControlAttribute_t14B1E1D34F9B2558B18C184B0059CB482AF9AD8F;
// Zenject.ZenFactoryMethod
struct ZenFactoryMethod_t06221E77375E311219AD5AA13FF570D92D10165E;
// Zenject.ZenInjectMethod
struct ZenInjectMethod_t8C0F900438CFC893D25D723CB89F66933250EAAA;
// Zenject.ZenMemberSetterMethod
struct ZenMemberSetterMethod_t94AA8A98A9E78694F27DE8D0D46616E2E830C3FA;
// Zenject.ZenjectAllowDuringValidationAttribute
struct ZenjectAllowDuringValidationAttribute_t2071D5D5475C3AAA807702A85BF193CE387CF17E;
// Zenject.InjectTypeInfo/InjectConstructorInfo
struct InjectConstructorInfo_tECB8760EBE312544A1D3860F7737B2AFADCD7908;
// Zenject.InjectTypeInfo/InjectMemberInfo
struct InjectMemberInfo_t91776F61B901397B8B0EB4930F3354947D5D391A;
// Zenject.InjectTypeInfo/InjectMethodInfo
struct InjectMethodInfo_tCFB365E8D1D6D2FDBE5A4E2581FC43B66CD22C3C;

IL2CPP_EXTERN_C RuntimeClass* Func_2_tA30947242D3FAC5B14085E3EBFA3DD52482584BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tCA3B1A6676C318EB131D400C4BE116F6ADBB1BD7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InjectTypeInfo_t7F36F1C82FE757B5EEFB849FCFFECF96B02B6DF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Concat_TisInjectableInfo_tFFB881101BEB9ED7BB1E856224E096C168EF76F5_m295382D68130D3934CECF1B33383EC0FD87B040A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SelectMany_TisInjectMethodInfo_tCFB365E8D1D6D2FDBE5A4E2581FC43B66CD22C3C_TisInjectableInfo_tFFB881101BEB9ED7BB1E856224E096C168EF76F5_m506FEE0FBA4FF2BF98505EB24AEF16435379173E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisInjectMemberInfo_t91776F61B901397B8B0EB4930F3354947D5D391A_TisInjectableInfo_tFFB881101BEB9ED7BB1E856224E096C168EF76F5_mA61A89F3C49BD08608E78B0D6DDC1FE27B09F314_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mBE6D4E91029A6119F4C63FAC69AF7EA298D5A394_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mF330BC17F6701A14563C4528A07A729C24A4CFA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InjectTypeInfo_U3Cget_AllInjectablesU3Eb__0_mCD789CEB3676A118F3BF7934FD87B25B61672CF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InjectTypeInfo_U3Cget_AllInjectablesU3Eb__1_m03DA68F93AD8A762F7EB6E7AE96A80702D413063_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct InjectableInfoU5BU5D_tE39C90F66177150812A88425C78BBBAA65A55BEC;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct InjectMemberInfoU5BU5D_tFCC8018D9FBBD77947427BCB8865379B8A6C15BB;
struct InjectMethodInfoU5BU5D_tB8D809F7145531960CFADE95AF6DC4A1EB0C90FA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t1C8F878522F016465DC8325628FABA4AD7AA422A 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// Zenject.InjectTypeInfo
struct InjectTypeInfo_t7F36F1C82FE757B5EEFB849FCFFECF96B02B6DF5  : public RuntimeObject
{
public:
	// System.Type Zenject.InjectTypeInfo::Type
	Type_t * ___Type_0;
	// Zenject.InjectTypeInfo/InjectMethodInfo[] Zenject.InjectTypeInfo::InjectMethods
	InjectMethodInfoU5BU5D_tB8D809F7145531960CFADE95AF6DC4A1EB0C90FA* ___InjectMethods_1;
	// Zenject.InjectTypeInfo/InjectMemberInfo[] Zenject.InjectTypeInfo::InjectMembers
	InjectMemberInfoU5BU5D_tFCC8018D9FBBD77947427BCB8865379B8A6C15BB* ___InjectMembers_2;
	// Zenject.InjectTypeInfo/InjectConstructorInfo Zenject.InjectTypeInfo::InjectConstructor
	InjectConstructorInfo_tECB8760EBE312544A1D3860F7737B2AFADCD7908 * ___InjectConstructor_3;
	// Zenject.InjectTypeInfo Zenject.InjectTypeInfo::<BaseTypeInfo>k__BackingField
	InjectTypeInfo_t7F36F1C82FE757B5EEFB849FCFFECF96B02B6DF5 * ___U3CBaseTypeInfoU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_Type_0() { return static_cast<int32_t>(offsetof(InjectTypeInfo_t7F36F1C82FE757B5EEFB849FCFFECF96B02B6DF5, ___Type_0)); }
	inline Type_t * get_Type_0() const { return ___Type_0; }
	inline Type_t ** get_address_of_Type_0() { return &___Type_0; }
	inline void set_Type_0(Type_t * value)
	{
		___Type_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Type_0), (void*)value);
	}

	inline static int32_t get_offset_of_InjectMethods_1() { return static_cast<int32_t>(offsetof(InjectTypeInfo_t7F36F1C82FE757B5EEFB849FCFFECF96B02B6DF5, ___InjectMethods_1)); }
	inline InjectMethodInfoU5BU5D_tB8D809F7145531960CFADE95AF6DC4A1EB0C90FA* get_InjectMethods_1() const { return ___InjectMethods_1; }
	inline InjectMethodInfoU5BU5D_tB8D809F7145531960CFADE95AF6DC4A1EB0C90FA** get_address_of_InjectMethods_1() { return &___InjectMethods_1; }
	inline void set_InjectMethods_1(InjectMethodInfoU5BU5D_tB8D809F7145531960CFADE95AF6DC4A1EB0C90FA* value)
	{
		___InjectMethods_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InjectMethods_1), (void*)value);
	}

	inline static int32_t get_offset_of_InjectMembers_2() { return static_cast<int32_t>(offsetof(InjectTypeInfo_t7F36F1C82FE757B5EEFB849FCFFECF96B02B6DF5, ___InjectMembers_2)); }
	inline InjectMemberInfoU5BU5D_tFCC8018D9FBBD77947427BCB8865379B8A6C15BB* get_InjectMembers_2() const { return ___InjectMembers_2; }
	inline InjectMemberInfoU5BU5D_tFCC8018D9FBBD77947427BCB8865379B8A6C15BB** get_address_of_InjectMembers_2() { return &___InjectMembers_2; }
	inline void set_InjectMembers_2(InjectMemberInfoU5BU5D_tFCC8018D9FBBD77947427BCB8865379B8A6C15BB* value)
	{
		___InjectMembers_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InjectMembers_2), (void*)value);
	}

	inline static int32_t get_offset_of_InjectConstructor_3() { return static_cast<int32_t>(offsetof(InjectTypeInfo_t7F36F1C82FE757B5EEFB849FCFFECF96B02B6DF5, ___InjectConstructor_3)); }
	inline InjectConstructorInfo_tECB8760EBE312544A1D3860F7737B2AFADCD7908 * get_InjectConstructor_3() const { return ___InjectConstructor_3; }
	inline InjectConstructorInfo_tECB8760EBE312544A1D3860F7737B2AFADCD7908 ** get_address_of_InjectConstructor_3() { return &___InjectConstructor_3; }
	inline void set_InjectConstructor_3(InjectConstructorInfo_tECB8760EBE312544A1D3860F7737B2AFADCD7908 * value)
	{
		___InjectConstructor_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InjectConstructor_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBaseTypeInfoU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(InjectTypeInfo_t7F36F1C82FE757B5EEFB849FCFFECF96B02B6DF5, ___U3CBaseTypeInfoU3Ek__BackingField_4)); }
	inline InjectTypeInfo_t7F36F1C82FE757B5EEFB849FCFFECF96B02B6DF5 * get_U3CBaseTypeInfoU3Ek__BackingField_4() const { return ___U3CBaseTypeInfoU3Ek__BackingField_4; }
	inline InjectTypeInfo_t7F36F1C82FE757B5EEFB849FCFFECF96B02B6DF5 ** get_address_of_U3CBaseTypeInfoU3Ek__BackingField_4() { return &___U3CBaseTypeInfoU3Ek__BackingField_4; }
	inline void set_U3CBaseTypeInfoU3Ek__BackingField_4(InjectTypeInfo_t7F36F1C82FE757B5EEFB849FCFFECF96B02B6DF5 * value)
	{
		___U3CBaseTypeInfoU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBaseTypeInfoU3Ek__BackingField_4), (void*)value);
	}
};

struct InjectTypeInfo_t7F36F1C82FE757B5EEFB849FCFFECF96B02B6DF5_StaticFields
{
public:
	// System.Func`2<Zenject.InjectTypeInfo/InjectMemberInfo,Zenject.InjectableInfo> Zenject.InjectTypeInfo::CS$<>9__CachedAnonymousMethodDelegate2
	Func_2_tCA3B1A6676C318EB131D400C4BE116F6ADBB1BD7 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate2_5;
	// System.Func`2<Zenject.InjectTypeInfo/InjectMethodInfo,System.Collections.Generic.IEnumerable`1<Zenject.InjectableInfo>> Zenject.InjectTypeInfo::CS$<>9__CachedAnonymousMethodDelegate3
	Func_2_tA30947242D3FAC5B14085E3EBFA3DD52482584BD * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate3_6;

public:
	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate2_5() { return static_cast<int32_t>(offsetof(InjectTypeInfo_t7F36F1C82FE757B5EEFB849FCFFECF96B02B6DF5_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate2_5)); }
	inline Func_2_tCA3B1A6676C318EB131D400C4BE116F6ADBB1BD7 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate2_5() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate2_5; }
	inline Func_2_tCA3B1A6676C318EB131D400C4BE116F6ADBB1BD7 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate2_5() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate2_5; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate2_5(Func_2_tCA3B1A6676C318EB131D400C4BE116F6ADBB1BD7 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E9__CachedAnonymousMethodDelegate2_5), (void*)value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate3_6() { return static_cast<int32_t>(offsetof(InjectTypeInfo_t7F36F1C82FE757B5EEFB849FCFFECF96B02B6DF5_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate3_6)); }
	inline Func_2_tA30947242D3FAC5B14085E3EBFA3DD52482584BD * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate3_6() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate3_6; }
	inline Func_2_tA30947242D3FAC5B14085E3EBFA3DD52482584BD ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate3_6() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate3_6; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate3_6(Func_2_tA30947242D3FAC5B14085E3EBFA3DD52482584BD * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate3_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E9__CachedAnonymousMethodDelegate3_6), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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

// Zenject.InjectTypeInfo/InjectConstructorInfo
struct InjectConstructorInfo_tECB8760EBE312544A1D3860F7737B2AFADCD7908  : public RuntimeObject
{
public:
	// Zenject.ZenFactoryMethod Zenject.InjectTypeInfo/InjectConstructorInfo::Factory
	ZenFactoryMethod_t06221E77375E311219AD5AA13FF570D92D10165E * ___Factory_0;
	// Zenject.InjectableInfo[] Zenject.InjectTypeInfo/InjectConstructorInfo::Parameters
	InjectableInfoU5BU5D_tE39C90F66177150812A88425C78BBBAA65A55BEC* ___Parameters_1;

public:
	inline static int32_t get_offset_of_Factory_0() { return static_cast<int32_t>(offsetof(InjectConstructorInfo_tECB8760EBE312544A1D3860F7737B2AFADCD7908, ___Factory_0)); }
	inline ZenFactoryMethod_t06221E77375E311219AD5AA13FF570D92D10165E * get_Factory_0() const { return ___Factory_0; }
	inline ZenFactoryMethod_t06221E77375E311219AD5AA13FF570D92D10165E ** get_address_of_Factory_0() { return &___Factory_0; }
	inline void set_Factory_0(ZenFactoryMethod_t06221E77375E311219AD5AA13FF570D92D10165E * value)
	{
		___Factory_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Factory_0), (void*)value);
	}

	inline static int32_t get_offset_of_Parameters_1() { return static_cast<int32_t>(offsetof(InjectConstructorInfo_tECB8760EBE312544A1D3860F7737B2AFADCD7908, ___Parameters_1)); }
	inline InjectableInfoU5BU5D_tE39C90F66177150812A88425C78BBBAA65A55BEC* get_Parameters_1() const { return ___Parameters_1; }
	inline InjectableInfoU5BU5D_tE39C90F66177150812A88425C78BBBAA65A55BEC** get_address_of_Parameters_1() { return &___Parameters_1; }
	inline void set_Parameters_1(InjectableInfoU5BU5D_tE39C90F66177150812A88425C78BBBAA65A55BEC* value)
	{
		___Parameters_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Parameters_1), (void*)value);
	}
};


// Zenject.InjectTypeInfo/InjectMemberInfo
struct InjectMemberInfo_t91776F61B901397B8B0EB4930F3354947D5D391A  : public RuntimeObject
{
public:
	// Zenject.ZenMemberSetterMethod Zenject.InjectTypeInfo/InjectMemberInfo::Setter
	ZenMemberSetterMethod_t94AA8A98A9E78694F27DE8D0D46616E2E830C3FA * ___Setter_0;
	// Zenject.InjectableInfo Zenject.InjectTypeInfo/InjectMemberInfo::Info
	InjectableInfo_tFFB881101BEB9ED7BB1E856224E096C168EF76F5 * ___Info_1;

public:
	inline static int32_t get_offset_of_Setter_0() { return static_cast<int32_t>(offsetof(InjectMemberInfo_t91776F61B901397B8B0EB4930F3354947D5D391A, ___Setter_0)); }
	inline ZenMemberSetterMethod_t94AA8A98A9E78694F27DE8D0D46616E2E830C3FA * get_Setter_0() const { return ___Setter_0; }
	inline ZenMemberSetterMethod_t94AA8A98A9E78694F27DE8D0D46616E2E830C3FA ** get_address_of_Setter_0() { return &___Setter_0; }
	inline void set_Setter_0(ZenMemberSetterMethod_t94AA8A98A9E78694F27DE8D0D46616E2E830C3FA * value)
	{
		___Setter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Setter_0), (void*)value);
	}

	inline static int32_t get_offset_of_Info_1() { return static_cast<int32_t>(offsetof(InjectMemberInfo_t91776F61B901397B8B0EB4930F3354947D5D391A, ___Info_1)); }
	inline InjectableInfo_tFFB881101BEB9ED7BB1E856224E096C168EF76F5 * get_Info_1() const { return ___Info_1; }
	inline InjectableInfo_tFFB881101BEB9ED7BB1E856224E096C168EF76F5 ** get_address_of_Info_1() { return &___Info_1; }
	inline void set_Info_1(InjectableInfo_tFFB881101BEB9ED7BB1E856224E096C168EF76F5 * value)
	{
		___Info_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Info_1), (void*)value);
	}
};


// Zenject.InjectTypeInfo/InjectMethodInfo
struct InjectMethodInfo_tCFB365E8D1D6D2FDBE5A4E2581FC43B66CD22C3C  : public RuntimeObject
{
public:
	// System.String Zenject.InjectTypeInfo/InjectMethodInfo::Name
	String_t* ___Name_0;
	// Zenject.ZenInjectMethod Zenject.InjectTypeInfo/InjectMethodInfo::Action
	ZenInjectMethod_t8C0F900438CFC893D25D723CB89F66933250EAAA * ___Action_1;
	// Zenject.InjectableInfo[] Zenject.InjectTypeInfo/InjectMethodInfo::Parameters
	InjectableInfoU5BU5D_tE39C90F66177150812A88425C78BBBAA65A55BEC* ___Parameters_2;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(InjectMethodInfo_tCFB365E8D1D6D2FDBE5A4E2581FC43B66CD22C3C, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_Action_1() { return static_cast<int32_t>(offsetof(InjectMethodInfo_tCFB365E8D1D6D2FDBE5A4E2581FC43B66CD22C3C, ___Action_1)); }
	inline ZenInjectMethod_t8C0F900438CFC893D25D723CB89F66933250EAAA * get_Action_1() const { return ___Action_1; }
	inline ZenInjectMethod_t8C0F900438CFC893D25D723CB89F66933250EAAA ** get_address_of_Action_1() { return &___Action_1; }
	inline void set_Action_1(ZenInjectMethod_t8C0F900438CFC893D25D723CB89F66933250EAAA * value)
	{
		___Action_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Action_1), (void*)value);
	}

	inline static int32_t get_offset_of_Parameters_2() { return static_cast<int32_t>(offsetof(InjectMethodInfo_tCFB365E8D1D6D2FDBE5A4E2581FC43B66CD22C3C, ___Parameters_2)); }
	inline InjectableInfoU5BU5D_tE39C90F66177150812A88425C78BBBAA65A55BEC* get_Parameters_2() const { return ___Parameters_2; }
	inline InjectableInfoU5BU5D_tE39C90F66177150812A88425C78BBBAA65A55BEC** get_address_of_Parameters_2() { return &___Parameters_2; }
	inline void set_Parameters_2(InjectableInfoU5BU5D_tE39C90F66177150812A88425C78BBBAA65A55BEC* value)
	{
		___Parameters_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Parameters_2), (void*)value);
	}
};


// JetBrains.Annotations.AspChildControlTypeAttribute
struct AspChildControlTypeAttribute_t49A97CE0D26CF6E5E0E908E25B04F3925302E1FD  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String JetBrains.Annotations.AspChildControlTypeAttribute::<TagName>k__BackingField
	String_t* ___U3CTagNameU3Ek__BackingField_0;
	// System.Type JetBrains.Annotations.AspChildControlTypeAttribute::<ControlType>k__BackingField
	Type_t * ___U3CControlTypeU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CTagNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AspChildControlTypeAttribute_t49A97CE0D26CF6E5E0E908E25B04F3925302E1FD, ___U3CTagNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CTagNameU3Ek__BackingField_0() const { return ___U3CTagNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CTagNameU3Ek__BackingField_0() { return &___U3CTagNameU3Ek__BackingField_0; }
	inline void set_U3CTagNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CTagNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTagNameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CControlTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AspChildControlTypeAttribute_t49A97CE0D26CF6E5E0E908E25B04F3925302E1FD, ___U3CControlTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CControlTypeU3Ek__BackingField_1() const { return ___U3CControlTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CControlTypeU3Ek__BackingField_1() { return &___U3CControlTypeU3Ek__BackingField_1; }
	inline void set_U3CControlTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CControlTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CControlTypeU3Ek__BackingField_1), (void*)value);
	}
};


// JetBrains.Annotations.AspDataFieldAttribute
struct AspDataFieldAttribute_t349470D6FCE80A53F2628CBEDC6C5A745E0AD25A  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// JetBrains.Annotations.AspDataFieldsAttribute
struct AspDataFieldsAttribute_tBF6A4621D56B86BFF5464136947054BE22CBE904  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// JetBrains.Annotations.AspMethodPropertyAttribute
struct AspMethodPropertyAttribute_t6A97E645B11E75527DFDB1874C75737951A5948B  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// JetBrains.Annotations.AspMvcActionAttribute
struct AspMvcActionAttribute_t1AA0F64AB4FB867CEE224B5DEF970716B39CABBD  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String JetBrains.Annotations.AspMvcActionAttribute::<AnonymousProperty>k__BackingField
	String_t* ___U3CAnonymousPropertyU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CAnonymousPropertyU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AspMvcActionAttribute_t1AA0F64AB4FB867CEE224B5DEF970716B39CABBD, ___U3CAnonymousPropertyU3Ek__BackingField_0)); }
	inline String_t* get_U3CAnonymousPropertyU3Ek__BackingField_0() const { return ___U3CAnonymousPropertyU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CAnonymousPropertyU3Ek__BackingField_0() { return &___U3CAnonymousPropertyU3Ek__BackingField_0; }
	inline void set_U3CAnonymousPropertyU3Ek__BackingField_0(String_t* value)
	{
		___U3CAnonymousPropertyU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAnonymousPropertyU3Ek__BackingField_0), (void*)value);
	}
};


// JetBrains.Annotations.AspMvcActionSelectorAttribute
struct AspMvcActionSelectorAttribute_t7FC9B52D939902F8CA974BAA276D63A3C630B888  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// JetBrains.Annotations.AspMvcAreaAttribute
struct AspMvcAreaAttribute_t0E39CB66C13C812B1E3409B2FD3BC7F85BDA2EA4  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String JetBrains.Annotations.AspMvcAreaAttribute::<AnonymousProperty>k__BackingField
	String_t* ___U3CAnonymousPropertyU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CAnonymousPropertyU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AspMvcAreaAttribute_t0E39CB66C13C812B1E3409B2FD3BC7F85BDA2EA4, ___U3CAnonymousPropertyU3Ek__BackingField_0)); }
	inline String_t* get_U3CAnonymousPropertyU3Ek__BackingField_0() const { return ___U3CAnonymousPropertyU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CAnonymousPropertyU3Ek__BackingField_0() { return &___U3CAnonymousPropertyU3Ek__BackingField_0; }
	inline void set_U3CAnonymousPropertyU3Ek__BackingField_0(String_t* value)
	{
		___U3CAnonymousPropertyU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAnonymousPropertyU3Ek__BackingField_0), (void*)value);
	}
};


// JetBrains.Annotations.AspMvcAreaMasterLocationFormatAttribute
struct AspMvcAreaMasterLocationFormatAttribute_tA876F76E524EC79F498B59D831D4A867D1689497  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String JetBrains.Annotations.AspMvcAreaMasterLocationFormatAttribute::<Format>k__BackingField
	String_t* ___U3CFormatU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CFormatU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AspMvcAreaMasterLocationFormatAttribute_tA876F76E524EC79F498B59D831D4A867D1689497, ___U3CFormatU3Ek__BackingField_0)); }
	inline String_t* get_U3CFormatU3Ek__BackingField_0() const { return ___U3CFormatU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CFormatU3Ek__BackingField_0() { return &___U3CFormatU3Ek__BackingField_0; }
	inline void set_U3CFormatU3Ek__BackingField_0(String_t* value)
	{
		___U3CFormatU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFormatU3Ek__BackingField_0), (void*)value);
	}
};


// JetBrains.Annotations.AspMvcAreaPartialViewLocationFormatAttribute
struct AspMvcAreaPartialViewLocationFormatAttribute_t57222AD01A7A151F89DDFBAF11D70A2CD983ECA4  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String JetBrains.Annotations.AspMvcAreaPartialViewLocationFormatAttribute::<Format>k__BackingField
	String_t* ___U3CFormatU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CFormatU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AspMvcAreaPartialViewLocationFormatAttribute_t57222AD01A7A151F89DDFBAF11D70A2CD983ECA4, ___U3CFormatU3Ek__BackingField_0)); }
	inline String_t* get_U3CFormatU3Ek__BackingField_0() const { return ___U3CFormatU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CFormatU3Ek__BackingField_0() { return &___U3CFormatU3Ek__BackingField_0; }
	inline void set_U3CFormatU3Ek__BackingField_0(String_t* value)
	{
		___U3CFormatU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFormatU3Ek__BackingField_0), (void*)value);
	}
};


// JetBrains.Annotations.AspMvcAreaViewLocationFormatAttribute
struct AspMvcAreaViewLocationFormatAttribute_t757C424B0E26E0F79D3F8465F66DE0B8B2B8F6D7  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String JetBrains.Annotations.AspMvcAreaViewLocationFormatAttribute::<Format>k__BackingField
	String_t* ___U3CFormatU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CFormatU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AspMvcAreaViewLocationFormatAttribute_t757C424B0E26E0F79D3F8465F66DE0B8B2B8F6D7, ___U3CFormatU3Ek__BackingField_0)); }
	inline String_t* get_U3CFormatU3Ek__BackingField_0() const { return ___U3CFormatU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CFormatU3Ek__BackingField_0() { return &___U3CFormatU3Ek__BackingField_0; }
	inline void set_U3CFormatU3Ek__BackingField_0(String_t* value)
	{
		___U3CFormatU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFormatU3Ek__BackingField_0), (void*)value);
	}
};


// JetBrains.Annotations.AspMvcControllerAttribute
struct AspMvcControllerAttribute_t44AC2AF14A6C0038F0047A9145A43474B63C0A32  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String JetBrains.Annotations.AspMvcControllerAttribute::<AnonymousProperty>k__BackingField
	String_t* ___U3CAnonymousPropertyU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CAnonymousPropertyU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AspMvcControllerAttribute_t44AC2AF14A6C0038F0047A9145A43474B63C0A32, ___U3CAnonymousPropertyU3Ek__BackingField_0)); }
	inline String_t* get_U3CAnonymousPropertyU3Ek__BackingField_0() const { return ___U3CAnonymousPropertyU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CAnonymousPropertyU3Ek__BackingField_0() { return &___U3CAnonymousPropertyU3Ek__BackingField_0; }
	inline void set_U3CAnonymousPropertyU3Ek__BackingField_0(String_t* value)
	{
		___U3CAnonymousPropertyU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAnonymousPropertyU3Ek__BackingField_0), (void*)value);
	}
};


// JetBrains.Annotations.AspMvcDisplayTemplateAttribute
struct AspMvcDisplayTemplateAttribute_t0459AA674E25AB0654E10E825D4AC2B9E9A820A1  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// JetBrains.Annotations.AspMvcEditorTemplateAttribute
struct AspMvcEditorTemplateAttribute_tE90FC5C4DA7CD804F5327945A850E077187AFA12  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// JetBrains.Annotations.AspMvcMasterAttribute
struct AspMvcMasterAttribute_t20E203D3BDAE714BC30632BEA5AFD2D9654CB481  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// JetBrains.Annotations.AspMvcMasterLocationFormatAttribute
struct AspMvcMasterLocationFormatAttribute_t34C965516F029FE3B2A99634953E5695F9C0214B  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String JetBrains.Annotations.AspMvcMasterLocationFormatAttribute::<Format>k__BackingField
	String_t* ___U3CFormatU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CFormatU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AspMvcMasterLocationFormatAttribute_t34C965516F029FE3B2A99634953E5695F9C0214B, ___U3CFormatU3Ek__BackingField_0)); }
	inline String_t* get_U3CFormatU3Ek__BackingField_0() const { return ___U3CFormatU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CFormatU3Ek__BackingField_0() { return &___U3CFormatU3Ek__BackingField_0; }
	inline void set_U3CFormatU3Ek__BackingField_0(String_t* value)
	{
		___U3CFormatU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFormatU3Ek__BackingField_0), (void*)value);
	}
};


// JetBrains.Annotations.AspMvcModelTypeAttribute
struct AspMvcModelTypeAttribute_t1D2F9FA8F936DBF7237D2D4D8B9C223AF0F5555C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// JetBrains.Annotations.AspMvcPartialViewAttribute
struct AspMvcPartialViewAttribute_tEB46BBD0E95B2596E49EEF51273FBA4435BC96BF  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// JetBrains.Annotations.AspMvcPartialViewLocationFormatAttribute
struct AspMvcPartialViewLocationFormatAttribute_t2F1D639624F49B8FE32AD966DE7056E5C2270246  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String JetBrains.Annotations.AspMvcPartialViewLocationFormatAttribute::<Format>k__BackingField
	String_t* ___U3CFormatU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CFormatU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AspMvcPartialViewLocationFormatAttribute_t2F1D639624F49B8FE32AD966DE7056E5C2270246, ___U3CFormatU3Ek__BackingField_0)); }
	inline String_t* get_U3CFormatU3Ek__BackingField_0() const { return ___U3CFormatU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CFormatU3Ek__BackingField_0() { return &___U3CFormatU3Ek__BackingField_0; }
	inline void set_U3CFormatU3Ek__BackingField_0(String_t* value)
	{
		___U3CFormatU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFormatU3Ek__BackingField_0), (void*)value);
	}
};


// JetBrains.Annotations.AspMvcSuppressViewErrorAttribute
struct AspMvcSuppressViewErrorAttribute_t7E666A78163296298153F75E0B061CC3EAA102C3  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// JetBrains.Annotations.AspMvcTemplateAttribute
struct AspMvcTemplateAttribute_t3865623574DF6A7A99B2612E9BDB1BC3089FFFD9  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// JetBrains.Annotations.AspMvcViewAttribute
struct AspMvcViewAttribute_tD5ECE56D92B03F0DB6E75BA0D10B5C5F1B44F5BB  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// JetBrains.Annotations.AspMvcViewComponentAttribute
struct AspMvcViewComponentAttribute_t16D82E1397E7853D7394C5E687933319E4DEB89F  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// JetBrains.Annotations.AspMvcViewComponentViewAttribute
struct AspMvcViewComponentViewAttribute_tCC421624D6D544441E63FD9D59991D092CF32DAE  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// JetBrains.Annotations.AspMvcViewLocationFormatAttribute
struct AspMvcViewLocationFormatAttribute_t921715B41EE58D06C820B2916BF6D15709ACC0FB  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String JetBrains.Annotations.AspMvcViewLocationFormatAttribute::<Format>k__BackingField
	String_t* ___U3CFormatU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CFormatU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AspMvcViewLocationFormatAttribute_t921715B41EE58D06C820B2916BF6D15709ACC0FB, ___U3CFormatU3Ek__BackingField_0)); }
	inline String_t* get_U3CFormatU3Ek__BackingField_0() const { return ___U3CFormatU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CFormatU3Ek__BackingField_0() { return &___U3CFormatU3Ek__BackingField_0; }
	inline void set_U3CFormatU3Ek__BackingField_0(String_t* value)
	{
		___U3CFormatU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFormatU3Ek__BackingField_0), (void*)value);
	}
};


// JetBrains.Annotations.AspRequiredAttributeAttribute
struct AspRequiredAttributeAttribute_tB5767687A8A0598AF783288D7837CA6F3E9FD547  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String JetBrains.Annotations.AspRequiredAttributeAttribute::<Attribute>k__BackingField
	String_t* ___U3CAttributeU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CAttributeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AspRequiredAttributeAttribute_tB5767687A8A0598AF783288D7837CA6F3E9FD547, ___U3CAttributeU3Ek__BackingField_0)); }
	inline String_t* get_U3CAttributeU3Ek__BackingField_0() const { return ___U3CAttributeU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CAttributeU3Ek__BackingField_0() { return &___U3CAttributeU3Ek__BackingField_0; }
	inline void set_U3CAttributeU3Ek__BackingField_0(String_t* value)
	{
		___U3CAttributeU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAttributeU3Ek__BackingField_0), (void*)value);
	}
};


// JetBrains.Annotations.AspTypePropertyAttribute
struct AspTypePropertyAttribute_tB5EC5DF211B5ABF34217E219C534A9F3BD97DBF6  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean JetBrains.Annotations.AspTypePropertyAttribute::<CreateConstructorReferences>k__BackingField
	bool ___U3CCreateConstructorReferencesU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CCreateConstructorReferencesU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AspTypePropertyAttribute_tB5EC5DF211B5ABF34217E219C534A9F3BD97DBF6, ___U3CCreateConstructorReferencesU3Ek__BackingField_0)); }
	inline bool get_U3CCreateConstructorReferencesU3Ek__BackingField_0() const { return ___U3CCreateConstructorReferencesU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CCreateConstructorReferencesU3Ek__BackingField_0() { return &___U3CCreateConstructorReferencesU3Ek__BackingField_0; }
	inline void set_U3CCreateConstructorReferencesU3Ek__BackingField_0(bool value)
	{
		___U3CCreateConstructorReferencesU3Ek__BackingField_0 = value;
	}
};


// JetBrains.Annotations.AssertionMethodAttribute
struct AssertionMethodAttribute_t906D7F8988D20A1BC7A353D6F7B8A587F7D8E823  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// JetBrains.Annotations.BaseTypeRequiredAttribute
struct BaseTypeRequiredAttribute_t229CD06DD288A6CC18D3D73901C7895FB75F171E  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Type JetBrains.Annotations.BaseTypeRequiredAttribute::<BaseType>k__BackingField
	Type_t * ___U3CBaseTypeU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CBaseTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BaseTypeRequiredAttribute_t229CD06DD288A6CC18D3D73901C7895FB75F171E, ___U3CBaseTypeU3Ek__BackingField_0)); }
	inline Type_t * get_U3CBaseTypeU3Ek__BackingField_0() const { return ___U3CBaseTypeU3Ek__BackingField_0; }
	inline Type_t ** get_address_of_U3CBaseTypeU3Ek__BackingField_0() { return &___U3CBaseTypeU3Ek__BackingField_0; }
	inline void set_U3CBaseTypeU3Ek__BackingField_0(Type_t * value)
	{
		___U3CBaseTypeU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBaseTypeU3Ek__BackingField_0), (void*)value);
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


// JetBrains.Annotations.CanBeNullAttribute
struct CanBeNullAttribute_t7777C5F7E89806EAF87B53955346053586112BED  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// JetBrains.Annotations.CannotApplyEqualityOperatorAttribute
struct CannotApplyEqualityOperatorAttribute_tE091E5A92958B8484035EBD4815681840D644D72  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// JetBrains.Annotations.ContractAnnotationAttribute
struct ContractAnnotationAttribute_t662061C8A440CEE29A0551A18371537541300293  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String JetBrains.Annotations.ContractAnnotationAttribute::<Contract>k__BackingField
	String_t* ___U3CContractU3Ek__BackingField_0;
	// System.Boolean JetBrains.Annotations.ContractAnnotationAttribute::<ForceFullStates>k__BackingField
	bool ___U3CForceFullStatesU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CContractU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ContractAnnotationAttribute_t662061C8A440CEE29A0551A18371537541300293, ___U3CContractU3Ek__BackingField_0)); }
	inline String_t* get_U3CContractU3Ek__BackingField_0() const { return ___U3CContractU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CContractU3Ek__BackingField_0() { return &___U3CContractU3Ek__BackingField_0; }
	inline void set_U3CContractU3Ek__BackingField_0(String_t* value)
	{
		___U3CContractU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CContractU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CForceFullStatesU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ContractAnnotationAttribute_t662061C8A440CEE29A0551A18371537541300293, ___U3CForceFullStatesU3Ek__BackingField_1)); }
	inline bool get_U3CForceFullStatesU3Ek__BackingField_1() const { return ___U3CForceFullStatesU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CForceFullStatesU3Ek__BackingField_1() { return &___U3CForceFullStatesU3Ek__BackingField_1; }
	inline void set_U3CForceFullStatesU3Ek__BackingField_1(bool value)
	{
		___U3CForceFullStatesU3Ek__BackingField_1 = value;
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

// JetBrains.Annotations.HtmlAttributeValueAttribute
struct HtmlAttributeValueAttribute_t10B5BF21F421C7AB034A44845E84663710144E6A  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String JetBrains.Annotations.HtmlAttributeValueAttribute::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(HtmlAttributeValueAttribute_t10B5BF21F421C7AB034A44845E84663710144E6A, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_0), (void*)value);
	}
};


// JetBrains.Annotations.HtmlElementAttributesAttribute
struct HtmlElementAttributesAttribute_t1A2629419BE6B1A61AE33540D9827FD90F92B151  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String JetBrains.Annotations.HtmlElementAttributesAttribute::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(HtmlElementAttributesAttribute_t1A2629419BE6B1A61AE33540D9827FD90F92B151, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_0), (void*)value);
	}
};


// JetBrains.Annotations.InstantHandleAttribute
struct InstantHandleAttribute_tFE284194DECA240887744A8F1701C71C81645BD3  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
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


// JetBrains.Annotations.InvokerParameterNameAttribute
struct InvokerParameterNameAttribute_t588C7E8C5F51B2DD15A6F5C10480431E44982AE5  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// JetBrains.Annotations.ItemCanBeNullAttribute
struct ItemCanBeNullAttribute_t52A59F189C083D2D4733983814B6DBEC4696F14F  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// JetBrains.Annotations.ItemNotNullAttribute
struct ItemNotNullAttribute_t9A942540370A63F10861BD3E67E285405C71F376  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// JetBrains.Annotations.LinqTunnelAttribute
struct LinqTunnelAttribute_tF0DF691AEC2D0FDD48774C452C76403C2817409B  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// JetBrains.Annotations.LocalizationRequiredAttribute
struct LocalizationRequiredAttribute_t66D489EB8A17C5151FF39FAAA1F784E5E2B81681  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean JetBrains.Annotations.LocalizationRequiredAttribute::<Required>k__BackingField
	bool ___U3CRequiredU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CRequiredU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(LocalizationRequiredAttribute_t66D489EB8A17C5151FF39FAAA1F784E5E2B81681, ___U3CRequiredU3Ek__BackingField_0)); }
	inline bool get_U3CRequiredU3Ek__BackingField_0() const { return ___U3CRequiredU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CRequiredU3Ek__BackingField_0() { return &___U3CRequiredU3Ek__BackingField_0; }
	inline void set_U3CRequiredU3Ek__BackingField_0(bool value)
	{
		___U3CRequiredU3Ek__BackingField_0 = value;
	}
};


// JetBrains.Annotations.MacroAttribute
struct MacroAttribute_tC064E892C66536B9F196499466EF5ED60108D40E  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String JetBrains.Annotations.MacroAttribute::<Expression>k__BackingField
	String_t* ___U3CExpressionU3Ek__BackingField_0;
	// System.Int32 JetBrains.Annotations.MacroAttribute::<Editable>k__BackingField
	int32_t ___U3CEditableU3Ek__BackingField_1;
	// System.String JetBrains.Annotations.MacroAttribute::<Target>k__BackingField
	String_t* ___U3CTargetU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CExpressionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MacroAttribute_tC064E892C66536B9F196499466EF5ED60108D40E, ___U3CExpressionU3Ek__BackingField_0)); }
	inline String_t* get_U3CExpressionU3Ek__BackingField_0() const { return ___U3CExpressionU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CExpressionU3Ek__BackingField_0() { return &___U3CExpressionU3Ek__BackingField_0; }
	inline void set_U3CExpressionU3Ek__BackingField_0(String_t* value)
	{
		___U3CExpressionU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CExpressionU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEditableU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MacroAttribute_tC064E892C66536B9F196499466EF5ED60108D40E, ___U3CEditableU3Ek__BackingField_1)); }
	inline int32_t get_U3CEditableU3Ek__BackingField_1() const { return ___U3CEditableU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CEditableU3Ek__BackingField_1() { return &___U3CEditableU3Ek__BackingField_1; }
	inline void set_U3CEditableU3Ek__BackingField_1(int32_t value)
	{
		___U3CEditableU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CTargetU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MacroAttribute_tC064E892C66536B9F196499466EF5ED60108D40E, ___U3CTargetU3Ek__BackingField_2)); }
	inline String_t* get_U3CTargetU3Ek__BackingField_2() const { return ___U3CTargetU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CTargetU3Ek__BackingField_2() { return &___U3CTargetU3Ek__BackingField_2; }
	inline void set_U3CTargetU3Ek__BackingField_2(String_t* value)
	{
		___U3CTargetU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTargetU3Ek__BackingField_2), (void*)value);
	}
};


// JetBrains.Annotations.MustUseReturnValueAttribute
struct MustUseReturnValueAttribute_t649AC1C4D27CBC9BF4E22DC4B15D00D7EE845DD3  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String JetBrains.Annotations.MustUseReturnValueAttribute::<Justification>k__BackingField
	String_t* ___U3CJustificationU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CJustificationU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MustUseReturnValueAttribute_t649AC1C4D27CBC9BF4E22DC4B15D00D7EE845DD3, ___U3CJustificationU3Ek__BackingField_0)); }
	inline String_t* get_U3CJustificationU3Ek__BackingField_0() const { return ___U3CJustificationU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CJustificationU3Ek__BackingField_0() { return &___U3CJustificationU3Ek__BackingField_0; }
	inline void set_U3CJustificationU3Ek__BackingField_0(String_t* value)
	{
		___U3CJustificationU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CJustificationU3Ek__BackingField_0), (void*)value);
	}
};


// JetBrains.Annotations.NoEnumerationAttribute
struct NoEnumerationAttribute_t1A176F2BE1AA8DAF6D5C0F607C37FB5217F6A0F6  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Zenject.NoReflectionBakingAttribute
struct NoReflectionBakingAttribute_t00B2AA73672895518C17BB47BC21B4085A983997  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// JetBrains.Annotations.NoReorderAttribute
struct NoReorderAttribute_t24C07ED89302B2482B5354ADE5F80AA06021A808  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// JetBrains.Annotations.NotNullAttribute
struct NotNullAttribute_t44A925B33322011233CD36F85C5840CF606D868B  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// JetBrains.Annotations.NotifyPropertyChangedInvocatorAttribute
struct NotifyPropertyChangedInvocatorAttribute_t58A7B14D9749D65C80751BFBA1B83CD6FE69CD05  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String JetBrains.Annotations.NotifyPropertyChangedInvocatorAttribute::<ParameterName>k__BackingField
	String_t* ___U3CParameterNameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CParameterNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(NotifyPropertyChangedInvocatorAttribute_t58A7B14D9749D65C80751BFBA1B83CD6FE69CD05, ___U3CParameterNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CParameterNameU3Ek__BackingField_0() const { return ___U3CParameterNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CParameterNameU3Ek__BackingField_0() { return &___U3CParameterNameU3Ek__BackingField_0; }
	inline void set_U3CParameterNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CParameterNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CParameterNameU3Ek__BackingField_0), (void*)value);
	}
};


// JetBrains.Annotations.PathReferenceAttribute
struct PathReferenceAttribute_t041CA1FB39BB1371780D4A942BA71171F43B5BAE  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String JetBrains.Annotations.PathReferenceAttribute::<BasePath>k__BackingField
	String_t* ___U3CBasePathU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CBasePathU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PathReferenceAttribute_t041CA1FB39BB1371780D4A942BA71171F43B5BAE, ___U3CBasePathU3Ek__BackingField_0)); }
	inline String_t* get_U3CBasePathU3Ek__BackingField_0() const { return ___U3CBasePathU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CBasePathU3Ek__BackingField_0() { return &___U3CBasePathU3Ek__BackingField_0; }
	inline void set_U3CBasePathU3Ek__BackingField_0(String_t* value)
	{
		___U3CBasePathU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBasePathU3Ek__BackingField_0), (void*)value);
	}
};


// Zenject.Internal.PreserveAttribute
struct PreserveAttribute_t917FF99C161EA919E410C46999AFD6D1A7BFEA27  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// JetBrains.Annotations.ProvidesContextAttribute
struct ProvidesContextAttribute_t2FCFAA7CD099FF2A71BD311A41A84197894AD49B  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// JetBrains.Annotations.PublicAPIAttribute
struct PublicAPIAttribute_t92C190C0D7EF5A6216EF4C2D09A48190D77BAC90  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String JetBrains.Annotations.PublicAPIAttribute::<Comment>k__BackingField
	String_t* ___U3CCommentU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CCommentU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PublicAPIAttribute_t92C190C0D7EF5A6216EF4C2D09A48190D77BAC90, ___U3CCommentU3Ek__BackingField_0)); }
	inline String_t* get_U3CCommentU3Ek__BackingField_0() const { return ___U3CCommentU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CCommentU3Ek__BackingField_0() { return &___U3CCommentU3Ek__BackingField_0; }
	inline void set_U3CCommentU3Ek__BackingField_0(String_t* value)
	{
		___U3CCommentU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCommentU3Ek__BackingField_0), (void*)value);
	}
};


// JetBrains.Annotations.PureAttribute
struct PureAttribute_t7B5C1EEEC4680EF364694E4F7558D4C1DB286141  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// JetBrains.Annotations.RazorDirectiveAttribute
struct RazorDirectiveAttribute_t943675864F4EADEAC34BD4083E2F3110F60EECDD  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String JetBrains.Annotations.RazorDirectiveAttribute::<Directive>k__BackingField
	String_t* ___U3CDirectiveU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CDirectiveU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RazorDirectiveAttribute_t943675864F4EADEAC34BD4083E2F3110F60EECDD, ___U3CDirectiveU3Ek__BackingField_0)); }
	inline String_t* get_U3CDirectiveU3Ek__BackingField_0() const { return ___U3CDirectiveU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CDirectiveU3Ek__BackingField_0() { return &___U3CDirectiveU3Ek__BackingField_0; }
	inline void set_U3CDirectiveU3Ek__BackingField_0(String_t* value)
	{
		___U3CDirectiveU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDirectiveU3Ek__BackingField_0), (void*)value);
	}
};


// JetBrains.Annotations.RazorHelperCommonAttribute
struct RazorHelperCommonAttribute_t2B210F56FDE5BB4D1F8727EA8BAB43106FDC7DF7  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// JetBrains.Annotations.RazorImportNamespaceAttribute
struct RazorImportNamespaceAttribute_t6ECF9AF0F0E5BABE7877D542DBB1E4956544544E  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String JetBrains.Annotations.RazorImportNamespaceAttribute::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RazorImportNamespaceAttribute_t6ECF9AF0F0E5BABE7877D542DBB1E4956544544E, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_0), (void*)value);
	}
};


// JetBrains.Annotations.RazorInjectionAttribute
struct RazorInjectionAttribute_t31349804B2E881DA010DABB2743459FE32CF6F64  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String JetBrains.Annotations.RazorInjectionAttribute::<Type>k__BackingField
	String_t* ___U3CTypeU3Ek__BackingField_0;
	// System.String JetBrains.Annotations.RazorInjectionAttribute::<FieldName>k__BackingField
	String_t* ___U3CFieldNameU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RazorInjectionAttribute_t31349804B2E881DA010DABB2743459FE32CF6F64, ___U3CTypeU3Ek__BackingField_0)); }
	inline String_t* get_U3CTypeU3Ek__BackingField_0() const { return ___U3CTypeU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CTypeU3Ek__BackingField_0() { return &___U3CTypeU3Ek__BackingField_0; }
	inline void set_U3CTypeU3Ek__BackingField_0(String_t* value)
	{
		___U3CTypeU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTypeU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFieldNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RazorInjectionAttribute_t31349804B2E881DA010DABB2743459FE32CF6F64, ___U3CFieldNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CFieldNameU3Ek__BackingField_1() const { return ___U3CFieldNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CFieldNameU3Ek__BackingField_1() { return &___U3CFieldNameU3Ek__BackingField_1; }
	inline void set_U3CFieldNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CFieldNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFieldNameU3Ek__BackingField_1), (void*)value);
	}
};


// JetBrains.Annotations.RazorLayoutAttribute
struct RazorLayoutAttribute_t37C9039AF772469049A6E51775703D0E0657BDAA  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// JetBrains.Annotations.RazorPageBaseTypeAttribute
struct RazorPageBaseTypeAttribute_t3FD1DFA391FD51100312D02ADA84FBBFB9D7A651  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String JetBrains.Annotations.RazorPageBaseTypeAttribute::<BaseType>k__BackingField
	String_t* ___U3CBaseTypeU3Ek__BackingField_0;
	// System.String JetBrains.Annotations.RazorPageBaseTypeAttribute::<PageName>k__BackingField
	String_t* ___U3CPageNameU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CBaseTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RazorPageBaseTypeAttribute_t3FD1DFA391FD51100312D02ADA84FBBFB9D7A651, ___U3CBaseTypeU3Ek__BackingField_0)); }
	inline String_t* get_U3CBaseTypeU3Ek__BackingField_0() const { return ___U3CBaseTypeU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CBaseTypeU3Ek__BackingField_0() { return &___U3CBaseTypeU3Ek__BackingField_0; }
	inline void set_U3CBaseTypeU3Ek__BackingField_0(String_t* value)
	{
		___U3CBaseTypeU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBaseTypeU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPageNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RazorPageBaseTypeAttribute_t3FD1DFA391FD51100312D02ADA84FBBFB9D7A651, ___U3CPageNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CPageNameU3Ek__BackingField_1() const { return ___U3CPageNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CPageNameU3Ek__BackingField_1() { return &___U3CPageNameU3Ek__BackingField_1; }
	inline void set_U3CPageNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CPageNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPageNameU3Ek__BackingField_1), (void*)value);
	}
};


// JetBrains.Annotations.RazorSectionAttribute
struct RazorSectionAttribute_tB43478DF4831017D096125DD727A8B70B93B194C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// JetBrains.Annotations.RazorWriteLiteralMethodAttribute
struct RazorWriteLiteralMethodAttribute_tEFFC6AF0FBE401D1AB95E081C5914D6DEA2165CA  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// JetBrains.Annotations.RazorWriteMethodAttribute
struct RazorWriteMethodAttribute_t10030D82E14AB68920BBFAAFD867918CB18E5C26  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// JetBrains.Annotations.RazorWriteMethodParameterAttribute
struct RazorWriteMethodParameterAttribute_tB38269FF3A960AA7105BF2297988471EAA11F07F  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// JetBrains.Annotations.RegexPatternAttribute
struct RegexPatternAttribute_t775244BB3AF4FB5DE7DCD3C5EBEAF3D4A7CAC67A  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// JetBrains.Annotations.SourceTemplateAttribute
struct SourceTemplateAttribute_t9EC542871BCA2EB9635F8D7585821B9590C49CCA  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// JetBrains.Annotations.StringFormatMethodAttribute
struct StringFormatMethodAttribute_t5C06E2FCA4DC5B963F6828463C37C2324B7B13BA  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String JetBrains.Annotations.StringFormatMethodAttribute::<FormatParameterName>k__BackingField
	String_t* ___U3CFormatParameterNameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CFormatParameterNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(StringFormatMethodAttribute_t5C06E2FCA4DC5B963F6828463C37C2324B7B13BA, ___U3CFormatParameterNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CFormatParameterNameU3Ek__BackingField_0() const { return ___U3CFormatParameterNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CFormatParameterNameU3Ek__BackingField_0() { return &___U3CFormatParameterNameU3Ek__BackingField_0; }
	inline void set_U3CFormatParameterNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CFormatParameterNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFormatParameterNameU3Ek__BackingField_0), (void*)value);
	}
};


// JetBrains.Annotations.TerminatesProgramAttribute
struct TerminatesProgramAttribute_t73F78A9D717DCA2598A6484AD4E053E839535380  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// JetBrains.Annotations.ValueProviderAttribute
struct ValueProviderAttribute_t340091F92CE5A4F428B8AB7194E66DBF94549B8E  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String JetBrains.Annotations.ValueProviderAttribute::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ValueProviderAttribute_t340091F92CE5A4F428B8AB7194E66DBF94549B8E, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_0), (void*)value);
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


// JetBrains.Annotations.XamlItemBindingOfItemsControlAttribute
struct XamlItemBindingOfItemsControlAttribute_tB97613DD893E4A4627461FFD3D529B5297BE303D  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// JetBrains.Annotations.XamlItemsControlAttribute
struct XamlItemsControlAttribute_t14B1E1D34F9B2558B18C184B0059CB482AF9AD8F  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Zenject.ZenjectAllowDuringValidationAttribute
struct ZenjectAllowDuringValidationAttribute_t2071D5D5475C3AAA807702A85BF193CE387CF17E  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// JetBrains.Annotations.AssertionConditionType
struct AssertionConditionType_t3D27AE94646126BE938B5D0AFDA1683A2AC2F760 
{
public:
	// System.Int32 JetBrains.Annotations.AssertionConditionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AssertionConditionType_t3D27AE94646126BE938B5D0AFDA1683A2AC2F760, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// JetBrains.Annotations.CollectionAccessType
struct CollectionAccessType_tB94DC9845A85A7779063CBEEEA73A2654833DDC4 
{
public:
	// System.Int32 JetBrains.Annotations.CollectionAccessType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CollectionAccessType_tB94DC9845A85A7779063CBEEEA73A2654833DDC4, ___value___2)); }
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

// JetBrains.Annotations.ImplicitUseKindFlags
struct ImplicitUseKindFlags_t84BEBE53AA8D0513C0BA26C5284BAE069F6C8C6E 
{
public:
	// System.Int32 JetBrains.Annotations.ImplicitUseKindFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ImplicitUseKindFlags_t84BEBE53AA8D0513C0BA26C5284BAE069F6C8C6E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// JetBrains.Annotations.ImplicitUseTargetFlags
struct ImplicitUseTargetFlags_t36D0EEE338D6E148ED3308692F5007E41E7381BF 
{
public:
	// System.Int32 JetBrains.Annotations.ImplicitUseTargetFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ImplicitUseTargetFlags_t36D0EEE338D6E148ED3308692F5007E41E7381BF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Zenject.InjectSources
struct InjectSources_t1889CC2C5CE4BBB2548A208748288C27F423499C 
{
public:
	// System.Int32 Zenject.InjectSources::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InjectSources_t1889CC2C5CE4BBB2548A208748288C27F423499C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// JetBrains.Annotations.AssertionConditionAttribute
struct AssertionConditionAttribute_tA00B8F2B72E746630D065B41EF51B53F82DB0BEB  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// JetBrains.Annotations.AssertionConditionType JetBrains.Annotations.AssertionConditionAttribute::<ConditionType>k__BackingField
	int32_t ___U3CConditionTypeU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CConditionTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AssertionConditionAttribute_tA00B8F2B72E746630D065B41EF51B53F82DB0BEB, ___U3CConditionTypeU3Ek__BackingField_0)); }
	inline int32_t get_U3CConditionTypeU3Ek__BackingField_0() const { return ___U3CConditionTypeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CConditionTypeU3Ek__BackingField_0() { return &___U3CConditionTypeU3Ek__BackingField_0; }
	inline void set_U3CConditionTypeU3Ek__BackingField_0(int32_t value)
	{
		___U3CConditionTypeU3Ek__BackingField_0 = value;
	}
};


// JetBrains.Annotations.CollectionAccessAttribute
struct CollectionAccessAttribute_t95980E60D6D0FDA3EB0A757DD62BE4ED5505F104  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// JetBrains.Annotations.CollectionAccessType JetBrains.Annotations.CollectionAccessAttribute::<CollectionAccessType>k__BackingField
	int32_t ___U3CCollectionAccessTypeU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CCollectionAccessTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(CollectionAccessAttribute_t95980E60D6D0FDA3EB0A757DD62BE4ED5505F104, ___U3CCollectionAccessTypeU3Ek__BackingField_0)); }
	inline int32_t get_U3CCollectionAccessTypeU3Ek__BackingField_0() const { return ___U3CCollectionAccessTypeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CCollectionAccessTypeU3Ek__BackingField_0() { return &___U3CCollectionAccessTypeU3Ek__BackingField_0; }
	inline void set_U3CCollectionAccessTypeU3Ek__BackingField_0(int32_t value)
	{
		___U3CCollectionAccessTypeU3Ek__BackingField_0 = value;
	}
};


// Zenject.InjectAttributeBase
struct InjectAttributeBase_tBEA6A6FCBD9B487AAF830C7FD5F089DE74551DC7  : public PreserveAttribute_t917FF99C161EA919E410C46999AFD6D1A7BFEA27
{
public:
	// System.Boolean Zenject.InjectAttributeBase::<Optional>k__BackingField
	bool ___U3COptionalU3Ek__BackingField_0;
	// System.Object Zenject.InjectAttributeBase::<Id>k__BackingField
	RuntimeObject * ___U3CIdU3Ek__BackingField_1;
	// Zenject.InjectSources Zenject.InjectAttributeBase::<Source>k__BackingField
	int32_t ___U3CSourceU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3COptionalU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InjectAttributeBase_tBEA6A6FCBD9B487AAF830C7FD5F089DE74551DC7, ___U3COptionalU3Ek__BackingField_0)); }
	inline bool get_U3COptionalU3Ek__BackingField_0() const { return ___U3COptionalU3Ek__BackingField_0; }
	inline bool* get_address_of_U3COptionalU3Ek__BackingField_0() { return &___U3COptionalU3Ek__BackingField_0; }
	inline void set_U3COptionalU3Ek__BackingField_0(bool value)
	{
		___U3COptionalU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(InjectAttributeBase_tBEA6A6FCBD9B487AAF830C7FD5F089DE74551DC7, ___U3CIdU3Ek__BackingField_1)); }
	inline RuntimeObject * get_U3CIdU3Ek__BackingField_1() const { return ___U3CIdU3Ek__BackingField_1; }
	inline RuntimeObject ** get_address_of_U3CIdU3Ek__BackingField_1() { return &___U3CIdU3Ek__BackingField_1; }
	inline void set_U3CIdU3Ek__BackingField_1(RuntimeObject * value)
	{
		___U3CIdU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIdU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSourceU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(InjectAttributeBase_tBEA6A6FCBD9B487AAF830C7FD5F089DE74551DC7, ___U3CSourceU3Ek__BackingField_2)); }
	inline int32_t get_U3CSourceU3Ek__BackingField_2() const { return ___U3CSourceU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CSourceU3Ek__BackingField_2() { return &___U3CSourceU3Ek__BackingField_2; }
	inline void set_U3CSourceU3Ek__BackingField_2(int32_t value)
	{
		___U3CSourceU3Ek__BackingField_2 = value;
	}
};


// Zenject.InjectableInfo
struct InjectableInfo_tFFB881101BEB9ED7BB1E856224E096C168EF76F5  : public RuntimeObject
{
public:
	// System.Boolean Zenject.InjectableInfo::Optional
	bool ___Optional_0;
	// System.Object Zenject.InjectableInfo::Identifier
	RuntimeObject * ___Identifier_1;
	// Zenject.InjectSources Zenject.InjectableInfo::SourceType
	int32_t ___SourceType_2;
	// System.String Zenject.InjectableInfo::MemberName
	String_t* ___MemberName_3;
	// System.Type Zenject.InjectableInfo::MemberType
	Type_t * ___MemberType_4;
	// System.Object Zenject.InjectableInfo::DefaultValue
	RuntimeObject * ___DefaultValue_5;

public:
	inline static int32_t get_offset_of_Optional_0() { return static_cast<int32_t>(offsetof(InjectableInfo_tFFB881101BEB9ED7BB1E856224E096C168EF76F5, ___Optional_0)); }
	inline bool get_Optional_0() const { return ___Optional_0; }
	inline bool* get_address_of_Optional_0() { return &___Optional_0; }
	inline void set_Optional_0(bool value)
	{
		___Optional_0 = value;
	}

	inline static int32_t get_offset_of_Identifier_1() { return static_cast<int32_t>(offsetof(InjectableInfo_tFFB881101BEB9ED7BB1E856224E096C168EF76F5, ___Identifier_1)); }
	inline RuntimeObject * get_Identifier_1() const { return ___Identifier_1; }
	inline RuntimeObject ** get_address_of_Identifier_1() { return &___Identifier_1; }
	inline void set_Identifier_1(RuntimeObject * value)
	{
		___Identifier_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Identifier_1), (void*)value);
	}

	inline static int32_t get_offset_of_SourceType_2() { return static_cast<int32_t>(offsetof(InjectableInfo_tFFB881101BEB9ED7BB1E856224E096C168EF76F5, ___SourceType_2)); }
	inline int32_t get_SourceType_2() const { return ___SourceType_2; }
	inline int32_t* get_address_of_SourceType_2() { return &___SourceType_2; }
	inline void set_SourceType_2(int32_t value)
	{
		___SourceType_2 = value;
	}

	inline static int32_t get_offset_of_MemberName_3() { return static_cast<int32_t>(offsetof(InjectableInfo_tFFB881101BEB9ED7BB1E856224E096C168EF76F5, ___MemberName_3)); }
	inline String_t* get_MemberName_3() const { return ___MemberName_3; }
	inline String_t** get_address_of_MemberName_3() { return &___MemberName_3; }
	inline void set_MemberName_3(String_t* value)
	{
		___MemberName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MemberName_3), (void*)value);
	}

	inline static int32_t get_offset_of_MemberType_4() { return static_cast<int32_t>(offsetof(InjectableInfo_tFFB881101BEB9ED7BB1E856224E096C168EF76F5, ___MemberType_4)); }
	inline Type_t * get_MemberType_4() const { return ___MemberType_4; }
	inline Type_t ** get_address_of_MemberType_4() { return &___MemberType_4; }
	inline void set_MemberType_4(Type_t * value)
	{
		___MemberType_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MemberType_4), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultValue_5() { return static_cast<int32_t>(offsetof(InjectableInfo_tFFB881101BEB9ED7BB1E856224E096C168EF76F5, ___DefaultValue_5)); }
	inline RuntimeObject * get_DefaultValue_5() const { return ___DefaultValue_5; }
	inline RuntimeObject ** get_address_of_DefaultValue_5() { return &___DefaultValue_5; }
	inline void set_DefaultValue_5(RuntimeObject * value)
	{
		___DefaultValue_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultValue_5), (void*)value);
	}
};


// JetBrains.Annotations.MeansImplicitUseAttribute
struct MeansImplicitUseAttribute_t68C979918C00E35B6B176826596CA3FF5295743E  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// JetBrains.Annotations.ImplicitUseKindFlags JetBrains.Annotations.MeansImplicitUseAttribute::<UseKindFlags>k__BackingField
	int32_t ___U3CUseKindFlagsU3Ek__BackingField_0;
	// JetBrains.Annotations.ImplicitUseTargetFlags JetBrains.Annotations.MeansImplicitUseAttribute::<TargetFlags>k__BackingField
	int32_t ___U3CTargetFlagsU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CUseKindFlagsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MeansImplicitUseAttribute_t68C979918C00E35B6B176826596CA3FF5295743E, ___U3CUseKindFlagsU3Ek__BackingField_0)); }
	inline int32_t get_U3CUseKindFlagsU3Ek__BackingField_0() const { return ___U3CUseKindFlagsU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CUseKindFlagsU3Ek__BackingField_0() { return &___U3CUseKindFlagsU3Ek__BackingField_0; }
	inline void set_U3CUseKindFlagsU3Ek__BackingField_0(int32_t value)
	{
		___U3CUseKindFlagsU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CTargetFlagsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MeansImplicitUseAttribute_t68C979918C00E35B6B176826596CA3FF5295743E, ___U3CTargetFlagsU3Ek__BackingField_1)); }
	inline int32_t get_U3CTargetFlagsU3Ek__BackingField_1() const { return ___U3CTargetFlagsU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CTargetFlagsU3Ek__BackingField_1() { return &___U3CTargetFlagsU3Ek__BackingField_1; }
	inline void set_U3CTargetFlagsU3Ek__BackingField_1(int32_t value)
	{
		___U3CTargetFlagsU3Ek__BackingField_1 = value;
	}
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

// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// JetBrains.Annotations.UsedImplicitlyAttribute
struct UsedImplicitlyAttribute_tC5D03412CABF6E0A3A6AA73BB4A685F8D670FD90  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// JetBrains.Annotations.ImplicitUseKindFlags JetBrains.Annotations.UsedImplicitlyAttribute::<UseKindFlags>k__BackingField
	int32_t ___U3CUseKindFlagsU3Ek__BackingField_0;
	// JetBrains.Annotations.ImplicitUseTargetFlags JetBrains.Annotations.UsedImplicitlyAttribute::<TargetFlags>k__BackingField
	int32_t ___U3CTargetFlagsU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CUseKindFlagsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(UsedImplicitlyAttribute_tC5D03412CABF6E0A3A6AA73BB4A685F8D670FD90, ___U3CUseKindFlagsU3Ek__BackingField_0)); }
	inline int32_t get_U3CUseKindFlagsU3Ek__BackingField_0() const { return ___U3CUseKindFlagsU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CUseKindFlagsU3Ek__BackingField_0() { return &___U3CUseKindFlagsU3Ek__BackingField_0; }
	inline void set_U3CUseKindFlagsU3Ek__BackingField_0(int32_t value)
	{
		___U3CUseKindFlagsU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CTargetFlagsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(UsedImplicitlyAttribute_tC5D03412CABF6E0A3A6AA73BB4A685F8D670FD90, ___U3CTargetFlagsU3Ek__BackingField_1)); }
	inline int32_t get_U3CTargetFlagsU3Ek__BackingField_1() const { return ___U3CTargetFlagsU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CTargetFlagsU3Ek__BackingField_1() { return &___U3CTargetFlagsU3Ek__BackingField_1; }
	inline void set_U3CTargetFlagsU3Ek__BackingField_1(int32_t value)
	{
		___U3CTargetFlagsU3Ek__BackingField_1 = value;
	}
};


// System.Func`2<Zenject.InjectTypeInfo/InjectMemberInfo,Zenject.InjectableInfo>
struct Func_2_tCA3B1A6676C318EB131D400C4BE116F6ADBB1BD7  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Zenject.InjectTypeInfo/InjectMethodInfo,System.Collections.Generic.IEnumerable`1<Zenject.InjectableInfo>>
struct Func_2_tA30947242D3FAC5B14085E3EBFA3DD52482584BD  : public MulticastDelegate_t
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


// Zenject.InjectAttribute
struct InjectAttribute_tACFFF08424F2C68DF426C0B4CA3CE270C3A0E5CD  : public InjectAttributeBase_tBEA6A6FCBD9B487AAF830C7FD5F089DE74551DC7
{
public:

public:
};


// Zenject.InjectLocalAttribute
struct InjectLocalAttribute_tB6069B3CEBA4F1F1A606B876EEEF84670F87FBFF  : public InjectAttributeBase_tBEA6A6FCBD9B487AAF830C7FD5F089DE74551DC7
{
public:

public:
};


// Zenject.InjectOptionalAttribute
struct InjectOptionalAttribute_tAE1940FDC35B6C11EA38885101EF8582FE530BAA  : public InjectAttributeBase_tBEA6A6FCBD9B487AAF830C7FD5F089DE74551DC7
{
public:

public:
};


// Zenject.ZenFactoryMethod
struct ZenFactoryMethod_t06221E77375E311219AD5AA13FF570D92D10165E  : public MulticastDelegate_t
{
public:

public:
};


// Zenject.ZenInjectMethod
struct ZenInjectMethod_t8C0F900438CFC893D25D723CB89F66933250EAAA  : public MulticastDelegate_t
{
public:

public:
};


// Zenject.ZenMemberSetterMethod
struct ZenMemberSetterMethod_t94AA8A98A9E78694F27DE8D0D46616E2E830C3FA  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Zenject.InjectTypeInfo/InjectMethodInfo[]
struct InjectMethodInfoU5BU5D_tB8D809F7145531960CFADE95AF6DC4A1EB0C90FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) InjectMethodInfo_tCFB365E8D1D6D2FDBE5A4E2581FC43B66CD22C3C * m_Items[1];

public:
	inline InjectMethodInfo_tCFB365E8D1D6D2FDBE5A4E2581FC43B66CD22C3C * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline InjectMethodInfo_tCFB365E8D1D6D2FDBE5A4E2581FC43B66CD22C3C ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, InjectMethodInfo_tCFB365E8D1D6D2FDBE5A4E2581FC43B66CD22C3C * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline InjectMethodInfo_tCFB365E8D1D6D2FDBE5A4E2581FC43B66CD22C3C * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline InjectMethodInfo_tCFB365E8D1D6D2FDBE5A4E2581FC43B66CD22C3C ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, InjectMethodInfo_tCFB365E8D1D6D2FDBE5A4E2581FC43B66CD22C3C * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Zenject.InjectTypeInfo/InjectMemberInfo[]
struct InjectMemberInfoU5BU5D_tFCC8018D9FBBD77947427BCB8865379B8A6C15BB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) InjectMemberInfo_t91776F61B901397B8B0EB4930F3354947D5D391A * m_Items[1];

public:
	inline InjectMemberInfo_t91776F61B901397B8B0EB4930F3354947D5D391A * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline InjectMemberInfo_t91776F61B901397B8B0EB4930F3354947D5D391A ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, InjectMemberInfo_t91776F61B901397B8B0EB4930F3354947D5D391A * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline InjectMemberInfo_t91776F61B901397B8B0EB4930F3354947D5D391A * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline InjectMemberInfo_t91776F61B901397B8B0EB4930F3354947D5D391A ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, InjectMemberInfo_t91776F61B901397B8B0EB4930F3354947D5D391A * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Zenject.InjectableInfo[]
struct InjectableInfoU5BU5D_tE39C90F66177150812A88425C78BBBAA65A55BEC  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) InjectableInfo_tFFB881101BEB9ED7BB1E856224E096C168EF76F5 * m_Items[1];

public:
	inline InjectableInfo_tFFB881101BEB9ED7BB1E856224E096C168EF76F5 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline InjectableInfo_tFFB881101BEB9ED7BB1E856224E096C168EF76F5 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, InjectableInfo_tFFB881101BEB9ED7BB1E856224E096C168EF76F5 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline InjectableInfo_tFFB881101BEB9ED7BB1E856224E096C168EF76F5 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline InjectableInfo_tFFB881101BEB9ED7BB1E856224E096C168EF76F5 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, InjectableInfo_tFFB881101BEB9ED7BB1E856224E096C168EF76F5 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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


// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mF567DE2F48C3BA25C731A3378A78C455348794EC_gshared (RuntimeObject* ___source0, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Concat<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Concat_TisRuntimeObject_mA80F5163AFB41BE874843B5D34F064E988DF6041_gshared (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::SelectMany<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Collections.Generic.IEnumerable`1<!!1>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_SelectMany_TisRuntimeObject_TisRuntimeObject_mB753E7C2D35AEB5156C3BB488CB112F062751EC3_gshared (RuntimeObject* ___source0, Func_2_tD457CA07229B6835F9D0AB141D4F1A7455A8AF29 * ___selector1, const RuntimeMethod* method);

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// System.Void JetBrains.Annotations.AspChildControlTypeAttribute::set_TagName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AspChildControlTypeAttribute_set_TagName_m156E5FCF92A907E19E17970E0C1B5E42697A85DD_inline (AspChildControlTypeAttribute_t49A97CE0D26CF6E5E0E908E25B04F3925302E1FD * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void JetBrains.Annotations.AspChildControlTypeAttribute::set_ControlType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AspChildControlTypeAttribute_set_ControlType_m485B880AF0639060B766227662500776699DCECE_inline (AspChildControlTypeAttribute_t49A97CE0D26CF6E5E0E908E25B04F3925302E1FD * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void JetBrains.Annotations.AspMvcActionAttribute::set_AnonymousProperty(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AspMvcActionAttribute_set_AnonymousProperty_m999CAFD001E5E890F7C32BD3D1C92D30A315D22F_inline (AspMvcActionAttribute_t1AA0F64AB4FB867CEE224B5DEF970716B39CABBD * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void JetBrains.Annotations.AspMvcAreaAttribute::set_AnonymousProperty(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AspMvcAreaAttribute_set_AnonymousProperty_mA5CFB5C122171BA51423230B8DDB7AAEEAF598C4_inline (AspMvcAreaAttribute_t0E39CB66C13C812B1E3409B2FD3BC7F85BDA2EA4 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void JetBrains.Annotations.AspMvcAreaMasterLocationFormatAttribute::set_Format(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AspMvcAreaMasterLocationFormatAttribute_set_Format_m150415E11FB197BA16600DAB54CCC9555500B36F_inline (AspMvcAreaMasterLocationFormatAttribute_tA876F76E524EC79F498B59D831D4A867D1689497 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void JetBrains.Annotations.AspMvcAreaPartialViewLocationFormatAttribute::set_Format(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AspMvcAreaPartialViewLocationFormatAttribute_set_Format_mF77D707DD20740E799E85E38EA3C1DD3CF56B21C_inline (AspMvcAreaPartialViewLocationFormatAttribute_t57222AD01A7A151F89DDFBAF11D70A2CD983ECA4 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void JetBrains.Annotations.AspMvcAreaViewLocationFormatAttribute::set_Format(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AspMvcAreaViewLocationFormatAttribute_set_Format_m559DFE1A631DE9E80FF6D72E802755E9F0D3781C_inline (AspMvcAreaViewLocationFormatAttribute_t757C424B0E26E0F79D3F8465F66DE0B8B2B8F6D7 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void JetBrains.Annotations.AspMvcControllerAttribute::set_AnonymousProperty(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AspMvcControllerAttribute_set_AnonymousProperty_mA13DD21CE90AA9828C8DADE0CC146BC10FC42067_inline (AspMvcControllerAttribute_t44AC2AF14A6C0038F0047A9145A43474B63C0A32 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void JetBrains.Annotations.AspMvcMasterLocationFormatAttribute::set_Format(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AspMvcMasterLocationFormatAttribute_set_Format_m5E554A6173E67A9144AA53080E9779A2319B8E9C_inline (AspMvcMasterLocationFormatAttribute_t34C965516F029FE3B2A99634953E5695F9C0214B * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void JetBrains.Annotations.AspMvcPartialViewLocationFormatAttribute::set_Format(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AspMvcPartialViewLocationFormatAttribute_set_Format_mACBE7B222CC6C907C8804658CA9B1D758E573586_inline (AspMvcPartialViewLocationFormatAttribute_t2F1D639624F49B8FE32AD966DE7056E5C2270246 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void JetBrains.Annotations.AspMvcViewLocationFormatAttribute::set_Format(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AspMvcViewLocationFormatAttribute_set_Format_m10B416156155DE3FA8A1A8C589CDBF71E81BF2EA_inline (AspMvcViewLocationFormatAttribute_t921715B41EE58D06C820B2916BF6D15709ACC0FB * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void JetBrains.Annotations.AspRequiredAttributeAttribute::set_Attribute(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AspRequiredAttributeAttribute_set_Attribute_m99669AE12EC216ADD68B4C0645B397A43BD41BA3_inline (AspRequiredAttributeAttribute_tB5767687A8A0598AF783288D7837CA6F3E9FD547 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void JetBrains.Annotations.AspTypePropertyAttribute::set_CreateConstructorReferences(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AspTypePropertyAttribute_set_CreateConstructorReferences_m8102DD2DD98586BAD330AAAE41263B1CF0929DCF_inline (AspTypePropertyAttribute_tB5EC5DF211B5ABF34217E219C534A9F3BD97DBF6 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void JetBrains.Annotations.AssertionConditionAttribute::set_ConditionType(JetBrains.Annotations.AssertionConditionType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AssertionConditionAttribute_set_ConditionType_m2FCF15E2CF718F273F9662E140EADF40A6E7002B_inline (AssertionConditionAttribute_tA00B8F2B72E746630D065B41EF51B53F82DB0BEB * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void JetBrains.Annotations.BaseTypeRequiredAttribute::set_BaseType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseTypeRequiredAttribute_set_BaseType_m1056C9E9710CFC6686E566D6759D082149DDC385_inline (BaseTypeRequiredAttribute_t229CD06DD288A6CC18D3D73901C7895FB75F171E * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void JetBrains.Annotations.CollectionAccessAttribute::set_CollectionAccessType(JetBrains.Annotations.CollectionAccessType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CollectionAccessAttribute_set_CollectionAccessType_mE21703CF151381AFF698C80DA5566BECA3A23D30_inline (CollectionAccessAttribute_t95980E60D6D0FDA3EB0A757DD62BE4ED5505F104 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void JetBrains.Annotations.ContractAnnotationAttribute::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContractAnnotationAttribute__ctor_m82F68DBA007D50989D807F1C9F9C4163B6BD42C3 (ContractAnnotationAttribute_t662061C8A440CEE29A0551A18371537541300293 * __this, String_t* ___contract0, bool ___forceFullStates1, const RuntimeMethod* method);
// System.Void JetBrains.Annotations.ContractAnnotationAttribute::set_Contract(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ContractAnnotationAttribute_set_Contract_mC114BE2DB9C90A208FD0A8CA00260572C4C5BEE9_inline (ContractAnnotationAttribute_t662061C8A440CEE29A0551A18371537541300293 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void JetBrains.Annotations.ContractAnnotationAttribute::set_ForceFullStates(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ContractAnnotationAttribute_set_ForceFullStates_m827EE605B108780C57D65365F080937534AE396D_inline (ContractAnnotationAttribute_t662061C8A440CEE29A0551A18371537541300293 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void JetBrains.Annotations.HtmlAttributeValueAttribute::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HtmlAttributeValueAttribute_set_Name_mC5B5F78C06ACD174C3A9BA329AB9E942366EBC48_inline (HtmlAttributeValueAttribute_t10B5BF21F421C7AB034A44845E84663710144E6A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void JetBrains.Annotations.HtmlElementAttributesAttribute::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HtmlElementAttributesAttribute_set_Name_m71B880D555F6C3DFE6646BC9BAC0EE4F849E82FA_inline (HtmlElementAttributesAttribute_t1A2629419BE6B1A61AE33540D9827FD90F92B151 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Zenject.InjectAttributeBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InjectAttributeBase__ctor_m5956E574216C2EED919072B7D449E51A763D9D50 (InjectAttributeBase_tBEA6A6FCBD9B487AAF830C7FD5F089DE74551DC7 * __this, const RuntimeMethod* method);
// System.Void Zenject.Internal.PreserveAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreserveAttribute__ctor_mE8F62B868B3A46F76B74AFB5A36F7B34C33ABCC8 (PreserveAttribute_t917FF99C161EA919E410C46999AFD6D1A7BFEA27 * __this, const RuntimeMethod* method);
// System.Void Zenject.InjectAttributeBase::set_Source(Zenject.InjectSources)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InjectAttributeBase_set_Source_mD97D89723EAB215E31CC8E2294BD1EF51EA8EEB7_inline (InjectAttributeBase_tBEA6A6FCBD9B487AAF830C7FD5F089DE74551DC7 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Zenject.InjectAttributeBase::set_Optional(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InjectAttributeBase_set_Optional_mAF89F38B4E798795F75A02F686CB994991D1DB7B_inline (InjectAttributeBase_tBEA6A6FCBD9B487AAF830C7FD5F089DE74551DC7 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Func`2<Zenject.InjectTypeInfo/InjectMemberInfo,Zenject.InjectableInfo>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mF330BC17F6701A14563C4528A07A729C24A4CFA1 (Func_2_tCA3B1A6676C318EB131D400C4BE116F6ADBB1BD7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tCA3B1A6676C318EB131D400C4BE116F6ADBB1BD7 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<Zenject.InjectTypeInfo/InjectMemberInfo,Zenject.InjectableInfo>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_Select_TisInjectMemberInfo_t91776F61B901397B8B0EB4930F3354947D5D391A_TisInjectableInfo_tFFB881101BEB9ED7BB1E856224E096C168EF76F5_mA61A89F3C49BD08608E78B0D6DDC1FE27B09F314 (RuntimeObject* ___source0, Func_2_tCA3B1A6676C318EB131D400C4BE116F6ADBB1BD7 * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tCA3B1A6676C318EB131D400C4BE116F6ADBB1BD7 *, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mF567DE2F48C3BA25C731A3378A78C455348794EC_gshared)(___source0, ___selector1, method);
}
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Concat<Zenject.InjectableInfo>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
inline RuntimeObject* Enumerable_Concat_TisInjectableInfo_tFFB881101BEB9ED7BB1E856224E096C168EF76F5_m295382D68130D3934CECF1B33383EC0FD87B040A (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_Concat_TisRuntimeObject_mA80F5163AFB41BE874843B5D34F064E988DF6041_gshared)(___first0, ___second1, method);
}
// System.Void System.Func`2<Zenject.InjectTypeInfo/InjectMethodInfo,System.Collections.Generic.IEnumerable`1<Zenject.InjectableInfo>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mBE6D4E91029A6119F4C63FAC69AF7EA298D5A394 (Func_2_tA30947242D3FAC5B14085E3EBFA3DD52482584BD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tA30947242D3FAC5B14085E3EBFA3DD52482584BD *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::SelectMany<Zenject.InjectTypeInfo/InjectMethodInfo,Zenject.InjectableInfo>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Collections.Generic.IEnumerable`1<!!1>>)
inline RuntimeObject* Enumerable_SelectMany_TisInjectMethodInfo_tCFB365E8D1D6D2FDBE5A4E2581FC43B66CD22C3C_TisInjectableInfo_tFFB881101BEB9ED7BB1E856224E096C168EF76F5_m506FEE0FBA4FF2BF98505EB24AEF16435379173E (RuntimeObject* ___source0, Func_2_tA30947242D3FAC5B14085E3EBFA3DD52482584BD * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tA30947242D3FAC5B14085E3EBFA3DD52482584BD *, const RuntimeMethod*))Enumerable_SelectMany_TisRuntimeObject_TisRuntimeObject_mB753E7C2D35AEB5156C3BB488CB112F062751EC3_gshared)(___source0, ___selector1, method);
}
// System.Void JetBrains.Annotations.LocalizationRequiredAttribute::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalizationRequiredAttribute__ctor_m10F6A70AA4A61B21C5FD1F47A5B0D8CB19638524 (LocalizationRequiredAttribute_t66D489EB8A17C5151FF39FAAA1F784E5E2B81681 * __this, bool ___required0, const RuntimeMethod* method);
// System.Void JetBrains.Annotations.LocalizationRequiredAttribute::set_Required(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LocalizationRequiredAttribute_set_Required_mFCC6AEA0E93135CCEB3CE20706301202BDA4DFB1_inline (LocalizationRequiredAttribute_t66D489EB8A17C5151FF39FAAA1F784E5E2B81681 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void JetBrains.Annotations.MeansImplicitUseAttribute::.ctor(JetBrains.Annotations.ImplicitUseKindFlags,JetBrains.Annotations.ImplicitUseTargetFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeansImplicitUseAttribute__ctor_m138340778236709A9825EFA3B3CC3BD9EB8F1A9F (MeansImplicitUseAttribute_t68C979918C00E35B6B176826596CA3FF5295743E * __this, int32_t ___useKindFlags0, int32_t ___targetFlags1, const RuntimeMethod* method);
// System.Void JetBrains.Annotations.MeansImplicitUseAttribute::set_UseKindFlags(JetBrains.Annotations.ImplicitUseKindFlags)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeansImplicitUseAttribute_set_UseKindFlags_m6E768467783960F44D62CAA1B44D628740011E67_inline (MeansImplicitUseAttribute_t68C979918C00E35B6B176826596CA3FF5295743E * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void JetBrains.Annotations.MeansImplicitUseAttribute::set_TargetFlags(JetBrains.Annotations.ImplicitUseTargetFlags)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeansImplicitUseAttribute_set_TargetFlags_mC9971FCA8FE8F240D283C2935E6309AD45B2A579_inline (MeansImplicitUseAttribute_t68C979918C00E35B6B176826596CA3FF5295743E * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void JetBrains.Annotations.MustUseReturnValueAttribute::set_Justification(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MustUseReturnValueAttribute_set_Justification_mF8A88353E3B283E27884F0337D5F80D44BFD94A8_inline (MustUseReturnValueAttribute_t649AC1C4D27CBC9BF4E22DC4B15D00D7EE845DD3 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void JetBrains.Annotations.NotifyPropertyChangedInvocatorAttribute::set_ParameterName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NotifyPropertyChangedInvocatorAttribute_set_ParameterName_m4FD1BECC587E309924C9B833CE8BE6DC3728AD13_inline (NotifyPropertyChangedInvocatorAttribute_t58A7B14D9749D65C80751BFBA1B83CD6FE69CD05 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void JetBrains.Annotations.PathReferenceAttribute::set_BasePath(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PathReferenceAttribute_set_BasePath_m13959A654A26A3326EC586995909EC4CD5B1BB11_inline (PathReferenceAttribute_t041CA1FB39BB1371780D4A942BA71171F43B5BAE * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void JetBrains.Annotations.PublicAPIAttribute::set_Comment(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PublicAPIAttribute_set_Comment_m9F2ED18272CA0F17A403831B1E4C595BBE22CAE3_inline (PublicAPIAttribute_t92C190C0D7EF5A6216EF4C2D09A48190D77BAC90 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void JetBrains.Annotations.RazorDirectiveAttribute::set_Directive(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RazorDirectiveAttribute_set_Directive_m585309C82B7729B79F30CD2093EE3EFE55F24A9E_inline (RazorDirectiveAttribute_t943675864F4EADEAC34BD4083E2F3110F60EECDD * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void JetBrains.Annotations.RazorImportNamespaceAttribute::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RazorImportNamespaceAttribute_set_Name_mB35999ED2C1336F60164FF7C21090D0FAD912AC0_inline (RazorImportNamespaceAttribute_t6ECF9AF0F0E5BABE7877D542DBB1E4956544544E * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void JetBrains.Annotations.RazorInjectionAttribute::set_Type(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RazorInjectionAttribute_set_Type_m9C0A40106DECB6D32DC74A372EFF018C98983E4B_inline (RazorInjectionAttribute_t31349804B2E881DA010DABB2743459FE32CF6F64 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void JetBrains.Annotations.RazorInjectionAttribute::set_FieldName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RazorInjectionAttribute_set_FieldName_m6F3F582076401EFAC6139CA82251733F8C0D6A20_inline (RazorInjectionAttribute_t31349804B2E881DA010DABB2743459FE32CF6F64 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void JetBrains.Annotations.RazorPageBaseTypeAttribute::set_BaseType(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RazorPageBaseTypeAttribute_set_BaseType_m446DA36FEB6DB0FA512E64FFD7FAD31ECE734404_inline (RazorPageBaseTypeAttribute_t3FD1DFA391FD51100312D02ADA84FBBFB9D7A651 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void JetBrains.Annotations.RazorPageBaseTypeAttribute::set_PageName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RazorPageBaseTypeAttribute_set_PageName_m9B746B861156A57C04DE64ABE622F88C11DA6540_inline (RazorPageBaseTypeAttribute_t3FD1DFA391FD51100312D02ADA84FBBFB9D7A651 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void JetBrains.Annotations.StringFormatMethodAttribute::set_FormatParameterName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StringFormatMethodAttribute_set_FormatParameterName_m9719DED540801ACEADFF120124494A5A3C21EF34_inline (StringFormatMethodAttribute_t5C06E2FCA4DC5B963F6828463C37C2324B7B13BA * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void JetBrains.Annotations.UsedImplicitlyAttribute::.ctor(JetBrains.Annotations.ImplicitUseKindFlags,JetBrains.Annotations.ImplicitUseTargetFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UsedImplicitlyAttribute__ctor_m30AC66867620389BDA3CA7C467D725180570F6C8 (UsedImplicitlyAttribute_tC5D03412CABF6E0A3A6AA73BB4A685F8D670FD90 * __this, int32_t ___useKindFlags0, int32_t ___targetFlags1, const RuntimeMethod* method);
// System.Void JetBrains.Annotations.UsedImplicitlyAttribute::set_UseKindFlags(JetBrains.Annotations.ImplicitUseKindFlags)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UsedImplicitlyAttribute_set_UseKindFlags_m4FCF23B581900781596BAD516ACED1CFCBB55F58_inline (UsedImplicitlyAttribute_tC5D03412CABF6E0A3A6AA73BB4A685F8D670FD90 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void JetBrains.Annotations.UsedImplicitlyAttribute::set_TargetFlags(JetBrains.Annotations.ImplicitUseTargetFlags)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UsedImplicitlyAttribute_set_TargetFlags_mD4016F9B90482FCEE3DC412F88E1A08980470930_inline (UsedImplicitlyAttribute_tC5D03412CABF6E0A3A6AA73BB4A685F8D670FD90 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void JetBrains.Annotations.ValueProviderAttribute::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueProviderAttribute_set_Name_m91595AB26908980A1730C9398A696ADDF89C265A_inline (ValueProviderAttribute_t340091F92CE5A4F428B8AB7194E66DBF94549B8E * __this, String_t* ___value0, const RuntimeMethod* method);
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
// System.Void JetBrains.Annotations.AspChildControlTypeAttribute::.ctor(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspChildControlTypeAttribute__ctor_m21D06409B2C18ECE2DC869B937085CC45886F839 (AspChildControlTypeAttribute_t49A97CE0D26CF6E5E0E908E25B04F3925302E1FD * __this, String_t* ___tagName0, Type_t * ___controlType1, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___tagName0;
		AspChildControlTypeAttribute_set_TagName_m156E5FCF92A907E19E17970E0C1B5E42697A85DD_inline(__this, L_0, /*hidden argument*/NULL);
		Type_t * L_1 = ___controlType1;
		AspChildControlTypeAttribute_set_ControlType_m485B880AF0639060B766227662500776699DCECE_inline(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String JetBrains.Annotations.AspChildControlTypeAttribute::get_TagName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AspChildControlTypeAttribute_get_TagName_m819CD1E1C614B09BA8001685CECF4B59A7FFEA67 (AspChildControlTypeAttribute_t49A97CE0D26CF6E5E0E908E25B04F3925302E1FD * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CTagNameU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void JetBrains.Annotations.AspChildControlTypeAttribute::set_TagName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspChildControlTypeAttribute_set_TagName_m156E5FCF92A907E19E17970E0C1B5E42697A85DD (AspChildControlTypeAttribute_t49A97CE0D26CF6E5E0E908E25B04F3925302E1FD * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CTagNameU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Type JetBrains.Annotations.AspChildControlTypeAttribute::get_ControlType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * AspChildControlTypeAttribute_get_ControlType_mFF76F844599A7520A5DCD18C79E75506FF3FA5EF (AspChildControlTypeAttribute_t49A97CE0D26CF6E5E0E908E25B04F3925302E1FD * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get_U3CControlTypeU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void JetBrains.Annotations.AspChildControlTypeAttribute::set_ControlType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspChildControlTypeAttribute_set_ControlType_m485B880AF0639060B766227662500776699DCECE (AspChildControlTypeAttribute_t49A97CE0D26CF6E5E0E908E25B04F3925302E1FD * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___value0;
		__this->set_U3CControlTypeU3Ek__BackingField_1(L_0);
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
// System.Void JetBrains.Annotations.AspDataFieldAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspDataFieldAttribute__ctor_m8B643C487509BE8E3542CEBA98731C90C398BE69 (AspDataFieldAttribute_t349470D6FCE80A53F2628CBEDC6C5A745E0AD25A * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void JetBrains.Annotations.AspDataFieldsAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspDataFieldsAttribute__ctor_m436C804370C934BD48A7202CAF40E92DB18C9A9F (AspDataFieldsAttribute_tBF6A4621D56B86BFF5464136947054BE22CBE904 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void JetBrains.Annotations.AspMethodPropertyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMethodPropertyAttribute__ctor_m8D772E18F9D213476BD90E3137624F786B748FB5 (AspMethodPropertyAttribute_t6A97E645B11E75527DFDB1874C75737951A5948B * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void JetBrains.Annotations.AspMvcActionAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcActionAttribute__ctor_m04AFB053E2CD258EBC37A37F01F92F0FCC6FD388 (AspMvcActionAttribute_t1AA0F64AB4FB867CEE224B5DEF970716B39CABBD * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void JetBrains.Annotations.AspMvcActionAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcActionAttribute__ctor_m61E07D63D3979791ABAB6949284E3AAD5E00AA23 (AspMvcActionAttribute_t1AA0F64AB4FB867CEE224B5DEF970716B39CABBD * __this, String_t* ___anonymousProperty0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___anonymousProperty0;
		AspMvcActionAttribute_set_AnonymousProperty_m999CAFD001E5E890F7C32BD3D1C92D30A315D22F_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String JetBrains.Annotations.AspMvcActionAttribute::get_AnonymousProperty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AspMvcActionAttribute_get_AnonymousProperty_mEE810D42C45A932CB72A6996EC52773D3E1C0F79 (AspMvcActionAttribute_t1AA0F64AB4FB867CEE224B5DEF970716B39CABBD * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CAnonymousPropertyU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void JetBrains.Annotations.AspMvcActionAttribute::set_AnonymousProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcActionAttribute_set_AnonymousProperty_m999CAFD001E5E890F7C32BD3D1C92D30A315D22F (AspMvcActionAttribute_t1AA0F64AB4FB867CEE224B5DEF970716B39CABBD * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CAnonymousPropertyU3Ek__BackingField_0(L_0);
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
// System.Void JetBrains.Annotations.AspMvcActionSelectorAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcActionSelectorAttribute__ctor_m0718700A548CDF5416A87CB4704856FF0AE30852 (AspMvcActionSelectorAttribute_t7FC9B52D939902F8CA974BAA276D63A3C630B888 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void JetBrains.Annotations.AspMvcAreaAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcAreaAttribute__ctor_m8C8E1AD8D8F343BB72F08EF0CBDBF1C2975BDA42 (AspMvcAreaAttribute_t0E39CB66C13C812B1E3409B2FD3BC7F85BDA2EA4 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void JetBrains.Annotations.AspMvcAreaAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcAreaAttribute__ctor_m09044D8EA55A4629B192F53A7BC6FB101AB12383 (AspMvcAreaAttribute_t0E39CB66C13C812B1E3409B2FD3BC7F85BDA2EA4 * __this, String_t* ___anonymousProperty0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___anonymousProperty0;
		AspMvcAreaAttribute_set_AnonymousProperty_mA5CFB5C122171BA51423230B8DDB7AAEEAF598C4_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String JetBrains.Annotations.AspMvcAreaAttribute::get_AnonymousProperty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AspMvcAreaAttribute_get_AnonymousProperty_m47540022929C804D8DF26989366747D2178716DC (AspMvcAreaAttribute_t0E39CB66C13C812B1E3409B2FD3BC7F85BDA2EA4 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CAnonymousPropertyU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void JetBrains.Annotations.AspMvcAreaAttribute::set_AnonymousProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcAreaAttribute_set_AnonymousProperty_mA5CFB5C122171BA51423230B8DDB7AAEEAF598C4 (AspMvcAreaAttribute_t0E39CB66C13C812B1E3409B2FD3BC7F85BDA2EA4 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CAnonymousPropertyU3Ek__BackingField_0(L_0);
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
// System.Void JetBrains.Annotations.AspMvcAreaMasterLocationFormatAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcAreaMasterLocationFormatAttribute__ctor_m5B6CE003AA5FD73443A8074524D107E00472110C (AspMvcAreaMasterLocationFormatAttribute_tA876F76E524EC79F498B59D831D4A867D1689497 * __this, String_t* ___format0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___format0;
		AspMvcAreaMasterLocationFormatAttribute_set_Format_m150415E11FB197BA16600DAB54CCC9555500B36F_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String JetBrains.Annotations.AspMvcAreaMasterLocationFormatAttribute::get_Format()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AspMvcAreaMasterLocationFormatAttribute_get_Format_m42147A2CAB14860166BBC84D60CB1BB7DC2BBCF1 (AspMvcAreaMasterLocationFormatAttribute_tA876F76E524EC79F498B59D831D4A867D1689497 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CFormatU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void JetBrains.Annotations.AspMvcAreaMasterLocationFormatAttribute::set_Format(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcAreaMasterLocationFormatAttribute_set_Format_m150415E11FB197BA16600DAB54CCC9555500B36F (AspMvcAreaMasterLocationFormatAttribute_tA876F76E524EC79F498B59D831D4A867D1689497 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CFormatU3Ek__BackingField_0(L_0);
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
// System.Void JetBrains.Annotations.AspMvcAreaPartialViewLocationFormatAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcAreaPartialViewLocationFormatAttribute__ctor_m6FDB2070A5EFD7E04B491E6323DCC5E1ACE77D14 (AspMvcAreaPartialViewLocationFormatAttribute_t57222AD01A7A151F89DDFBAF11D70A2CD983ECA4 * __this, String_t* ___format0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___format0;
		AspMvcAreaPartialViewLocationFormatAttribute_set_Format_mF77D707DD20740E799E85E38EA3C1DD3CF56B21C_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String JetBrains.Annotations.AspMvcAreaPartialViewLocationFormatAttribute::get_Format()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AspMvcAreaPartialViewLocationFormatAttribute_get_Format_mC3EBAD01B5A75D0CFD0EDA436E2CF83955D7E2F8 (AspMvcAreaPartialViewLocationFormatAttribute_t57222AD01A7A151F89DDFBAF11D70A2CD983ECA4 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CFormatU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void JetBrains.Annotations.AspMvcAreaPartialViewLocationFormatAttribute::set_Format(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcAreaPartialViewLocationFormatAttribute_set_Format_mF77D707DD20740E799E85E38EA3C1DD3CF56B21C (AspMvcAreaPartialViewLocationFormatAttribute_t57222AD01A7A151F89DDFBAF11D70A2CD983ECA4 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CFormatU3Ek__BackingField_0(L_0);
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
// System.Void JetBrains.Annotations.AspMvcAreaViewLocationFormatAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcAreaViewLocationFormatAttribute__ctor_m899423B22C17089A9108CF758F067ECA0E1CEFBD (AspMvcAreaViewLocationFormatAttribute_t757C424B0E26E0F79D3F8465F66DE0B8B2B8F6D7 * __this, String_t* ___format0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___format0;
		AspMvcAreaViewLocationFormatAttribute_set_Format_m559DFE1A631DE9E80FF6D72E802755E9F0D3781C_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String JetBrains.Annotations.AspMvcAreaViewLocationFormatAttribute::get_Format()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AspMvcAreaViewLocationFormatAttribute_get_Format_m32BB3AB4EFE1B5924EEA0CF910F5EFB5913AF361 (AspMvcAreaViewLocationFormatAttribute_t757C424B0E26E0F79D3F8465F66DE0B8B2B8F6D7 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CFormatU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void JetBrains.Annotations.AspMvcAreaViewLocationFormatAttribute::set_Format(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcAreaViewLocationFormatAttribute_set_Format_m559DFE1A631DE9E80FF6D72E802755E9F0D3781C (AspMvcAreaViewLocationFormatAttribute_t757C424B0E26E0F79D3F8465F66DE0B8B2B8F6D7 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CFormatU3Ek__BackingField_0(L_0);
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
// System.Void JetBrains.Annotations.AspMvcControllerAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcControllerAttribute__ctor_mD4CCD8944C4464C51D28288BD8B7A2B4BB99FAEF (AspMvcControllerAttribute_t44AC2AF14A6C0038F0047A9145A43474B63C0A32 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void JetBrains.Annotations.AspMvcControllerAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcControllerAttribute__ctor_m88A8A53E1E9E71E66895E55ABE531015146CB6E8 (AspMvcControllerAttribute_t44AC2AF14A6C0038F0047A9145A43474B63C0A32 * __this, String_t* ___anonymousProperty0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___anonymousProperty0;
		AspMvcControllerAttribute_set_AnonymousProperty_mA13DD21CE90AA9828C8DADE0CC146BC10FC42067_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String JetBrains.Annotations.AspMvcControllerAttribute::get_AnonymousProperty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AspMvcControllerAttribute_get_AnonymousProperty_mE3EFFA30D7611569FEA03B257DFEE454EBCB3028 (AspMvcControllerAttribute_t44AC2AF14A6C0038F0047A9145A43474B63C0A32 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CAnonymousPropertyU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void JetBrains.Annotations.AspMvcControllerAttribute::set_AnonymousProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcControllerAttribute_set_AnonymousProperty_mA13DD21CE90AA9828C8DADE0CC146BC10FC42067 (AspMvcControllerAttribute_t44AC2AF14A6C0038F0047A9145A43474B63C0A32 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CAnonymousPropertyU3Ek__BackingField_0(L_0);
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
// System.Void JetBrains.Annotations.AspMvcDisplayTemplateAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcDisplayTemplateAttribute__ctor_m06448640DF588A2B88DEC2E2CCCE71E994DC6E32 (AspMvcDisplayTemplateAttribute_t0459AA674E25AB0654E10E825D4AC2B9E9A820A1 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void JetBrains.Annotations.AspMvcEditorTemplateAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcEditorTemplateAttribute__ctor_mA675458087CA3C480E2CAD8A7ED30A4745432EEF (AspMvcEditorTemplateAttribute_tE90FC5C4DA7CD804F5327945A850E077187AFA12 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void JetBrains.Annotations.AspMvcMasterAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcMasterAttribute__ctor_mD70C2BDADEF4B7849EF23AB99A83469A7903731B (AspMvcMasterAttribute_t20E203D3BDAE714BC30632BEA5AFD2D9654CB481 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void JetBrains.Annotations.AspMvcMasterLocationFormatAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcMasterLocationFormatAttribute__ctor_m57515BF77922245DEB04A8108C84CC09FE6450FB (AspMvcMasterLocationFormatAttribute_t34C965516F029FE3B2A99634953E5695F9C0214B * __this, String_t* ___format0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___format0;
		AspMvcMasterLocationFormatAttribute_set_Format_m5E554A6173E67A9144AA53080E9779A2319B8E9C_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String JetBrains.Annotations.AspMvcMasterLocationFormatAttribute::get_Format()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AspMvcMasterLocationFormatAttribute_get_Format_m2EC043D367F81CFC9027FCE04716ED4D0582169A (AspMvcMasterLocationFormatAttribute_t34C965516F029FE3B2A99634953E5695F9C0214B * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CFormatU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void JetBrains.Annotations.AspMvcMasterLocationFormatAttribute::set_Format(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcMasterLocationFormatAttribute_set_Format_m5E554A6173E67A9144AA53080E9779A2319B8E9C (AspMvcMasterLocationFormatAttribute_t34C965516F029FE3B2A99634953E5695F9C0214B * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CFormatU3Ek__BackingField_0(L_0);
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
// System.Void JetBrains.Annotations.AspMvcModelTypeAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcModelTypeAttribute__ctor_mB020BE08946C31D8C154EA60771506C409107694 (AspMvcModelTypeAttribute_t1D2F9FA8F936DBF7237D2D4D8B9C223AF0F5555C * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void JetBrains.Annotations.AspMvcPartialViewAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcPartialViewAttribute__ctor_m9F00FBD0F10518B970DBD99B13F4CC8F91CC212A (AspMvcPartialViewAttribute_tEB46BBD0E95B2596E49EEF51273FBA4435BC96BF * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void JetBrains.Annotations.AspMvcPartialViewLocationFormatAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcPartialViewLocationFormatAttribute__ctor_mA011EE9ECCB202C874ADFDF53C46108104FB9CCB (AspMvcPartialViewLocationFormatAttribute_t2F1D639624F49B8FE32AD966DE7056E5C2270246 * __this, String_t* ___format0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___format0;
		AspMvcPartialViewLocationFormatAttribute_set_Format_mACBE7B222CC6C907C8804658CA9B1D758E573586_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String JetBrains.Annotations.AspMvcPartialViewLocationFormatAttribute::get_Format()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AspMvcPartialViewLocationFormatAttribute_get_Format_mEC8122789CB938A9F0989D1C3BA04BBC85AE1D4C (AspMvcPartialViewLocationFormatAttribute_t2F1D639624F49B8FE32AD966DE7056E5C2270246 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CFormatU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void JetBrains.Annotations.AspMvcPartialViewLocationFormatAttribute::set_Format(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcPartialViewLocationFormatAttribute_set_Format_mACBE7B222CC6C907C8804658CA9B1D758E573586 (AspMvcPartialViewLocationFormatAttribute_t2F1D639624F49B8FE32AD966DE7056E5C2270246 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CFormatU3Ek__BackingField_0(L_0);
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
// System.Void JetBrains.Annotations.AspMvcSuppressViewErrorAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcSuppressViewErrorAttribute__ctor_mD7E8F31A313A59359C84DC2361F1C553678F99DF (AspMvcSuppressViewErrorAttribute_t7E666A78163296298153F75E0B061CC3EAA102C3 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void JetBrains.Annotations.AspMvcTemplateAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcTemplateAttribute__ctor_mEE1A396FBC5641F4FEBEA429184EA22F343076C6 (AspMvcTemplateAttribute_t3865623574DF6A7A99B2612E9BDB1BC3089FFFD9 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void JetBrains.Annotations.AspMvcViewAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcViewAttribute__ctor_m861F380ED11B32B606199D7C460C4482ABA53E2A (AspMvcViewAttribute_tD5ECE56D92B03F0DB6E75BA0D10B5C5F1B44F5BB * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void JetBrains.Annotations.AspMvcViewComponentAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcViewComponentAttribute__ctor_m2E6B376445B82ABC7D039787F7026C509B5767B1 (AspMvcViewComponentAttribute_t16D82E1397E7853D7394C5E687933319E4DEB89F * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void JetBrains.Annotations.AspMvcViewComponentViewAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcViewComponentViewAttribute__ctor_m925CBB9FC2C34851AD03D7AF4975F6E42F7CAC75 (AspMvcViewComponentViewAttribute_tCC421624D6D544441E63FD9D59991D092CF32DAE * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void JetBrains.Annotations.AspMvcViewLocationFormatAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcViewLocationFormatAttribute__ctor_mA8BB2779EDCEB9A539306663FDC8C99641BC9EE6 (AspMvcViewLocationFormatAttribute_t921715B41EE58D06C820B2916BF6D15709ACC0FB * __this, String_t* ___format0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___format0;
		AspMvcViewLocationFormatAttribute_set_Format_m10B416156155DE3FA8A1A8C589CDBF71E81BF2EA_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String JetBrains.Annotations.AspMvcViewLocationFormatAttribute::get_Format()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AspMvcViewLocationFormatAttribute_get_Format_m9B8280F82AFF6957A6DE81BD1B3843B2F67A23FC (AspMvcViewLocationFormatAttribute_t921715B41EE58D06C820B2916BF6D15709ACC0FB * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CFormatU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void JetBrains.Annotations.AspMvcViewLocationFormatAttribute::set_Format(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspMvcViewLocationFormatAttribute_set_Format_m10B416156155DE3FA8A1A8C589CDBF71E81BF2EA (AspMvcViewLocationFormatAttribute_t921715B41EE58D06C820B2916BF6D15709ACC0FB * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CFormatU3Ek__BackingField_0(L_0);
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
// System.Void JetBrains.Annotations.AspRequiredAttributeAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspRequiredAttributeAttribute__ctor_mFE185E3409DB290EEBA5A8D3832ED38445F80E00 (AspRequiredAttributeAttribute_tB5767687A8A0598AF783288D7837CA6F3E9FD547 * __this, String_t* ___attribute0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___attribute0;
		AspRequiredAttributeAttribute_set_Attribute_m99669AE12EC216ADD68B4C0645B397A43BD41BA3_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String JetBrains.Annotations.AspRequiredAttributeAttribute::get_Attribute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AspRequiredAttributeAttribute_get_Attribute_mBFDC54F9187B37EB2A78FBD631884F0E11DBF3ED (AspRequiredAttributeAttribute_tB5767687A8A0598AF783288D7837CA6F3E9FD547 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CAttributeU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void JetBrains.Annotations.AspRequiredAttributeAttribute::set_Attribute(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspRequiredAttributeAttribute_set_Attribute_m99669AE12EC216ADD68B4C0645B397A43BD41BA3 (AspRequiredAttributeAttribute_tB5767687A8A0598AF783288D7837CA6F3E9FD547 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CAttributeU3Ek__BackingField_0(L_0);
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
// System.Boolean JetBrains.Annotations.AspTypePropertyAttribute::get_CreateConstructorReferences()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AspTypePropertyAttribute_get_CreateConstructorReferences_m83C1DB7C591293B0F7B119023C8F8DAED24099AB (AspTypePropertyAttribute_tB5EC5DF211B5ABF34217E219C534A9F3BD97DBF6 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CCreateConstructorReferencesU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void JetBrains.Annotations.AspTypePropertyAttribute::set_CreateConstructorReferences(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspTypePropertyAttribute_set_CreateConstructorReferences_m8102DD2DD98586BAD330AAAE41263B1CF0929DCF (AspTypePropertyAttribute_tB5EC5DF211B5ABF34217E219C534A9F3BD97DBF6 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CCreateConstructorReferencesU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void JetBrains.Annotations.AspTypePropertyAttribute::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspTypePropertyAttribute__ctor_m0D45BDA9DD895C60A6AEF8EB57E4B05706EF5C92 (AspTypePropertyAttribute_tB5EC5DF211B5ABF34217E219C534A9F3BD97DBF6 * __this, bool ___createConstructorReferences0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		bool L_0 = ___createConstructorReferences0;
		AspTypePropertyAttribute_set_CreateConstructorReferences_m8102DD2DD98586BAD330AAAE41263B1CF0929DCF_inline(__this, L_0, /*hidden argument*/NULL);
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
// System.Void JetBrains.Annotations.AssertionConditionAttribute::.ctor(JetBrains.Annotations.AssertionConditionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssertionConditionAttribute__ctor_m4FFF226D5EE59145381F72143865B608FF187B41 (AssertionConditionAttribute_tA00B8F2B72E746630D065B41EF51B53F82DB0BEB * __this, int32_t ___conditionType0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___conditionType0;
		AssertionConditionAttribute_set_ConditionType_m2FCF15E2CF718F273F9662E140EADF40A6E7002B_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// JetBrains.Annotations.AssertionConditionType JetBrains.Annotations.AssertionConditionAttribute::get_ConditionType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AssertionConditionAttribute_get_ConditionType_m10F6AD731B383F264CD24000F4C3352022FFC7EA (AssertionConditionAttribute_tA00B8F2B72E746630D065B41EF51B53F82DB0BEB * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CConditionTypeU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void JetBrains.Annotations.AssertionConditionAttribute::set_ConditionType(JetBrains.Annotations.AssertionConditionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssertionConditionAttribute_set_ConditionType_m2FCF15E2CF718F273F9662E140EADF40A6E7002B (AssertionConditionAttribute_tA00B8F2B72E746630D065B41EF51B53F82DB0BEB * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CConditionTypeU3Ek__BackingField_0(L_0);
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
// System.Void JetBrains.Annotations.AssertionMethodAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssertionMethodAttribute__ctor_mDD7ACEB9122B919E62677438ABE7C9A89F21F986 (AssertionMethodAttribute_t906D7F8988D20A1BC7A353D6F7B8A587F7D8E823 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void JetBrains.Annotations.BaseTypeRequiredAttribute::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseTypeRequiredAttribute__ctor_mA833F30B11D7EAFD7B6A24ECFDE6A620BCA4CB77 (BaseTypeRequiredAttribute_t229CD06DD288A6CC18D3D73901C7895FB75F171E * __this, Type_t * ___baseType0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___baseType0;
		BaseTypeRequiredAttribute_set_BaseType_m1056C9E9710CFC6686E566D6759D082149DDC385_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Type JetBrains.Annotations.BaseTypeRequiredAttribute::get_BaseType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * BaseTypeRequiredAttribute_get_BaseType_mD878E8C1D8E659C6EDB647D0A899C482731CDF57 (BaseTypeRequiredAttribute_t229CD06DD288A6CC18D3D73901C7895FB75F171E * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get_U3CBaseTypeU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void JetBrains.Annotations.BaseTypeRequiredAttribute::set_BaseType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseTypeRequiredAttribute_set_BaseType_m1056C9E9710CFC6686E566D6759D082149DDC385 (BaseTypeRequiredAttribute_t229CD06DD288A6CC18D3D73901C7895FB75F171E * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___value0;
		__this->set_U3CBaseTypeU3Ek__BackingField_0(L_0);
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
// System.Void JetBrains.Annotations.CanBeNullAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanBeNullAttribute__ctor_mEADCFC755185DB261B7A47A79A5D960CA4116CC4 (CanBeNullAttribute_t7777C5F7E89806EAF87B53955346053586112BED * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void JetBrains.Annotations.CannotApplyEqualityOperatorAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CannotApplyEqualityOperatorAttribute__ctor_mCBF2D3626C868171EB815F320F9B01D8B3CDDFDC (CannotApplyEqualityOperatorAttribute_tE091E5A92958B8484035EBD4815681840D644D72 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void JetBrains.Annotations.CollectionAccessAttribute::.ctor(JetBrains.Annotations.CollectionAccessType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionAccessAttribute__ctor_m0F623B97D93EDF06E0E8BB64D04BD1022B9E7E20 (CollectionAccessAttribute_t95980E60D6D0FDA3EB0A757DD62BE4ED5505F104 * __this, int32_t ___collectionAccessType0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___collectionAccessType0;
		CollectionAccessAttribute_set_CollectionAccessType_mE21703CF151381AFF698C80DA5566BECA3A23D30_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// JetBrains.Annotations.CollectionAccessType JetBrains.Annotations.CollectionAccessAttribute::get_CollectionAccessType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CollectionAccessAttribute_get_CollectionAccessType_m6BF502ED4FC77D33BAD3DFD2B910DEF01E89265D (CollectionAccessAttribute_t95980E60D6D0FDA3EB0A757DD62BE4ED5505F104 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CCollectionAccessTypeU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void JetBrains.Annotations.CollectionAccessAttribute::set_CollectionAccessType(JetBrains.Annotations.CollectionAccessType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionAccessAttribute_set_CollectionAccessType_mE21703CF151381AFF698C80DA5566BECA3A23D30 (CollectionAccessAttribute_t95980E60D6D0FDA3EB0A757DD62BE4ED5505F104 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CCollectionAccessTypeU3Ek__BackingField_0(L_0);
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
// System.Void JetBrains.Annotations.ContractAnnotationAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContractAnnotationAttribute__ctor_m5A7AA110A245D127AB6DCB8EB9DB071FED4F7B5F (ContractAnnotationAttribute_t662061C8A440CEE29A0551A18371537541300293 * __this, String_t* ___contract0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___contract0;
		ContractAnnotationAttribute__ctor_m82F68DBA007D50989D807F1C9F9C4163B6BD42C3(__this, L_0, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void JetBrains.Annotations.ContractAnnotationAttribute::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContractAnnotationAttribute__ctor_m82F68DBA007D50989D807F1C9F9C4163B6BD42C3 (ContractAnnotationAttribute_t662061C8A440CEE29A0551A18371537541300293 * __this, String_t* ___contract0, bool ___forceFullStates1, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___contract0;
		ContractAnnotationAttribute_set_Contract_mC114BE2DB9C90A208FD0A8CA00260572C4C5BEE9_inline(__this, L_0, /*hidden argument*/NULL);
		bool L_1 = ___forceFullStates1;
		ContractAnnotationAttribute_set_ForceFullStates_m827EE605B108780C57D65365F080937534AE396D_inline(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String JetBrains.Annotations.ContractAnnotationAttribute::get_Contract()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ContractAnnotationAttribute_get_Contract_m68F0B0CAF7597B4ADC83658F04DA391FDE2FDD8B (ContractAnnotationAttribute_t662061C8A440CEE29A0551A18371537541300293 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CContractU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void JetBrains.Annotations.ContractAnnotationAttribute::set_Contract(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContractAnnotationAttribute_set_Contract_mC114BE2DB9C90A208FD0A8CA00260572C4C5BEE9 (ContractAnnotationAttribute_t662061C8A440CEE29A0551A18371537541300293 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CContractU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Boolean JetBrains.Annotations.ContractAnnotationAttribute::get_ForceFullStates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ContractAnnotationAttribute_get_ForceFullStates_mAC0C1805929122BACBF86D5576B1CC91EDEF3CCA (ContractAnnotationAttribute_t662061C8A440CEE29A0551A18371537541300293 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CForceFullStatesU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void JetBrains.Annotations.ContractAnnotationAttribute::set_ForceFullStates(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContractAnnotationAttribute_set_ForceFullStates_m827EE605B108780C57D65365F080937534AE396D (ContractAnnotationAttribute_t662061C8A440CEE29A0551A18371537541300293 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CForceFullStatesU3Ek__BackingField_1(L_0);
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
// System.Void JetBrains.Annotations.HtmlAttributeValueAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HtmlAttributeValueAttribute__ctor_m61FDC2EE714286007161F371B8749B3F5AAF62B8 (HtmlAttributeValueAttribute_t10B5BF21F421C7AB034A44845E84663710144E6A * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		HtmlAttributeValueAttribute_set_Name_mC5B5F78C06ACD174C3A9BA329AB9E942366EBC48_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String JetBrains.Annotations.HtmlAttributeValueAttribute::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HtmlAttributeValueAttribute_get_Name_mCB69B65264F56C3EC2A30C7D75860D59CE630B7A (HtmlAttributeValueAttribute_t10B5BF21F421C7AB034A44845E84663710144E6A * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void JetBrains.Annotations.HtmlAttributeValueAttribute::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HtmlAttributeValueAttribute_set_Name_mC5B5F78C06ACD174C3A9BA329AB9E942366EBC48 (HtmlAttributeValueAttribute_t10B5BF21F421C7AB034A44845E84663710144E6A * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_0(L_0);
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
// System.Void JetBrains.Annotations.HtmlElementAttributesAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HtmlElementAttributesAttribute__ctor_m6077DAEC78281BA4F43D3A16DF974392D343B4AD (HtmlElementAttributesAttribute_t1A2629419BE6B1A61AE33540D9827FD90F92B151 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void JetBrains.Annotations.HtmlElementAttributesAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HtmlElementAttributesAttribute__ctor_m0457787495EBBB968452043CC37F70E19946A9F5 (HtmlElementAttributesAttribute_t1A2629419BE6B1A61AE33540D9827FD90F92B151 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		HtmlElementAttributesAttribute_set_Name_m71B880D555F6C3DFE6646BC9BAC0EE4F849E82FA_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String JetBrains.Annotations.HtmlElementAttributesAttribute::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HtmlElementAttributesAttribute_get_Name_m0C23A05E443A6C2CCB6C91BFE60F647FDC46B964 (HtmlElementAttributesAttribute_t1A2629419BE6B1A61AE33540D9827FD90F92B151 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void JetBrains.Annotations.HtmlElementAttributesAttribute::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HtmlElementAttributesAttribute_set_Name_m71B880D555F6C3DFE6646BC9BAC0EE4F849E82FA (HtmlElementAttributesAttribute_t1A2629419BE6B1A61AE33540D9827FD90F92B151 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_0(L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Zenject.InjectAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InjectAttribute__ctor_m3E63055F81749686F5DCA99CD12175AF74E08CC0 (InjectAttribute_tACFFF08424F2C68DF426C0B4CA3CE270C3A0E5CD * __this, const RuntimeMethod* method)
{
	{
		InjectAttributeBase__ctor_m5956E574216C2EED919072B7D449E51A763D9D50(__this, /*hidden argument*/NULL);
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
// System.Boolean Zenject.InjectAttributeBase::get_Optional()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InjectAttributeBase_get_Optional_m4EEACF32B27537A621FC00A21538B3403391B08C (InjectAttributeBase_tBEA6A6FCBD9B487AAF830C7FD5F089DE74551DC7 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3COptionalU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Zenject.InjectAttributeBase::set_Optional(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InjectAttributeBase_set_Optional_mAF89F38B4E798795F75A02F686CB994991D1DB7B (InjectAttributeBase_tBEA6A6FCBD9B487AAF830C7FD5F089DE74551DC7 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3COptionalU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Object Zenject.InjectAttributeBase::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * InjectAttributeBase_get_Id_m409B9231EE95A7EA77003995D2FAF09F82C96C94 (InjectAttributeBase_tBEA6A6FCBD9B487AAF830C7FD5F089DE74551DC7 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CIdU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Zenject.InjectAttributeBase::set_Id(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InjectAttributeBase_set_Id_m92E78C4EDD8EA83AA980F824A68D26918CAA5134 (InjectAttributeBase_tBEA6A6FCBD9B487AAF830C7FD5F089DE74551DC7 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CIdU3Ek__BackingField_1(L_0);
		return;
	}
}
// Zenject.InjectSources Zenject.InjectAttributeBase::get_Source()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InjectAttributeBase_get_Source_mB00644DB2C198F84D41782A04D80E4C907855AD4 (InjectAttributeBase_tBEA6A6FCBD9B487AAF830C7FD5F089DE74551DC7 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CSourceU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Zenject.InjectAttributeBase::set_Source(Zenject.InjectSources)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InjectAttributeBase_set_Source_mD97D89723EAB215E31CC8E2294BD1EF51EA8EEB7 (InjectAttributeBase_tBEA6A6FCBD9B487AAF830C7FD5F089DE74551DC7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CSourceU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void Zenject.InjectAttributeBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InjectAttributeBase__ctor_m5956E574216C2EED919072B7D449E51A763D9D50 (InjectAttributeBase_tBEA6A6FCBD9B487AAF830C7FD5F089DE74551DC7 * __this, const RuntimeMethod* method)
{
	{
		PreserveAttribute__ctor_mE8F62B868B3A46F76B74AFB5A36F7B34C33ABCC8(__this, /*hidden argument*/NULL);
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
// System.Void Zenject.InjectLocalAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InjectLocalAttribute__ctor_m0A1B690DF27D9B99EBC1816A12D392FB184F6459 (InjectLocalAttribute_tB6069B3CEBA4F1F1A606B876EEEF84670F87FBFF * __this, const RuntimeMethod* method)
{
	{
		InjectAttributeBase__ctor_m5956E574216C2EED919072B7D449E51A763D9D50(__this, /*hidden argument*/NULL);
		InjectAttributeBase_set_Source_mD97D89723EAB215E31CC8E2294BD1EF51EA8EEB7_inline(__this, 1, /*hidden argument*/NULL);
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
// System.Void Zenject.InjectOptionalAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InjectOptionalAttribute__ctor_mE1632B355CB0EB10882096FFDE8292A496A09489 (InjectOptionalAttribute_tAE1940FDC35B6C11EA38885101EF8582FE530BAA * __this, const RuntimeMethod* method)
{
	{
		InjectAttributeBase__ctor_m5956E574216C2EED919072B7D449E51A763D9D50(__this, /*hidden argument*/NULL);
		InjectAttributeBase_set_Optional_mAF89F38B4E798795F75A02F686CB994991D1DB7B_inline(__this, (bool)1, /*hidden argument*/NULL);
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
// System.Void Zenject.InjectTypeInfo::.ctor(System.Type,Zenject.InjectTypeInfo/InjectConstructorInfo,Zenject.InjectTypeInfo/InjectMethodInfo[],Zenject.InjectTypeInfo/InjectMemberInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InjectTypeInfo__ctor_m77AB679441AA82844022329A4B34009CA52E2EBC (InjectTypeInfo_t7F36F1C82FE757B5EEFB849FCFFECF96B02B6DF5 * __this, Type_t * ___type0, InjectConstructorInfo_tECB8760EBE312544A1D3860F7737B2AFADCD7908 * ___injectConstructor1, InjectMethodInfoU5BU5D_tB8D809F7145531960CFADE95AF6DC4A1EB0C90FA* ___injectMethods2, InjectMemberInfoU5BU5D_tFCC8018D9FBBD77947427BCB8865379B8A6C15BB* ___injectMembers3, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___type0;
		__this->set_Type_0(L_0);
		InjectMethodInfoU5BU5D_tB8D809F7145531960CFADE95AF6DC4A1EB0C90FA* L_1 = ___injectMethods2;
		__this->set_InjectMethods_1(L_1);
		InjectMemberInfoU5BU5D_tFCC8018D9FBBD77947427BCB8865379B8A6C15BB* L_2 = ___injectMembers3;
		__this->set_InjectMembers_2(L_2);
		InjectConstructorInfo_tECB8760EBE312544A1D3860F7737B2AFADCD7908 * L_3 = ___injectConstructor1;
		__this->set_InjectConstructor_3(L_3);
		return;
	}
}
// Zenject.InjectTypeInfo Zenject.InjectTypeInfo::get_BaseTypeInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InjectTypeInfo_t7F36F1C82FE757B5EEFB849FCFFECF96B02B6DF5 * InjectTypeInfo_get_BaseTypeInfo_mECE0E2BD2FE82B930E7F6652ADC2F93EC18EB543 (InjectTypeInfo_t7F36F1C82FE757B5EEFB849FCFFECF96B02B6DF5 * __this, const RuntimeMethod* method)
{
	{
		InjectTypeInfo_t7F36F1C82FE757B5EEFB849FCFFECF96B02B6DF5 * L_0 = __this->get_U3CBaseTypeInfoU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Zenject.InjectTypeInfo::set_BaseTypeInfo(Zenject.InjectTypeInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InjectTypeInfo_set_BaseTypeInfo_m4C9A8D8AEDC76E37F2120E6C47820D8256C276AF (InjectTypeInfo_t7F36F1C82FE757B5EEFB849FCFFECF96B02B6DF5 * __this, InjectTypeInfo_t7F36F1C82FE757B5EEFB849FCFFECF96B02B6DF5 * ___value0, const RuntimeMethod* method)
{
	{
		InjectTypeInfo_t7F36F1C82FE757B5EEFB849FCFFECF96B02B6DF5 * L_0 = ___value0;
		__this->set_U3CBaseTypeInfoU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<Zenject.InjectableInfo> Zenject.InjectTypeInfo::get_AllInjectables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InjectTypeInfo_get_AllInjectables_m77C5CDF1B98F71AF3B93D158D0B2121370754479 (InjectTypeInfo_t7F36F1C82FE757B5EEFB849FCFFECF96B02B6DF5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Concat_TisInjectableInfo_tFFB881101BEB9ED7BB1E856224E096C168EF76F5_m295382D68130D3934CECF1B33383EC0FD87B040A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SelectMany_TisInjectMethodInfo_tCFB365E8D1D6D2FDBE5A4E2581FC43B66CD22C3C_TisInjectableInfo_tFFB881101BEB9ED7BB1E856224E096C168EF76F5_m506FEE0FBA4FF2BF98505EB24AEF16435379173E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisInjectMemberInfo_t91776F61B901397B8B0EB4930F3354947D5D391A_TisInjectableInfo_tFFB881101BEB9ED7BB1E856224E096C168EF76F5_mA61A89F3C49BD08608E78B0D6DDC1FE27B09F314_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mBE6D4E91029A6119F4C63FAC69AF7EA298D5A394_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mF330BC17F6701A14563C4528A07A729C24A4CFA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tA30947242D3FAC5B14085E3EBFA3DD52482584BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tCA3B1A6676C318EB131D400C4BE116F6ADBB1BD7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InjectTypeInfo_U3Cget_AllInjectablesU3Eb__0_mCD789CEB3676A118F3BF7934FD87B25B61672CF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InjectTypeInfo_U3Cget_AllInjectablesU3Eb__1_m03DA68F93AD8A762F7EB6E7AE96A80702D413063_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InjectTypeInfo_t7F36F1C82FE757B5EEFB849FCFFECF96B02B6DF5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InjectMemberInfoU5BU5D_tFCC8018D9FBBD77947427BCB8865379B8A6C15BB* G_B2_0 = NULL;
	InjectableInfoU5BU5D_tE39C90F66177150812A88425C78BBBAA65A55BEC* G_B2_1 = NULL;
	InjectMemberInfoU5BU5D_tFCC8018D9FBBD77947427BCB8865379B8A6C15BB* G_B1_0 = NULL;
	InjectableInfoU5BU5D_tE39C90F66177150812A88425C78BBBAA65A55BEC* G_B1_1 = NULL;
	InjectMethodInfoU5BU5D_tB8D809F7145531960CFADE95AF6DC4A1EB0C90FA* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	InjectMethodInfoU5BU5D_tB8D809F7145531960CFADE95AF6DC4A1EB0C90FA* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	{
		InjectConstructorInfo_tECB8760EBE312544A1D3860F7737B2AFADCD7908 * L_0 = __this->get_InjectConstructor_3();
		NullCheck(L_0);
		InjectableInfoU5BU5D_tE39C90F66177150812A88425C78BBBAA65A55BEC* L_1 = L_0->get_Parameters_1();
		InjectMemberInfoU5BU5D_tFCC8018D9FBBD77947427BCB8865379B8A6C15BB* L_2 = __this->get_InjectMembers_2();
		Func_2_tCA3B1A6676C318EB131D400C4BE116F6ADBB1BD7 * L_3 = ((InjectTypeInfo_t7F36F1C82FE757B5EEFB849FCFFECF96B02B6DF5_StaticFields*)il2cpp_codegen_static_fields_for(InjectTypeInfo_t7F36F1C82FE757B5EEFB849FCFFECF96B02B6DF5_il2cpp_TypeInfo_var))->get_CSU24U3CU3E9__CachedAnonymousMethodDelegate2_5();
		G_B1_0 = L_2;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_1;
			goto IL_0029;
		}
	}
	{
		Func_2_tCA3B1A6676C318EB131D400C4BE116F6ADBB1BD7 * L_4 = (Func_2_tCA3B1A6676C318EB131D400C4BE116F6ADBB1BD7 *)il2cpp_codegen_object_new(Func_2_tCA3B1A6676C318EB131D400C4BE116F6ADBB1BD7_il2cpp_TypeInfo_var);
		Func_2__ctor_mF330BC17F6701A14563C4528A07A729C24A4CFA1(L_4, NULL, (intptr_t)((intptr_t)InjectTypeInfo_U3Cget_AllInjectablesU3Eb__0_mCD789CEB3676A118F3BF7934FD87B25B61672CF6_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mF330BC17F6701A14563C4528A07A729C24A4CFA1_RuntimeMethod_var);
		((InjectTypeInfo_t7F36F1C82FE757B5EEFB849FCFFECF96B02B6DF5_StaticFields*)il2cpp_codegen_static_fields_for(InjectTypeInfo_t7F36F1C82FE757B5EEFB849FCFFECF96B02B6DF5_il2cpp_TypeInfo_var))->set_CSU24U3CU3E9__CachedAnonymousMethodDelegate2_5(L_4);
		G_B2_0 = G_B1_0;
		G_B2_1 = G_B1_1;
	}

IL_0029:
	{
		Func_2_tCA3B1A6676C318EB131D400C4BE116F6ADBB1BD7 * L_5 = ((InjectTypeInfo_t7F36F1C82FE757B5EEFB849FCFFECF96B02B6DF5_StaticFields*)il2cpp_codegen_static_fields_for(InjectTypeInfo_t7F36F1C82FE757B5EEFB849FCFFECF96B02B6DF5_il2cpp_TypeInfo_var))->get_CSU24U3CU3E9__CachedAnonymousMethodDelegate2_5();
		RuntimeObject* L_6;
		L_6 = Enumerable_Select_TisInjectMemberInfo_t91776F61B901397B8B0EB4930F3354947D5D391A_TisInjectableInfo_tFFB881101BEB9ED7BB1E856224E096C168EF76F5_mA61A89F3C49BD08608E78B0D6DDC1FE27B09F314((RuntimeObject*)(RuntimeObject*)G_B2_0, L_5, /*hidden argument*/Enumerable_Select_TisInjectMemberInfo_t91776F61B901397B8B0EB4930F3354947D5D391A_TisInjectableInfo_tFFB881101BEB9ED7BB1E856224E096C168EF76F5_mA61A89F3C49BD08608E78B0D6DDC1FE27B09F314_RuntimeMethod_var);
		RuntimeObject* L_7;
		L_7 = Enumerable_Concat_TisInjectableInfo_tFFB881101BEB9ED7BB1E856224E096C168EF76F5_m295382D68130D3934CECF1B33383EC0FD87B040A((RuntimeObject*)(RuntimeObject*)G_B2_1, L_6, /*hidden argument*/Enumerable_Concat_TisInjectableInfo_tFFB881101BEB9ED7BB1E856224E096C168EF76F5_m295382D68130D3934CECF1B33383EC0FD87B040A_RuntimeMethod_var);
		InjectMethodInfoU5BU5D_tB8D809F7145531960CFADE95AF6DC4A1EB0C90FA* L_8 = __this->get_InjectMethods_1();
		Func_2_tA30947242D3FAC5B14085E3EBFA3DD52482584BD * L_9 = ((InjectTypeInfo_t7F36F1C82FE757B5EEFB849FCFFECF96B02B6DF5_StaticFields*)il2cpp_codegen_static_fields_for(InjectTypeInfo_t7F36F1C82FE757B5EEFB849FCFFECF96B02B6DF5_il2cpp_TypeInfo_var))->get_CSU24U3CU3E9__CachedAnonymousMethodDelegate3_6();
		G_B3_0 = L_8;
		G_B3_1 = L_7;
		if (L_9)
		{
			G_B4_0 = L_8;
			G_B4_1 = L_7;
			goto IL_0056;
		}
	}
	{
		Func_2_tA30947242D3FAC5B14085E3EBFA3DD52482584BD * L_10 = (Func_2_tA30947242D3FAC5B14085E3EBFA3DD52482584BD *)il2cpp_codegen_object_new(Func_2_tA30947242D3FAC5B14085E3EBFA3DD52482584BD_il2cpp_TypeInfo_var);
		Func_2__ctor_mBE6D4E91029A6119F4C63FAC69AF7EA298D5A394(L_10, NULL, (intptr_t)((intptr_t)InjectTypeInfo_U3Cget_AllInjectablesU3Eb__1_m03DA68F93AD8A762F7EB6E7AE96A80702D413063_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mBE6D4E91029A6119F4C63FAC69AF7EA298D5A394_RuntimeMethod_var);
		((InjectTypeInfo_t7F36F1C82FE757B5EEFB849FCFFECF96B02B6DF5_StaticFields*)il2cpp_codegen_static_fields_for(InjectTypeInfo_t7F36F1C82FE757B5EEFB849FCFFECF96B02B6DF5_il2cpp_TypeInfo_var))->set_CSU24U3CU3E9__CachedAnonymousMethodDelegate3_6(L_10);
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
	}

IL_0056:
	{
		Func_2_tA30947242D3FAC5B14085E3EBFA3DD52482584BD * L_11 = ((InjectTypeInfo_t7F36F1C82FE757B5EEFB849FCFFECF96B02B6DF5_StaticFields*)il2cpp_codegen_static_fields_for(InjectTypeInfo_t7F36F1C82FE757B5EEFB849FCFFECF96B02B6DF5_il2cpp_TypeInfo_var))->get_CSU24U3CU3E9__CachedAnonymousMethodDelegate3_6();
		RuntimeObject* L_12;
		L_12 = Enumerable_SelectMany_TisInjectMethodInfo_tCFB365E8D1D6D2FDBE5A4E2581FC43B66CD22C3C_TisInjectableInfo_tFFB881101BEB9ED7BB1E856224E096C168EF76F5_m506FEE0FBA4FF2BF98505EB24AEF16435379173E((RuntimeObject*)(RuntimeObject*)G_B4_0, L_11, /*hidden argument*/Enumerable_SelectMany_TisInjectMethodInfo_tCFB365E8D1D6D2FDBE5A4E2581FC43B66CD22C3C_TisInjectableInfo_tFFB881101BEB9ED7BB1E856224E096C168EF76F5_m506FEE0FBA4FF2BF98505EB24AEF16435379173E_RuntimeMethod_var);
		RuntimeObject* L_13;
		L_13 = Enumerable_Concat_TisInjectableInfo_tFFB881101BEB9ED7BB1E856224E096C168EF76F5_m295382D68130D3934CECF1B33383EC0FD87B040A(G_B4_1, L_12, /*hidden argument*/Enumerable_Concat_TisInjectableInfo_tFFB881101BEB9ED7BB1E856224E096C168EF76F5_m295382D68130D3934CECF1B33383EC0FD87B040A_RuntimeMethod_var);
		return L_13;
	}
}
// Zenject.InjectableInfo Zenject.InjectTypeInfo::<get_AllInjectables>b__0(Zenject.InjectTypeInfo/InjectMemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InjectableInfo_tFFB881101BEB9ED7BB1E856224E096C168EF76F5 * InjectTypeInfo_U3Cget_AllInjectablesU3Eb__0_mCD789CEB3676A118F3BF7934FD87B25B61672CF6 (InjectMemberInfo_t91776F61B901397B8B0EB4930F3354947D5D391A * ___x0, const RuntimeMethod* method)
{
	{
		InjectMemberInfo_t91776F61B901397B8B0EB4930F3354947D5D391A * L_0 = ___x0;
		NullCheck(L_0);
		InjectableInfo_tFFB881101BEB9ED7BB1E856224E096C168EF76F5 * L_1 = L_0->get_Info_1();
		return L_1;
	}
}
// System.Collections.Generic.IEnumerable`1<Zenject.InjectableInfo> Zenject.InjectTypeInfo::<get_AllInjectables>b__1(Zenject.InjectTypeInfo/InjectMethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InjectTypeInfo_U3Cget_AllInjectablesU3Eb__1_m03DA68F93AD8A762F7EB6E7AE96A80702D413063 (InjectMethodInfo_tCFB365E8D1D6D2FDBE5A4E2581FC43B66CD22C3C * ___x0, const RuntimeMethod* method)
{
	{
		InjectMethodInfo_tCFB365E8D1D6D2FDBE5A4E2581FC43B66CD22C3C * L_0 = ___x0;
		NullCheck(L_0);
		InjectableInfoU5BU5D_tE39C90F66177150812A88425C78BBBAA65A55BEC* L_1 = L_0->get_Parameters_2();
		return (RuntimeObject*)L_1;
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
// System.Void Zenject.InjectableInfo::.ctor(System.Boolean,System.Object,System.String,System.Type,System.Object,Zenject.InjectSources)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InjectableInfo__ctor_mB834CA2611E7C98F5C2E8D124BF719DB67E2982F (InjectableInfo_tFFB881101BEB9ED7BB1E856224E096C168EF76F5 * __this, bool ___optional0, RuntimeObject * ___identifier1, String_t* ___memberName2, Type_t * ___memberType3, RuntimeObject * ___defaultValue4, int32_t ___sourceType5, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		bool L_0 = ___optional0;
		__this->set_Optional_0(L_0);
		Type_t * L_1 = ___memberType3;
		__this->set_MemberType_4(L_1);
		String_t* L_2 = ___memberName2;
		__this->set_MemberName_3(L_2);
		RuntimeObject * L_3 = ___identifier1;
		__this->set_Identifier_1(L_3);
		RuntimeObject * L_4 = ___defaultValue4;
		__this->set_DefaultValue_5(L_4);
		int32_t L_5 = ___sourceType5;
		__this->set_SourceType_2(L_5);
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
// System.Void JetBrains.Annotations.InstantHandleAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstantHandleAttribute__ctor_m2C9AB9BD74456BAF876862B7388A35BBFD9B90AA (InstantHandleAttribute_tFE284194DECA240887744A8F1701C71C81645BD3 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void JetBrains.Annotations.InvokerParameterNameAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokerParameterNameAttribute__ctor_mFEF33DD8DB85981CDA8B7C1A69A01B2120808FD3 (InvokerParameterNameAttribute_t588C7E8C5F51B2DD15A6F5C10480431E44982AE5 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void JetBrains.Annotations.ItemCanBeNullAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemCanBeNullAttribute__ctor_mABA6157A5D6E7D31EBC5686E2A9B1E0A8B8A2D70 (ItemCanBeNullAttribute_t52A59F189C083D2D4733983814B6DBEC4696F14F * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void JetBrains.Annotations.ItemNotNullAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemNotNullAttribute__ctor_mEAA43A3D7C8D85A3AFD1574E0858C52DB776C79F (ItemNotNullAttribute_t9A942540370A63F10861BD3E67E285405C71F376 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void JetBrains.Annotations.LinqTunnelAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinqTunnelAttribute__ctor_m0EC5233C0FBBD88C5E43AB269EA48D77E6A27C09 (LinqTunnelAttribute_tF0DF691AEC2D0FDD48774C452C76403C2817409B * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void JetBrains.Annotations.LocalizationRequiredAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalizationRequiredAttribute__ctor_m666982520FFE6BE57CB6EE9A807A0BC4AEF305A5 (LocalizationRequiredAttribute_t66D489EB8A17C5151FF39FAAA1F784E5E2B81681 * __this, const RuntimeMethod* method)
{
	{
		LocalizationRequiredAttribute__ctor_m10F6A70AA4A61B21C5FD1F47A5B0D8CB19638524(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void JetBrains.Annotations.LocalizationRequiredAttribute::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalizationRequiredAttribute__ctor_m10F6A70AA4A61B21C5FD1F47A5B0D8CB19638524 (LocalizationRequiredAttribute_t66D489EB8A17C5151FF39FAAA1F784E5E2B81681 * __this, bool ___required0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		bool L_0 = ___required0;
		LocalizationRequiredAttribute_set_Required_mFCC6AEA0E93135CCEB3CE20706301202BDA4DFB1_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean JetBrains.Annotations.LocalizationRequiredAttribute::get_Required()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocalizationRequiredAttribute_get_Required_m87E04D84D7DCC4482E9AE27CB19AFDBBE944665F (LocalizationRequiredAttribute_t66D489EB8A17C5151FF39FAAA1F784E5E2B81681 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CRequiredU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void JetBrains.Annotations.LocalizationRequiredAttribute::set_Required(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalizationRequiredAttribute_set_Required_mFCC6AEA0E93135CCEB3CE20706301202BDA4DFB1 (LocalizationRequiredAttribute_t66D489EB8A17C5151FF39FAAA1F784E5E2B81681 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CRequiredU3Ek__BackingField_0(L_0);
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
// System.String JetBrains.Annotations.MacroAttribute::get_Expression()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MacroAttribute_get_Expression_mEA97B9FB78E7BB19C8B47C665D04FFC450C9E62A (MacroAttribute_tC064E892C66536B9F196499466EF5ED60108D40E * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CExpressionU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void JetBrains.Annotations.MacroAttribute::set_Expression(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MacroAttribute_set_Expression_m79F8425825B492AD4D322F8016EA3DE5B1885F3B (MacroAttribute_tC064E892C66536B9F196499466EF5ED60108D40E * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CExpressionU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Int32 JetBrains.Annotations.MacroAttribute::get_Editable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MacroAttribute_get_Editable_mD7F1DFC1D6D819258D66C2D3487576F3D47DE7A3 (MacroAttribute_tC064E892C66536B9F196499466EF5ED60108D40E * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CEditableU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void JetBrains.Annotations.MacroAttribute::set_Editable(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MacroAttribute_set_Editable_mD741A7E934CE4FEB922AA5FA73736C382777960F (MacroAttribute_tC064E892C66536B9F196499466EF5ED60108D40E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CEditableU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.String JetBrains.Annotations.MacroAttribute::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MacroAttribute_get_Target_mCEFE78D6C56AAEEA40C75DAC8F017BA59EAD65E3 (MacroAttribute_tC064E892C66536B9F196499466EF5ED60108D40E * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CTargetU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void JetBrains.Annotations.MacroAttribute::set_Target(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MacroAttribute_set_Target_m1AFAD7BD01567EE06FBBEAB9C275568C7E0B401C (MacroAttribute_tC064E892C66536B9F196499466EF5ED60108D40E * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CTargetU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void JetBrains.Annotations.MacroAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MacroAttribute__ctor_m9F10E30A8161819A1E6183842C09F3EAE6F9A6CD (MacroAttribute_tC064E892C66536B9F196499466EF5ED60108D40E * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void JetBrains.Annotations.MeansImplicitUseAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeansImplicitUseAttribute__ctor_mAF73055868029A75CC9EB409CB1475333B5D31E9 (MeansImplicitUseAttribute_t68C979918C00E35B6B176826596CA3FF5295743E * __this, const RuntimeMethod* method)
{
	{
		MeansImplicitUseAttribute__ctor_m138340778236709A9825EFA3B3CC3BD9EB8F1A9F(__this, 7, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void JetBrains.Annotations.MeansImplicitUseAttribute::.ctor(JetBrains.Annotations.ImplicitUseKindFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeansImplicitUseAttribute__ctor_m1CA14BD816DD6892F2482CF8D58C73AAB9460A72 (MeansImplicitUseAttribute_t68C979918C00E35B6B176826596CA3FF5295743E * __this, int32_t ___useKindFlags0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___useKindFlags0;
		MeansImplicitUseAttribute__ctor_m138340778236709A9825EFA3B3CC3BD9EB8F1A9F(__this, L_0, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void JetBrains.Annotations.MeansImplicitUseAttribute::.ctor(JetBrains.Annotations.ImplicitUseTargetFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeansImplicitUseAttribute__ctor_m2840AF3083B161BAD1B38B723EB9F84E9C9940A8 (MeansImplicitUseAttribute_t68C979918C00E35B6B176826596CA3FF5295743E * __this, int32_t ___targetFlags0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___targetFlags0;
		MeansImplicitUseAttribute__ctor_m138340778236709A9825EFA3B3CC3BD9EB8F1A9F(__this, 7, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void JetBrains.Annotations.MeansImplicitUseAttribute::.ctor(JetBrains.Annotations.ImplicitUseKindFlags,JetBrains.Annotations.ImplicitUseTargetFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeansImplicitUseAttribute__ctor_m138340778236709A9825EFA3B3CC3BD9EB8F1A9F (MeansImplicitUseAttribute_t68C979918C00E35B6B176826596CA3FF5295743E * __this, int32_t ___useKindFlags0, int32_t ___targetFlags1, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___useKindFlags0;
		MeansImplicitUseAttribute_set_UseKindFlags_m6E768467783960F44D62CAA1B44D628740011E67_inline(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___targetFlags1;
		MeansImplicitUseAttribute_set_TargetFlags_mC9971FCA8FE8F240D283C2935E6309AD45B2A579_inline(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// JetBrains.Annotations.ImplicitUseKindFlags JetBrains.Annotations.MeansImplicitUseAttribute::get_UseKindFlags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MeansImplicitUseAttribute_get_UseKindFlags_m61CEE3AAB835EDAE96CC15FA31EAB2801EF52ECC (MeansImplicitUseAttribute_t68C979918C00E35B6B176826596CA3FF5295743E * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CUseKindFlagsU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void JetBrains.Annotations.MeansImplicitUseAttribute::set_UseKindFlags(JetBrains.Annotations.ImplicitUseKindFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeansImplicitUseAttribute_set_UseKindFlags_m6E768467783960F44D62CAA1B44D628740011E67 (MeansImplicitUseAttribute_t68C979918C00E35B6B176826596CA3FF5295743E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CUseKindFlagsU3Ek__BackingField_0(L_0);
		return;
	}
}
// JetBrains.Annotations.ImplicitUseTargetFlags JetBrains.Annotations.MeansImplicitUseAttribute::get_TargetFlags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MeansImplicitUseAttribute_get_TargetFlags_mF47B78E2754125A951717B225454C9A5AF0BCB95 (MeansImplicitUseAttribute_t68C979918C00E35B6B176826596CA3FF5295743E * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CTargetFlagsU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void JetBrains.Annotations.MeansImplicitUseAttribute::set_TargetFlags(JetBrains.Annotations.ImplicitUseTargetFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeansImplicitUseAttribute_set_TargetFlags_mC9971FCA8FE8F240D283C2935E6309AD45B2A579 (MeansImplicitUseAttribute_t68C979918C00E35B6B176826596CA3FF5295743E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTargetFlagsU3Ek__BackingField_1(L_0);
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
// System.Void JetBrains.Annotations.MustUseReturnValueAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MustUseReturnValueAttribute__ctor_mB9F1E97A23A9753E7E4705A58D0AD9E3768861AB (MustUseReturnValueAttribute_t649AC1C4D27CBC9BF4E22DC4B15D00D7EE845DD3 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void JetBrains.Annotations.MustUseReturnValueAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MustUseReturnValueAttribute__ctor_m4A2D18D0DE5AA2D106E8F559C332FEAE8C0486B8 (MustUseReturnValueAttribute_t649AC1C4D27CBC9BF4E22DC4B15D00D7EE845DD3 * __this, String_t* ___justification0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___justification0;
		MustUseReturnValueAttribute_set_Justification_mF8A88353E3B283E27884F0337D5F80D44BFD94A8_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String JetBrains.Annotations.MustUseReturnValueAttribute::get_Justification()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MustUseReturnValueAttribute_get_Justification_m75B9B1E33859F5B7ADB94A0EB9E844600E2D3508 (MustUseReturnValueAttribute_t649AC1C4D27CBC9BF4E22DC4B15D00D7EE845DD3 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CJustificationU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void JetBrains.Annotations.MustUseReturnValueAttribute::set_Justification(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MustUseReturnValueAttribute_set_Justification_mF8A88353E3B283E27884F0337D5F80D44BFD94A8 (MustUseReturnValueAttribute_t649AC1C4D27CBC9BF4E22DC4B15D00D7EE845DD3 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CJustificationU3Ek__BackingField_0(L_0);
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
// System.Void JetBrains.Annotations.NoEnumerationAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoEnumerationAttribute__ctor_m3503BC9B9BA4B0763FAA2D3004A8D7F4FA3B7C56 (NoEnumerationAttribute_t1A176F2BE1AA8DAF6D5C0F607C37FB5217F6A0F6 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void Zenject.NoReflectionBakingAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoReflectionBakingAttribute__ctor_m00A9B70A26E8BB6247DB92D81319F5B4477F38A6 (NoReflectionBakingAttribute_t00B2AA73672895518C17BB47BC21B4085A983997 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void JetBrains.Annotations.NoReorderAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoReorderAttribute__ctor_m928E3A96E925B2A2B16BF047483CDBA61BB53C87 (NoReorderAttribute_t24C07ED89302B2482B5354ADE5F80AA06021A808 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void JetBrains.Annotations.NotNullAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotNullAttribute__ctor_m6C87F711A7F66E0F4E285D013486BDF2A7F7060A (NotNullAttribute_t44A925B33322011233CD36F85C5840CF606D868B * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void JetBrains.Annotations.NotifyPropertyChangedInvocatorAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotifyPropertyChangedInvocatorAttribute__ctor_m241374C2C008A0ACC72C75EDC81874DA86DEB587 (NotifyPropertyChangedInvocatorAttribute_t58A7B14D9749D65C80751BFBA1B83CD6FE69CD05 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void JetBrains.Annotations.NotifyPropertyChangedInvocatorAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotifyPropertyChangedInvocatorAttribute__ctor_m39995F012F01FA80A3FE80E93B29FC01642C7999 (NotifyPropertyChangedInvocatorAttribute_t58A7B14D9749D65C80751BFBA1B83CD6FE69CD05 * __this, String_t* ___parameterName0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___parameterName0;
		NotifyPropertyChangedInvocatorAttribute_set_ParameterName_m4FD1BECC587E309924C9B833CE8BE6DC3728AD13_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String JetBrains.Annotations.NotifyPropertyChangedInvocatorAttribute::get_ParameterName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NotifyPropertyChangedInvocatorAttribute_get_ParameterName_m16CEFF66436AAF3F03E5338E55520E33FD945864 (NotifyPropertyChangedInvocatorAttribute_t58A7B14D9749D65C80751BFBA1B83CD6FE69CD05 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CParameterNameU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void JetBrains.Annotations.NotifyPropertyChangedInvocatorAttribute::set_ParameterName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotifyPropertyChangedInvocatorAttribute_set_ParameterName_m4FD1BECC587E309924C9B833CE8BE6DC3728AD13 (NotifyPropertyChangedInvocatorAttribute_t58A7B14D9749D65C80751BFBA1B83CD6FE69CD05 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CParameterNameU3Ek__BackingField_0(L_0);
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
// System.Void JetBrains.Annotations.PathReferenceAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathReferenceAttribute__ctor_m98E382B3CC2B37225CC60C9AF50FDFD8D5353797 (PathReferenceAttribute_t041CA1FB39BB1371780D4A942BA71171F43B5BAE * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void JetBrains.Annotations.PathReferenceAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathReferenceAttribute__ctor_mD62A53F4FA8D42F84B31D3B40C89006BE1233205 (PathReferenceAttribute_t041CA1FB39BB1371780D4A942BA71171F43B5BAE * __this, String_t* ___basePath0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___basePath0;
		PathReferenceAttribute_set_BasePath_m13959A654A26A3326EC586995909EC4CD5B1BB11_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String JetBrains.Annotations.PathReferenceAttribute::get_BasePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PathReferenceAttribute_get_BasePath_mCE481EA8D794C29A90A5BB26359C08022A1BA21C (PathReferenceAttribute_t041CA1FB39BB1371780D4A942BA71171F43B5BAE * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CBasePathU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void JetBrains.Annotations.PathReferenceAttribute::set_BasePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathReferenceAttribute_set_BasePath_m13959A654A26A3326EC586995909EC4CD5B1BB11 (PathReferenceAttribute_t041CA1FB39BB1371780D4A942BA71171F43B5BAE * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CBasePathU3Ek__BackingField_0(L_0);
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
// System.Void Zenject.Internal.PreserveAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreserveAttribute__ctor_mE8F62B868B3A46F76B74AFB5A36F7B34C33ABCC8 (PreserveAttribute_t917FF99C161EA919E410C46999AFD6D1A7BFEA27 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void JetBrains.Annotations.ProvidesContextAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProvidesContextAttribute__ctor_mBAE71C483A1250DBB1D952C66B000C9FF1803B7C (ProvidesContextAttribute_t2FCFAA7CD099FF2A71BD311A41A84197894AD49B * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void JetBrains.Annotations.PublicAPIAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PublicAPIAttribute__ctor_m7B091821CE608E8FEB84B68617DB202294C4EB50 (PublicAPIAttribute_t92C190C0D7EF5A6216EF4C2D09A48190D77BAC90 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void JetBrains.Annotations.PublicAPIAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PublicAPIAttribute__ctor_m7DBEAD04EBE55426DCF4F15B83991C8A617A4652 (PublicAPIAttribute_t92C190C0D7EF5A6216EF4C2D09A48190D77BAC90 * __this, String_t* ___comment0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___comment0;
		PublicAPIAttribute_set_Comment_m9F2ED18272CA0F17A403831B1E4C595BBE22CAE3_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String JetBrains.Annotations.PublicAPIAttribute::get_Comment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PublicAPIAttribute_get_Comment_m07509B27EACCDB61EE78FE02A9AB23E61E5C2D06 (PublicAPIAttribute_t92C190C0D7EF5A6216EF4C2D09A48190D77BAC90 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CCommentU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void JetBrains.Annotations.PublicAPIAttribute::set_Comment(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PublicAPIAttribute_set_Comment_m9F2ED18272CA0F17A403831B1E4C595BBE22CAE3 (PublicAPIAttribute_t92C190C0D7EF5A6216EF4C2D09A48190D77BAC90 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CCommentU3Ek__BackingField_0(L_0);
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
// System.Void JetBrains.Annotations.PureAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PureAttribute__ctor_mF7554454642099E929EE8008FAA21E04A6426933 (PureAttribute_t7B5C1EEEC4680EF364694E4F7558D4C1DB286141 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void JetBrains.Annotations.RazorDirectiveAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RazorDirectiveAttribute__ctor_m172DF39A1A15F93AF9EAE66228CAED340D60B714 (RazorDirectiveAttribute_t943675864F4EADEAC34BD4083E2F3110F60EECDD * __this, String_t* ___directive0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___directive0;
		RazorDirectiveAttribute_set_Directive_m585309C82B7729B79F30CD2093EE3EFE55F24A9E_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String JetBrains.Annotations.RazorDirectiveAttribute::get_Directive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RazorDirectiveAttribute_get_Directive_mDBC2B4E9C016801179A6841202A0645B58E55835 (RazorDirectiveAttribute_t943675864F4EADEAC34BD4083E2F3110F60EECDD * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CDirectiveU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void JetBrains.Annotations.RazorDirectiveAttribute::set_Directive(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RazorDirectiveAttribute_set_Directive_m585309C82B7729B79F30CD2093EE3EFE55F24A9E (RazorDirectiveAttribute_t943675864F4EADEAC34BD4083E2F3110F60EECDD * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CDirectiveU3Ek__BackingField_0(L_0);
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
// System.Void JetBrains.Annotations.RazorHelperCommonAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RazorHelperCommonAttribute__ctor_m4744F69905DDABD55B3997A3E2ABB9FBEEF299DF (RazorHelperCommonAttribute_t2B210F56FDE5BB4D1F8727EA8BAB43106FDC7DF7 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void JetBrains.Annotations.RazorImportNamespaceAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RazorImportNamespaceAttribute__ctor_m2D54F6E5D9F1B8C4C1BFC0830988454DBAEC1AC0 (RazorImportNamespaceAttribute_t6ECF9AF0F0E5BABE7877D542DBB1E4956544544E * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		RazorImportNamespaceAttribute_set_Name_mB35999ED2C1336F60164FF7C21090D0FAD912AC0_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String JetBrains.Annotations.RazorImportNamespaceAttribute::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RazorImportNamespaceAttribute_get_Name_m5C90A926287238ED84D36E90D0B97DF7E275BFF1 (RazorImportNamespaceAttribute_t6ECF9AF0F0E5BABE7877D542DBB1E4956544544E * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void JetBrains.Annotations.RazorImportNamespaceAttribute::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RazorImportNamespaceAttribute_set_Name_mB35999ED2C1336F60164FF7C21090D0FAD912AC0 (RazorImportNamespaceAttribute_t6ECF9AF0F0E5BABE7877D542DBB1E4956544544E * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_0(L_0);
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
// System.Void JetBrains.Annotations.RazorInjectionAttribute::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RazorInjectionAttribute__ctor_m9E62BC06E60709DB483C054260006CED2E17A259 (RazorInjectionAttribute_t31349804B2E881DA010DABB2743459FE32CF6F64 * __this, String_t* ___type0, String_t* ___fieldName1, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___type0;
		RazorInjectionAttribute_set_Type_m9C0A40106DECB6D32DC74A372EFF018C98983E4B_inline(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___fieldName1;
		RazorInjectionAttribute_set_FieldName_m6F3F582076401EFAC6139CA82251733F8C0D6A20_inline(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String JetBrains.Annotations.RazorInjectionAttribute::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RazorInjectionAttribute_get_Type_mB7BB17B694E9C7E306BAAEB5B645D23876FB4AA4 (RazorInjectionAttribute_t31349804B2E881DA010DABB2743459FE32CF6F64 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CTypeU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void JetBrains.Annotations.RazorInjectionAttribute::set_Type(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RazorInjectionAttribute_set_Type_m9C0A40106DECB6D32DC74A372EFF018C98983E4B (RazorInjectionAttribute_t31349804B2E881DA010DABB2743459FE32CF6F64 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CTypeU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String JetBrains.Annotations.RazorInjectionAttribute::get_FieldName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RazorInjectionAttribute_get_FieldName_m8BB14E00C72544CC87BE3282F77E1D2E9D54C69B (RazorInjectionAttribute_t31349804B2E881DA010DABB2743459FE32CF6F64 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CFieldNameU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void JetBrains.Annotations.RazorInjectionAttribute::set_FieldName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RazorInjectionAttribute_set_FieldName_m6F3F582076401EFAC6139CA82251733F8C0D6A20 (RazorInjectionAttribute_t31349804B2E881DA010DABB2743459FE32CF6F64 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CFieldNameU3Ek__BackingField_1(L_0);
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
// System.Void JetBrains.Annotations.RazorLayoutAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RazorLayoutAttribute__ctor_mF9F5B36E80039CE4E264F5C681A3EF9E1162957C (RazorLayoutAttribute_t37C9039AF772469049A6E51775703D0E0657BDAA * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void JetBrains.Annotations.RazorPageBaseTypeAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RazorPageBaseTypeAttribute__ctor_mFFD8F913C5737795807EF6B9C1449E3F11FD2AD2 (RazorPageBaseTypeAttribute_t3FD1DFA391FD51100312D02ADA84FBBFB9D7A651 * __this, String_t* ___baseType0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___baseType0;
		RazorPageBaseTypeAttribute_set_BaseType_m446DA36FEB6DB0FA512E64FFD7FAD31ECE734404_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void JetBrains.Annotations.RazorPageBaseTypeAttribute::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RazorPageBaseTypeAttribute__ctor_m2D6041DA1B278A68A29217DD9C5854F19E02D4F4 (RazorPageBaseTypeAttribute_t3FD1DFA391FD51100312D02ADA84FBBFB9D7A651 * __this, String_t* ___baseType0, String_t* ___pageName1, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___baseType0;
		RazorPageBaseTypeAttribute_set_BaseType_m446DA36FEB6DB0FA512E64FFD7FAD31ECE734404_inline(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___pageName1;
		RazorPageBaseTypeAttribute_set_PageName_m9B746B861156A57C04DE64ABE622F88C11DA6540_inline(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String JetBrains.Annotations.RazorPageBaseTypeAttribute::get_BaseType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RazorPageBaseTypeAttribute_get_BaseType_m548F9D99A743A000FA8145AE7DD30CD0BF9018D1 (RazorPageBaseTypeAttribute_t3FD1DFA391FD51100312D02ADA84FBBFB9D7A651 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CBaseTypeU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void JetBrains.Annotations.RazorPageBaseTypeAttribute::set_BaseType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RazorPageBaseTypeAttribute_set_BaseType_m446DA36FEB6DB0FA512E64FFD7FAD31ECE734404 (RazorPageBaseTypeAttribute_t3FD1DFA391FD51100312D02ADA84FBBFB9D7A651 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CBaseTypeU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String JetBrains.Annotations.RazorPageBaseTypeAttribute::get_PageName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RazorPageBaseTypeAttribute_get_PageName_mD6BFA1385D9B3C6958D94E98743AD53DBC4D6841 (RazorPageBaseTypeAttribute_t3FD1DFA391FD51100312D02ADA84FBBFB9D7A651 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CPageNameU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void JetBrains.Annotations.RazorPageBaseTypeAttribute::set_PageName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RazorPageBaseTypeAttribute_set_PageName_m9B746B861156A57C04DE64ABE622F88C11DA6540 (RazorPageBaseTypeAttribute_t3FD1DFA391FD51100312D02ADA84FBBFB9D7A651 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CPageNameU3Ek__BackingField_1(L_0);
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
// System.Void JetBrains.Annotations.RazorSectionAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RazorSectionAttribute__ctor_mE1FA30724DC83472BE21CE4AA90567D3C4EC35C6 (RazorSectionAttribute_tB43478DF4831017D096125DD727A8B70B93B194C * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void JetBrains.Annotations.RazorWriteLiteralMethodAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RazorWriteLiteralMethodAttribute__ctor_mF1D94D2EF53219B3E3B87DB1C393F062C6C9C9DC (RazorWriteLiteralMethodAttribute_tEFFC6AF0FBE401D1AB95E081C5914D6DEA2165CA * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void JetBrains.Annotations.RazorWriteMethodAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RazorWriteMethodAttribute__ctor_m01505E5432A69CFFB23572B2AC7F6250CDC8E306 (RazorWriteMethodAttribute_t10030D82E14AB68920BBFAAFD867918CB18E5C26 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void JetBrains.Annotations.RazorWriteMethodParameterAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RazorWriteMethodParameterAttribute__ctor_m442EDEAB1B1033D0B19BE4889C7765353F0D4A0C (RazorWriteMethodParameterAttribute_tB38269FF3A960AA7105BF2297988471EAA11F07F * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void JetBrains.Annotations.RegexPatternAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexPatternAttribute__ctor_mB58DA1A1C512723ECB91CB977019A5C0AFADE647 (RegexPatternAttribute_t775244BB3AF4FB5DE7DCD3C5EBEAF3D4A7CAC67A * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void JetBrains.Annotations.SourceTemplateAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SourceTemplateAttribute__ctor_m95178673CCB41A2E1FDF7C7FCF3B5007340B0BAB (SourceTemplateAttribute_t9EC542871BCA2EB9635F8D7585821B9590C49CCA * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void JetBrains.Annotations.StringFormatMethodAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringFormatMethodAttribute__ctor_m9E001FEBC73E1B415CDC4F1DB65C849B18946106 (StringFormatMethodAttribute_t5C06E2FCA4DC5B963F6828463C37C2324B7B13BA * __this, String_t* ___formatParameterName0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___formatParameterName0;
		StringFormatMethodAttribute_set_FormatParameterName_m9719DED540801ACEADFF120124494A5A3C21EF34_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String JetBrains.Annotations.StringFormatMethodAttribute::get_FormatParameterName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringFormatMethodAttribute_get_FormatParameterName_m9C6CCD422C24713F778EA654985553E56E0EE7F4 (StringFormatMethodAttribute_t5C06E2FCA4DC5B963F6828463C37C2324B7B13BA * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CFormatParameterNameU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void JetBrains.Annotations.StringFormatMethodAttribute::set_FormatParameterName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringFormatMethodAttribute_set_FormatParameterName_m9719DED540801ACEADFF120124494A5A3C21EF34 (StringFormatMethodAttribute_t5C06E2FCA4DC5B963F6828463C37C2324B7B13BA * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CFormatParameterNameU3Ek__BackingField_0(L_0);
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
// System.Void JetBrains.Annotations.TerminatesProgramAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerminatesProgramAttribute__ctor_m5A89E87B1EFF67C877ACC11CD2E277CBDAD76D53 (TerminatesProgramAttribute_t73F78A9D717DCA2598A6484AD4E053E839535380 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void JetBrains.Annotations.UsedImplicitlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UsedImplicitlyAttribute__ctor_m18453A48BE23E1D4E22591569B3B793F659E2239 (UsedImplicitlyAttribute_tC5D03412CABF6E0A3A6AA73BB4A685F8D670FD90 * __this, const RuntimeMethod* method)
{
	{
		UsedImplicitlyAttribute__ctor_m30AC66867620389BDA3CA7C467D725180570F6C8(__this, 7, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void JetBrains.Annotations.UsedImplicitlyAttribute::.ctor(JetBrains.Annotations.ImplicitUseKindFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UsedImplicitlyAttribute__ctor_m7668A6ADE2B38288AD673BF36F3ED6AE278AC1D1 (UsedImplicitlyAttribute_tC5D03412CABF6E0A3A6AA73BB4A685F8D670FD90 * __this, int32_t ___useKindFlags0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___useKindFlags0;
		UsedImplicitlyAttribute__ctor_m30AC66867620389BDA3CA7C467D725180570F6C8(__this, L_0, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void JetBrains.Annotations.UsedImplicitlyAttribute::.ctor(JetBrains.Annotations.ImplicitUseTargetFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UsedImplicitlyAttribute__ctor_m9DCA97CCD2BE8169244151B8829DD8D25429BF11 (UsedImplicitlyAttribute_tC5D03412CABF6E0A3A6AA73BB4A685F8D670FD90 * __this, int32_t ___targetFlags0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___targetFlags0;
		UsedImplicitlyAttribute__ctor_m30AC66867620389BDA3CA7C467D725180570F6C8(__this, 7, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void JetBrains.Annotations.UsedImplicitlyAttribute::.ctor(JetBrains.Annotations.ImplicitUseKindFlags,JetBrains.Annotations.ImplicitUseTargetFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UsedImplicitlyAttribute__ctor_m30AC66867620389BDA3CA7C467D725180570F6C8 (UsedImplicitlyAttribute_tC5D03412CABF6E0A3A6AA73BB4A685F8D670FD90 * __this, int32_t ___useKindFlags0, int32_t ___targetFlags1, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___useKindFlags0;
		UsedImplicitlyAttribute_set_UseKindFlags_m4FCF23B581900781596BAD516ACED1CFCBB55F58_inline(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___targetFlags1;
		UsedImplicitlyAttribute_set_TargetFlags_mD4016F9B90482FCEE3DC412F88E1A08980470930_inline(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// JetBrains.Annotations.ImplicitUseKindFlags JetBrains.Annotations.UsedImplicitlyAttribute::get_UseKindFlags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UsedImplicitlyAttribute_get_UseKindFlags_mCD02A87D58C96CCE58AC5FF87DB9A3CD7B15C20D (UsedImplicitlyAttribute_tC5D03412CABF6E0A3A6AA73BB4A685F8D670FD90 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CUseKindFlagsU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void JetBrains.Annotations.UsedImplicitlyAttribute::set_UseKindFlags(JetBrains.Annotations.ImplicitUseKindFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UsedImplicitlyAttribute_set_UseKindFlags_m4FCF23B581900781596BAD516ACED1CFCBB55F58 (UsedImplicitlyAttribute_tC5D03412CABF6E0A3A6AA73BB4A685F8D670FD90 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CUseKindFlagsU3Ek__BackingField_0(L_0);
		return;
	}
}
// JetBrains.Annotations.ImplicitUseTargetFlags JetBrains.Annotations.UsedImplicitlyAttribute::get_TargetFlags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UsedImplicitlyAttribute_get_TargetFlags_m1D8AD9171BD56817A24E0208F51413FA0059CF30 (UsedImplicitlyAttribute_tC5D03412CABF6E0A3A6AA73BB4A685F8D670FD90 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CTargetFlagsU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void JetBrains.Annotations.UsedImplicitlyAttribute::set_TargetFlags(JetBrains.Annotations.ImplicitUseTargetFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UsedImplicitlyAttribute_set_TargetFlags_mD4016F9B90482FCEE3DC412F88E1A08980470930 (UsedImplicitlyAttribute_tC5D03412CABF6E0A3A6AA73BB4A685F8D670FD90 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTargetFlagsU3Ek__BackingField_1(L_0);
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
// System.Void JetBrains.Annotations.ValueProviderAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueProviderAttribute__ctor_m4709CBD4A8FB78FF779B02D859625694D083D4EE (ValueProviderAttribute_t340091F92CE5A4F428B8AB7194E66DBF94549B8E * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		ValueProviderAttribute_set_Name_m91595AB26908980A1730C9398A696ADDF89C265A_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String JetBrains.Annotations.ValueProviderAttribute::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueProviderAttribute_get_Name_mA9F2D274501128837EB8FB6A5F58B8E4831CAD63 (ValueProviderAttribute_t340091F92CE5A4F428B8AB7194E66DBF94549B8E * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void JetBrains.Annotations.ValueProviderAttribute::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueProviderAttribute_set_Name_m91595AB26908980A1730C9398A696ADDF89C265A (ValueProviderAttribute_t340091F92CE5A4F428B8AB7194E66DBF94549B8E * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_0(L_0);
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
// System.Void JetBrains.Annotations.XamlItemBindingOfItemsControlAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XamlItemBindingOfItemsControlAttribute__ctor_m325C61458F2EC71686C613144E6F78FBC0DA6C03 (XamlItemBindingOfItemsControlAttribute_tB97613DD893E4A4627461FFD3D529B5297BE303D * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void JetBrains.Annotations.XamlItemsControlAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XamlItemsControlAttribute__ctor_m0989663E4DD41D9E8D2434F49D68721D6543B308 (XamlItemsControlAttribute_t14B1E1D34F9B2558B18C184B0059CB482AF9AD8F * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void Zenject.ZenFactoryMethod::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZenFactoryMethod__ctor_mAFA2E3D682D76D93448249BC4F5B6D17623F3CC7 (ZenFactoryMethod_t06221E77375E311219AD5AA13FF570D92D10165E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Object Zenject.ZenFactoryMethod::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ZenFactoryMethod_Invoke_mAA682A419D4442822AEC54F7070014F7E3B0C3E2 (ZenFactoryMethod_t06221E77375E311219AD5AA13FF570D92D10165E * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	RuntimeObject * result = NULL;
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
		if (!currentDelegate->get_method_is_virtual_10())
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
				typedef RuntimeObject * (*FunctionPointerType) (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___args0, targetMethod);
			}
			else
			{
				// closed
				typedef RuntimeObject * (*FunctionPointerType) (void*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___args0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (currentDelegate->get_method_is_virtual_10())
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, ___args0);
					else
						result = GenericVirtualFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, ___args0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___args0);
					else
						result = VirtualFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___args0);
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___args0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef RuntimeObject * (*FunctionPointerType) (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___args0, targetMethod);
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (void*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___args0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Zenject.ZenFactoryMethod::BeginInvoke(System.Object[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZenFactoryMethod_BeginInvoke_m4B37B00A2ED4458DC9449FE8ADBC3737070D495A (ZenFactoryMethod_t06221E77375E311219AD5AA13FF570D92D10165E * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___args0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Object Zenject.ZenFactoryMethod::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ZenFactoryMethod_EndInvoke_mE31D975D254E22B5536EF95657363156678D6EB2 (ZenFactoryMethod_t06221E77375E311219AD5AA13FF570D92D10165E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Zenject.ZenInjectMethod::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZenInjectMethod__ctor_mF0B88DE3D0FE0AB199C8EA2564D04568765DBF8B (ZenInjectMethod_t8C0F900438CFC893D25D723CB89F66933250EAAA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Zenject.ZenInjectMethod::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZenInjectMethod_Invoke_m266A5D543B6241F3C81D696E44DB1482BB5CE6E8 (ZenInjectMethod_t8C0F900438CFC893D25D723CB89F66933250EAAA * __this, RuntimeObject * ___obj0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
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
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___obj0, ___args1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, ___args1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (currentDelegate->get_method_is_virtual_10())
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(targetMethod, ___obj0, ___args1);
					else
						GenericVirtualActionInvoker1< ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(targetMethod, ___obj0, ___args1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___obj0, ___args1);
					else
						VirtualActionInvoker1< ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___obj0, ___args1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___obj0, ___args1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___obj0, ___args1, targetMethod);
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, ___args1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Zenject.ZenInjectMethod::BeginInvoke(System.Object,System.Object[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZenInjectMethod_BeginInvoke_m32141F89BEFC85591CE252FB9778BBBAF967838F (ZenInjectMethod_t8C0F900438CFC893D25D723CB89F66933250EAAA * __this, RuntimeObject * ___obj0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___obj0;
	__d_args[1] = ___args1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Zenject.ZenInjectMethod::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZenInjectMethod_EndInvoke_m66049C65B340868DD6400156E0790A932A80D0B7 (ZenInjectMethod_t8C0F900438CFC893D25D723CB89F66933250EAAA * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Zenject.ZenMemberSetterMethod::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZenMemberSetterMethod__ctor_m9EBC2014D248F00E6CDB3BBD03F9F221C3EBAAC4 (ZenMemberSetterMethod_t94AA8A98A9E78694F27DE8D0D46616E2E830C3FA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Zenject.ZenMemberSetterMethod::Invoke(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZenMemberSetterMethod_Invoke_m21972A9F002B42E18F1A356FC727683A66F521FB (ZenMemberSetterMethod_t94AA8A98A9E78694F27DE8D0D46616E2E830C3FA * __this, RuntimeObject * ___obj0, RuntimeObject * ___value1, const RuntimeMethod* method)
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
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___obj0, ___value1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, ___value1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (currentDelegate->get_method_is_virtual_10())
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___obj0, ___value1);
					else
						GenericVirtualActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___obj0, ___value1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___obj0, ___value1);
					else
						VirtualActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___obj0, ___value1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___obj0, ___value1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___obj0, ___value1, targetMethod);
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, ___value1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Zenject.ZenMemberSetterMethod::BeginInvoke(System.Object,System.Object,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZenMemberSetterMethod_BeginInvoke_m791ACCF0F5A5F8122CB042D1F94F3EF0D071C807 (ZenMemberSetterMethod_t94AA8A98A9E78694F27DE8D0D46616E2E830C3FA * __this, RuntimeObject * ___obj0, RuntimeObject * ___value1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___obj0;
	__d_args[1] = ___value1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Zenject.ZenMemberSetterMethod::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZenMemberSetterMethod_EndInvoke_m0B2917960472BD8A755679004995F6BF5805D0B8 (ZenMemberSetterMethod_t94AA8A98A9E78694F27DE8D0D46616E2E830C3FA * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Zenject.ZenjectAllowDuringValidationAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZenjectAllowDuringValidationAttribute__ctor_m133579FCD402E06218D16AC409F42BEF5555EB58 (ZenjectAllowDuringValidationAttribute_t2071D5D5475C3AAA807702A85BF193CE387CF17E * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void Zenject.InjectTypeInfo/InjectConstructorInfo::.ctor(Zenject.ZenFactoryMethod,Zenject.InjectableInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InjectConstructorInfo__ctor_m084E4C8A5A1C20F205B6D5556484F1D3CD06FC0D (InjectConstructorInfo_tECB8760EBE312544A1D3860F7737B2AFADCD7908 * __this, ZenFactoryMethod_t06221E77375E311219AD5AA13FF570D92D10165E * ___factory0, InjectableInfoU5BU5D_tE39C90F66177150812A88425C78BBBAA65A55BEC* ___parameters1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		InjectableInfoU5BU5D_tE39C90F66177150812A88425C78BBBAA65A55BEC* L_0 = ___parameters1;
		__this->set_Parameters_1(L_0);
		ZenFactoryMethod_t06221E77375E311219AD5AA13FF570D92D10165E * L_1 = ___factory0;
		__this->set_Factory_0(L_1);
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
// System.Void Zenject.InjectTypeInfo/InjectMemberInfo::.ctor(Zenject.ZenMemberSetterMethod,Zenject.InjectableInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InjectMemberInfo__ctor_m6080F8C914084FCF579484EE391F716336969A92 (InjectMemberInfo_t91776F61B901397B8B0EB4930F3354947D5D391A * __this, ZenMemberSetterMethod_t94AA8A98A9E78694F27DE8D0D46616E2E830C3FA * ___setter0, InjectableInfo_tFFB881101BEB9ED7BB1E856224E096C168EF76F5 * ___info1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		ZenMemberSetterMethod_t94AA8A98A9E78694F27DE8D0D46616E2E830C3FA * L_0 = ___setter0;
		__this->set_Setter_0(L_0);
		InjectableInfo_tFFB881101BEB9ED7BB1E856224E096C168EF76F5 * L_1 = ___info1;
		__this->set_Info_1(L_1);
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
// System.Void Zenject.InjectTypeInfo/InjectMethodInfo::.ctor(Zenject.ZenInjectMethod,Zenject.InjectableInfo[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InjectMethodInfo__ctor_m773095D021CB357934D1C49BD88BA4B7105D29CA (InjectMethodInfo_tCFB365E8D1D6D2FDBE5A4E2581FC43B66CD22C3C * __this, ZenInjectMethod_t8C0F900438CFC893D25D723CB89F66933250EAAA * ___action0, InjectableInfoU5BU5D_tE39C90F66177150812A88425C78BBBAA65A55BEC* ___parameters1, String_t* ___name2, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		InjectableInfoU5BU5D_tE39C90F66177150812A88425C78BBBAA65A55BEC* L_0 = ___parameters1;
		__this->set_Parameters_2(L_0);
		ZenInjectMethod_t8C0F900438CFC893D25D723CB89F66933250EAAA * L_1 = ___action0;
		__this->set_Action_1(L_1);
		String_t* L_2 = ___name2;
		__this->set_Name_0(L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AspChildControlTypeAttribute_set_TagName_m156E5FCF92A907E19E17970E0C1B5E42697A85DD_inline (AspChildControlTypeAttribute_t49A97CE0D26CF6E5E0E908E25B04F3925302E1FD * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CTagNameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AspChildControlTypeAttribute_set_ControlType_m485B880AF0639060B766227662500776699DCECE_inline (AspChildControlTypeAttribute_t49A97CE0D26CF6E5E0E908E25B04F3925302E1FD * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___value0;
		__this->set_U3CControlTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AspMvcActionAttribute_set_AnonymousProperty_m999CAFD001E5E890F7C32BD3D1C92D30A315D22F_inline (AspMvcActionAttribute_t1AA0F64AB4FB867CEE224B5DEF970716B39CABBD * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CAnonymousPropertyU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AspMvcAreaAttribute_set_AnonymousProperty_mA5CFB5C122171BA51423230B8DDB7AAEEAF598C4_inline (AspMvcAreaAttribute_t0E39CB66C13C812B1E3409B2FD3BC7F85BDA2EA4 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CAnonymousPropertyU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AspMvcAreaMasterLocationFormatAttribute_set_Format_m150415E11FB197BA16600DAB54CCC9555500B36F_inline (AspMvcAreaMasterLocationFormatAttribute_tA876F76E524EC79F498B59D831D4A867D1689497 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CFormatU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AspMvcAreaPartialViewLocationFormatAttribute_set_Format_mF77D707DD20740E799E85E38EA3C1DD3CF56B21C_inline (AspMvcAreaPartialViewLocationFormatAttribute_t57222AD01A7A151F89DDFBAF11D70A2CD983ECA4 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CFormatU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AspMvcAreaViewLocationFormatAttribute_set_Format_m559DFE1A631DE9E80FF6D72E802755E9F0D3781C_inline (AspMvcAreaViewLocationFormatAttribute_t757C424B0E26E0F79D3F8465F66DE0B8B2B8F6D7 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CFormatU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AspMvcControllerAttribute_set_AnonymousProperty_mA13DD21CE90AA9828C8DADE0CC146BC10FC42067_inline (AspMvcControllerAttribute_t44AC2AF14A6C0038F0047A9145A43474B63C0A32 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CAnonymousPropertyU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AspMvcMasterLocationFormatAttribute_set_Format_m5E554A6173E67A9144AA53080E9779A2319B8E9C_inline (AspMvcMasterLocationFormatAttribute_t34C965516F029FE3B2A99634953E5695F9C0214B * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CFormatU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AspMvcPartialViewLocationFormatAttribute_set_Format_mACBE7B222CC6C907C8804658CA9B1D758E573586_inline (AspMvcPartialViewLocationFormatAttribute_t2F1D639624F49B8FE32AD966DE7056E5C2270246 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CFormatU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AspMvcViewLocationFormatAttribute_set_Format_m10B416156155DE3FA8A1A8C589CDBF71E81BF2EA_inline (AspMvcViewLocationFormatAttribute_t921715B41EE58D06C820B2916BF6D15709ACC0FB * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CFormatU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AspRequiredAttributeAttribute_set_Attribute_m99669AE12EC216ADD68B4C0645B397A43BD41BA3_inline (AspRequiredAttributeAttribute_tB5767687A8A0598AF783288D7837CA6F3E9FD547 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CAttributeU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AspTypePropertyAttribute_set_CreateConstructorReferences_m8102DD2DD98586BAD330AAAE41263B1CF0929DCF_inline (AspTypePropertyAttribute_tB5EC5DF211B5ABF34217E219C534A9F3BD97DBF6 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CCreateConstructorReferencesU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AssertionConditionAttribute_set_ConditionType_m2FCF15E2CF718F273F9662E140EADF40A6E7002B_inline (AssertionConditionAttribute_tA00B8F2B72E746630D065B41EF51B53F82DB0BEB * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CConditionTypeU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseTypeRequiredAttribute_set_BaseType_m1056C9E9710CFC6686E566D6759D082149DDC385_inline (BaseTypeRequiredAttribute_t229CD06DD288A6CC18D3D73901C7895FB75F171E * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___value0;
		__this->set_U3CBaseTypeU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CollectionAccessAttribute_set_CollectionAccessType_mE21703CF151381AFF698C80DA5566BECA3A23D30_inline (CollectionAccessAttribute_t95980E60D6D0FDA3EB0A757DD62BE4ED5505F104 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CCollectionAccessTypeU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ContractAnnotationAttribute_set_Contract_mC114BE2DB9C90A208FD0A8CA00260572C4C5BEE9_inline (ContractAnnotationAttribute_t662061C8A440CEE29A0551A18371537541300293 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CContractU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ContractAnnotationAttribute_set_ForceFullStates_m827EE605B108780C57D65365F080937534AE396D_inline (ContractAnnotationAttribute_t662061C8A440CEE29A0551A18371537541300293 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CForceFullStatesU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HtmlAttributeValueAttribute_set_Name_mC5B5F78C06ACD174C3A9BA329AB9E942366EBC48_inline (HtmlAttributeValueAttribute_t10B5BF21F421C7AB034A44845E84663710144E6A * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HtmlElementAttributesAttribute_set_Name_m71B880D555F6C3DFE6646BC9BAC0EE4F849E82FA_inline (HtmlElementAttributesAttribute_t1A2629419BE6B1A61AE33540D9827FD90F92B151 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InjectAttributeBase_set_Source_mD97D89723EAB215E31CC8E2294BD1EF51EA8EEB7_inline (InjectAttributeBase_tBEA6A6FCBD9B487AAF830C7FD5F089DE74551DC7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CSourceU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InjectAttributeBase_set_Optional_mAF89F38B4E798795F75A02F686CB994991D1DB7B_inline (InjectAttributeBase_tBEA6A6FCBD9B487AAF830C7FD5F089DE74551DC7 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3COptionalU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LocalizationRequiredAttribute_set_Required_mFCC6AEA0E93135CCEB3CE20706301202BDA4DFB1_inline (LocalizationRequiredAttribute_t66D489EB8A17C5151FF39FAAA1F784E5E2B81681 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CRequiredU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeansImplicitUseAttribute_set_UseKindFlags_m6E768467783960F44D62CAA1B44D628740011E67_inline (MeansImplicitUseAttribute_t68C979918C00E35B6B176826596CA3FF5295743E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CUseKindFlagsU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeansImplicitUseAttribute_set_TargetFlags_mC9971FCA8FE8F240D283C2935E6309AD45B2A579_inline (MeansImplicitUseAttribute_t68C979918C00E35B6B176826596CA3FF5295743E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTargetFlagsU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MustUseReturnValueAttribute_set_Justification_mF8A88353E3B283E27884F0337D5F80D44BFD94A8_inline (MustUseReturnValueAttribute_t649AC1C4D27CBC9BF4E22DC4B15D00D7EE845DD3 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CJustificationU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NotifyPropertyChangedInvocatorAttribute_set_ParameterName_m4FD1BECC587E309924C9B833CE8BE6DC3728AD13_inline (NotifyPropertyChangedInvocatorAttribute_t58A7B14D9749D65C80751BFBA1B83CD6FE69CD05 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CParameterNameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PathReferenceAttribute_set_BasePath_m13959A654A26A3326EC586995909EC4CD5B1BB11_inline (PathReferenceAttribute_t041CA1FB39BB1371780D4A942BA71171F43B5BAE * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CBasePathU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PublicAPIAttribute_set_Comment_m9F2ED18272CA0F17A403831B1E4C595BBE22CAE3_inline (PublicAPIAttribute_t92C190C0D7EF5A6216EF4C2D09A48190D77BAC90 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CCommentU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RazorDirectiveAttribute_set_Directive_m585309C82B7729B79F30CD2093EE3EFE55F24A9E_inline (RazorDirectiveAttribute_t943675864F4EADEAC34BD4083E2F3110F60EECDD * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CDirectiveU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RazorImportNamespaceAttribute_set_Name_mB35999ED2C1336F60164FF7C21090D0FAD912AC0_inline (RazorImportNamespaceAttribute_t6ECF9AF0F0E5BABE7877D542DBB1E4956544544E * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RazorInjectionAttribute_set_Type_m9C0A40106DECB6D32DC74A372EFF018C98983E4B_inline (RazorInjectionAttribute_t31349804B2E881DA010DABB2743459FE32CF6F64 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CTypeU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RazorInjectionAttribute_set_FieldName_m6F3F582076401EFAC6139CA82251733F8C0D6A20_inline (RazorInjectionAttribute_t31349804B2E881DA010DABB2743459FE32CF6F64 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CFieldNameU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RazorPageBaseTypeAttribute_set_BaseType_m446DA36FEB6DB0FA512E64FFD7FAD31ECE734404_inline (RazorPageBaseTypeAttribute_t3FD1DFA391FD51100312D02ADA84FBBFB9D7A651 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CBaseTypeU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RazorPageBaseTypeAttribute_set_PageName_m9B746B861156A57C04DE64ABE622F88C11DA6540_inline (RazorPageBaseTypeAttribute_t3FD1DFA391FD51100312D02ADA84FBBFB9D7A651 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CPageNameU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StringFormatMethodAttribute_set_FormatParameterName_m9719DED540801ACEADFF120124494A5A3C21EF34_inline (StringFormatMethodAttribute_t5C06E2FCA4DC5B963F6828463C37C2324B7B13BA * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CFormatParameterNameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UsedImplicitlyAttribute_set_UseKindFlags_m4FCF23B581900781596BAD516ACED1CFCBB55F58_inline (UsedImplicitlyAttribute_tC5D03412CABF6E0A3A6AA73BB4A685F8D670FD90 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CUseKindFlagsU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UsedImplicitlyAttribute_set_TargetFlags_mD4016F9B90482FCEE3DC412F88E1A08980470930_inline (UsedImplicitlyAttribute_tC5D03412CABF6E0A3A6AA73BB4A685F8D670FD90 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTargetFlagsU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueProviderAttribute_set_Name_m91595AB26908980A1730C9398A696ADDF89C265A_inline (ValueProviderAttribute_t340091F92CE5A4F428B8AB7194E66DBF94549B8E * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_0(L_0);
		return;
	}
}
