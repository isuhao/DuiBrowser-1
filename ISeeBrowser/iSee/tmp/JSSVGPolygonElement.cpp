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

#include "Document.h"
#include "Frame.h"
#include "SVGDocumentExtensions.h"
#include "SVGElement.h"
#include "SVGAnimatedTemplate.h"
#include "JSSVGPolygonElement.h"

#include <wtf/GetPtr.h>

#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "CSSValue.h"
#include "JSCSSStyleDeclaration.h"
#include "JSCSSValue.h"
#include "JSSVGAnimatedBoolean.h"
#include "JSSVGAnimatedString.h"
#include "JSSVGAnimatedTransformList.h"
#include "JSSVGElement.h"
#include "JSSVGMatrix.h"
#include "JSSVGPointList.h"
#include "JSSVGRect.h"
#include "JSSVGStringList.h"
#include "KURL.h"
#include "SVGElement.h"
#include "SVGPointList.h"
#include "SVGPolygonElement.h"
#include "SVGStringList.h"

#include <kjs/Error.h>
#include <kjs/JSString.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGPolygonElement)

/* Hash table */

static const HashTableValue JSSVGPolygonElementTableValues[14] =
{
    { "requiredFeatures", (intptr_t)JSSVGPolygonElement::RequiredFeaturesAttrNum, DontDelete|ReadOnly, 0 },
    { "requiredExtensions", (intptr_t)JSSVGPolygonElement::RequiredExtensionsAttrNum, DontDelete|ReadOnly, 0 },
    { "systemLanguage", (intptr_t)JSSVGPolygonElement::SystemLanguageAttrNum, DontDelete|ReadOnly, 0 },
    { "xmllang", (intptr_t)JSSVGPolygonElement::XmllangAttrNum, DontDelete, 0 },
    { "xmlspace", (intptr_t)JSSVGPolygonElement::XmlspaceAttrNum, DontDelete, 0 },
    { "externalResourcesRequired", (intptr_t)JSSVGPolygonElement::ExternalResourcesRequiredAttrNum, DontDelete|ReadOnly, 0 },
    { "className", (intptr_t)JSSVGPolygonElement::ClassNameAttrNum, DontDelete|ReadOnly, 0 },
    { "style", (intptr_t)JSSVGPolygonElement::StyleAttrNum, DontDelete|ReadOnly, 0 },
    { "transform", (intptr_t)JSSVGPolygonElement::TransformAttrNum, DontDelete|ReadOnly, 0 },
    { "nearestViewportElement", (intptr_t)JSSVGPolygonElement::NearestViewportElementAttrNum, DontDelete|ReadOnly, 0 },
    { "farthestViewportElement", (intptr_t)JSSVGPolygonElement::FarthestViewportElementAttrNum, DontDelete|ReadOnly, 0 },
    { "points", (intptr_t)JSSVGPolygonElement::PointsAttrNum, DontDelete|ReadOnly, 0 },
    { "animatedPoints", (intptr_t)JSSVGPolygonElement::AnimatedPointsAttrNum, DontDelete|ReadOnly, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGPolygonElementTable = { 127, JSSVGPolygonElementTableValues, 0 };

/* Hash table for prototype */

static const HashTableValue JSSVGPolygonElementPrototypeTableValues[7] =
{
    { "hasExtension", (intptr_t)jsSVGPolygonElementPrototypeFunctionHasExtension, DontDelete|Function, 1 },
    { "getPresentationAttribute", (intptr_t)jsSVGPolygonElementPrototypeFunctionGetPresentationAttribute, DontDelete|Function, 1 },
    { "getBBox", (intptr_t)jsSVGPolygonElementPrototypeFunctionGetBBox, DontDelete|Function, 0 },
    { "getCTM", (intptr_t)jsSVGPolygonElementPrototypeFunctionGetCTM, DontDelete|Function, 0 },
    { "getScreenCTM", (intptr_t)jsSVGPolygonElementPrototypeFunctionGetScreenCTM, DontDelete|Function, 0 },
    { "getTransformToElement", (intptr_t)jsSVGPolygonElementPrototypeFunctionGetTransformToElement, DontDelete|Function, 1 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGPolygonElementPrototypeTable = { 2047, JSSVGPolygonElementPrototypeTableValues, 0 };

const ClassInfo JSSVGPolygonElementPrototype::s_info = { "SVGPolygonElementPrototype", 0, &JSSVGPolygonElementPrototypeTable, 0 };

JSObject* JSSVGPolygonElementPrototype::self(ExecState* exec)
{
    static const Identifier* prototypeIdentifier = new Identifier(exec, "[[JSSVGPolygonElement.prototype]]");
    return JSC::cacheGlobalObject<JSSVGPolygonElementPrototype>(exec, *prototypeIdentifier);
}

bool JSSVGPolygonElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSSVGPolygonElementPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSSVGPolygonElement::s_info = { "SVGPolygonElement", &JSSVGElement::s_info, &JSSVGPolygonElementTable , 0 };

JSSVGPolygonElement::JSSVGPolygonElement(JSObject* prototype, SVGPolygonElement* impl)
    : JSSVGElement(prototype, impl)
{
}

bool JSSVGPolygonElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPolygonElement, Base>(exec, &JSSVGPolygonElementTable, this, propertyName, slot);
}

JSValue* JSSVGPolygonElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case RequiredFeaturesAttrNum: {
        SVGPolygonElement* imp = static_cast<SVGPolygonElement*>(impl());
        return toJS(exec, WTF::getPtr(imp->requiredFeatures()), imp);
    }
    case RequiredExtensionsAttrNum: {
        SVGPolygonElement* imp = static_cast<SVGPolygonElement*>(impl());
        return toJS(exec, WTF::getPtr(imp->requiredExtensions()), imp);
    }
    case SystemLanguageAttrNum: {
        SVGPolygonElement* imp = static_cast<SVGPolygonElement*>(impl());
        return toJS(exec, WTF::getPtr(imp->systemLanguage()), imp);
    }
    case XmllangAttrNum: {
        SVGPolygonElement* imp = static_cast<SVGPolygonElement*>(impl());
        return jsString(exec, imp->xmllang());
    }
    case XmlspaceAttrNum: {
        SVGPolygonElement* imp = static_cast<SVGPolygonElement*>(impl());
        return jsString(exec, imp->xmlspace());
    }
    case ExternalResourcesRequiredAttrNum: {
        SVGPolygonElement* imp = static_cast<SVGPolygonElement*>(impl());
        RefPtr<SVGAnimatedBoolean> obj = imp->externalResourcesRequiredAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case ClassNameAttrNum: {
        SVGPolygonElement* imp = static_cast<SVGPolygonElement*>(impl());
        RefPtr<SVGAnimatedString> obj = imp->classNameAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case StyleAttrNum: {
        SVGPolygonElement* imp = static_cast<SVGPolygonElement*>(impl());
        return toJS(exec, WTF::getPtr(imp->style()));
    }
    case TransformAttrNum: {
        SVGPolygonElement* imp = static_cast<SVGPolygonElement*>(impl());
        RefPtr<SVGAnimatedTransformList> obj = imp->transformAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case NearestViewportElementAttrNum: {
        SVGPolygonElement* imp = static_cast<SVGPolygonElement*>(impl());
        return toJS(exec, WTF::getPtr(imp->nearestViewportElement()));
    }
    case FarthestViewportElementAttrNum: {
        SVGPolygonElement* imp = static_cast<SVGPolygonElement*>(impl());
        return toJS(exec, WTF::getPtr(imp->farthestViewportElement()));
    }
    case PointsAttrNum: {
        SVGPolygonElement* imp = static_cast<SVGPolygonElement*>(impl());
        return toJS(exec, WTF::getPtr(imp->points()), imp);
    }
    case AnimatedPointsAttrNum: {
        SVGPolygonElement* imp = static_cast<SVGPolygonElement*>(impl());
        return toJS(exec, WTF::getPtr(imp->animatedPoints()), imp);
    }
    }
    return 0;
}

void JSSVGPolygonElement::put(ExecState* exec, const Identifier& propertyName, JSValue* value, PutPropertySlot& slot)
{
    lookupPut<JSSVGPolygonElement, Base>(exec, propertyName, value, &JSSVGPolygonElementTable, this, slot);
}

void JSSVGPolygonElement::putValueProperty(ExecState* exec, int token, JSValue* value)
{
    switch (token) {
    case XmllangAttrNum: {
        SVGPolygonElement* imp = static_cast<SVGPolygonElement*>(impl());
        imp->setXmllang(value->toString(exec));
        break;
    }
    case XmlspaceAttrNum: {
        SVGPolygonElement* imp = static_cast<SVGPolygonElement*>(impl());
        imp->setXmlspace(value->toString(exec));
        break;
    }
    }
}

JSValue* jsSVGPolygonElementPrototypeFunctionHasExtension(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGPolygonElement::s_info))
        return throwError(exec, TypeError);
    JSSVGPolygonElement* castedThisObj = static_cast<JSSVGPolygonElement*>(thisValue);
    SVGPolygonElement* imp = static_cast<SVGPolygonElement*>(castedThisObj->impl());
    const UString& extension = args.at(exec, 0)->toString(exec);


    JSC::JSValue* result = jsBoolean(imp->hasExtension(extension));
    return result;
}

JSValue* jsSVGPolygonElementPrototypeFunctionGetPresentationAttribute(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGPolygonElement::s_info))
        return throwError(exec, TypeError);
    JSSVGPolygonElement* castedThisObj = static_cast<JSSVGPolygonElement*>(thisValue);
    SVGPolygonElement* imp = static_cast<SVGPolygonElement*>(castedThisObj->impl());
    const UString& name = args.at(exec, 0)->toString(exec);


    JSC::JSValue* result = toJS(exec, WTF::getPtr(imp->getPresentationAttribute(name)));
    return result;
}

JSValue* jsSVGPolygonElementPrototypeFunctionGetBBox(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGPolygonElement::s_info))
        return throwError(exec, TypeError);
    JSSVGPolygonElement* castedThisObj = static_cast<JSSVGPolygonElement*>(thisValue);
    SVGPolygonElement* imp = static_cast<SVGPolygonElement*>(castedThisObj->impl());


    JSC::JSValue* result = toJS(exec, JSSVGStaticPODTypeWrapper<FloatRect>::create(imp->getBBox()).get(), imp);
    return result;
}

JSValue* jsSVGPolygonElementPrototypeFunctionGetCTM(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGPolygonElement::s_info))
        return throwError(exec, TypeError);
    JSSVGPolygonElement* castedThisObj = static_cast<JSSVGPolygonElement*>(thisValue);
    SVGPolygonElement* imp = static_cast<SVGPolygonElement*>(castedThisObj->impl());


    JSC::JSValue* result = toJS(exec, JSSVGStaticPODTypeWrapper<AffineTransform>::create(imp->getCTM()).get(), imp);
    return result;
}

JSValue* jsSVGPolygonElementPrototypeFunctionGetScreenCTM(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGPolygonElement::s_info))
        return throwError(exec, TypeError);
    JSSVGPolygonElement* castedThisObj = static_cast<JSSVGPolygonElement*>(thisValue);
    SVGPolygonElement* imp = static_cast<SVGPolygonElement*>(castedThisObj->impl());


    JSC::JSValue* result = toJS(exec, JSSVGStaticPODTypeWrapper<AffineTransform>::create(imp->getScreenCTM()).get(), imp);
    return result;
}

JSValue* jsSVGPolygonElementPrototypeFunctionGetTransformToElement(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGPolygonElement::s_info))
        return throwError(exec, TypeError);
    JSSVGPolygonElement* castedThisObj = static_cast<JSSVGPolygonElement*>(thisValue);
    SVGPolygonElement* imp = static_cast<SVGPolygonElement*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    SVGElement* element = toSVGElement(args.at(exec, 0));


    JSC::JSValue* result = toJS(exec, JSSVGStaticPODTypeWrapper<AffineTransform>::create(imp->getTransformToElement(element, ec)).get(), imp);
    setDOMException(exec, ec);
    return result;
}


}

#endif // ENABLE(SVG)