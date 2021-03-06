/*
 * Copyright (C) 1999 Lars Knoll (knoll@kde.org)
 *           (C) 1999 Antti Koivisto (koivisto@kde.org)
 *           (C) 2000 Simon Hausmann (hausmann@kde.org)
 *           (C) 2001 Dirk Mueller (mueller@kde.org)
 * Copyright (C) 2004, 2006, 2008 Apple Inc. All rights reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public License
 * along with this library; see the file COPYING.LIB.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#include "config.h"
#include "HTMLIFrameElement.h"

#include "CSSPropertyNames.h"
#include "Frame.h"
#include "HTMLDocument.h"
#include "HTMLNames.h"
#include "RenderPartObject.h"

namespace WebCore {

using namespace HTMLNames;

HTMLIFrameElement::HTMLIFrameElement(Document* doc)
    : HTMLFrameElementBase(iframeTag, doc)
{
}

bool HTMLIFrameElement::mapToEntry(const QualifiedName& attrName, MappedAttributeEntry& result) const
{
    if (attrName == widthAttr || attrName == heightAttr) {
        result = eUniversal;
        return false;
    }
    
    if (attrName == alignAttr) {
        result = eReplaced; // Share with <img> since the alignment behavior is the same.
        return false;
    }
    
    if (attrName == frameborderAttr) {
        result = eReplaced;
        return false;
    }

    return HTMLFrameElementBase::mapToEntry(attrName, result);
}

void HTMLIFrameElement::parseMappedAttribute(MappedAttribute* attr)
{
    if (attr->name() == widthAttr)
        addCSSLength(attr, CSSPropertyWidth, attr->value());
    else if (attr->name() == heightAttr)
        addCSSLength(attr, CSSPropertyHeight, attr->value());
    else if (attr->name() == alignAttr)
        addHTMLAlignment(attr);
    else if (attr->name() == nameAttr) {
        const AtomicString& newName = attr->value();
        if (inDocument() && document()->isHTMLDocument()) {
            HTMLDocument* document = static_cast<HTMLDocument*>(this->document());
            document->removeExtraNamedItem(m_name);
            document->addExtraNamedItem(newName);
        }
        m_name = newName;
    } else if (attr->name() == frameborderAttr) {
        // Frame border doesn't really match the HTML4 spec definition for iframes.  It simply adds
        // a presentational hint that the border should be off if set to zero.
        if (!attr->isNull() && !attr->value().toInt())
            // Add a rule that nulls out our border width.
            addCSSLength(attr, CSSPropertyBorderWidth, "0");
    } else
        HTMLFrameElementBase::parseMappedAttribute(attr);
}

bool HTMLIFrameElement::rendererIsNeeded(RenderStyle* style)
{
    return isURLAllowed(m_URL) && style->display() != NONE;
}

RenderObject* HTMLIFrameElement::createRenderer(RenderArena* arena, RenderStyle*)
{
    return new (arena) RenderPartObject(this);
}

void HTMLIFrameElement::insertedIntoDocument()
{
    if (document()->isHTMLDocument())
        static_cast<HTMLDocument*>(document())->addExtraNamedItem(m_name);

    HTMLFrameElementBase::insertedIntoDocument();
}

void HTMLIFrameElement::removedFromDocument()
{
    if (document()->isHTMLDocument())
        static_cast<HTMLDocument*>(document())->removeExtraNamedItem(m_name);

    HTMLFrameElementBase::removedFromDocument();
}

void HTMLIFrameElement::attach()
{
    HTMLFrameElementBase::attach();

    if (RenderPartObject* renderPartObject = static_cast<RenderPartObject*>(renderer()))
        renderPartObject->updateWidget(false);
}

bool HTMLIFrameElement::isURLAttribute(Attribute* attr) const
{
    return attr->name() == srcAttr;
}

String HTMLIFrameElement::align() const
{
    return getAttribute(alignAttr);
}

void HTMLIFrameElement::setAlign(const String &value)
{
    setAttribute(alignAttr, value);
}

String HTMLIFrameElement::height() const
{
    return getAttribute(heightAttr);
}

void HTMLIFrameElement::setHeight(const String &value)
{
    setAttribute(heightAttr, value);
}

String HTMLIFrameElement::width() const
{
    return getAttribute(widthAttr);
}

void HTMLIFrameElement::setWidth(const String &value)
{
    setAttribute(widthAttr, value);
}

}
