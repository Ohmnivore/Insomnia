#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_insomnia_Insomnia
#include <insomnia/Insomnia.h>
#endif
namespace insomnia{

Void Insomnia_obj::__construct()
{
	return null();
}

//Insomnia_obj::~Insomnia_obj() { }

Dynamic Insomnia_obj::__CreateEmpty() { return  new Insomnia_obj; }
hx::ObjectPtr< Insomnia_obj > Insomnia_obj::__new()
{  hx::ObjectPtr< Insomnia_obj > result = new Insomnia_obj();
	result->__construct();
	return result;}

Dynamic Insomnia_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Insomnia_obj > result = new Insomnia_obj();
	result->__construct();
	return result;}

int Insomnia_obj::ES_AWAYMODE_REQUIRED;

int Insomnia_obj::ES_CONTINUOUS;

int Insomnia_obj::ES_DISPLAY_REQUIRED;

int Insomnia_obj::ES_SYSTEM_REQUIRED;

int Insomnia_obj::P_ABOVE_NORMAL_PRIORITY_CLASS;

int Insomnia_obj::P_BELOW_NORMAL_PRIORITY_CLASS;

int Insomnia_obj::P_HIGH_PRIORITY_CLASS;

int Insomnia_obj::P_IDLE_PRIORITY_CLASS;

int Insomnia_obj::P_NORMAL_PRIORITY_CLASS;

int Insomnia_obj::P_PROCESS_MODE_BACKGROUND_BEGIN;

int Insomnia_obj::P_PROCESS_MODE_BACKGROUND_END;

int Insomnia_obj::P_REALTIME_PRIORITY_CLASS;

bool Insomnia_obj::preventSleep( ){
	HX_STACK_FRAME("insomnia.Insomnia","preventSleep",0x6a40a87f,"insomnia.Insomnia.preventSleep","insomnia/Insomnia.hx",33,0xb6457a0f)
	HX_STACK_LINE(34)
	bool result = false;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(36)
	bool _g = ::insomnia::Insomnia_obj::setThreadExecutionState((int((int(::insomnia::Insomnia_obj::ES_CONTINUOUS) | int(::insomnia::Insomnia_obj::ES_SYSTEM_REQUIRED))) | int(::insomnia::Insomnia_obj::ES_AWAYMODE_REQUIRED)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(36)
	result = _g;
	HX_STACK_LINE(37)
	if ((!(result))){
		HX_STACK_LINE(39)
		bool _g1 = ::insomnia::Insomnia_obj::setThreadExecutionState((int(::insomnia::Insomnia_obj::ES_CONTINUOUS) | int(::insomnia::Insomnia_obj::ES_SYSTEM_REQUIRED)));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(39)
		result = _g1;
	}
	HX_STACK_LINE(42)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Insomnia_obj,preventSleep,return )

bool Insomnia_obj::setThreadExecutionState( int Flag){
	HX_STACK_FRAME("insomnia.Insomnia","setThreadExecutionState",0x9ef54725,"insomnia.Insomnia.setThreadExecutionState","insomnia/Insomnia.hx",53,0xb6457a0f)
	HX_STACK_ARG(Flag,"Flag")
	HX_STACK_LINE(53)
	return ::insomnia::Insomnia_obj::_set_thread_execution_state(Flag);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Insomnia_obj,setThreadExecutionState,return )

bool Insomnia_obj::setProcessPriority( int Flag){
	HX_STACK_FRAME("insomnia.Insomnia","setProcessPriority",0xe8f4a4d1,"insomnia.Insomnia.setProcessPriority","insomnia/Insomnia.hx",64,0xb6457a0f)
	HX_STACK_ARG(Flag,"Flag")
	HX_STACK_LINE(64)
	return ::insomnia::Insomnia_obj::_set_process_priority(Flag);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Insomnia_obj,setProcessPriority,return )

Dynamic Insomnia_obj::_set_thread_execution_state;

Dynamic Insomnia_obj::_set_process_priority;


Insomnia_obj::Insomnia_obj()
{
}

Dynamic Insomnia_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"preventSleep") ) { return preventSleep_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"ES_CONTINUOUS") ) { return ES_CONTINUOUS; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"ES_SYSTEM_REQUIRED") ) { return ES_SYSTEM_REQUIRED; }
		if (HX_FIELD_EQ(inName,"setProcessPriority") ) { return setProcessPriority_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"ES_DISPLAY_REQUIRED") ) { return ES_DISPLAY_REQUIRED; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"ES_AWAYMODE_REQUIRED") ) { return ES_AWAYMODE_REQUIRED; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"P_HIGH_PRIORITY_CLASS") ) { return P_HIGH_PRIORITY_CLASS; }
		if (HX_FIELD_EQ(inName,"P_IDLE_PRIORITY_CLASS") ) { return P_IDLE_PRIORITY_CLASS; }
		if (HX_FIELD_EQ(inName,"_set_process_priority") ) { return _set_process_priority; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"P_NORMAL_PRIORITY_CLASS") ) { return P_NORMAL_PRIORITY_CLASS; }
		if (HX_FIELD_EQ(inName,"setThreadExecutionState") ) { return setThreadExecutionState_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"P_REALTIME_PRIORITY_CLASS") ) { return P_REALTIME_PRIORITY_CLASS; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_set_thread_execution_state") ) { return _set_thread_execution_state; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"P_ABOVE_NORMAL_PRIORITY_CLASS") ) { return P_ABOVE_NORMAL_PRIORITY_CLASS; }
		if (HX_FIELD_EQ(inName,"P_BELOW_NORMAL_PRIORITY_CLASS") ) { return P_BELOW_NORMAL_PRIORITY_CLASS; }
		if (HX_FIELD_EQ(inName,"P_PROCESS_MODE_BACKGROUND_END") ) { return P_PROCESS_MODE_BACKGROUND_END; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"P_PROCESS_MODE_BACKGROUND_BEGIN") ) { return P_PROCESS_MODE_BACKGROUND_BEGIN; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Insomnia_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"ES_CONTINUOUS") ) { ES_CONTINUOUS=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"ES_SYSTEM_REQUIRED") ) { ES_SYSTEM_REQUIRED=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"ES_DISPLAY_REQUIRED") ) { ES_DISPLAY_REQUIRED=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"ES_AWAYMODE_REQUIRED") ) { ES_AWAYMODE_REQUIRED=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"P_HIGH_PRIORITY_CLASS") ) { P_HIGH_PRIORITY_CLASS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"P_IDLE_PRIORITY_CLASS") ) { P_IDLE_PRIORITY_CLASS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_set_process_priority") ) { _set_process_priority=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"P_NORMAL_PRIORITY_CLASS") ) { P_NORMAL_PRIORITY_CLASS=inValue.Cast< int >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"P_REALTIME_PRIORITY_CLASS") ) { P_REALTIME_PRIORITY_CLASS=inValue.Cast< int >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_set_thread_execution_state") ) { _set_thread_execution_state=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"P_ABOVE_NORMAL_PRIORITY_CLASS") ) { P_ABOVE_NORMAL_PRIORITY_CLASS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"P_BELOW_NORMAL_PRIORITY_CLASS") ) { P_BELOW_NORMAL_PRIORITY_CLASS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"P_PROCESS_MODE_BACKGROUND_END") ) { P_PROCESS_MODE_BACKGROUND_END=inValue.Cast< int >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"P_PROCESS_MODE_BACKGROUND_BEGIN") ) { P_PROCESS_MODE_BACKGROUND_BEGIN=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Insomnia_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("ES_AWAYMODE_REQUIRED"),
	HX_CSTRING("ES_CONTINUOUS"),
	HX_CSTRING("ES_DISPLAY_REQUIRED"),
	HX_CSTRING("ES_SYSTEM_REQUIRED"),
	HX_CSTRING("P_ABOVE_NORMAL_PRIORITY_CLASS"),
	HX_CSTRING("P_BELOW_NORMAL_PRIORITY_CLASS"),
	HX_CSTRING("P_HIGH_PRIORITY_CLASS"),
	HX_CSTRING("P_IDLE_PRIORITY_CLASS"),
	HX_CSTRING("P_NORMAL_PRIORITY_CLASS"),
	HX_CSTRING("P_PROCESS_MODE_BACKGROUND_BEGIN"),
	HX_CSTRING("P_PROCESS_MODE_BACKGROUND_END"),
	HX_CSTRING("P_REALTIME_PRIORITY_CLASS"),
	HX_CSTRING("preventSleep"),
	HX_CSTRING("setThreadExecutionState"),
	HX_CSTRING("setProcessPriority"),
	HX_CSTRING("_set_thread_execution_state"),
	HX_CSTRING("_set_process_priority"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Insomnia_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Insomnia_obj::ES_AWAYMODE_REQUIRED,"ES_AWAYMODE_REQUIRED");
	HX_MARK_MEMBER_NAME(Insomnia_obj::ES_CONTINUOUS,"ES_CONTINUOUS");
	HX_MARK_MEMBER_NAME(Insomnia_obj::ES_DISPLAY_REQUIRED,"ES_DISPLAY_REQUIRED");
	HX_MARK_MEMBER_NAME(Insomnia_obj::ES_SYSTEM_REQUIRED,"ES_SYSTEM_REQUIRED");
	HX_MARK_MEMBER_NAME(Insomnia_obj::P_ABOVE_NORMAL_PRIORITY_CLASS,"P_ABOVE_NORMAL_PRIORITY_CLASS");
	HX_MARK_MEMBER_NAME(Insomnia_obj::P_BELOW_NORMAL_PRIORITY_CLASS,"P_BELOW_NORMAL_PRIORITY_CLASS");
	HX_MARK_MEMBER_NAME(Insomnia_obj::P_HIGH_PRIORITY_CLASS,"P_HIGH_PRIORITY_CLASS");
	HX_MARK_MEMBER_NAME(Insomnia_obj::P_IDLE_PRIORITY_CLASS,"P_IDLE_PRIORITY_CLASS");
	HX_MARK_MEMBER_NAME(Insomnia_obj::P_NORMAL_PRIORITY_CLASS,"P_NORMAL_PRIORITY_CLASS");
	HX_MARK_MEMBER_NAME(Insomnia_obj::P_PROCESS_MODE_BACKGROUND_BEGIN,"P_PROCESS_MODE_BACKGROUND_BEGIN");
	HX_MARK_MEMBER_NAME(Insomnia_obj::P_PROCESS_MODE_BACKGROUND_END,"P_PROCESS_MODE_BACKGROUND_END");
	HX_MARK_MEMBER_NAME(Insomnia_obj::P_REALTIME_PRIORITY_CLASS,"P_REALTIME_PRIORITY_CLASS");
	HX_MARK_MEMBER_NAME(Insomnia_obj::_set_thread_execution_state,"_set_thread_execution_state");
	HX_MARK_MEMBER_NAME(Insomnia_obj::_set_process_priority,"_set_process_priority");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Insomnia_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Insomnia_obj::ES_AWAYMODE_REQUIRED,"ES_AWAYMODE_REQUIRED");
	HX_VISIT_MEMBER_NAME(Insomnia_obj::ES_CONTINUOUS,"ES_CONTINUOUS");
	HX_VISIT_MEMBER_NAME(Insomnia_obj::ES_DISPLAY_REQUIRED,"ES_DISPLAY_REQUIRED");
	HX_VISIT_MEMBER_NAME(Insomnia_obj::ES_SYSTEM_REQUIRED,"ES_SYSTEM_REQUIRED");
	HX_VISIT_MEMBER_NAME(Insomnia_obj::P_ABOVE_NORMAL_PRIORITY_CLASS,"P_ABOVE_NORMAL_PRIORITY_CLASS");
	HX_VISIT_MEMBER_NAME(Insomnia_obj::P_BELOW_NORMAL_PRIORITY_CLASS,"P_BELOW_NORMAL_PRIORITY_CLASS");
	HX_VISIT_MEMBER_NAME(Insomnia_obj::P_HIGH_PRIORITY_CLASS,"P_HIGH_PRIORITY_CLASS");
	HX_VISIT_MEMBER_NAME(Insomnia_obj::P_IDLE_PRIORITY_CLASS,"P_IDLE_PRIORITY_CLASS");
	HX_VISIT_MEMBER_NAME(Insomnia_obj::P_NORMAL_PRIORITY_CLASS,"P_NORMAL_PRIORITY_CLASS");
	HX_VISIT_MEMBER_NAME(Insomnia_obj::P_PROCESS_MODE_BACKGROUND_BEGIN,"P_PROCESS_MODE_BACKGROUND_BEGIN");
	HX_VISIT_MEMBER_NAME(Insomnia_obj::P_PROCESS_MODE_BACKGROUND_END,"P_PROCESS_MODE_BACKGROUND_END");
	HX_VISIT_MEMBER_NAME(Insomnia_obj::P_REALTIME_PRIORITY_CLASS,"P_REALTIME_PRIORITY_CLASS");
	HX_VISIT_MEMBER_NAME(Insomnia_obj::_set_thread_execution_state,"_set_thread_execution_state");
	HX_VISIT_MEMBER_NAME(Insomnia_obj::_set_process_priority,"_set_process_priority");
};

#endif

Class Insomnia_obj::__mClass;

void Insomnia_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("insomnia.Insomnia"), hx::TCanCast< Insomnia_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void Insomnia_obj::__boot()
{
	ES_AWAYMODE_REQUIRED= (int)64;
	ES_CONTINUOUS= (int)-2147483648;
	ES_DISPLAY_REQUIRED= (int)2;
	ES_SYSTEM_REQUIRED= (int)1;
	P_ABOVE_NORMAL_PRIORITY_CLASS= (int)32768;
	P_BELOW_NORMAL_PRIORITY_CLASS= (int)16384;
	P_HIGH_PRIORITY_CLASS= (int)128;
	P_IDLE_PRIORITY_CLASS= (int)64;
	P_NORMAL_PRIORITY_CLASS= (int)32;
	P_PROCESS_MODE_BACKGROUND_BEGIN= (int)1048576;
	P_PROCESS_MODE_BACKGROUND_END= (int)2097152;
	P_REALTIME_PRIORITY_CLASS= (int)256;
	_set_thread_execution_state= ::cpp::Lib_obj::load(HX_CSTRING("Insomnia"),HX_CSTRING("set_state"),(int)1);
	_set_process_priority= ::cpp::Lib_obj::load(HX_CSTRING("Insomnia"),HX_CSTRING("set_priority"),(int)1);
}

} // end namespace insomnia
