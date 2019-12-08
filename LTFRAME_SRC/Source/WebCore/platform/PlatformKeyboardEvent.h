/*
 * Copyright (C) 2004, 2005, 2006 Apple Computer, Inc.  All rights reserved.
 * Copyright (C) 2008 Collabora, Ltd.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE COMPUTER, INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE COMPUTER, INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. 
 */

#ifndef PlatformKeyboardEvent_h
#define PlatformKeyboardEvent_h

#include "PlatformEvent.h"
#include <wtf/text/WTFString.h>

#if PLATFORM(MAC)
#include <wtf/RetainPtr.h>
OBJC_CLASS NSEvent;
#endif

#if PLATFORM(WIN)
typedef struct HWND__ *HWND;
typedef unsigned WPARAM;
typedef long LPARAM;
#endif

#if PLATFORM(GTK)
typedef struct _GdkEventKey GdkEventKey;
#endif

#if PLATFORM(QT)
QT_BEGIN_NAMESPACE
class QKeyEvent;
QT_END_NAMESPACE
#endif

#if PLATFORM(WX)
class wxKeyEvent;
#endif

#if PLATFORM(EFL)
typedef struct _Evas_Event_Key_Down Evas_Event_Key_Down;
typedef struct _Evas_Event_Key_Up Evas_Event_Key_Up;
#endif

namespace WebCore {

    class PlatformKeyboardEvent : public PlatformEvent {
    public:
        PlatformKeyboardEvent()
            : PlatformEvent(PlatformEvent::KeyDown)
            , m_windowsVirtualKeyCode(0)
            , m_nativeVirtualKeyCode(0)
            , m_macCharCode(0)
            , m_autoRepeat(false)
            , m_isKeypad(false)
            , m_isSystemKey(false)
#if PLATFORM(GTK)
            , m_gdkEventKey(0)
#endif
#if PLATFORM(QT)
            , m_qtEvent(0)
#endif
        {
        }

        PlatformKeyboardEvent(Type type, const String& text, const String& unmodifiedText, const String& keyIdentifier, int windowsVirtualKeyCode, int nativeVirtualKeyCode, int macCharCode, bool isAutoRepeat, bool isKeypad, bool isSystemKey, Modifiers modifiers, double timestamp)
            : PlatformEvent(type, modifiers, timestamp)
            , m_text(text)
            , m_unmodifiedText(unmodifiedText)
            , m_keyIdentifier(keyIdentifier)
            , m_windowsVirtualKeyCode(windowsVirtualKeyCode)
            , m_nativeVirtualKeyCode(nativeVirtualKeyCode)
            , m_macCharCode(macCharCode)
            , m_autoRepeat(isAutoRepeat)
            , m_isKeypad(isKeypad)
            , m_isSystemKey(isSystemKey)
        {
        }

        void disambiguateKeyDownEvent(Type, bool backwardCompatibilityMode = false); // Only used on platforms that need it, i.e. those that generate KeyDown events.

        // Text as as generated by processing a virtual key code with a keyboard layout
        // (in most cases, just a character code, but the layout can emit several
        // characters in a single keypress event on some platforms).
        // This may bear no resemblance to the ultimately inserted text if an input method
        // processes the input.
        // Will be null for KeyUp and RawKeyDown events.
        String text() const { return m_text; }

        // Text that would have been generated by the keyboard if no modifiers were pressed
        // (except for Shift); useful for shortcut (accelerator) key handling.
        // Otherwise, same as text().
        String unmodifiedText() const { return m_unmodifiedText; }

        String keyIdentifier() const { return m_keyIdentifier; }

        // Most compatible Windows virtual key code associated with the event.
        // Zero for Char events.
        int windowsVirtualKeyCode() const { return m_windowsVirtualKeyCode; }
        void setWindowsVirtualKeyCode(int code) { m_windowsVirtualKeyCode = code; }

        int nativeVirtualKeyCode() const { return m_nativeVirtualKeyCode; }
        int macCharCode() const { return m_macCharCode; }

        bool isAutoRepeat() const { return m_autoRepeat; }
        bool isKeypad() const { return m_isKeypad; }
        bool isSystemKey() const { return m_isSystemKey; }

        static bool currentCapsLockState();
        static void getCurrentModifierState(bool& shiftKey, bool& ctrlKey, bool& altKey, bool& metaKey);

#if PLATFORM(MAC)
        NSEvent* macEvent() const { return m_macEvent.get(); }
#endif

#if PLATFORM(WIN)
        PlatformKeyboardEvent(HWND, WPARAM, LPARAM, Type, bool);
#endif

#if PLATFORM(GTK)
        PlatformKeyboardEvent(GdkEventKey*);
        GdkEventKey* gdkEventKey() const;

        // Used by WebKit2
        static String keyIdentifierForGdkKeyCode(unsigned);
        static int windowsKeyCodeForGdkKeyCode(unsigned);
        static String singleCharacterString(unsigned);
#endif

#if PLATFORM(QT)
        PlatformKeyboardEvent(QKeyEvent*);
        QKeyEvent* qtEvent() const { return m_qtEvent; }
        uint32_t nativeModifiers() const;
        uint32_t nativeScanCode() const;
#endif

#if PLATFORM(WX)
        PlatformKeyboardEvent(wxKeyEvent&);
#endif

#if PLATFORM(EFL)
        PlatformKeyboardEvent(const Evas_Event_Key_Down*);
        PlatformKeyboardEvent(const Evas_Event_Key_Up*);
#endif

    protected:
        String m_text;
        String m_unmodifiedText;
        String m_keyIdentifier;
        int m_windowsVirtualKeyCode;
        int m_nativeVirtualKeyCode;
        int m_macCharCode;
        bool m_autoRepeat;
        bool m_isKeypad;
        bool m_isSystemKey;

#if PLATFORM(MAC)
        RetainPtr<NSEvent> m_macEvent;
#endif
#if PLATFORM(GTK)
        GdkEventKey* m_gdkEventKey;
#endif
#if PLATFORM(QT)
        QKeyEvent* m_qtEvent;
#endif
    };
    
#if PLATFORM(QT)
// Used by WebKit2.
String keyIdentifierForQtKeyCode(int keyCode);
int windowsKeyCodeForKeyEvent(unsigned int keycode, bool isKeypad = false);    
#endif

} // namespace WebCore

#endif // PlatformKeyboardEvent_h