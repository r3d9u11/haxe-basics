// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_parsers_ui_resolvers_AssetResourceResolver
#define INCLUDED_haxe_ui_parsers_ui_resolvers_AssetResourceResolver

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_parsers_ui_resolvers_ResourceResolver
#include <haxe/ui/parsers/ui/resolvers/ResourceResolver.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS5(haxe,ui,parsers,ui,resolvers,AssetResourceResolver)
HX_DECLARE_CLASS5(haxe,ui,parsers,ui,resolvers,ResourceResolver)

namespace haxe{
namespace ui{
namespace parsers{
namespace ui{
namespace resolvers{


class HXCPP_CLASS_ATTRIBUTES AssetResourceResolver_obj : public  ::haxe::ui::parsers::ui::resolvers::ResourceResolver_obj
{
	public:
		typedef  ::haxe::ui::parsers::ui::resolvers::ResourceResolver_obj super;
		typedef AssetResourceResolver_obj OBJ_;
		AssetResourceResolver_obj();

	public:
		enum { _hx_ClassId = 0x7f5e978d };

		void __construct(::String rootFile, ::haxe::ds::StringMap params);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.parsers.ui.resolvers.AssetResourceResolver")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.parsers.ui.resolvers.AssetResourceResolver"); }
		static hx::ObjectPtr< AssetResourceResolver_obj > __new(::String rootFile, ::haxe::ds::StringMap params);
		static hx::ObjectPtr< AssetResourceResolver_obj > __alloc(hx::Ctx *_hx_ctx,::String rootFile, ::haxe::ds::StringMap params);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AssetResourceResolver_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("AssetResourceResolver","\xe4","\x68","\x7f","\xab"); }

		::String _rootFile;
		::String _rootDir;
		::String getResourceData(::String r);

};

} // end namespace haxe
} // end namespace ui
} // end namespace parsers
} // end namespace ui
} // end namespace resolvers

#endif /* INCLUDED_haxe_ui_parsers_ui_resolvers_AssetResourceResolver */ 
