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

#include "config.h"
#include "JSTestOverridingNameGetter.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "TestOverridingNameGetter.h"
#include "wtf/text/AtomicString.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSTestOverridingNameGetter);
ASSERT_HAS_TRIVIAL_DESTRUCTOR(JSTestOverridingNameGetter);

/* Hash table */

static const HashTableValue JSTestOverridingNameGetterTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTestOverridingNameGetterConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSTestOverridingNameGetterTable = { 2, 1, JSTestOverridingNameGetterTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSTestOverridingNameGetterConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSTestOverridingNameGetterConstructorTable = { 1, 0, JSTestOverridingNameGetterConstructorTableValues, 0 };
ASSERT_HAS_TRIVIAL_DESTRUCTOR(JSTestOverridingNameGetterConstructor);

const ClassInfo JSTestOverridingNameGetterConstructor::s_info = { "TestOverridingNameGetterConstructor", &Base::s_info, &JSTestOverridingNameGetterConstructorTable, 0, CREATE_METHOD_TABLE(JSTestOverridingNameGetterConstructor) };

JSTestOverridingNameGetterConstructor::JSTestOverridingNameGetterConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSTestOverridingNameGetterConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->globalData());
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSTestOverridingNameGetterPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSTestOverridingNameGetterConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSTestOverridingNameGetterConstructor, JSDOMWrapper>(exec, &JSTestOverridingNameGetterConstructorTable, static_cast<JSTestOverridingNameGetterConstructor*>(cell), propertyName, slot);
}

bool JSTestOverridingNameGetterConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSTestOverridingNameGetterConstructor, JSDOMWrapper>(exec, &JSTestOverridingNameGetterConstructorTable, static_cast<JSTestOverridingNameGetterConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSTestOverridingNameGetterPrototypeTableValues[] =
{
    { "anotherFunction", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsTestOverridingNameGetterPrototypeFunctionAnotherFunction), (intptr_t)1, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSTestOverridingNameGetterPrototypeTable = { 2, 1, JSTestOverridingNameGetterPrototypeTableValues, 0 };
const ClassInfo JSTestOverridingNameGetterPrototype::s_info = { "TestOverridingNameGetterPrototype", &Base::s_info, &JSTestOverridingNameGetterPrototypeTable, 0, CREATE_METHOD_TABLE(JSTestOverridingNameGetterPrototype) };

JSObject* JSTestOverridingNameGetterPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSTestOverridingNameGetter>(exec, globalObject);
}

bool JSTestOverridingNameGetterPrototype::getOwnPropertySlot(JSCell* cell, ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    JSTestOverridingNameGetterPrototype* thisObject = jsCast<JSTestOverridingNameGetterPrototype*>(cell);
    return getStaticFunctionSlot<JSObject>(exec, &JSTestOverridingNameGetterPrototypeTable, thisObject, propertyName, slot);
}

bool JSTestOverridingNameGetterPrototype::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    JSTestOverridingNameGetterPrototype* thisObject = jsCast<JSTestOverridingNameGetterPrototype*>(object);
    return getStaticFunctionDescriptor<JSObject>(exec, &JSTestOverridingNameGetterPrototypeTable, thisObject, propertyName, descriptor);
}

const ClassInfo JSTestOverridingNameGetter::s_info = { "TestOverridingNameGetter", &Base::s_info, &JSTestOverridingNameGetterTable, 0 , CREATE_METHOD_TABLE(JSTestOverridingNameGetter) };

JSTestOverridingNameGetter::JSTestOverridingNameGetter(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<TestOverridingNameGetter> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSTestOverridingNameGetter::finishCreation(JSGlobalData& globalData)
{
    Base::finishCreation(globalData);
    ASSERT(inherits(&s_info));
}

JSObject* JSTestOverridingNameGetter::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSTestOverridingNameGetterPrototype::create(exec->globalData(), globalObject, JSTestOverridingNameGetterPrototype::createStructure(globalObject->globalData(), globalObject, globalObject->objectPrototype()));
}

void JSTestOverridingNameGetter::destroy(JSC::JSCell* cell)
{
    JSTestOverridingNameGetter* thisObject = jsCast<JSTestOverridingNameGetter*>(cell);
    thisObject->releaseImplIfNotNull();
}

bool JSTestOverridingNameGetter::getOwnPropertySlot(JSCell* cell, ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    JSTestOverridingNameGetter* thisObject = jsCast<JSTestOverridingNameGetter*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    if (canGetItemsForName(exec, static_cast<TestOverridingNameGetter*>(thisObject->impl()), propertyName)) {
        slot.setCustom(thisObject, thisObject->nameGetter);
        return true;
    }
    return getStaticValueSlot<JSTestOverridingNameGetter, Base>(exec, &JSTestOverridingNameGetterTable, thisObject, propertyName, slot);
}

bool JSTestOverridingNameGetter::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    JSTestOverridingNameGetter* thisObject = jsCast<JSTestOverridingNameGetter*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    if (canGetItemsForName(exec, static_cast<TestOverridingNameGetter*>(thisObject->impl()), propertyName)) {
        PropertySlot slot;
        slot.setCustom(thisObject, nameGetter);
        descriptor.setDescriptor(slot.getValue(exec, propertyName), ReadOnly | DontDelete | DontEnum);
        return true;
    }
    return getStaticValueDescriptor<JSTestOverridingNameGetter, Base>(exec, &JSTestOverridingNameGetterTable, thisObject, propertyName, descriptor);
}

JSValue jsTestOverridingNameGetterConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSTestOverridingNameGetter* domObject = static_cast<JSTestOverridingNameGetter*>(asObject(slotBase));
    return JSTestOverridingNameGetter::getConstructor(exec, domObject->globalObject());
}

JSValue JSTestOverridingNameGetter::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSTestOverridingNameGetterConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsTestOverridingNameGetterPrototypeFunctionAnotherFunction(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSTestOverridingNameGetter::s_info))
        return throwVMTypeError(exec);
    JSTestOverridingNameGetter* castedThis = static_cast<JSTestOverridingNameGetter*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSTestOverridingNameGetter::s_info);
    TestOverridingNameGetter* impl = static_cast<TestOverridingNameGetter*>(castedThis->impl());
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createTypeError(exec, "Not enough arguments"));
    const String& str(ustringToString(MAYBE_MISSING_PARAMETER(exec, 0, MissingIsUndefined).isEmpty() ? UString() : MAYBE_MISSING_PARAMETER(exec, 0, MissingIsUndefined).toString(exec)->value(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl->anotherFunction(str);
    return JSValue::encode(jsUndefined());
}

static inline bool isObservable(JSTestOverridingNameGetter* jsTestOverridingNameGetter)
{
    if (jsTestOverridingNameGetter->hasCustomProperties())
        return true;
    return false;
}

bool JSTestOverridingNameGetterOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSTestOverridingNameGetter* jsTestOverridingNameGetter = static_cast<JSTestOverridingNameGetter*>(handle.get().asCell());
    if (!isObservable(jsTestOverridingNameGetter))
        return false;
    UNUSED_PARAM(visitor);
    return false;
}

void JSTestOverridingNameGetterOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSTestOverridingNameGetter* jsTestOverridingNameGetter = static_cast<JSTestOverridingNameGetter*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsTestOverridingNameGetter->impl(), jsTestOverridingNameGetter);
    jsTestOverridingNameGetter->releaseImpl();
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, TestOverridingNameGetter* impl)
{
    return wrap<JSTestOverridingNameGetter>(exec, globalObject, impl);
}

TestOverridingNameGetter* toTestOverridingNameGetter(JSC::JSValue value)
{
    return value.inherits(&JSTestOverridingNameGetter::s_info) ? static_cast<JSTestOverridingNameGetter*>(asObject(value))->impl() : 0;
}

}
