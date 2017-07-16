#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GvrBatteryIndicator1573734297.h"
#include "AssemblyU2DCSharp_GvrController1602869021.h"
#include "AssemblyU2DCSharp_GvrControllerVisual3328916665.h"
#include "AssemblyU2DCSharp_GvrControllerVisualManager1857939020.h"
#include "AssemblyU2DCSharp_GvrPointerManager2205699129.h"
#include "AssemblyU2DCSharp_GvrRecenterOnlyController2745329441.h"
#include "AssemblyU2DCSharp_GvrTooltip801170144.h"
#include "AssemblyU2DCSharp_Gvr_Internal_AndroidNativeContro1389606029.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorClientSocke2001911543.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorConfig616150261.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorConfig_Mode1624619217.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorGyroEvent1858389926.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorAccelEvent621139879.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorTouchEvent1122923020.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorTouchEvent_A936529327.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorTouchEvent_3000685002.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorOrientation4153005117.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorButtonEvent156276569.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorButtonEvent4043921137.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager3364249716.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager_OnG1804908545.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager_OnA1967739812.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager_OnT4143287487.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager_OnOr602701282.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager_OnBu358370788.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager_U3C4253624923.h"
#include "AssemblyU2DCSharp_proto_Proto_PhoneEvent3882078222.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent2572128318.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types3648109718.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_Type1530480861.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_MotionEve4072706903.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_MotionEve1262104803.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_MotionEve1211758263.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_MotionEve2701542133.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_MotionEve3452538341.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_GyroscopeE182225200.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_GyroscopeEv33558588.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_Accelerom1893725728.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_Accelerom1480486140.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_DepthMapE1516604558.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_DepthMapE3483346914.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_Orientati2038376807.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_Orientati2561526853.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_KeyEvent639576718.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_KeyEvent_2056133158.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Builder2537253112.h"
#include "AssemblyU2DCSharp_GvrBasePointer2150122635.h"
#include "AssemblyU2DCSharp_GvrBasePointerRaycaster1189534163.h"
#include "AssemblyU2DCSharp_GvrBasePointerRaycaster_RaycastM3965091944.h"
#include "AssemblyU2DCSharp_GvrExecuteEventsExtension3083691626.h"
#include "AssemblyU2DCSharp_GvrPointerGraphicRaycaster1649506702.h"
#include "AssemblyU2DCSharp_GvrPointerGraphicRaycaster_Block4215129352.h"
#include "AssemblyU2DCSharp_GvrPointerPhysicsRaycaster2558158517.h"
#include "AssemblyU2DCSharp_GvrPointerScrollInput4200958609.h"
#include "AssemblyU2DCSharp_GvrPointerScrollInput_ScrollInfo361410461.h"
#include "AssemblyU2DCSharp_GvrAllEventsTrigger2022443331.h"
#include "AssemblyU2DCSharp_GvrAllEventsTrigger_TriggerEvent1749878144.h"
#include "AssemblyU2DCSharp_GvrAllEventsTrigger_U3CAddListen1446988883.h"
#include "AssemblyU2DCSharp_GvrEventExecutor1694572606.h"
#include "AssemblyU2DCSharp_GvrEventExecutor_EventDelegate3945253882.h"
#include "AssemblyU2DCSharp_GvrPointerInputModule1603976810.h"
#include "AssemblyU2DCSharp_GvrPointerInputModuleImpl2072755720.h"
#include "AssemblyU2DCSharp_GvrCardboardHelpers336308462.h"
#include "AssemblyU2DCSharp_GvrEditorEmulator3806821253.h"
#include "AssemblyU2DCSharp_GvrUnitySdkVersion4210256426.h"
#include "AssemblyU2DCSharp_GvrKeyboardEvent1314471484.h"
#include "AssemblyU2DCSharp_GvrKeyboardError2067079702.h"
#include "AssemblyU2DCSharp_GvrKeyboardInputMode2940030961.h"
#include "AssemblyU2DCSharp_GvrKeyboard598184456.h"
#include "AssemblyU2DCSharp_GvrKeyboard_StandardCallback1386534425.h"
#include "AssemblyU2DCSharp_GvrKeyboard_EditTextCallback661057455.h"
#include "AssemblyU2DCSharp_GvrKeyboard_ErrorCallback1270209242.h"
#include "AssemblyU2DCSharp_GvrKeyboard_KeyboardCallback4001681579.h"
#include "AssemblyU2DCSharp_GvrKeyboard_U3CExecuterU3Ec__Ite1374321097.h"
#include "AssemblyU2DCSharp_GvrKeyboardDelegateBase1914180906.h"
#include "AssemblyU2DCSharp_Gvr_Internal_KeyboardProviderFac1628169604.h"
#include "AssemblyU2DCSharp_Gvr_Internal_AndroidNativeKeyboa2887228014.h"
#include "AssemblyU2DCSharp_Gvr_Internal_AndroidNativeKeyboa1124886566.h"
#include "AssemblyU2DCSharp_Gvr_Internal_AndroidNativeKeyboa2743662910.h"
#include "AssemblyU2DCSharp_Gvr_Internal_DummyKeyboardProvid1674367534.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorKeyboardPro2695781675.h"
#include "AssemblyU2DCSharp_KeyboardState3308394474.h"
#include "AssemblyU2DCSharp_Pose3D3872859958.h"
#include "AssemblyU2DCSharp_MutablePose3D1015643808.h"
#include "AssemblyU2DCSharp_GvrBaseControllerVisual4093442088.h"
#include "AssemblyU2DCSharp_GvrDropdown2234606196.h"
#include "AssemblyU2DCSharp_GvrLaserPointer2879974839.h"
#include "AssemblyU2DCSharp_GvrLaserPointerImpl2141976067.h"
#include "AssemblyU2DCSharp_GvrReticlePointer2836438988.h"
#include "AssemblyU2DCSharp_GvrReticlePointerImpl3911945438.h"
#include "AssemblyU2DCSharp_GvrTouchPoint3050416034.h"
#include "AssemblyU2DCSharp_GvrActivityHelper1610839920.h"
#include "AssemblyU2DCSharp_GvrDaydreamApi4123913920.h"
#include "AssemblyU2DCSharp_GvrFPS750935016.h"
#include "AssemblyU2DCSharp_GvrIntent542233401.h"







#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2200 = { sizeof (GvrBatteryIndicator_t1573734297), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2201 = { sizeof (GvrController_t1602869021), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2202 = { sizeof (GvrControllerVisual_t3328916665), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2203 = { sizeof (GvrControllerVisualManager_t1857939020), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2204 = { sizeof (GvrPointerManager_t2205699129), -1, sizeof(GvrPointerManager_t2205699129_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2204[2] = 
{
	GvrPointerManager_t2205699129_StaticFields::get_offset_of_instance_2(),
	GvrPointerManager_t2205699129::get_offset_of_pointer_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2205 = { sizeof (GvrRecenterOnlyController_t2745329441), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2206 = { sizeof (GvrTooltip_t801170144), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2207 = { sizeof (AndroidNativeControllerProvider_t1389606029), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2208 = { sizeof (EmulatorClientSocket_t2001911543), -1, sizeof(EmulatorClientSocket_t2001911543_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2208[9] = 
{
	EmulatorClientSocket_t2001911543_StaticFields::get_offset_of_kPhoneEventPort_2(),
	0,
	0,
	EmulatorClientSocket_t2001911543::get_offset_of_phoneMirroringSocket_5(),
	EmulatorClientSocket_t2001911543::get_offset_of_phoneEventThread_6(),
	EmulatorClientSocket_t2001911543::get_offset_of_shouldStop_7(),
	EmulatorClientSocket_t2001911543::get_offset_of_lastConnectionAttemptWasSuccessful_8(),
	EmulatorClientSocket_t2001911543::get_offset_of_phoneRemote_9(),
	EmulatorClientSocket_t2001911543::get_offset_of_U3CconnectedU3Ek__BackingField_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2209 = { sizeof (EmulatorConfig_t616150261), -1, sizeof(EmulatorConfig_t616150261_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2209[4] = 
{
	EmulatorConfig_t616150261_StaticFields::get_offset_of_instance_2(),
	EmulatorConfig_t616150261::get_offset_of_PHONE_EVENT_MODE_3(),
	EmulatorConfig_t616150261_StaticFields::get_offset_of_USB_SERVER_IP_4(),
	EmulatorConfig_t616150261_StaticFields::get_offset_of_WIFI_SERVER_IP_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2210 = { sizeof (Mode_t1624619217)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2210[4] = 
{
	Mode_t1624619217::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2211 = { sizeof (EmulatorGyroEvent_t1858389926)+ sizeof (Il2CppObject), sizeof(EmulatorGyroEvent_t1858389926 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2211[2] = 
{
	EmulatorGyroEvent_t1858389926::get_offset_of_timestamp_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	EmulatorGyroEvent_t1858389926::get_offset_of_value_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2212 = { sizeof (EmulatorAccelEvent_t621139879)+ sizeof (Il2CppObject), sizeof(EmulatorAccelEvent_t621139879 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2212[2] = 
{
	EmulatorAccelEvent_t621139879::get_offset_of_timestamp_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	EmulatorAccelEvent_t621139879::get_offset_of_value_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2213 = { sizeof (EmulatorTouchEvent_t1122923020)+ sizeof (Il2CppObject), -1, sizeof(EmulatorTouchEvent_t1122923020_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2213[6] = 
{
	EmulatorTouchEvent_t1122923020::get_offset_of_action_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	EmulatorTouchEvent_t1122923020::get_offset_of_relativeTimestamp_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	EmulatorTouchEvent_t1122923020::get_offset_of_pointers_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	EmulatorTouchEvent_t1122923020_StaticFields::get_offset_of_ACTION_POINTER_INDEX_SHIFT_3(),
	EmulatorTouchEvent_t1122923020_StaticFields::get_offset_of_ACTION_POINTER_INDEX_MASK_4(),
	EmulatorTouchEvent_t1122923020_StaticFields::get_offset_of_ACTION_MASK_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2214 = { sizeof (Action_t936529327)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2214[10] = 
{
	Action_t936529327::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2215 = { sizeof (Pointer_t3000685002)+ sizeof (Il2CppObject), sizeof(Pointer_t3000685002 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2215[3] = 
{
	Pointer_t3000685002::get_offset_of_fingerId_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Pointer_t3000685002::get_offset_of_normalizedX_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Pointer_t3000685002::get_offset_of_normalizedY_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2216 = { sizeof (EmulatorOrientationEvent_t4153005117)+ sizeof (Il2CppObject), sizeof(EmulatorOrientationEvent_t4153005117 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2216[2] = 
{
	EmulatorOrientationEvent_t4153005117::get_offset_of_timestamp_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	EmulatorOrientationEvent_t4153005117::get_offset_of_orientation_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2217 = { sizeof (EmulatorButtonEvent_t156276569)+ sizeof (Il2CppObject), sizeof(EmulatorButtonEvent_t156276569_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2217[2] = 
{
	EmulatorButtonEvent_t156276569::get_offset_of_code_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	EmulatorButtonEvent_t156276569::get_offset_of_down_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2218 = { sizeof (ButtonCode_t4043921137)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2218[7] = 
{
	ButtonCode_t4043921137::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2219 = { sizeof (EmulatorManager_t3364249716), -1, sizeof(EmulatorManager_t3364249716_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2219[16] = 
{
	EmulatorManager_t3364249716::get_offset_of_emulatorUpdate_2(),
	EmulatorManager_t3364249716::get_offset_of_waitForEndOfFrame_3(),
	EmulatorManager_t3364249716_StaticFields::get_offset_of_instance_4(),
	EmulatorManager_t3364249716::get_offset_of_currentGyroEvent_5(),
	EmulatorManager_t3364249716::get_offset_of_currentAccelEvent_6(),
	EmulatorManager_t3364249716::get_offset_of_currentTouchEvent_7(),
	EmulatorManager_t3364249716::get_offset_of_currentOrientationEvent_8(),
	EmulatorManager_t3364249716::get_offset_of_currentButtonEvent_9(),
	EmulatorManager_t3364249716::get_offset_of_gyroEventListenersInternal_10(),
	EmulatorManager_t3364249716::get_offset_of_accelEventListenersInternal_11(),
	EmulatorManager_t3364249716::get_offset_of_touchEventListenersInternal_12(),
	EmulatorManager_t3364249716::get_offset_of_orientationEventListenersInternal_13(),
	EmulatorManager_t3364249716::get_offset_of_buttonEventListenersInternal_14(),
	EmulatorManager_t3364249716::get_offset_of_pendingEvents_15(),
	EmulatorManager_t3364249716::get_offset_of_socket_16(),
	EmulatorManager_t3364249716::get_offset_of_lastDownTimeMs_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2220 = { sizeof (OnGyroEvent_t1804908545), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2221 = { sizeof (OnAccelEvent_t1967739812), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2222 = { sizeof (OnTouchEvent_t4143287487), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2223 = { sizeof (OnOrientationEvent_t602701282), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2224 = { sizeof (OnButtonEvent_t358370788), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2225 = { sizeof (U3CEndOfFrameU3Ec__Iterator0_t4253624923), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2225[5] = 
{
	U3CEndOfFrameU3Ec__Iterator0_t4253624923::get_offset_of_U24locvar0_0(),
	U3CEndOfFrameU3Ec__Iterator0_t4253624923::get_offset_of_U24this_1(),
	U3CEndOfFrameU3Ec__Iterator0_t4253624923::get_offset_of_U24current_2(),
	U3CEndOfFrameU3Ec__Iterator0_t4253624923::get_offset_of_U24disposing_3(),
	U3CEndOfFrameU3Ec__Iterator0_t4253624923::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2226 = { sizeof (PhoneEvent_t3882078222), -1, sizeof(PhoneEvent_t3882078222_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2226[1] = 
{
	PhoneEvent_t3882078222_StaticFields::get_offset_of_Descriptor_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2227 = { sizeof (PhoneEvent_t2572128318), -1, sizeof(PhoneEvent_t2572128318_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2227[25] = 
{
	PhoneEvent_t2572128318_StaticFields::get_offset_of_defaultInstance_0(),
	PhoneEvent_t2572128318_StaticFields::get_offset_of__phoneEventFieldNames_1(),
	PhoneEvent_t2572128318_StaticFields::get_offset_of__phoneEventFieldTags_2(),
	0,
	PhoneEvent_t2572128318::get_offset_of_hasType_4(),
	PhoneEvent_t2572128318::get_offset_of_type__5(),
	0,
	PhoneEvent_t2572128318::get_offset_of_hasMotionEvent_7(),
	PhoneEvent_t2572128318::get_offset_of_motionEvent__8(),
	0,
	PhoneEvent_t2572128318::get_offset_of_hasGyroscopeEvent_10(),
	PhoneEvent_t2572128318::get_offset_of_gyroscopeEvent__11(),
	0,
	PhoneEvent_t2572128318::get_offset_of_hasAccelerometerEvent_13(),
	PhoneEvent_t2572128318::get_offset_of_accelerometerEvent__14(),
	0,
	PhoneEvent_t2572128318::get_offset_of_hasDepthMapEvent_16(),
	PhoneEvent_t2572128318::get_offset_of_depthMapEvent__17(),
	0,
	PhoneEvent_t2572128318::get_offset_of_hasOrientationEvent_19(),
	PhoneEvent_t2572128318::get_offset_of_orientationEvent__20(),
	0,
	PhoneEvent_t2572128318::get_offset_of_hasKeyEvent_22(),
	PhoneEvent_t2572128318::get_offset_of_keyEvent__23(),
	PhoneEvent_t2572128318::get_offset_of_memoizedSerializedSize_24(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2228 = { sizeof (Types_t3648109718), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2229 = { sizeof (Type_t1530480861)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2229[7] = 
{
	Type_t1530480861::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2230 = { sizeof (MotionEvent_t4072706903), -1, sizeof(MotionEvent_t4072706903_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2230[12] = 
{
	MotionEvent_t4072706903_StaticFields::get_offset_of_defaultInstance_0(),
	MotionEvent_t4072706903_StaticFields::get_offset_of__motionEventFieldNames_1(),
	MotionEvent_t4072706903_StaticFields::get_offset_of__motionEventFieldTags_2(),
	0,
	MotionEvent_t4072706903::get_offset_of_hasTimestamp_4(),
	MotionEvent_t4072706903::get_offset_of_timestamp__5(),
	0,
	MotionEvent_t4072706903::get_offset_of_hasAction_7(),
	MotionEvent_t4072706903::get_offset_of_action__8(),
	0,
	MotionEvent_t4072706903::get_offset_of_pointers__10(),
	MotionEvent_t4072706903::get_offset_of_memoizedSerializedSize_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2231 = { sizeof (Types_t1262104803), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2232 = { sizeof (Pointer_t1211758263), -1, sizeof(Pointer_t1211758263_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2232[13] = 
{
	Pointer_t1211758263_StaticFields::get_offset_of_defaultInstance_0(),
	Pointer_t1211758263_StaticFields::get_offset_of__pointerFieldNames_1(),
	Pointer_t1211758263_StaticFields::get_offset_of__pointerFieldTags_2(),
	0,
	Pointer_t1211758263::get_offset_of_hasId_4(),
	Pointer_t1211758263::get_offset_of_id__5(),
	0,
	Pointer_t1211758263::get_offset_of_hasNormalizedX_7(),
	Pointer_t1211758263::get_offset_of_normalizedX__8(),
	0,
	Pointer_t1211758263::get_offset_of_hasNormalizedY_10(),
	Pointer_t1211758263::get_offset_of_normalizedY__11(),
	Pointer_t1211758263::get_offset_of_memoizedSerializedSize_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2233 = { sizeof (Builder_t2701542133), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2233[2] = 
{
	Builder_t2701542133::get_offset_of_resultIsReadOnly_0(),
	Builder_t2701542133::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2234 = { sizeof (Builder_t3452538341), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2234[2] = 
{
	Builder_t3452538341::get_offset_of_resultIsReadOnly_0(),
	Builder_t3452538341::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2235 = { sizeof (GyroscopeEvent_t182225200), -1, sizeof(GyroscopeEvent_t182225200_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2235[16] = 
{
	GyroscopeEvent_t182225200_StaticFields::get_offset_of_defaultInstance_0(),
	GyroscopeEvent_t182225200_StaticFields::get_offset_of__gyroscopeEventFieldNames_1(),
	GyroscopeEvent_t182225200_StaticFields::get_offset_of__gyroscopeEventFieldTags_2(),
	0,
	GyroscopeEvent_t182225200::get_offset_of_hasTimestamp_4(),
	GyroscopeEvent_t182225200::get_offset_of_timestamp__5(),
	0,
	GyroscopeEvent_t182225200::get_offset_of_hasX_7(),
	GyroscopeEvent_t182225200::get_offset_of_x__8(),
	0,
	GyroscopeEvent_t182225200::get_offset_of_hasY_10(),
	GyroscopeEvent_t182225200::get_offset_of_y__11(),
	0,
	GyroscopeEvent_t182225200::get_offset_of_hasZ_13(),
	GyroscopeEvent_t182225200::get_offset_of_z__14(),
	GyroscopeEvent_t182225200::get_offset_of_memoizedSerializedSize_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2236 = { sizeof (Builder_t33558588), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2236[2] = 
{
	Builder_t33558588::get_offset_of_resultIsReadOnly_0(),
	Builder_t33558588::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2237 = { sizeof (AccelerometerEvent_t1893725728), -1, sizeof(AccelerometerEvent_t1893725728_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2237[16] = 
{
	AccelerometerEvent_t1893725728_StaticFields::get_offset_of_defaultInstance_0(),
	AccelerometerEvent_t1893725728_StaticFields::get_offset_of__accelerometerEventFieldNames_1(),
	AccelerometerEvent_t1893725728_StaticFields::get_offset_of__accelerometerEventFieldTags_2(),
	0,
	AccelerometerEvent_t1893725728::get_offset_of_hasTimestamp_4(),
	AccelerometerEvent_t1893725728::get_offset_of_timestamp__5(),
	0,
	AccelerometerEvent_t1893725728::get_offset_of_hasX_7(),
	AccelerometerEvent_t1893725728::get_offset_of_x__8(),
	0,
	AccelerometerEvent_t1893725728::get_offset_of_hasY_10(),
	AccelerometerEvent_t1893725728::get_offset_of_y__11(),
	0,
	AccelerometerEvent_t1893725728::get_offset_of_hasZ_13(),
	AccelerometerEvent_t1893725728::get_offset_of_z__14(),
	AccelerometerEvent_t1893725728::get_offset_of_memoizedSerializedSize_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2238 = { sizeof (Builder_t1480486140), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2238[2] = 
{
	Builder_t1480486140::get_offset_of_resultIsReadOnly_0(),
	Builder_t1480486140::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2239 = { sizeof (DepthMapEvent_t1516604558), -1, sizeof(DepthMapEvent_t1516604558_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2239[16] = 
{
	DepthMapEvent_t1516604558_StaticFields::get_offset_of_defaultInstance_0(),
	DepthMapEvent_t1516604558_StaticFields::get_offset_of__depthMapEventFieldNames_1(),
	DepthMapEvent_t1516604558_StaticFields::get_offset_of__depthMapEventFieldTags_2(),
	0,
	DepthMapEvent_t1516604558::get_offset_of_hasTimestamp_4(),
	DepthMapEvent_t1516604558::get_offset_of_timestamp__5(),
	0,
	DepthMapEvent_t1516604558::get_offset_of_hasWidth_7(),
	DepthMapEvent_t1516604558::get_offset_of_width__8(),
	0,
	DepthMapEvent_t1516604558::get_offset_of_hasHeight_10(),
	DepthMapEvent_t1516604558::get_offset_of_height__11(),
	0,
	DepthMapEvent_t1516604558::get_offset_of_zDistancesMemoizedSerializedSize_13(),
	DepthMapEvent_t1516604558::get_offset_of_zDistances__14(),
	DepthMapEvent_t1516604558::get_offset_of_memoizedSerializedSize_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2240 = { sizeof (Builder_t3483346914), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2240[2] = 
{
	Builder_t3483346914::get_offset_of_resultIsReadOnly_0(),
	Builder_t3483346914::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2241 = { sizeof (OrientationEvent_t2038376807), -1, sizeof(OrientationEvent_t2038376807_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2241[19] = 
{
	OrientationEvent_t2038376807_StaticFields::get_offset_of_defaultInstance_0(),
	OrientationEvent_t2038376807_StaticFields::get_offset_of__orientationEventFieldNames_1(),
	OrientationEvent_t2038376807_StaticFields::get_offset_of__orientationEventFieldTags_2(),
	0,
	OrientationEvent_t2038376807::get_offset_of_hasTimestamp_4(),
	OrientationEvent_t2038376807::get_offset_of_timestamp__5(),
	0,
	OrientationEvent_t2038376807::get_offset_of_hasX_7(),
	OrientationEvent_t2038376807::get_offset_of_x__8(),
	0,
	OrientationEvent_t2038376807::get_offset_of_hasY_10(),
	OrientationEvent_t2038376807::get_offset_of_y__11(),
	0,
	OrientationEvent_t2038376807::get_offset_of_hasZ_13(),
	OrientationEvent_t2038376807::get_offset_of_z__14(),
	0,
	OrientationEvent_t2038376807::get_offset_of_hasW_16(),
	OrientationEvent_t2038376807::get_offset_of_w__17(),
	OrientationEvent_t2038376807::get_offset_of_memoizedSerializedSize_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2242 = { sizeof (Builder_t2561526853), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2242[2] = 
{
	Builder_t2561526853::get_offset_of_resultIsReadOnly_0(),
	Builder_t2561526853::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2243 = { sizeof (KeyEvent_t639576718), -1, sizeof(KeyEvent_t639576718_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2243[10] = 
{
	KeyEvent_t639576718_StaticFields::get_offset_of_defaultInstance_0(),
	KeyEvent_t639576718_StaticFields::get_offset_of__keyEventFieldNames_1(),
	KeyEvent_t639576718_StaticFields::get_offset_of__keyEventFieldTags_2(),
	0,
	KeyEvent_t639576718::get_offset_of_hasAction_4(),
	KeyEvent_t639576718::get_offset_of_action__5(),
	0,
	KeyEvent_t639576718::get_offset_of_hasCode_7(),
	KeyEvent_t639576718::get_offset_of_code__8(),
	KeyEvent_t639576718::get_offset_of_memoizedSerializedSize_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2244 = { sizeof (Builder_t2056133158), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2244[2] = 
{
	Builder_t2056133158::get_offset_of_resultIsReadOnly_0(),
	Builder_t2056133158::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2245 = { sizeof (Builder_t2537253112), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2245[2] = 
{
	Builder_t2537253112::get_offset_of_resultIsReadOnly_0(),
	Builder_t2537253112::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2246 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2247 = { sizeof (GvrBasePointer_t2150122635), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2247[2] = 
{
	GvrBasePointer_t2150122635::get_offset_of_U3CShouldUseExitRadiusForRaycastU3Ek__BackingField_0(),
	GvrBasePointer_t2150122635::get_offset_of_U3CPointerTransformU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2248 = { sizeof (GvrBasePointerRaycaster_t1189534163), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2248[2] = 
{
	GvrBasePointerRaycaster_t1189534163::get_offset_of_raycastMode_2(),
	GvrBasePointerRaycaster_t1189534163::get_offset_of_lastRay_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2249 = { sizeof (RaycastMode_t3965091944)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2249[3] = 
{
	RaycastMode_t3965091944::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2250 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2251 = { sizeof (GvrExecuteEventsExtension_t3083691626), -1, sizeof(GvrExecuteEventsExtension_t3083691626_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2251[2] = 
{
	GvrExecuteEventsExtension_t3083691626_StaticFields::get_offset_of_s_HoverHandler_0(),
	GvrExecuteEventsExtension_t3083691626_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2252 = { sizeof (GvrPointerGraphicRaycaster_t1649506702), -1, sizeof(GvrPointerGraphicRaycaster_t1649506702_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2252[9] = 
{
	0,
	GvrPointerGraphicRaycaster_t1649506702::get_offset_of_ignoreReversedGraphics_5(),
	GvrPointerGraphicRaycaster_t1649506702::get_offset_of_blockingObjects_6(),
	GvrPointerGraphicRaycaster_t1649506702::get_offset_of_blockingMask_7(),
	GvrPointerGraphicRaycaster_t1649506702::get_offset_of_targetCanvas_8(),
	GvrPointerGraphicRaycaster_t1649506702::get_offset_of_raycastResults_9(),
	GvrPointerGraphicRaycaster_t1649506702::get_offset_of_cachedPointerEventCamera_10(),
	GvrPointerGraphicRaycaster_t1649506702_StaticFields::get_offset_of_sortedGraphics_11(),
	GvrPointerGraphicRaycaster_t1649506702_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2253 = { sizeof (BlockingObjects_t4215129352)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2253[5] = 
{
	BlockingObjects_t4215129352::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2254 = { sizeof (GvrPointerPhysicsRaycaster_t2558158517), -1, sizeof(GvrPointerPhysicsRaycaster_t2558158517_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2254[4] = 
{
	0,
	GvrPointerPhysicsRaycaster_t2558158517::get_offset_of_raycasterEventMask_5(),
	GvrPointerPhysicsRaycaster_t2558158517::get_offset_of_cachedEventCamera_6(),
	GvrPointerPhysicsRaycaster_t2558158517_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2255 = { sizeof (GvrPointerScrollInput_t4200958609), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2255[17] = 
{
	0,
	0,
	GvrPointerScrollInput_t4200958609::get_offset_of_inertia_2(),
	GvrPointerScrollInput_t4200958609::get_offset_of_decelerationRate_3(),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	GvrPointerScrollInput_t4200958609::get_offset_of_scrollHandlers_15(),
	GvrPointerScrollInput_t4200958609::get_offset_of_scrollingObjects_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2256 = { sizeof (ScrollInfo_t361410461), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2256[4] = 
{
	ScrollInfo_t361410461::get_offset_of_isScrolling_0(),
	ScrollInfo_t361410461::get_offset_of_initScroll_1(),
	ScrollInfo_t361410461::get_offset_of_lastScroll_2(),
	ScrollInfo_t361410461::get_offset_of_scrollVelocity_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2257 = { sizeof (GvrAllEventsTrigger_t2022443331), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2257[5] = 
{
	GvrAllEventsTrigger_t2022443331::get_offset_of_OnPointerClick_2(),
	GvrAllEventsTrigger_t2022443331::get_offset_of_OnPointerDown_3(),
	GvrAllEventsTrigger_t2022443331::get_offset_of_OnPointerUp_4(),
	GvrAllEventsTrigger_t2022443331::get_offset_of_OnPointerEnter_5(),
	GvrAllEventsTrigger_t2022443331::get_offset_of_OnPointerExit_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2258 = { sizeof (TriggerEvent_t1749878144), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2259 = { sizeof (U3CAddListenersDelayedU3Ec__Iterator0_t1446988883), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2259[4] = 
{
	U3CAddListenersDelayedU3Ec__Iterator0_t1446988883::get_offset_of_U24this_0(),
	U3CAddListenersDelayedU3Ec__Iterator0_t1446988883::get_offset_of_U24current_1(),
	U3CAddListenersDelayedU3Ec__Iterator0_t1446988883::get_offset_of_U24disposing_2(),
	U3CAddListenersDelayedU3Ec__Iterator0_t1446988883::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2260 = { sizeof (GvrEventExecutor_t1694572606), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2260[1] = 
{
	GvrEventExecutor_t1694572606::get_offset_of_eventTable_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2261 = { sizeof (EventDelegate_t3945253882), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2262 = { sizeof (GvrPointerInputModule_t1603976810), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2262[4] = 
{
	GvrPointerInputModule_t1603976810::get_offset_of_vrModeOnly_8(),
	GvrPointerInputModule_t1603976810::get_offset_of_scrollInput_9(),
	GvrPointerInputModule_t1603976810::get_offset_of_U3CImplU3Ek__BackingField_10(),
	GvrPointerInputModule_t1603976810::get_offset_of_U3CEventExecutorU3Ek__BackingField_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2263 = { sizeof (GvrPointerInputModuleImpl_t2072755720), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2263[9] = 
{
	GvrPointerInputModuleImpl_t2072755720::get_offset_of_U3CModuleControllerU3Ek__BackingField_0(),
	GvrPointerInputModuleImpl_t2072755720::get_offset_of_U3CEventExecutorU3Ek__BackingField_1(),
	GvrPointerInputModuleImpl_t2072755720::get_offset_of_U3CVrModeOnlyU3Ek__BackingField_2(),
	GvrPointerInputModuleImpl_t2072755720::get_offset_of_U3CScrollInputU3Ek__BackingField_3(),
	GvrPointerInputModuleImpl_t2072755720::get_offset_of_U3CPointerU3Ek__BackingField_4(),
	GvrPointerInputModuleImpl_t2072755720::get_offset_of_U3CCurrentEventDataU3Ek__BackingField_5(),
	GvrPointerInputModuleImpl_t2072755720::get_offset_of_lastPose_6(),
	GvrPointerInputModuleImpl_t2072755720::get_offset_of_isPointerHovering_7(),
	GvrPointerInputModuleImpl_t2072755720::get_offset_of_isActive_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2264 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2265 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2266 = { sizeof (GvrCardboardHelpers_t336308462), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2267 = { sizeof (GvrEditorEmulator_t3806821253), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2267[3] = 
{
	0,
	0,
	GvrEditorEmulator_t3806821253::get_offset_of_m_camera_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2268 = { sizeof (GvrUnitySdkVersion_t4210256426), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2268[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2269 = { sizeof (GvrKeyboardEvent_t1314471484)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2269[9] = 
{
	GvrKeyboardEvent_t1314471484::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2270 = { sizeof (GvrKeyboardError_t2067079702)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2270[5] = 
{
	GvrKeyboardError_t2067079702::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2271 = { sizeof (GvrKeyboardInputMode_t2940030961)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2271[3] = 
{
	GvrKeyboardInputMode_t2940030961::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2272 = { sizeof (GvrKeyboard_t598184456), -1, sizeof(GvrKeyboard_t598184456_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2272[19] = 
{
	GvrKeyboard_t598184456_StaticFields::get_offset_of_instance_2(),
	GvrKeyboard_t598184456_StaticFields::get_offset_of_keyboardProvider_3(),
	GvrKeyboard_t598184456::get_offset_of_keyboardState_4(),
	GvrKeyboard_t598184456::get_offset_of_keyboardUpdate_5(),
	GvrKeyboard_t598184456::get_offset_of_errorCallback_6(),
	GvrKeyboard_t598184456::get_offset_of_showCallback_7(),
	GvrKeyboard_t598184456::get_offset_of_hideCallback_8(),
	GvrKeyboard_t598184456::get_offset_of_updateCallback_9(),
	GvrKeyboard_t598184456::get_offset_of_enterCallback_10(),
	GvrKeyboard_t598184456::get_offset_of_isRight_11(),
	GvrKeyboard_t598184456::get_offset_of_isKeyboardHidden_12(),
	0,
	GvrKeyboard_t598184456_StaticFields::get_offset_of_threadSafeCallbacks_14(),
	GvrKeyboard_t598184456_StaticFields::get_offset_of_callbacksLock_15(),
	GvrKeyboard_t598184456::get_offset_of_keyboardDelegate_16(),
	GvrKeyboard_t598184456::get_offset_of_inputMode_17(),
	GvrKeyboard_t598184456::get_offset_of_useRecommended_18(),
	GvrKeyboard_t598184456::get_offset_of_distance_19(),
	GvrKeyboard_t598184456_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2273 = { sizeof (StandardCallback_t1386534425), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2274 = { sizeof (EditTextCallback_t661057455), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2275 = { sizeof (ErrorCallback_t1270209242), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2276 = { sizeof (KeyboardCallback_t4001681579), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2277 = { sizeof (U3CExecuterU3Ec__Iterator0_t1374321097), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2277[4] = 
{
	U3CExecuterU3Ec__Iterator0_t1374321097::get_offset_of_U24this_0(),
	U3CExecuterU3Ec__Iterator0_t1374321097::get_offset_of_U24current_1(),
	U3CExecuterU3Ec__Iterator0_t1374321097::get_offset_of_U24disposing_2(),
	U3CExecuterU3Ec__Iterator0_t1374321097::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2278 = { sizeof (GvrKeyboardDelegateBase_t1914180906), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2279 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2280 = { sizeof (KeyboardProviderFactory_t1628169604), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2281 = { sizeof (AndroidNativeKeyboardProvider_t2887228014), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2281[21] = 
{
	AndroidNativeKeyboardProvider_t2887228014::get_offset_of_renderEventFunction_0(),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	AndroidNativeKeyboardProvider_t2887228014::get_offset_of_keyboard_context_9(),
	0,
	0,
	0,
	0,
	0,
	0,
	AndroidNativeKeyboardProvider_t2887228014::get_offset_of_mode_16(),
	AndroidNativeKeyboardProvider_t2887228014::get_offset_of_editorText_17(),
	AndroidNativeKeyboardProvider_t2887228014::get_offset_of_worldMatrix_18(),
	AndroidNativeKeyboardProvider_t2887228014::get_offset_of_isValid_19(),
	AndroidNativeKeyboardProvider_t2887228014::get_offset_of_isReady_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2282 = { sizeof (gvr_clock_time_point_t1124886566)+ sizeof (Il2CppObject), sizeof(gvr_clock_time_point_t1124886566 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2282[1] = 
{
	gvr_clock_time_point_t1124886566::get_offset_of_monotonic_system_time_nanos_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2283 = { sizeof (gvr_recti_t2743662910)+ sizeof (Il2CppObject), sizeof(gvr_recti_t2743662910 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2283[4] = 
{
	gvr_recti_t2743662910::get_offset_of_left_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	gvr_recti_t2743662910::get_offset_of_right_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	gvr_recti_t2743662910::get_offset_of_bottom_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	gvr_recti_t2743662910::get_offset_of_top_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2284 = { sizeof (DummyKeyboardProvider_t1674367534), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2284[2] = 
{
	DummyKeyboardProvider_t1674367534::get_offset_of_dummyState_0(),
	DummyKeyboardProvider_t1674367534::get_offset_of_U3CEditorTextU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2285 = { sizeof (EmulatorKeyboardProvider_t2695781675), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2285[7] = 
{
	EmulatorKeyboardProvider_t2695781675::get_offset_of_stub_0(),
	EmulatorKeyboardProvider_t2695781675::get_offset_of_showing_1(),
	EmulatorKeyboardProvider_t2695781675::get_offset_of_keyboardCallback_2(),
	EmulatorKeyboardProvider_t2695781675::get_offset_of_editorText_3(),
	EmulatorKeyboardProvider_t2695781675::get_offset_of_mode_4(),
	EmulatorKeyboardProvider_t2695781675::get_offset_of_worldMatrix_5(),
	EmulatorKeyboardProvider_t2695781675::get_offset_of_isValid_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2286 = { sizeof (KeyboardState_t3308394474), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2286[5] = 
{
	KeyboardState_t3308394474::get_offset_of_editorText_0(),
	KeyboardState_t3308394474::get_offset_of_mode_1(),
	KeyboardState_t3308394474::get_offset_of_isValid_2(),
	KeyboardState_t3308394474::get_offset_of_isReady_3(),
	KeyboardState_t3308394474::get_offset_of_worldMatrix_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2287 = { sizeof (Pose3D_t3872859958), -1, sizeof(Pose3D_t3872859958_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2287[4] = 
{
	Pose3D_t3872859958_StaticFields::get_offset_of_flipZ_0(),
	Pose3D_t3872859958::get_offset_of_U3CPositionU3Ek__BackingField_1(),
	Pose3D_t3872859958::get_offset_of_U3COrientationU3Ek__BackingField_2(),
	Pose3D_t3872859958::get_offset_of_U3CMatrixU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2288 = { sizeof (MutablePose3D_t1015643808), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2289 = { sizeof (GvrBaseControllerVisual_t4093442088), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2290 = { sizeof (GvrDropdown_t2234606196), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2290[1] = 
{
	GvrDropdown_t2234606196::get_offset_of_currentBlocker_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2291 = { sizeof (GvrLaserPointer_t2879974839), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2292 = { sizeof (GvrLaserPointerImpl_t2141976067), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2292[15] = 
{
	0,
	0,
	0,
	GvrLaserPointerImpl_t2141976067::get_offset_of_U3CMainCameraU3Ek__BackingField_5(),
	GvrLaserPointerImpl_t2141976067::get_offset_of_U3CLaserColorU3Ek__BackingField_6(),
	GvrLaserPointerImpl_t2141976067::get_offset_of_U3CLaserLineRendererU3Ek__BackingField_7(),
	GvrLaserPointerImpl_t2141976067::get_offset_of_U3CMaxLaserDistanceU3Ek__BackingField_8(),
	GvrLaserPointerImpl_t2141976067::get_offset_of_U3CMaxReticleDistanceU3Ek__BackingField_9(),
	GvrLaserPointerImpl_t2141976067::get_offset_of_reticle_10(),
	GvrLaserPointerImpl_t2141976067::get_offset_of_U3CPointerIntersectionU3Ek__BackingField_11(),
	GvrLaserPointerImpl_t2141976067::get_offset_of_U3CIsPointerIntersectingU3Ek__BackingField_12(),
	GvrLaserPointerImpl_t2141976067::get_offset_of_U3CPointerIntersectionRayU3Ek__BackingField_13(),
	GvrLaserPointerImpl_t2141976067::get_offset_of_reticleMeshSizeMeters_14(),
	GvrLaserPointerImpl_t2141976067::get_offset_of_reticleMeshSizeRatio_15(),
	GvrLaserPointerImpl_t2141976067::get_offset_of_lineEndPoint_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2293 = { sizeof (GvrReticlePointer_t2836438988), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2293[3] = 
{
	GvrReticlePointer_t2836438988::get_offset_of_reticlePointerImpl_2(),
	GvrReticlePointer_t2836438988::get_offset_of_reticleSegments_3(),
	GvrReticlePointer_t2836438988::get_offset_of_reticleGrowthSpeed_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2294 = { sizeof (GvrReticlePointerImpl_t3911945438), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2294[13] = 
{
	0,
	0,
	0,
	0,
	0,
	GvrReticlePointerImpl_t3911945438::get_offset_of_U3CReticleGrowthSpeedU3Ek__BackingField_7(),
	GvrReticlePointerImpl_t3911945438::get_offset_of_U3CMaterialCompU3Ek__BackingField_8(),
	GvrReticlePointerImpl_t3911945438::get_offset_of_U3CReticleInnerAngleU3Ek__BackingField_9(),
	GvrReticlePointerImpl_t3911945438::get_offset_of_U3CReticleOuterAngleU3Ek__BackingField_10(),
	GvrReticlePointerImpl_t3911945438::get_offset_of_U3CReticleDistanceInMetersU3Ek__BackingField_11(),
	GvrReticlePointerImpl_t3911945438::get_offset_of_U3CReticleInnerDiameterU3Ek__BackingField_12(),
	GvrReticlePointerImpl_t3911945438::get_offset_of_U3CReticleOuterDiameterU3Ek__BackingField_13(),
	GvrReticlePointerImpl_t3911945438::get_offset_of_targetPoint_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2295 = { sizeof (GvrTouchPoint_t3050416034), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2296 = { sizeof (GvrActivityHelper_t1610839920), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2296[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2297 = { sizeof (GvrDaydreamApi_t4123913920), -1, sizeof(GvrDaydreamApi_t4123913920_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2297[5] = 
{
	0,
	0,
	0,
	0,
	GvrDaydreamApi_t4123913920_StaticFields::get_offset_of_m_instance_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2298 = { sizeof (GvrFPS_t750935016), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2298[6] = 
{
	0,
	0,
	0,
	GvrFPS_t750935016::get_offset_of_textField_5(),
	GvrFPS_t750935016::get_offset_of_fps_6(),
	GvrFPS_t750935016::get_offset_of_cam_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2299 = { sizeof (GvrIntent_t542233401), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2299[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
