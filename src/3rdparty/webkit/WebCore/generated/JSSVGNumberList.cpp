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

#if ENABLE(SVG)

#include "JSSVGNumberList.h"

#include "JSSVGNumber.h"
#include "SVGNumberList.h"
#include <runtime/Error.h>
#include <runtime/JSNumberCell.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGNumberList);

/* Hash table */

static const HashTableValue JSSVGNumberListTableValues[2] =
{
    { "numberOfItems", DontDelete|ReadOnly, (intptr_t)jsSVGNumberListNumberOfItems, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGNumberListTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSSVGNumberListTableValues, 0 };
#else
    { 2, 1, JSSVGNumberListTableValues, 0 };
#endif

/* Hash table for prototype */

static const HashTableValue JSSVGNumberListPrototypeTableValues[8] =
{
    { "clear", DontDelete|Function, (intptr_t)jsSVGNumberListPrototypeFunctionClear, (intptr_t)0 },
    { "initialize", DontDelete|Function, (intptr_t)jsSVGNumberListPrototypeFunctionInitialize, (intptr_t)1 },
    { "getItem", DontDelete|Function, (intptr_t)jsSVGNumberListPrototypeFunctionGetItem, (intptr_t)1 },
    { "insertItemBefore", DontDelete|Function, (intptr_t)jsSVGNumberListPrototypeFunctionInsertItemBefore, (intptr_t)2 },
    { "replaceItem", DontDelete|Function, (intptr_t)jsSVGNumberListPrototypeFunctionReplaceItem, (intptr_t)2 },
    { "removeItem", DontDelete|Function, (intptr_t)jsSVGNumberListPrototypeFunctionRemoveItem, (intptr_t)1 },
    { "appendItem", DontDelete|Function, (intptr_t)jsSVGNumberListPrototypeFunctionAppendItem, (intptr_t)1 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGNumberListPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 63, JSSVGNumberListPrototypeTableValues, 0 };
#else
    { 18, 15, JSSVGNumberListPrototypeTableValues, 0 };
#endif

const ClassInfo JSSVGNumberListPrototype::s_info = { "SVGNumberListPrototype", 0, &JSSVGNumberListPrototypeTable, 0 };

JSObject* JSSVGNumberListPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGNumberList>(exec, globalObject);
}

bool JSSVGNumberListPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSSVGNumberListPrototypeTable, this, propertyName, slot);
}

bool JSSVGNumberListPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSSVGNumberListPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSSVGNumberList::s_info = { "SVGNumberList", 0, &JSSVGNumberListTable, 0 };

JSSVGNumberList::JSSVGNumberList(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGNumberList> impl, SVGElement* context)
    : DOMObjectWithSVGContext(structure, globalObject, context)
    , m_impl(impl)
{
}

JSSVGNumberList::~JSSVGNumberList()
{
    forgetDOMObject(this, impl());
}

JSObject* JSSVGNumberList::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGNumberListPrototype(JSSVGNumberListPrototype::createStructure(globalObject->objectPrototype()));
}

bool JSSVGNumberList::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGNumberList, Base>(exec, &JSSVGNumberListTable, this, propertyName, slot);
}

bool JSSVGNumberList::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGNumberList, Base>(exec, &JSSVGNumberListTable, this, propertyName, descriptor);
}

JSValue jsSVGNumberListNumberOfItems(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGNumberList* castedThis = static_cast<JSSVGNumberList*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGNumberList* imp = static_cast<SVGNumberList*>(castedThis->impl());
    return jsNumber(exec, imp->numberOfItems());
}

JSValue JSC_HOST_CALL jsSVGNumberListPrototypeFunctionClear(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGNumberList::s_info))
        return throwError(exec, TypeError);
    JSSVGNumberList* castedThisObj = static_cast<JSSVGNumberList*>(asObject(thisValue));
    SVGNumberList* imp = static_cast<SVGNumberList*>(castedThisObj->impl());
    ExceptionCode ec = 0;

    imp->clear(ec);
    setDOMException(exec, ec);
    return jsUndefined();
}

JSValue JSC_HOST_CALL jsSVGNumberListPrototypeFunctionInitialize(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGNumberList::s_info))
        return throwError(exec, TypeError);
    JSSVGNumberList* castedThisObj = static_cast<JSSVGNumberList*>(asObject(thisValue));
    SVGNumberList* imp = static_cast<SVGNumberList*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    float item = args.at(0).toFloat(exec);


    JSC::JSValue result = toJS(exec, deprecatedGlobalObjectForPrototype(exec), JSSVGStaticPODTypeWrapper<float>::create(imp->initialize(item, ec)).get(), castedThisObj->context());
    setDOMException(exec, ec);
    return result;
}

JSValue JSC_HOST_CALL jsSVGNumberListPrototypeFunctionGetItem(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGNumberList::s_info))
        return throwError(exec, TypeError);
    JSSVGNumberList* castedThisObj = static_cast<JSSVGNumberList*>(asObject(thisValue));
    SVGNumberList* imp = static_cast<SVGNumberList*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    unsigned index = args.at(0).toInt32(exec);


    JSC::JSValue result = toJS(exec, deprecatedGlobalObjectForPrototype(exec), JSSVGStaticPODTypeWrapper<float>::create(imp->getItem(index, ec)).get(), castedThisObj->context());
    setDOMException(exec, ec);
    return result;
}

JSValue JSC_HOST_CALL jsSVGNumberListPrototypeFunctionInsertItemBefore(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGNumberList::s_info))
        return throwError(exec, TypeError);
    JSSVGNumberList* castedThisObj = static_cast<JSSVGNumberList*>(asObject(thisValue));
    SVGNumberList* imp = static_cast<SVGNumberList*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    float item = args.at(0).toFloat(exec);
    unsigned index = args.at(1).toInt32(exec);


    JSC::JSValue result = toJS(exec, deprecatedGlobalObjectForPrototype(exec), JSSVGStaticPODTypeWrapper<float>::create(imp->insertItemBefore(item, index, ec)).get(), castedThisObj->context());
    setDOMException(exec, ec);
    return result;
}

JSValue JSC_HOST_CALL jsSVGNumberListPrototypeFunctionReplaceItem(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGNumberList::s_info))
        return throwError(exec, TypeError);
    JSSVGNumberList* castedThisObj = static_cast<JSSVGNumberList*>(asObject(thisValue));
    SVGNumberList* imp = static_cast<SVGNumberList*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    float item = args.at(0).toFloat(exec);
    unsigned index = args.at(1).toInt32(exec);


    JSC::JSValue result = toJS(exec, deprecatedGlobalObjectForPrototype(exec), JSSVGStaticPODTypeWrapper<float>::create(imp->replaceItem(item, index, ec)).get(), castedThisObj->context());
    setDOMException(exec, ec);
    return result;
}

JSValue JSC_HOST_CALL jsSVGNumberListPrototypeFunctionRemoveItem(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGNumberList::s_info))
        return throwError(exec, TypeError);
    JSSVGNumberList* castedThisObj = static_cast<JSSVGNumberList*>(asObject(thisValue));
    SVGNumberList* imp = static_cast<SVGNumberList*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    unsigned index = args.at(0).toInt32(exec);


    JSC::JSValue result = toJS(exec, deprecatedGlobalObjectForPrototype(exec), JSSVGStaticPODTypeWrapper<float>::create(imp->removeItem(index, ec)).get(), castedThisObj->context());
    setDOMException(exec, ec);
    return result;
}

JSValue JSC_HOST_CALL jsSVGNumberListPrototypeFunctionAppendItem(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGNumberList::s_info))
        return throwError(exec, TypeError);
    JSSVGNumberList* castedThisObj = static_cast<JSSVGNumberList*>(asObject(thisValue));
    SVGNumberList* imp = static_cast<SVGNumberList*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    float item = args.at(0).toFloat(exec);


    JSC::JSValue result = toJS(exec, deprecatedGlobalObjectForPrototype(exec), JSSVGStaticPODTypeWrapper<float>::create(imp->appendItem(item, ec)).get(), castedThisObj->context());
    setDOMException(exec, ec);
    return result;
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, SVGNumberList* object, SVGElement* context)
{
    return getDOMObjectWrapper<JSSVGNumberList>(exec, globalObject, object, context);
}
SVGNumberList* toSVGNumberList(JSC::JSValue value)
{
    return value.inherits(&JSSVGNumberList::s_info) ? static_cast<JSSVGNumberList*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(SVG)
