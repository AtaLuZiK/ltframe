/*
 * This file is part of the WebKit open source project.
 * This file has been generated by generate-bindings.pl. DO NOT MODIFY!
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
#include "WebDOMTestOverridingNameGetter.h"

#include "KURL.h"
#include "TestOverridingNameGetter.h"
#include "WebDOMString.h"
#include "WebExceptionHandler.h"
#include "wtf/text/AtomicString.h"
#include <wtf/GetPtr.h>
#include <wtf/RefPtr.h>

struct WebDOMTestOverridingNameGetter::WebDOMTestOverridingNameGetterPrivate {
    WebDOMTestOverridingNameGetterPrivate(WebCore::TestOverridingNameGetter* object = 0)
        : impl(object)
    {
    }

    RefPtr<WebCore::TestOverridingNameGetter> impl;
};

WebDOMTestOverridingNameGetter::WebDOMTestOverridingNameGetter()
    : WebDOMObject()
    , m_impl(0)
{
}

WebDOMTestOverridingNameGetter::WebDOMTestOverridingNameGetter(WebCore::TestOverridingNameGetter* impl)
    : WebDOMObject()
    , m_impl(new WebDOMTestOverridingNameGetterPrivate(impl))
{
}

WebDOMTestOverridingNameGetter::WebDOMTestOverridingNameGetter(const WebDOMTestOverridingNameGetter& copy)
    : WebDOMObject()
{
    m_impl = copy.impl() ? new WebDOMTestOverridingNameGetterPrivate(copy.impl()) : 0;
}

WebDOMTestOverridingNameGetter& WebDOMTestOverridingNameGetter::operator=(const WebDOMTestOverridingNameGetter& copy)
{
    delete m_impl;
    m_impl = copy.impl() ? new WebDOMTestOverridingNameGetterPrivate(copy.impl()) : 0;
    return *this;
}

WebCore::TestOverridingNameGetter* WebDOMTestOverridingNameGetter::impl() const
{
    return m_impl ? WTF::getPtr(m_impl->impl) : 0;
}

WebDOMTestOverridingNameGetter::~WebDOMTestOverridingNameGetter()
{
    delete m_impl;
    m_impl = 0;
}

void WebDOMTestOverridingNameGetter::anotherFunction(const WebDOMString& str)
{
    if (!impl())
        return;

    impl()->anotherFunction(str);
}

WebCore::TestOverridingNameGetter* toWebCore(const WebDOMTestOverridingNameGetter& wrapper)
{
    return wrapper.impl();
}

WebDOMTestOverridingNameGetter toWebKit(WebCore::TestOverridingNameGetter* value)
{
    return WebDOMTestOverridingNameGetter(value);
}
