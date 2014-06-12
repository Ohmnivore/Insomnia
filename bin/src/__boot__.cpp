#include <hxcpp.h>

#include <insomnia/Insomnia.h>
#include <haxe/io/Eof.h>
#include <Sys.h>
#include <cpp/Lib.h>
#include <Std.h>
#include <Main.h>

void __files__boot();

void __boot_all()
{
__files__boot();
hx::RegisterResources( hx::GetResources() );
::insomnia::Insomnia_obj::__register();
::haxe::io::Eof_obj::__register();
::Sys_obj::__register();
::cpp::Lib_obj::__register();
::Std_obj::__register();
::Main_obj::__register();
::cpp::Lib_obj::__boot();
::Main_obj::__boot();
::Std_obj::__boot();
::Sys_obj::__boot();
::haxe::io::Eof_obj::__boot();
::insomnia::Insomnia_obj::__boot();
}

