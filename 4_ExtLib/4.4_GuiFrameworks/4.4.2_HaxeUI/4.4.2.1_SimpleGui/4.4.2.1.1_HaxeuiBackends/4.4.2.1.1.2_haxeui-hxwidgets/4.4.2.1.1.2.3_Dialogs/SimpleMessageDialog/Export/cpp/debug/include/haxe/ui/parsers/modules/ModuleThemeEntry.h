// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_parsers_modules_ModuleThemeEntry
#define INCLUDED_haxe_ui_parsers_modules_ModuleThemeEntry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(haxe,ui,parsers,modules,ModuleThemeEntry)
HX_DECLARE_CLASS4(haxe,ui,parsers,modules,ModuleThemeStyleEntry)

namespace haxe{
namespace ui{
namespace parsers{
namespace modules{


class HXCPP_CLASS_ATTRIBUTES ModuleThemeEntry_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ModuleThemeEntry_obj OBJ_;
		ModuleThemeEntry_obj();

	public:
		enum { _hx_ClassId = 0x17a889c6 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.parsers.modules.ModuleThemeEntry")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.parsers.modules.ModuleThemeEntry"); }
		static hx::ObjectPtr< ModuleThemeEntry_obj > __new();
		static hx::ObjectPtr< ModuleThemeEntry_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ModuleThemeEntry_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ModuleThemeEntry","\x95","\x0d","\x93","\x79"); }

		::String name;
		::String parent;
		::Array< ::Dynamic> styles;
};

} // end namespace haxe
} // end namespace ui
} // end namespace parsers
} // end namespace modules

#endif /* INCLUDED_haxe_ui_parsers_modules_ModuleThemeEntry */ 
