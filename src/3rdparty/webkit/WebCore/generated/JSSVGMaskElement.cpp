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

#include "JSSVGMaskElement.h"

#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "CSSValue.h"
#include "JSCSSStyleDeclaration.h"
#include "JSCSSValue.h"
#include "JSSVGAnimatedBoolean.h"
#include "JSSVGAnimatedEnumeration.h"
#include "JSSVGAnimatedLength.h"
#include "JSSVGAnimatedString.h"
#include "JSSVGStringList.h"
#include "KURL.h"
#include "SVGMaskElement.h"
#include "SVGStringList.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGMaskElement);

/* Hash table */

static const HashTableValue JSSVGMaskElementTableValues[15] =
{
    { "maskUnits", DontDelete|ReadOnly, (intptr_t)jsSVGMaskElementMaskUnits, (intptr_t)0 },
    { "maskContentUnits", DontDelete|ReadOnly, (intptr_t)jsSVGMaskElementMaskContentUnits, (intptr_t)0 },
    { "x", DontDelete|ReadOnly, (intptr_t)jsSVGMaskElementX, (intptr_t)0 },
    { "y", DontDelete|ReadOnly, (intptr_t)jsSVGMaskElementY, (intptr_t)0 },
    { "width", DontDelete|ReadOnly, (intptr_t)jsSVGMaskElementWidth, (intptr_t)0 },
    { "height", DontDelete|ReadOnly, (intptr_t)jsSVGMaskElementHeight, (intptr_t)0 },
    { "requiredFeatures", DontDelete|ReadOnly, (intptr_t)jsSVGMaskElementRequiredFeatures, (intptr_t)0 },
    { "requiredExtensions", DontDelete|ReadOnly, (intptr_t)jsSVGMaskElementRequiredExtensions, (intptr_t)0 },
    { "systemLanguage", DontDelete|ReadOnly, (intptr_t)jsSVGMaskElementSystemLanguage, (intptr_t)0 },
    { "xmllang", DontDelete, (intptr_t)jsSVGMaskElementXmllang, (intptr_t)setJSSVGMaskElementXmllang },
    { "xmlspace", DontDelete, (intptr_t)jsSVGMaskElementXmlspace, (intptr_t)setJSSVGMaskElementXmlspace },
    { "externalResourcesRequired", DontDelete|ReadOnly, (intptr_t)jsSVGMaskElementExternalResourcesRequired, (intptr_t)0 },
    { "className", DontDelete|ReadOnly, (intptr_t)jsSVGMaskElementClassName, (intptr_t)0 },
    { "style", DontDelete|ReadOnly, (intptr_t)jsSVGMaskElementStyle, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGMaskElementTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 255, JSSVGMaskElementTableValues, 0 };
#else
    { 36, 31, JSSVGMaskElementTableValues, 0 };
#endif

/* Hash table for prototype */

static const HashTableValue JSSVGMaskElementPrototypeTableValues[3] =
{
    { "hasExtension", DontDelete|Function, (intptr_t)jsSVGMaskElementPrototypeFunctionHasExtension, (intptr_t)1 },
    { "getPresentationAttribute", DontDelete|Function, (intptr_t)jsSVGMaskElementPrototypeFunctionGetPresentationAttribute, (intptr_t)1 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGMaskElementPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 1, JSSVGMaskElementPrototypeTableValues, 0 };
#else
    { 4, 3, JSSVGMaskElementPrototypeTableValues, 0 };
#endif

const ClassInfo JSSVGMaskElementPrototype::s_info = { "SVGMaskElementPrototype", 0, &JSSVGMaskElementPrototypeTable, 0 };

JSObject* JSSVGMaskElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGMaskElement>(exec, globalObject);
}

bool JSSVGMaskElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSSVGMaskElementPrototypeTable, this, propertyName, slot);
}

bool JSSVGMaskElementPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSSVGMaskElementPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSSVGMaskElement::s_info = { "SVGMaskElement", &JSSVGElement::s_info, &JSSVGMaskElementTable, 0 };

JSSVGMaskElement::JSSVGMaskElement(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGMaskElement> impl)
    : JSSVGElement(structure, globalObject, impl)
{
}

JSObject* JSSVGMaskElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGMaskElementPrototype(JSSVGMaskElementPrototype::createStructure(JSSVGElementPrototype::self(exec, globalObject)));
}

bool JSSVGMaskElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGMaskElement, Base>(exec, &JSSVGMaskElementTable, this, propertyName, slot);
}

bool JSSVGMaskElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGMaskElement, Base>(exec, &JSSVGMaskElementTable, this, propertyName, descriptor);
}

JSValue jsSVGMaskElementMaskUnits(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGMaskElement* castedThis = static_cast<JSSVGMaskElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGMaskElement* imp = static_cast<SVGMaskElement*>(castedThis->impl());
    RefPtr<SVGAnimatedEnumeration> obj = imp->maskUnitsAnimated();
    return toJS(exec, castedThis->globalObject(), obj.get(), imp);
}

JSValue jsSVGMaskElementMaskContentUnits(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGMaskElement* castedThis = static_cast<JSSVGMaskElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGMaskElement* imp = static_cast<SVGMaskElement*>(castedThis->impl());
    RefPtr<SVGAnimatedEnumeration> obj = imp->maskContentUnitsAnimated();
    return toJS(exec, castedThis->globalObject(), obj.get(), imp);
}

JSValue jsSVGMaskElementX(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGMaskElement* castedThis = static_cast<JSSVGMaskElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGMaskElement* imp = static_cast<SVGMaskElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->xAnimated();
    return toJS(exec, castedThis->globalObject(), obj.get(), imp);
}

JSValue jsSVGMaskElementY(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGMaskElement* castedThis = static_cast<JSSVGMaskElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGMaskElement* imp = static_cast<SVGMaskElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->yAnimated();
    return toJS(exec, castedThis->globalObject(), obj.get(), imp);
}

JSValue jsSVGMaskElementWidth(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGMaskElement* castedThis = static_cast<JSSVGMaskElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGMaskElement* imp = static_cast<SVGMaskElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->widthAnimated();
    return toJS(exec, castedThis->globalObject(), obj.get(), imp);
}

JSValue jsSVGMaskElementHeight(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGMaskElement* castedThis = static_cast<JSSVGMaskElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGMaskElement* imp = static_cast<SVGMaskElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->heightAnimated();
    return toJS(exec, castedThis->globalObject(), obj.get(), imp);
}

JSValue jsSVGMaskElementRequiredFeatures(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGMaskElement* castedThis = static_cast<JSSVGMaskElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGMaskElement* imp = static_cast<SVGMaskElement*>(castedThis->impl());
    return toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->requiredFeatures()), imp);
}

JSValue jsSVGMaskElementRequiredExtensions(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGMaskElement* castedThis = static_cast<JSSVGMaskElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGMaskElement* imp = static_cast<SVGMaskElement*>(castedThis->impl());
    return toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->requiredExtensions()), imp);
}

JSValue jsSVGMaskElementSystemLanguage(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGMaskElement* castedThis = static_cast<JSSVGMaskElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGMaskElement* imp = static_cast<SVGMaskElement*>(castedThis->impl());
    return toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->systemLanguage()), imp);
}

JSValue jsSVGMaskElementXmllang(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGMaskElement* castedThis = static_cast<JSSVGMaskElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGMaskElement* imp = static_cast<SVGMaskElement*>(castedThis->impl());
    return jsString(exec, imp->xmllang());
}

JSValue jsSVGMaskElementXmlspace(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGMaskElement* castedThis = static_cast<JSSVGMaskElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGMaskElement* imp = static_cast<SVGMaskElement*>(castedThis->impl());
    return jsString(exec, imp->xmlspace());
}

JSValue jsSVGMaskElementExternalResourcesRequired(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGMaskElement* castedThis = static_cast<JSSVGMaskElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGMaskElement* imp = static_cast<SVGMaskElement*>(castedThis->impl());
    RefPtr<SVGAnimatedBoolean> obj = imp->externalResourcesRequiredAnimated();
    return toJS(exec, castedThis->globalObject(), obj.get(), imp);
}

JSValue jsSVGMaskElementClassName(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGMaskElement* castedThis = static_cast<JSSVGMaskElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGMaskElement* imp = static_cast<SVGMaskElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->classNameAnimated();
    return toJS(exec, castedThis->globalObject(), obj.get(), imp);
}

JSValue jsSVGMaskElementStyle(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGMaskElement* castedThis = static_cast<JSSVGMaskElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGMaskElement* imp = static_cast<SVGMaskElement*>(castedThis->impl());
    return toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->style()));
}

void JSSVGMaskElement::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSSVGMaskElement, Base>(exec, propertyName, value, &JSSVGMaskElementTable, this, slot);
}

void setJSSVGMaskElementXmllang(ExecState* exec, JSObject* thisObject, JSValue value)
{
    SVGMaskElement* imp = static_cast<SVGMaskElement*>(static_cast<JSSVGMaskElement*>(thisObject)->impl());
    imp->setXmllang(value.toString(exec));
}

void setJSSVGMaskElementXmlspace(ExecState* exec, JSObject* thisObject, JSValue value)
{
    SVGMaskElement* imp = static_cast<SVGMaskElement*>(static_cast<JSSVGMaskElement*>(thisObject)->impl());
    imp->setXmlspace(value.toString(exec));
}

JSValue JSC_HOST_CALL jsSVGMaskElementPrototypeFunctionHasExtension(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGMaskElement::s_info))
        return throwError(exec, TypeError);
    JSSVGMaskElement* castedThisObj = static_cast<JSSVGMaskElement*>(asObject(thisValue));
    SVGMaskElement* imp = static_cast<SVGMaskElement*>(castedThisObj->impl());
    const UString& extension = args.at(0).toString(exec);


    JSC::JSValue result = jsBoolean(imp->hasExtension(extension));
    return result;
}

JSValue JSC_HOST_CALL jsSVGMaskElementPrototypeFunctionGetPresentationAttribute(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGMaskElement::s_info))
        return throwError(exec, TypeError);
    JSSVGMaskElement* castedThisObj = static_cast<JSSVGMaskElement*>(asObject(thisValue));
    SVGMaskElement* imp = static_cast<SVGMaskElement*>(castedThisObj->impl());
    const UString& name = args.at(0).toString(exec);


    JSC::JSValue result = toJS(exec, castedThisObj->globalObject(), WTF::getPtr(imp->getPresentationAttribute(name)));
    return result;
}


}

#endif // ENABLE(SVG)
