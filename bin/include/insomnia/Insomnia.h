#ifndef INCLUDED_insomnia_Insomnia
#define INCLUDED_insomnia_Insomnia

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(insomnia,Insomnia)
namespace insomnia{


class HXCPP_CLASS_ATTRIBUTES  Insomnia_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Insomnia_obj OBJ_;
		Insomnia_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Insomnia_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Insomnia_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Insomnia"); }

		static int ES_AWAYMODE_REQUIRED;
		static int ES_CONTINUOUS;
		static int ES_DISPLAY_REQUIRED;
		static int ES_SYSTEM_REQUIRED;
		static int P_ABOVE_NORMAL_PRIORITY_CLASS;
		static int P_BELOW_NORMAL_PRIORITY_CLASS;
		static int P_HIGH_PRIORITY_CLASS;
		static int P_IDLE_PRIORITY_CLASS;
		static int P_NORMAL_PRIORITY_CLASS;
		static int P_PROCESS_MODE_BACKGROUND_BEGIN;
		static int P_PROCESS_MODE_BACKGROUND_END;
		static int P_REALTIME_PRIORITY_CLASS;
		static bool preventSleep( );
		static Dynamic preventSleep_dyn();

		static bool setThreadExecutionState( int Flag);
		static Dynamic setThreadExecutionState_dyn();

		static bool setProcessPriority( int Flag);
		static Dynamic setProcessPriority_dyn();

		static Dynamic _set_thread_execution_state;
		static Dynamic &_set_thread_execution_state_dyn() { return _set_thread_execution_state;}
		static Dynamic _set_process_priority;
		static Dynamic &_set_process_priority_dyn() { return _set_process_priority;}
};

} // end namespace insomnia

#endif /* INCLUDED_insomnia_Insomnia */ 
