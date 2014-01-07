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

#if ENABLE(XPATH)

#include "JSXPathNSResolver.h"

#include "ExceptionCode.h"
#include "JSCustomXPathNSResolver.h"
#include "JSDOMBinding.h"
#include "JSXPathNSResolver.h"
#include "KURL.h"
#include "PlatformString.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSXPathNSResolver);

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSXPathNSResolverPrototypeTableValues[2] =
{
    { "lookupNamespaceURI", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsXPathNSResolverPrototypeFunctionLookupNamespaceURI), (intptr_t)1 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSXPathNSResolverPrototypeTable = { 2, 1, JSXPathNSResolverPrototypeTableValues, 0 };
const ClassInfo JSXPathNSResolverPrototype::s_info = { "XPathNSResolverPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSXPathNSResolverPrototypeTable, 0 };

JSObject* JSXPathNSResolverPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSXPathNSResolver>(exec, globalObject);
}

bool JSXPathNSResolverPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSXPathNSResolverPrototypeTable, this, propertyName, slot);
}

bool JSXPathNSResolverPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSXPathNSResolverPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSXPathNSResolver::s_info = { "XPathNSResolver", &JSDOMWrapper::s_info, 0, 0 };

JSXPathNSResolver::JSXPathNSResolver(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<XPathNSResolver> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSXPathNSResolver::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSXPathNSResolverPrototype(exec->globalData(), globalObject, JSXPathNSResolverPrototype::createStructure(globalObject->globalData(), globalObject->objectPrototype()));
}

EncodedJSValue JSC_HOST_CALL jsXPathNSResolverPrototypeFunctionLookupNamespaceURI(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSXPathNSResolver::s_info))
        return throwVMTypeError(exec);
    JSXPathNSResolver* castedThis = static_cast<JSXPathNSResolver*>(asObject(thisValue));
    XPathNSResolver* imp = static_cast<XPathNSResolver*>(castedThis->impl());
    const String& prefix(ustringToString(exec->argument(0).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = jsStringOrNull(exec, imp->lookupNamespaceURI(prefix));
    return JSValue::encode(result);
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, XPathNSResolver* impl)
{
    return wrap<JSXPathNSResolver>(exec, globalObject, impl);
}

XPathNSResolver* toXPathNSResolver(JSC::JSValue value)
{
    return value.inherits(&JSXPathNSResolver::s_info) ? static_cast<JSXPathNSResolver*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(XPATH)