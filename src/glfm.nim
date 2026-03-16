##
##  GLFM
##  https://github.com/brackeen/glfm
##  Copyright (c) 2014-2017 David Brackeen
##
##  This software is provided 'as-is', without any express or implied warranty.
##  In no event will the authors be held liable for any damages arising from the
##  use of this software. Permission is granted to anyone to use this software
##  for any purpose, including commercial applications, and to alter it and
##  redistribute it freely, subject to the following restrictions:
##
##  1. The origin of this software must not be misrepresented; you must not
##     claim that you wrote the original software. If you use this software in a
##     product, an acknowledgment in the product documentation would be appreciated
##     but is not required.
##  2. Altered source versions must be plainly marked as such, and must not be
##     misrepresented as being the original software.
##  3. This notice may not be removed or altered from any source distribution.
##

const
  GLFM_VERSION_MAJOR* = 0
  GLFM_VERSION_MINOR* = 9
  GLFM_VERSION_REVISION* = 0

##  One of these will be defined:
##  GLFM_PLATFORM_IOS
##  GLFM_PLATFORM_TVOS
##  GLFM_PLATFORM_ANDROID
##  GLFM_PLATFORM_EMSCRIPTEN

import os

{.passC: "-I" & (currentSourcePath().parentDir()).}

{.compile: "glfm.h".}
{.compile: "glfm_internal.h".}

when defined(android):
  {.compile: "glfm_android.c".}

  const
    GLFM_PLATFORM_ANDROID* = true
elif defined(emscripten):
  {.compile: "glfm_emscripten.c".}

  const
    GLFM_PLATFORM_EMSCRIPTEN* = true
elif defined(ios):
  {.compile: "glfm_apple.c".}

  when defined(TARGET_OS_TV):
    const
      GLFM_PLATFORM_TVOS* = true
  else:
    const
      GLFM_PLATFORM_IOS* = true


##  MARK: Enums

type
  GLFMRenderingAPI* = enum
    GLFMRenderingAPIOpenGLES2, GLFMRenderingAPIOpenGLES3,
    GLFMRenderingAPIOpenGLES31, GLFMRenderingAPIOpenGLES32
  GLFMColorFormat* = enum
    GLFMColorFormatRGBA8888, GLFMColorFormatRGB565
  GLFMDepthFormat* = enum
    GLFMDepthFormatNone, GLFMDepthFormat16, GLFMDepthFormat24
  GLFMStencilFormat* = enum
    GLFMStencilFormatNone, GLFMStencilFormat8
  GLFMMultisample* = enum
    GLFMMultisampleNone, GLFMMultisample4X


## GLFMUserInterfaceChrome defines whether system UI chrome (status bar, navigation bar) is shown.
## This value is ignored on Emscripten.
## GLFMUserInterfaceChromeNavigation (default)
##  - Android: Show the navigation bar
##  - iOS: Show the home indicator on iPhone X
## GLFMUserInterfaceChromeNavigationAndStatusBar:
##  - Android: Show the navigation bar and status bar
##  - iOS: Show status bar, and show the home indicator on iPhone X
## GLFMUserInterfaceChromeFullscreen
##  - Android 2.3: Fullscreen
##  - Android 4.0 - 4.3: Navigation bar dimmed
##  - Android 4.4: Fullscreen immersive mode
##  - iOS: Fullscreen

type
  GLFMUserInterfaceChrome* = enum
    GLFMUserInterfaceChromeNavigation,
    GLFMUserInterfaceChromeNavigationAndStatusBar,
    GLFMUserInterfaceChromeFullscreen
  GLFMUserInterfaceOrientation* = enum
    GLFMUserInterfaceOrientationAny, GLFMUserInterfaceOrientationPortrait,
    GLFMUserInterfaceOrientationLandscape
  GLFMTouchPhase* = enum
    GLFMTouchPhaseHover, GLFMTouchPhaseBegan, GLFMTouchPhaseMoved,
    GLFMTouchPhaseEnded, GLFMTouchPhaseCancelled
  GLFMMouseCursor* = enum
    GLFMMouseCursorAuto, GLFMMouseCursorNone, GLFMMouseCursorDefault,
    GLFMMouseCursorPointer, GLFMMouseCursorCrosshair, GLFMMouseCursorText
  GLFMKey* = enum
    GLFMKeyUnknown           = 0x00,

    # The key codes below have the same values as ASCII codes (uppercase)

    GLFMKeyBackspace         = 0x08, # Backspace key ("delete" on Apple platforms).
    GLFMKeyTab               = 0x09,
    GLFMKeyEnter             = 0x0D, # Enter key ("return" on Apple platforms).
    GLFMKeyEscape            = 0x1B,
    GLFMKeySpace             = 0x20,
    GLFMKeyQuote             = 0x27,
    GLFMKeyComma             = 0x2C,
    GLFMKeyMinus             = 0x2D,
    GLFMKeyPeriod            = 0x2E,
    GLFMKeySlash             = 0x2F,
    GLFMKey0                 = 0x30,
    GLFMKey1                 = 0x31,
    GLFMKey2                 = 0x32,
    GLFMKey3                 = 0x33,
    GLFMKey4                 = 0x34,
    GLFMKey5                 = 0x35,
    GLFMKey6                 = 0x36,
    GLFMKey7                 = 0x37,
    GLFMKey8                 = 0x38,
    GLFMKey9                 = 0x39,
    GLFMKeySemicolon         = 0x3B,
    GLFMKeyEqual             = 0x3D,
    GLFMKeyA                 = 0x41,
    GLFMKeyB                 = 0x42,
    GLFMKeyC                 = 0x43,
    GLFMKeyD                 = 0x44,
    GLFMKeyE                 = 0x45,
    GLFMKeyF                 = 0x46,
    GLFMKeyG                 = 0x47,
    GLFMKeyH                 = 0x48,
    GLFMKeyI                 = 0x49,
    GLFMKeyJ                 = 0x4A,
    GLFMKeyK                 = 0x4B,
    GLFMKeyL                 = 0x4C,
    GLFMKeyM                 = 0x4D,
    GLFMKeyN                 = 0x4E,
    GLFMKeyO                 = 0x4F,
    GLFMKeyP                 = 0x50,
    GLFMKeyQ                 = 0x51,
    GLFMKeyR                 = 0x52,
    GLFMKeyS                 = 0x53,
    GLFMKeyT                 = 0x54,
    GLFMKeyU                 = 0x55,
    GLFMKeyV                 = 0x56,
    GLFMKeyW                 = 0x57,
    GLFMKeyX                 = 0x58,
    GLFMKeyY                 = 0x59,
    GLFMKeyZ                 = 0x5A,
    GLFMKeyBracketLeft       = 0x5B,
    GLFMKeyBackslash         = 0x5C,
    GLFMKeyBracketRight      = 0x5D,
    GLFMKeyBackquote         = 0x60, # Backquote, AKA grave.
    GLFMKeyDelete            = 0x7F, # Delete key ("forward delete" on Apple platforms).

    # Non-ASCII keys. These values may change in the future.

    GLFMKeyCapsLock          = 0x80,
    GLFMKeyShiftLeft         = 0x81,
    GLFMKeyShiftRight        = 0x82,
    GLFMKeyControlLeft       = 0x83,
    GLFMKeyControlRight      = 0x84,
    GLFMKeyAltLeft           = 0x85, # Left alt key (option key on Apple platforms).
    GLFMKeyAltRight          = 0x86, # Right alt key (option key on Apple platforms).
    GLFMKeyMetaLeft          = 0x87, # Left meta key (command key on Apple platforms).
    GLFMKeyMetaRight         = 0x88, # Right meta key (command key on Apple platforms).
    GLFMKeyMenu              = 0x89, # Menu key, AKA context menu.

    GLFMKeyInsert            = 0x90,
    GLFMKeyPageUp            = 0x91,
    GLFMKeyPageDown          = 0x92,
    GLFMKeyEnd               = 0x93,
    GLFMKeyHome              = 0x94,
    GLFMKeyArrowLeft         = 0x95,
    GLFMKeyArrowUp           = 0x96,
    GLFMKeyArrowRight        = 0x97,
    GLFMKeyArrowDown         = 0x98,

    GLFMKeyPower             = 0x99,
    GLFMKeyFunction          = 0x9A, # Fn key on Apple platforms.
    GLFMKeyPrintScreen       = 0x9B, # Print Screen or System Request key.
    GLFMKeyScrollLock        = 0x9C,
    GLFMKeyPause             = 0x9D, # Pause/Break key.

    GLFMKeyNumLock           = 0xA0, # NumLock key ("clear" on Apple platforms).
    GLFMKeyNumpadDecimal     = 0xA1,
    GLFMKeyNumpadMultiply    = 0xA2,
    GLFMKeyNumpadAdd         = 0xA3,
    GLFMKeyNumpadDivide      = 0xA4,
    GLFMKeyNumpadEnter       = 0xA5,
    GLFMKeyNumpadSubtract    = 0xA6,
    GLFMKeyNumpadEqual       = 0xA7,

    GLFMKeyNumpad0           = 0xB0,
    GLFMKeyNumpad1           = 0xB1,
    GLFMKeyNumpad2           = 0xB2,
    GLFMKeyNumpad3           = 0xB3,
    GLFMKeyNumpad4           = 0xB4,
    GLFMKeyNumpad5           = 0xB5,
    GLFMKeyNumpad6           = 0xB6,
    GLFMKeyNumpad7           = 0xB7,
    GLFMKeyNumpad8           = 0xB8,
    GLFMKeyNumpad9           = 0xB9,

    GLFMKeyF1                = 0xC1,
    GLFMKeyF2                = 0xC2,
    GLFMKeyF3                = 0xC3,
    GLFMKeyF4                = 0xC4,
    GLFMKeyF5                = 0xC5,
    GLFMKeyF6                = 0xC6,
    GLFMKeyF7                = 0xC7,
    GLFMKeyF8                = 0xC8,
    GLFMKeyF9                = 0xC9,
    GLFMKeyF10               = 0xD0,
    GLFMKeyF11               = 0xD1,
    GLFMKeyF12               = 0xD2,
    GLFMKeyF13               = 0xD3,
    GLFMKeyF14               = 0xD4,
    GLFMKeyF15               = 0xD5,
    GLFMKeyF16               = 0xD6,
    GLFMKeyF17               = 0xD7,
    GLFMKeyF18               = 0xD8,
    GLFMKeyF19               = 0xD9,
    GLFMKeyF20               = 0xDA,
    GLFMKeyF21               = 0xDB,
    GLFMKeyF22               = 0xDC,
    GLFMKeyF23               = 0xDD,
    GLFMKeyF24               = 0xDE,

    GLFMKeyNavigationBack    = 0xE0, # Back button on Android, menu/back button on tvOS remote.
    GLFMKeyMediaSelect       = 0xE1, # Select button on tvOS remote.
    GLFMKeyMediaPlayPause    = 0xE2, # Play/pause button on tvOS remote.
  GLFMKeyModifier* = enum
    GLFMKeyModifierShift = (1 shl 0), GLFMKeyModifierCtrl = (1 shl 1),
    GLFMKeyModifierAlt = (1 shl 2), GLFMKeyModifierMeta = (1 shl 3)
  GLFMKeyAction* = enum
    GLFMKeyActionPressed, GLFMKeyActionRepeated, GLFMKeyActionReleased

##  MARK: Structs and function pointers
type
  GLFMDisplay* = pointer

## Function pointer returned from glfmGetProcAddress

type
  GLFMProc* = proc () {.cdecl.}

## Render callback function.

type
  GLFMRenderFunc* = proc (display: ptr GLFMDisplay) {.cdecl.}

## Callback function for mouse or touch events. The (x,y) values are in pixels.
## The function should return true if the event was handled, and false otherwise.

type
  GLFMTouchFunc* = proc (display: ptr GLFMDisplay; touch: cint; phase: GLFMTouchPhase;
                      x: cdouble; y: cdouble): bool {.cdecl.}

## Callback function for key events.
## The function should return true if the event was handled, and false otherwise.

type
  GLFMKeyFunc* = proc (display: ptr GLFMDisplay; Key: GLFMKey;
                    action: GLFMKeyAction; modifiers: cint): bool {.cdecl.}

## Callback function for character input events.

type
  GLFMCharFunc* = proc (display: ptr GLFMDisplay; utf8: cstring; modifiers: cint) {.cdecl.}

## Callback function for keyboard visibility, in pixels.

type
  GLFMKeyboardVisibilityChangedFunc* = proc (display: ptr GLFMDisplay; visible: bool;
      x: cdouble; y: cdouble; width: cdouble; height: cdouble) {.cdecl.}

## Callback when the surface could not be created.

type
  GLFMSurfaceErrorFunc* = proc (display: ptr GLFMDisplay; message: cstring) {.cdecl.}

## Callback function when the OpenGL surface is created

type
  GLFMSurfaceCreatedFunc* = proc (display: ptr GLFMDisplay; width: cint; height: cint) {.cdecl.}

## Callback function when the OpenGL surface is resized (or rotated).

type
  GLFMSurfaceResizedFunc* = proc (display: ptr GLFMDisplay; width: cint; height: cint) {.cdecl.}

## Callback function when the OpenGL surface is destroyed.

type
  GLFMSurfaceDestroyedFunc* = proc (display: ptr GLFMDisplay) {.cdecl.}

## Callback function when the system recieves a low memory warning.

type
  GLFMMemoryWarningFunc* = proc (display: ptr GLFMDisplay) {.cdecl.}
  GLFMAppFocusFunc* = proc (display: ptr GLFMDisplay; focused: bool) {.cdecl.}

##  MARK: Functions
## Main entry point for the app, where the display can be initialized and the GLFMRenderFunc
## can be set.

{.push importc, cdecl.}

proc glfmMain*(display: ptr GLFMDisplay)
## Init the display condifuration. Should only be called in glfmMain.
## If the device does not support the preferred rendering API, the next available rendering API is
## chosen (OpenGL ES 3.0 if OpenGL ES 3.1 is not available, and OpenGL ES 2.0 if OpenGL ES 3.0 is
## not available). Call glfmGetRenderingAPI in the GLFMSurfaceCreatedFunc to see which rendering
## API was chosen.

proc glfmSetDisplayConfig*(display: ptr GLFMDisplay; preferredAPI: GLFMRenderingAPI;
                          colorFormat: GLFMColorFormat;
                          depthFormat: GLFMDepthFormat;
                          stencilFormat: GLFMStencilFormat;
                          multisample: GLFMMultisample)
proc glfmSetUserData*(display: ptr GLFMDisplay; userData: pointer)
proc glfmGetUserData*(display: ptr GLFMDisplay): pointer

## This function should be called at the end of the ``GLFMRenderFunc`` if any content was rendered.
proc glfmSwapBuffers*(display: ptr GLFMDisplay)

## Sets the allowed user interface orientations

proc glfmSetUserInterfaceOrientation*(display: ptr GLFMDisplay; allowedOrientations: GLFMUserInterfaceOrientation)
## Returns the allowed user interface orientations

proc glfmGetUserInterfaceOrientation*(display: ptr GLFMDisplay): GLFMUserInterfaceOrientation
## Sets whether multitouch input is enabled. By default, multitouch is disabled.

proc glfmSetMultitouchEnabled*(display: ptr GLFMDisplay; multitouchEnabled: bool)
## Gets whether multitouch input is enabled. By default, multitouch is disabled.

proc glfmGetMultitouchEnabled*(display: ptr GLFMDisplay): bool
## Gets the display size, in pixels.

proc glfmGetDisplaySize*(display: ptr GLFMDisplay; width: ptr cint; height: ptr cint)
## Gets the display scale. On Apple devices, the value will be 1.0 for non-retina displays and 2.0
## for retina.

proc glfmGetDisplayScale*(display: ptr GLFMDisplay): cdouble
## Gets the chrome insets, in pixels (AKA "safe area insets" in iOS). This is the space taken
## on the outer edges of the display by status bars, navigation bars, and other UI elements.

proc glfmGetDisplayChromeInsets*(display: ptr GLFMDisplay; top: ptr cdouble;
                                right: ptr cdouble; bottom: ptr cdouble;
                                left: ptr cdouble)
## Gets the user interface chrome.

proc glfmGetDisplayChrome*(display: ptr GLFMDisplay): GLFMUserInterfaceChrome
## Sets the user interface chrome.
## On Emscripten, to switch to fullscreen, this function must be called from an user-generated event handler.

proc glfmSetDisplayChrome*(display: ptr GLFMDisplay;
                          uiChrome: GLFMUserInterfaceChrome)
## Gets the rendering API of the display. The return value is not valid until the surface is
## created. Defaults to GLFMRenderingAPIOpenGLES2.

proc glfmGetRenderingAPI*(display: ptr GLFMDisplay): GLFMRenderingAPI
## Gets whether the display has touch capabilities.

proc glfmHasTouch*(display: ptr GLFMDisplay): bool
## Sets the mouse cursor (only on platforms with a mouse)

proc glfmSetMouseCursor*(display: ptr GLFMDisplay; mouseCursor: GLFMMouseCursor)
## Checks if a named OpenGL extension is supported

proc glfmExtensionSupported*(extension: cstring): bool
## Gets the address of the specified function.

proc glfmGetProcAddress*(functionName: cstring): GLFMProc
## Sets the function to call before each frame is displayed.

proc glfmSetRenderFunc*(display: ptr GLFMDisplay; renderFunc: GLFMRenderFunc)
## Sets the function to call when a mouse or touch event occurs.

proc glfmSetTouchFunc*(display: ptr GLFMDisplay; touchFunc: GLFMTouchFunc)
## Sets the function to call when a key event occurs.
## Note, on iOS, only pressed events are sent (no repeated or released events) and with no
## modifiers.

proc glfmSetKeyFunc*(display: ptr GLFMDisplay; keyFunc: GLFMKeyFunc)
## Sets the function to call when character input events occur.

proc glfmSetCharFunc*(display: ptr GLFMDisplay; charFunc: GLFMCharFunc)
## Sets the function to call when the surface could not be created.
## For example, the browser does not support WebGL.

proc glfmSetSurfaceErrorFunc*(display: ptr GLFMDisplay;
                             surfaceErrorFunc: GLFMSurfaceErrorFunc)
## Sets the function to call when the surface was created.

proc glfmSetSurfaceCreatedFunc*(display: ptr GLFMDisplay;
                               surfaceCreatedFunc: GLFMSurfaceCreatedFunc)
## Sets the function to call when the surface was resized (or rotated).

proc glfmSetSurfaceResizedFunc*(display: ptr GLFMDisplay;
                               surfaceResizedFunc: GLFMSurfaceResizedFunc)
## Sets the function to call when the surface was destroyed. For example, OpenGL context loss.
## All OpenGL resources should be deleted in this call.

proc glfmSetSurfaceDestroyedFunc*(display: ptr GLFMDisplay;
                                 surfaceDestroyedFunc: GLFMSurfaceDestroyedFunc)
proc glfmSetMemoryWarningFunc*(display: ptr GLFMDisplay;
                              lowMemoryFunc: GLFMMemoryWarningFunc)
proc glfmSetAppFocusFunc*(display: ptr GLFMDisplay; focusFunc: GLFMAppFocusFunc)
## Requests to show or hide the onscreen virtual keyboard. On Emscripten, this function does
## nothing.

proc glfmSetKeyboardVisible*(display: ptr GLFMDisplay; visible: bool)
## Returns true if the virtual keyboard is currently visible.

proc glfmIsKeyboardVisible*(display: ptr GLFMDisplay): bool
## Sets the function to call when the virtual keyboard changes visibility or changes bounds.

proc glfmSetKeyboardVisibilityChangedFunc*(display: ptr GLFMDisplay;
    visibilityChangedFunc: GLFMKeyboardVisibilityChangedFunc)
when defined(android):
  proc glfmAndroidGetActivity*(): pointer #ptr ANativeActivity

#TODO iOS
proc glfmFilesDir*(): cstring
proc glfmHomeDir*(): cstring
proc glfmBundleDir*(): cstring
proc glfmReadFileSize*(filename: cstring): cint
proc glfmReadFileBuffer*(filename, buffer: cstring): cint
proc glfmStart*()
{.pop.}