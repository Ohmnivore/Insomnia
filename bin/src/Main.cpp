#include <hxcpp.h>

#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_insomnia_Insomnia
#include <insomnia/Insomnia.h>
#endif

Void Main_obj::__construct()
{
	return null();
}

//Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

int Main_obj::KEY_CODE_Q;

Void Main_obj::main( ){
{
		HX_STACK_FRAME("Main","main",0xed0e206e,"Main.main","Main.hx",16,0x087e5c05)
		HX_STACK_LINE(17)
		::insomnia::Insomnia_obj::preventSleep();
		HX_STACK_LINE(18)
		::insomnia::Insomnia_obj::setProcessPriority(::insomnia::Insomnia_obj::P_REALTIME_PRIORITY_CLASS);
		HX_STACK_LINE(20)
		::Sys_obj::println(HX_CSTRING("Your computer shall not sleep while this process runs."));
		HX_STACK_LINE(21)
		::Sys_obj::println(HX_CSTRING("And this process shall have high priority."));
		HX_STACK_LINE(22)
		::Sys_obj::println(HX_CSTRING("Press 'q' to stop this evil process before your computer needs therapy."));
		HX_STACK_LINE(24)
		bool run = true;		HX_STACK_VAR(run,"run");
		HX_STACK_LINE(26)
		while((true)){
			HX_STACK_LINE(26)
			if ((!(run))){
				HX_STACK_LINE(26)
				break;
			}
			HX_STACK_LINE(28)
			::Sys_obj::sleep(0.01);
			HX_STACK_LINE(30)
			int _g = ::Sys_obj::getChar(false);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(30)
			if (((_g == (int)113))){
				HX_STACK_LINE(32)
				run = false;
				HX_STACK_LINE(33)
				::Sys_obj::println(HX_CSTRING("Nice dreams!"));
				HX_STACK_LINE(34)
				::Sys_obj::sleep((int)1);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,main,(void))


Main_obj::Main_obj()
{
}

Dynamic Main_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { return main_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("KEY_CODE_Q"),
	HX_CSTRING("main"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Main_obj::KEY_CODE_Q,"KEY_CODE_Q");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Main_obj::KEY_CODE_Q,"KEY_CODE_Q");
};

#endif

Class Main_obj::__mClass;

void Main_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Main"), hx::TCanCast< Main_obj> ,sStaticFields,sMemberFields,
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

void Main_obj::__boot()
{
	KEY_CODE_Q= (int)113;
}

