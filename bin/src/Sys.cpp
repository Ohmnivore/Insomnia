#include <hxcpp.h>

#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif

Void Sys_obj::__construct()
{
	return null();
}

//Sys_obj::~Sys_obj() { }

Dynamic Sys_obj::__CreateEmpty() { return  new Sys_obj; }
hx::ObjectPtr< Sys_obj > Sys_obj::__new()
{  hx::ObjectPtr< Sys_obj > result = new Sys_obj();
	result->__construct();
	return result;}

Dynamic Sys_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Sys_obj > result = new Sys_obj();
	result->__construct();
	return result;}

Void Sys_obj::print( Dynamic v){
{
		HX_STACK_FRAME("Sys","print",0x483745ec,"Sys.print","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",25,0x57bbb657)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(25)
		::__hxcpp_print(v);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sys_obj,print,(void))

Void Sys_obj::println( Dynamic v){
{
		HX_STACK_FRAME("Sys","println",0x3905f76e,"Sys.println","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",28,0x57bbb657)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(29)
		::Sys_obj::print(v);
		HX_STACK_LINE(30)
		::Sys_obj::print(HX_CSTRING("\n"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sys_obj,println,(void))

int Sys_obj::getChar( bool echo){
	HX_STACK_FRAME("Sys","getChar",0xc9142a0b,"Sys.getChar","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",46,0x57bbb657)
	HX_STACK_ARG(echo,"echo")
	HX_STACK_LINE(46)
	return ::Sys_obj::getch(echo);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sys_obj,getChar,return )

Void Sys_obj::sleep( Float seconds){
{
		HX_STACK_FRAME("Sys","sleep",0xfe70aad6,"Sys.sleep","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",65,0x57bbb657)
		HX_STACK_ARG(seconds,"seconds")
		HX_STACK_LINE(65)
		::Sys_obj::_sleep(seconds);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sys_obj,sleep,(void))

Dynamic Sys_obj::_sleep;

Dynamic Sys_obj::getch;


Sys_obj::Sys_obj()
{
}

Dynamic Sys_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"print") ) { return print_dyn(); }
		if (HX_FIELD_EQ(inName,"sleep") ) { return sleep_dyn(); }
		if (HX_FIELD_EQ(inName,"getch") ) { return getch; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_sleep") ) { return _sleep; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"println") ) { return println_dyn(); }
		if (HX_FIELD_EQ(inName,"getChar") ) { return getChar_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Sys_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"getch") ) { getch=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_sleep") ) { _sleep=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Sys_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("print"),
	HX_CSTRING("println"),
	HX_CSTRING("getChar"),
	HX_CSTRING("sleep"),
	HX_CSTRING("_sleep"),
	HX_CSTRING("getch"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sys_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Sys_obj::_sleep,"_sleep");
	HX_MARK_MEMBER_NAME(Sys_obj::getch,"getch");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sys_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Sys_obj::_sleep,"_sleep");
	HX_VISIT_MEMBER_NAME(Sys_obj::getch,"getch");
};

#endif

Class Sys_obj::__mClass;

void Sys_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Sys"), hx::TCanCast< Sys_obj> ,sStaticFields,sMemberFields,
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

void Sys_obj::__boot()
{
	_sleep= ::cpp::Lib_obj::load(HX_CSTRING("std"),HX_CSTRING("sys_sleep"),(int)1);
	getch= ::cpp::Lib_obj::load(HX_CSTRING("std"),HX_CSTRING("sys_getch"),(int)1);
}

