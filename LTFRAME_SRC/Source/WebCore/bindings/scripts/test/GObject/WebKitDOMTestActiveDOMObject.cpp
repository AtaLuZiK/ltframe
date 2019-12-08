/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include <glib-object.h>
#include "config.h"

#include <wtf/GetPtr.h>
#include <wtf/RefPtr.h>
#include "DOMObjectCache.h"
#include "ExceptionCode.h"
#include "JSMainThreadExecState.h"
#include "TestActiveDOMObject.h"
#include "WebKitDOMBinding.h"
#include "gobject/ConvertToUTF8String.h"
#include "webkit/WebKitDOMNode.h"
#include "webkit/WebKitDOMNodePrivate.h"
#include "webkit/WebKitDOMTestActiveDOMObject.h"
#include "webkit/WebKitDOMTestActiveDOMObjectPrivate.h"
#include "webkitdefines.h"
#include "webkitglobalsprivate.h"
#include "webkitmarshal.h"

namespace WebKit {
    
WebKitDOMTestActiveDOMObject* kit(WebCore::TestActiveDOMObject* obj)
{
    g_return_val_if_fail(obj, 0);

    if (gpointer ret = DOMObjectCache::get(obj))
        return static_cast<WebKitDOMTestActiveDOMObject*>(ret);

    return static_cast<WebKitDOMTestActiveDOMObject*>(DOMObjectCache::put(obj, WebKit::wrapTestActiveDOMObject(obj)));
}
    
} // namespace WebKit //

void
webkit_dom_test_active_dom_object_exciting_function(WebKitDOMTestActiveDOMObject* self, WebKitDOMNode* next_child)
{
    g_return_if_fail(self);
    WebCore::JSMainThreadNullState state;
    WebCore::TestActiveDOMObject * item = WebKit::core(self);
    g_return_if_fail(next_child);
    WebCore::Node * converted_next_child = NULL;
    if (next_child != NULL) {
        converted_next_child = WebKit::core(next_child);
        g_return_if_fail(converted_next_child);
    }
    item->excitingFunction(converted_next_child);
}

void
webkit_dom_test_active_dom_object_post_message(WebKitDOMTestActiveDOMObject* self, const gchar* message)
{
    g_return_if_fail(self);
    WebCore::JSMainThreadNullState state;
    WebCore::TestActiveDOMObject * item = WebKit::core(self);
    g_return_if_fail(message);
    WTF::String converted_message = WTF::String::fromUTF8(message);
    item->postMessage(converted_message);
}

glong
webkit_dom_test_active_dom_object_get_exciting_attr(WebKitDOMTestActiveDOMObject* self)
{
    g_return_val_if_fail(self, 0);
    WebCore::JSMainThreadNullState state;
    WebCore::TestActiveDOMObject * item = WebKit::core(self);
    glong res = item->excitingAttr();
    return res;
}


G_DEFINE_TYPE(WebKitDOMTestActiveDOMObject, webkit_dom_test_active_dom_object, WEBKIT_TYPE_DOM_OBJECT)

namespace WebKit {

WebCore::TestActiveDOMObject* core(WebKitDOMTestActiveDOMObject* request)
{
    g_return_val_if_fail(request, 0);

    WebCore::TestActiveDOMObject* coreObject = static_cast<WebCore::TestActiveDOMObject*>(WEBKIT_DOM_OBJECT(request)->coreObject);
    g_return_val_if_fail(coreObject, 0);

    return coreObject;
}

} // namespace WebKit
enum {
    PROP_0,
    PROP_EXCITING_ATTR,
};


static void webkit_dom_test_active_dom_object_finalize(GObject* object)
{
    WebKitDOMObject* dom_object = WEBKIT_DOM_OBJECT(object);
    
    if (dom_object->coreObject) {
        WebCore::TestActiveDOMObject* coreObject = static_cast<WebCore::TestActiveDOMObject *>(dom_object->coreObject);

        WebKit::DOMObjectCache::forget(coreObject);
        coreObject->deref();

        dom_object->coreObject = NULL;
    }

    G_OBJECT_CLASS(webkit_dom_test_active_dom_object_parent_class)->finalize(object);
}

static void webkit_dom_test_active_dom_object_set_property(GObject* object, guint prop_id, const GValue* value, GParamSpec* pspec)
{
    WebCore::JSMainThreadNullState state;
    switch (prop_id) {
    default:
        G_OBJECT_WARN_INVALID_PROPERTY_ID(object, prop_id, pspec);
        break;
    }
}


static void webkit_dom_test_active_dom_object_get_property(GObject* object, guint prop_id, GValue* value, GParamSpec* pspec)
{
    WebCore::JSMainThreadNullState state;
    WebKitDOMTestActiveDOMObject* self = WEBKIT_DOM_TEST_ACTIVE_DOM_OBJECT(object);
    WebCore::TestActiveDOMObject* coreSelf = WebKit::core(self);
    switch (prop_id) {
    case PROP_EXCITING_ATTR:
    {
        g_value_set_long(value, coreSelf->excitingAttr());
        break;
    }
    default:
        G_OBJECT_WARN_INVALID_PROPERTY_ID(object, prop_id, pspec);
        break;
    }
}


static void webkit_dom_test_active_dom_object_constructed(GObject* object)
{

    if (G_OBJECT_CLASS(webkit_dom_test_active_dom_object_parent_class)->constructed)
        G_OBJECT_CLASS(webkit_dom_test_active_dom_object_parent_class)->constructed(object);
}

static void webkit_dom_test_active_dom_object_class_init(WebKitDOMTestActiveDOMObjectClass* requestClass)
{
    GObjectClass *gobjectClass = G_OBJECT_CLASS(requestClass);
    gobjectClass->finalize = webkit_dom_test_active_dom_object_finalize;
    gobjectClass->set_property = webkit_dom_test_active_dom_object_set_property;
    gobjectClass->get_property = webkit_dom_test_active_dom_object_get_property;
    gobjectClass->constructed = webkit_dom_test_active_dom_object_constructed;

    g_object_class_install_property(gobjectClass,
                                    PROP_EXCITING_ATTR,
                                    g_param_spec_long("exciting-attr", /* name */
                                                           "test_active_dom_object_exciting-attr", /* short description */
                                                           "read-only  glong TestActiveDOMObject.exciting-attr", /* longer - could do with some extra doc stuff here */
                                                           G_MINLONG, /* min */
G_MAXLONG, /* max */
0, /* default */
                                                           WEBKIT_PARAM_READABLE));


}

static void webkit_dom_test_active_dom_object_init(WebKitDOMTestActiveDOMObject* request)
{
}

namespace WebKit {
WebKitDOMTestActiveDOMObject* wrapTestActiveDOMObject(WebCore::TestActiveDOMObject* coreObject)
{
    g_return_val_if_fail(coreObject, 0);

    /* We call ref() rather than using a C++ smart pointer because we can't store a C++ object
     * in a C-allocated GObject structure.  See the finalize() code for the
     * matching deref().
     */
    coreObject->ref();

    return  WEBKIT_DOM_TEST_ACTIVE_DOM_OBJECT(g_object_new(WEBKIT_TYPE_DOM_TEST_ACTIVE_DOM_OBJECT,
                                               "core-object", coreObject, NULL));
}
} // namespace WebKit
