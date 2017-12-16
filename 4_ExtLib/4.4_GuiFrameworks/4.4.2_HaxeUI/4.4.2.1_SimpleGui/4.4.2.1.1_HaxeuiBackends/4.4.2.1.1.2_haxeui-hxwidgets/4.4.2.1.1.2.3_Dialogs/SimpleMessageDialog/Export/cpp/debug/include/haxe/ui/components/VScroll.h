// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_components_VScroll
#define INCLUDED_haxe_ui_components_VScroll

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_components_Scroll
#include <haxe/ui/components/Scroll.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,components,Scroll)
HX_DECLARE_CLASS3(haxe,ui,components,VScroll)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
HX_DECLARE_CLASS3(haxe,ui,core,InteractiveComponent)
HX_DECLARE_CLASS3(haxe,ui,core,MouseEvent)
HX_DECLARE_CLASS3(haxe,ui,core,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,focus,IFocusable)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace components{


class HXCPP_CLASS_ATTRIBUTES VScroll_obj : public  ::haxe::ui::components::Scroll_obj
{
	public:
		typedef  ::haxe::ui::components::Scroll_obj super;
		typedef VScroll_obj OBJ_;
		VScroll_obj();

	public:
		enum { _hx_ClassId = 0x1d4149a3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components.VScroll")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.components.VScroll"); }
		static hx::ObjectPtr< VScroll_obj > __new();
		static hx::ObjectPtr< VScroll_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VScroll_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("VScroll","\x03","\x31","\x2f","\x74"); }

		void createDefaults();

		void _onThumbMouseDown( ::haxe::ui::core::MouseEvent event);

		void _onScreenMouseMove( ::haxe::ui::core::MouseEvent event);

		void _onMouseDown( ::haxe::ui::core::MouseEvent event);

		 ::haxe::ui::core::Component cloneComponent();

		 ::haxe::ui::core::Component self();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components

#endif /* INCLUDED_haxe_ui_components_VScroll */ 
