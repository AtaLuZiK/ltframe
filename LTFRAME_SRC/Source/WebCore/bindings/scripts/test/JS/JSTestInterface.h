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

#ifndef JSTestInterface_h
#define JSTestInterface_h

#if ENABLE(Condition1) || ENABLE(Condition2)

#include "JSDOMBinding.h"
#include "TestInterface.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSTestInterface : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSTestInterface* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<TestInterface> impl)
    {
        JSTestInterface* ptr = new (NotNull, JSC::allocateCell<JSTestInterface>(globalObject->globalData().heap)) JSTestInterface(structure, globalObject, impl);
        ptr->finishCreation(globalObject->globalData());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertyDescriptor&);
    static void put(JSC::JSCell*, JSC::ExecState*, const JSC::Identifier& propertyName, JSC::JSValue, JSC::PutPropertySlot&);
    bool putDelegate(JSC::ExecState*, const JSC::Identifier&, JSC::JSValue, JSC::PutPropertySlot&);
    static void destroy(JSC::JSCell*);
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);

    // Custom attributes
    JSC::JSValue supplementalStr3(JSC::ExecState*) const;
    void setSupplementalStr3(JSC::ExecState*, JSC::JSValue);

    // Custom functions
    JSC::JSValue supplementalMethod3(JSC::ExecState*);
    TestInterface* impl() const { return m_impl; }
    void releaseImpl() { m_impl->deref(); m_impl = 0; }

    void releaseImplIfNotNull() { if (m_impl) { m_impl->deref(); m_impl = 0; } }

private:
    TestInterface* m_impl;
protected:
    JSTestInterface(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<TestInterface>);
    void finishCreation(JSC::JSGlobalData&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSTestInterfaceOwner : public JSC::WeakHandleOwner {
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld*, TestInterface*)
{
    DEFINE_STATIC_LOCAL(JSTestInterfaceOwner, jsTestInterfaceOwner, ());
    return &jsTestInterfaceOwner;
}

inline void* wrapperContext(DOMWrapperWorld* world, TestInterface*)
{
    return world;
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, TestInterface*);
TestInterface* toTestInterface(JSC::JSValue);

class JSTestInterfacePrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSTestInterfacePrototype* create(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSTestInterfacePrototype* ptr = new (NotNull, JSC::allocateCell<JSTestInterfacePrototype>(globalData.heap)) JSTestInterfacePrototype(globalData, globalObject, structure);
        ptr->finishCreation(globalData);
        return ptr;
    }

    static const JSC::ClassInfo s_info;
    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

private:
    JSTestInterfacePrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(globalData, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSTestInterfaceConstructor : public DOMConstructorObject {
private:
    JSTestInterfaceConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSTestInterfaceConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSTestInterfaceConstructor* ptr = new (NotNull, JSC::allocateCell<JSTestInterfaceConstructor>(*exec->heap())) JSTestInterfaceConstructor(structure, globalObject);
        ptr->finishCreation(exec, globalObject);
        return ptr;
    }

    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::ImplementsHasInstance | DOMConstructorObject::StructureFlags;
    static JSC::EncodedJSValue JSC_HOST_CALL constructJSTestInterface(JSC::ExecState*);
    static JSC::ConstructType getConstructData(JSC::JSCell*, JSC::ConstructData&);
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsTestInterfacePrototypeFunctionSupplementalMethod1(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestInterfacePrototypeFunctionSupplementalMethod2(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestInterfacePrototypeFunctionSupplementalMethod3(JSC::ExecState*);
// Attributes

JSC::JSValue jsTestInterfaceSupplementalStr1(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsTestInterfaceSupplementalStr2(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSTestInterfaceSupplementalStr2(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsTestInterfaceSupplementalStr3(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSTestInterfaceSupplementalStr3(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsTestInterfaceConstructor(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);

} // namespace WebCore

#endif // ENABLE(Condition1) || ENABLE(Condition2)

#endif
