/* Generated by Nim Compiler v0.20.99 */
/*   (c) 2019 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix
  #  define nimfr_(proc, file) \
      TFrame FR_; \
      FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = 0; nimFrame(&FR_);

  #  define nimfrs_(proc, file, slots, length) \
      struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename; NI len; VarSlot s[slots];} FR_; \
      FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = length; nimFrame((TFrame*)&FR_);

  #  define nimln_(n, file) \
      FR_.line = n; FR_.filename = file;
  typedef struct tyObject_ExampleApp_4IqV9bzvOaxXTDnb9cerGklA tyObject_ExampleApp_4IqV9bzvOaxXTDnb9cerGklA;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
struct tyObject_ExampleApp_4IqV9bzvOaxXTDnb9cerGklA {
NU32 program;
NU32 vertexBuffer;
double lastTouchX;
double lastTouchY;
double offsetX;
double offsetY;
};
typedef NU8 tyEnum_GLFMRenderingAPI_VewemnQqcjOlqSqMHBLLvA;
typedef NU8 tyEnum_GLFMColorFormat_VZ7c08dLEDwD359b8JtJYrA;
typedef NU8 tyEnum_GLFMDepthFormat_PdvuyvXTcVeEPaaA4eYGEQ;
typedef NU8 tyEnum_GLFMStencilFormat_M8UU27h9cOU7AX2isqfQXfw;
typedef NU8 tyEnum_GLFMMultisample_B7nIWmiLUhGkk9cv9bSfWS8g;
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (void** display, int width, int height, void* ClE_0);
void* ClE_0;
} tyProc_KNiNOTQumxFz2O1GcNzZJw;
typedef N_CLOSURE_PTR(void, TM_V45tF8B8NBcxFcjfe7lhBw_2) (void** display, int width, int height, void* ClE_0);
typedef N_CLOSURE_PTR(void, TM_V45tF8B8NBcxFcjfe7lhBw_3) (void** display, int width, int height, void* ClE_0);
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (void** display, void* ClE_0);
void* ClE_0;
} tyProc_kAyOno27kR0x3SHsrIZCJg;
typedef N_CLOSURE_PTR(void, TM_V45tF8B8NBcxFcjfe7lhBw_4) (void** display, void* ClE_0);
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (void** display, double frameTime, void* ClE_0);
void* ClE_0;
} tyProc_l6Br0mXghIMqU7Ht2wXupA;
typedef N_CLOSURE_PTR(void, TM_V45tF8B8NBcxFcjfe7lhBw_5) (void** display, double frameTime, void* ClE_0);
typedef NU8 tyEnum_GLFMTouchPhase_eOF31Gkae59aGGDBGN1Sj3w;
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClP_0) (void** display, int touch, tyEnum_GLFMTouchPhase_eOF31Gkae59aGGDBGN1Sj3w phase, double x, double y, void* ClE_0);
void* ClE_0;
} tyProc_oDTWi9cbxk4AYUr2vEpEYwg;
typedef N_CLOSURE_PTR(NIM_BOOL, TM_V45tF8B8NBcxFcjfe7lhBw_6) (void** display, int touch, tyEnum_GLFMTouchPhase_eOF31Gkae59aGGDBGN1Sj3w phase, double x, double y, void* ClE_0);
typedef NU16 tyEnum_GLFMKey_Z9azk85obiQ9bHC3veTzjFzQ;
typedef NU8 tyEnum_GLFMKeyAction_yTAQoIN6dxsm8J5Qdix18w;
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClP_0) (void** display, tyEnum_GLFMKey_Z9azk85obiQ9bHC3veTzjFzQ keyCode, tyEnum_GLFMKeyAction_yTAQoIN6dxsm8J5Qdix18w action, int modifiers, void* ClE_0);
void* ClE_0;
} tyProc_nNzjeI8wQlvD3hxqR9adMDw;
typedef N_CLOSURE_PTR(NIM_BOOL, TM_V45tF8B8NBcxFcjfe7lhBw_7) (void** display, tyEnum_GLFMKey_Z9azk85obiQ9bHC3veTzjFzQ keyCode, tyEnum_GLFMKeyAction_yTAQoIN6dxsm8J5Qdix18w action, int modifiers, void* ClE_0);
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NimStringDesc* tyArray_nHXaesL0DJZHyVS07ARPRA[1];
typedef NCSTRING tyArray_NmEsK2qSxmxyFA4fWeYieg[1];
typedef NimStringDesc* tyArray_Re75IspeoxXy2oCZHwcRrA[2];
typedef NF32 tyArray_G3UmgAkY79bNxQUIZv9aDe9bw[18];
N_NIMCALL(void, glfmMain)(void** display);
N_NIMCALL(void, glfmSetDisplayConfig)(void** display, tyEnum_GLFMRenderingAPI_VewemnQqcjOlqSqMHBLLvA preferredAPI, tyEnum_GLFMColorFormat_VZ7c08dLEDwD359b8JtJYrA colorFormat, tyEnum_GLFMDepthFormat_PdvuyvXTcVeEPaaA4eYGEQ depthFormat, tyEnum_GLFMStencilFormat_M8UU27h9cOU7AX2isqfQXfw stencilFormat, tyEnum_GLFMMultisample_B7nIWmiLUhGkk9cv9bSfWS8g multisample);
N_NIMCALL(void, glfmSetUserData)(void** display, void* userData);
N_NIMCALL(void, glfmSetSurfaceCreatedFunc)(void** display, tyProc_KNiNOTQumxFz2O1GcNzZJw surfaceCreatedFunc);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem_zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size);
N_NIMCALL(void, glfmSetSurfaceResizedFunc)(void** display, tyProc_KNiNOTQumxFz2O1GcNzZJw surfaceResizedFunc);
N_NIMCALL(void, glfmSetSurfaceDestroyedFunc)(void** display, tyProc_kAyOno27kR0x3SHsrIZCJg surfaceDestroyedFunc);
N_NIMCALL(void, glfmSetMainLoopFunc)(void** display, tyProc_l6Br0mXghIMqU7Ht2wXupA mainLoopFunc);
N_NIMCALL(void, glfmSetTouchFunc)(void** display, tyProc_oDTWi9cbxk4AYUr2vEpEYwg touchFunc);
N_NIMCALL(void, glfmSetKeyFunc)(void** display, tyProc_nNzjeI8wQlvD3hxqR9adMDw keyFunc);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached_mMRdr4sgmnykA9aWeM9aDZlw)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, initStackBottomWith)(void* locals);
N_NOINLINE(void, nimGC_setStackBottom)(void* theStackBottom);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, onKey_9cXgScGyT58rgnRzHlo9ainA)(void** display, tyEnum_GLFMKey_Z9azk85obiQ9bHC3veTzjFzQ keyCode, tyEnum_GLFMKeyAction_yTAQoIN6dxsm8J5Qdix18w action, int modifiers);
static N_INLINE(void, minuseq__2gGQPdUypkoO8EiDQJwWdwsystem)(double* x, double y);
static N_INLINE(void, pluseq__2gGQPdUypkoO8EiDQJwWdw_2system)(double* x, double y);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, onTouch_rfsUyq33FCSZyzgpZl89c4Q)(void** display, int touch, tyEnum_GLFMTouchPhase_eOF31Gkae59aGGDBGN1Sj3w phase, double x, double y);
N_NIMCALL(void, glfmGetDisplaySize)(void** display, int* width, int* height);
N_NIMCALL(void, echoBinSafe)(NimStringDesc** args, NI argsLen_0);
N_LIB_PRIVATE N_NIMCALL(void, onFrame_worPUOVG9cMhL9b0NuNZ50DA)(void** display, double frameTime);
N_LIB_PRIVATE N_STDCALL(void, glClearColor_mRmvKpMRWVe0olxA2D6ibg)(NF32 red, NF32 green, NF32 blue, NF32 alpha);
N_LIB_PRIVATE N_STDCALL(void, glClear_bP2CTzt9boHsiXofCPEwKlw)(NU32 mask);
N_LIB_PRIVATE N_NIMCALL(NU32, compileShader_ZzwoHWFExdvZEADGJXsExA)(NU32 type_0, NimStringDesc* shaderString);
N_LIB_PRIVATE N_STDCALL(NU32, glCreateShader_aJRhkMsONGw6YriVczeVXw)(NU32 type_0);
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s);
N_LIB_PRIVATE N_STDCALL(void, glShaderSource_aAChP39b9c74do2PBxq3lQ2w)(NU32 shader, NI32 count, NCSTRING* string, NI32* length);
N_LIB_PRIVATE N_STDCALL(void, glCompileShader_JXarxWIUYZC38YQw9bzOQOQ)(NU32 shader);
N_LIB_PRIVATE N_STDCALL(void, glGetShaderiv_7nfLUNau354MWYxYlFPRkQ)(NU32 shader, NU32 pname, NI32* params);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_LIB_PRIVATE N_STDCALL(void, glGetShaderInfoLog_P49ccOMvJ0UTL619cwd54DAw)(NU32 shader, NI32 bufSize, NI32* length, NCSTRING infoLog);
N_LIB_PRIVATE N_STDCALL(void, glDeleteShader_JXarxWIUYZC38YQw9bzOQOQ_2)(NU32 shader);
N_LIB_PRIVATE N_STDCALL(NU32, glCreateProgram_5U6O7XOWiz3Kro2j6K7fHg)(void);
N_LIB_PRIVATE N_STDCALL(void, glAttachShader_59cx9cQog6uHwSy9cvdhQccbw)(NU32 program, NU32 shader);
N_LIB_PRIVATE N_STDCALL(void, glBindAttribLocation_uRnkKx7xCCCMIm9bGBTjK9bw)(NU32 program, NU32 index, NCSTRING name);
N_LIB_PRIVATE N_STDCALL(void, glLinkProgram_VmBV9c0dEsSOFA4kB5FAiVw)(NU32 program);
N_LIB_PRIVATE N_STDCALL(void, glUseProgram_VmBV9c0dEsSOFA4kB5FAiVw_2)(NU32 program);
N_LIB_PRIVATE N_STDCALL(void, glGenBuffers_aY0U7QWUPiGqN6yoXyh0iw)(NI32 n, NU32* buffers);
N_LIB_PRIVATE N_STDCALL(void, glBindBuffer_WUKuVaNXamgrBpVZ9bAUV9cA)(NU32 target, NU32 buffer);
N_LIB_PRIVATE N_STDCALL(void, glEnableVertexAttribArray_L4zGXkv7mX9cYBOWvb4Jlrg)(NU32 index);
N_LIB_PRIVATE N_STDCALL(void, glVertexAttribPointer_vD9cW9bmh7DJKgusHwHNi9byw)(NU32 index, NI32 size, NU32 type_0, NIM_BOOL normalized, NI32 stride, void* pointer);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_STDCALL(void, glBufferData_VLz8e7mQdBq50nh4P9btjaA)(NU32 target, NI size, void* data, NU32 usage);
N_LIB_PRIVATE N_STDCALL(void, glDrawArrays_4aN8a5dpLSl7We9cWglkQeA)(NU32 mode, NI32 first, NI32 count);
N_LIB_PRIVATE N_NIMCALL(void, onSurfaceDestroyed_w9akNxRa6Pyg4zRwLoVlSoA)(void** display);
N_LIB_PRIVATE N_NIMCALL(void, onSurfaceCreated_CESQkNRToi4EHbAJjA9bNrA)(void** display, int width, int height);
N_LIB_PRIVATE N_STDCALL(void, glViewport_d738gxwcyV6Jhkv9aL2fVlQ)(NI32 x, NI32 y, NI32 width, NI32 height);
N_NIMCALL(tyEnum_GLFMRenderingAPI_VewemnQqcjOlqSqMHBLLvA, glfmGetRenderingAPI)(void** display);
N_LIB_PRIVATE N_NIMCALL(void, systemDatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, systemInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, opengl_openglDatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, opengl_openglInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, NimMainModule)(void);
tyObject_ExampleApp_4IqV9bzvOaxXTDnb9cerGklA app_kU8s08R79a31ZN3xV9bMxJBQ;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
STRING_LITERAL(TM_V45tF8B8NBcxFcjfe7lhBw_9, "touch", 5);
NIM_CONST tyArray_nHXaesL0DJZHyVS07ARPRA TM_V45tF8B8NBcxFcjfe7lhBw_8 = {((NimStringDesc*) &TM_V45tF8B8NBcxFcjfe7lhBw_9)}
;
STRING_LITERAL(TM_V45tF8B8NBcxFcjfe7lhBw_11, "onFrame", 7);
NIM_CONST tyArray_nHXaesL0DJZHyVS07ARPRA TM_V45tF8B8NBcxFcjfe7lhBw_10 = {((NimStringDesc*) &TM_V45tF8B8NBcxFcjfe7lhBw_11)}
;
STRING_LITERAL(TM_V45tF8B8NBcxFcjfe7lhBw_13, "setup", 5);
NIM_CONST tyArray_nHXaesL0DJZHyVS07ARPRA TM_V45tF8B8NBcxFcjfe7lhBw_12 = {((NimStringDesc*) &TM_V45tF8B8NBcxFcjfe7lhBw_13)}
;
STRING_LITERAL(TM_V45tF8B8NBcxFcjfe7lhBw_15, "glShaderSource...", 17);
NIM_CONST tyArray_nHXaesL0DJZHyVS07ARPRA TM_V45tF8B8NBcxFcjfe7lhBw_14 = {((NimStringDesc*) &TM_V45tF8B8NBcxFcjfe7lhBw_15)}
;
STRING_LITERAL(TM_V45tF8B8NBcxFcjfe7lhBw_17, "glCompileShader...", 18);
NIM_CONST tyArray_nHXaesL0DJZHyVS07ARPRA TM_V45tF8B8NBcxFcjfe7lhBw_16 = {((NimStringDesc*) &TM_V45tF8B8NBcxFcjfe7lhBw_17)}
;
STRING_LITERAL(TM_V45tF8B8NBcxFcjfe7lhBw_19, "So... Couldn\'t compile shader", 29);
NIM_CONST tyArray_nHXaesL0DJZHyVS07ARPRA TM_V45tF8B8NBcxFcjfe7lhBw_18 = {((NimStringDesc*) &TM_V45tF8B8NBcxFcjfe7lhBw_19)}
;
STRING_LITERAL(TM_V45tF8B8NBcxFcjfe7lhBw_21, "glGetShaderiv GL_INFO_LOG_LENGTH", 32);
NIM_CONST tyArray_nHXaesL0DJZHyVS07ARPRA TM_V45tF8B8NBcxFcjfe7lhBw_20 = {((NimStringDesc*) &TM_V45tF8B8NBcxFcjfe7lhBw_21)}
;
STRING_LITERAL(TM_V45tF8B8NBcxFcjfe7lhBw_22, "Log lengh ", 10);
STRING_LITERAL(TM_V45tF8B8NBcxFcjfe7lhBw_23, "Shader log: ", 12);
STRING_LITERAL(TM_V45tF8B8NBcxFcjfe7lhBw_24, "attribute highp vec3 a_position;\012attribute lowp vec3 a_color;\012\012"
"varying lowp vec3 v_color;\012\012void main() {\012    gl_Position = vec4"
"(a_position, 1.0);\012    v_color = a_color;\012}\012", 171);
STRING_LITERAL(TM_V45tF8B8NBcxFcjfe7lhBw_25, "varying lowp vec3 v_color;\012\012void main() {\012    gl_FragColor = ve"
"c4(v_color, 1.0);\012}\012", 83);
static NIM_CONST tyProc_l6Br0mXghIMqU7Ht2wXupA TM_V45tF8B8NBcxFcjfe7lhBw_26 = {NIM_NIL,NIM_NIL};
STRING_LITERAL(TM_V45tF8B8NBcxFcjfe7lhBw_28, "setup done", 10);
NIM_CONST tyArray_nHXaesL0DJZHyVS07ARPRA TM_V45tF8B8NBcxFcjfe7lhBw_27 = {((NimStringDesc*) &TM_V45tF8B8NBcxFcjfe7lhBw_28)}
;
STRING_LITERAL(TM_V45tF8B8NBcxFcjfe7lhBw_30, "glUseProgram", 12);
NIM_CONST tyArray_nHXaesL0DJZHyVS07ARPRA TM_V45tF8B8NBcxFcjfe7lhBw_29 = {((NimStringDesc*) &TM_V45tF8B8NBcxFcjfe7lhBw_30)}
;
STRING_LITERAL(TM_V45tF8B8NBcxFcjfe7lhBw_32, "glGenBuffers", 12);
NIM_CONST tyArray_nHXaesL0DJZHyVS07ARPRA TM_V45tF8B8NBcxFcjfe7lhBw_31 = {((NimStringDesc*) &TM_V45tF8B8NBcxFcjfe7lhBw_32)}
;
STRING_LITERAL(TM_V45tF8B8NBcxFcjfe7lhBw_34, "glBindBuffer", 12);
NIM_CONST tyArray_nHXaesL0DJZHyVS07ARPRA TM_V45tF8B8NBcxFcjfe7lhBw_33 = {((NimStringDesc*) &TM_V45tF8B8NBcxFcjfe7lhBw_34)}
;
STRING_LITERAL(TM_V45tF8B8NBcxFcjfe7lhBw_36, "vertices", 8);
NIM_CONST tyArray_nHXaesL0DJZHyVS07ARPRA TM_V45tF8B8NBcxFcjfe7lhBw_35 = {((NimStringDesc*) &TM_V45tF8B8NBcxFcjfe7lhBw_36)}
;
NIM_CONST tyArray_G3UmgAkY79bNxQUIZv9aDe9bw TM_V45tF8B8NBcxFcjfe7lhBw_37 = {0.0,
5.0000000000000000e-01,
0.0,
1.0000000000000000e+00,
0.0,
0.0,
-5.0000000000000000e-01,
-5.0000000000000000e-01,
0.0,
0.0,
1.0000000000000000e+00,
0.0,
5.0000000000000000e-01,
-5.0000000000000000e-01,
0.0,
0.0,
0.0,
1.0000000000000000e+00}
;
STRING_LITERAL(TM_V45tF8B8NBcxFcjfe7lhBw_39, "glBufferData", 12);
STRING_LITERAL(TM_V45tF8B8NBcxFcjfe7lhBw_40, "72", 2);
NIM_CONST tyArray_Re75IspeoxXy2oCZHwcRrA TM_V45tF8B8NBcxFcjfe7lhBw_38 = {((NimStringDesc*) &TM_V45tF8B8NBcxFcjfe7lhBw_39),
((NimStringDesc*) &TM_V45tF8B8NBcxFcjfe7lhBw_40)}
;
STRING_LITERAL(TM_V45tF8B8NBcxFcjfe7lhBw_42, "glDrawArrays", 12);
NIM_CONST tyArray_nHXaesL0DJZHyVS07ARPRA TM_V45tF8B8NBcxFcjfe7lhBw_41 = {((NimStringDesc*) &TM_V45tF8B8NBcxFcjfe7lhBw_42)}
;
STRING_LITERAL(TM_V45tF8B8NBcxFcjfe7lhBw_44, "done onFrame", 12);
NIM_CONST tyArray_nHXaesL0DJZHyVS07ARPRA TM_V45tF8B8NBcxFcjfe7lhBw_43 = {((NimStringDesc*) &TM_V45tF8B8NBcxFcjfe7lhBw_44)}
;

static N_INLINE(void, nimSetMem_zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}

static N_INLINE(void, nimZeroMem)(void* p, NI size) {
	nimSetMem_zxfKBYntu9cBapkhrCOk1fgmemory(p, ((int) 0), size);
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI T1_;
	T1_ = (NI)0;
	{
		if (!(framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw == NIM_NIL)) goto LA4_;
		T1_ = ((NI) 0);
	}
	goto LA2_;
	LA4_: ;
	{
		T1_ = ((NI) ((NI16)((*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).calldepth + ((NI16) 1))));
	}
	LA2_: ;
	(*s).calldepth = ((NI16) (T1_));
	(*s).prev = framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = s;
	{
		if (!((*s).calldepth == ((NI16) (((NI) 2000))))) goto LA9_;
		callDepthLimitReached_mMRdr4sgmnykA9aWeM9aDZlw();
	}
	LA9_: ;
}

static N_INLINE(void, popFrame)(void) {
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = (*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).prev;
}

N_NIMCALL(void, glfmMain)(void** display) {
	tyProc_KNiNOTQumxFz2O1GcNzZJw T1_;
	tyProc_KNiNOTQumxFz2O1GcNzZJw T2_;
	tyProc_kAyOno27kR0x3SHsrIZCJg T3_;
	tyProc_l6Br0mXghIMqU7Ht2wXupA T4_;
	tyProc_oDTWi9cbxk4AYUr2vEpEYwg T5_;
	tyProc_nNzjeI8wQlvD3hxqR9adMDw T6_;
	nimfr_("glfmMain", "/p/try/glfm/example/src/main.nim");
	nimln_(38, "/p/try/glfm/example/src/main.nim");
	glfmSetDisplayConfig(display, ((tyEnum_GLFMRenderingAPI_VewemnQqcjOlqSqMHBLLvA) 0), ((tyEnum_GLFMColorFormat_VZ7c08dLEDwD359b8JtJYrA) 0), ((tyEnum_GLFMDepthFormat_PdvuyvXTcVeEPaaA4eYGEQ) 0), ((tyEnum_GLFMStencilFormat_M8UU27h9cOU7AX2isqfQXfw) 0), ((tyEnum_GLFMMultisample_B7nIWmiLUhGkk9cv9bSfWS8g) 0));
	nimln_(41, "/p/try/glfm/example/src/main.nim");
	glfmSetUserData(display, ((void*) ((&app_kU8s08R79a31ZN3xV9bMxJBQ))));
	nimln_(42, "/p/try/glfm/example/src/main.nim");
	nimZeroMem((void*)(&T1_), sizeof(tyProc_KNiNOTQumxFz2O1GcNzZJw));
	T1_.ClP_0 = ((TM_V45tF8B8NBcxFcjfe7lhBw_2) (onSurfaceCreated_CESQkNRToi4EHbAJjA9bNrA)); T1_.ClE_0 = NIM_NIL;
	glfmSetSurfaceCreatedFunc(display, T1_);
	nimln_(43, "/p/try/glfm/example/src/main.nim");
	nimZeroMem((void*)(&T2_), sizeof(tyProc_KNiNOTQumxFz2O1GcNzZJw));
	T2_.ClP_0 = ((TM_V45tF8B8NBcxFcjfe7lhBw_3) (onSurfaceCreated_CESQkNRToi4EHbAJjA9bNrA)); T2_.ClE_0 = NIM_NIL;
	glfmSetSurfaceResizedFunc(display, T2_);
	nimln_(44, "/p/try/glfm/example/src/main.nim");
	nimZeroMem((void*)(&T3_), sizeof(tyProc_kAyOno27kR0x3SHsrIZCJg));
	T3_.ClP_0 = ((TM_V45tF8B8NBcxFcjfe7lhBw_4) (onSurfaceDestroyed_w9akNxRa6Pyg4zRwLoVlSoA)); T3_.ClE_0 = NIM_NIL;
	glfmSetSurfaceDestroyedFunc(display, T3_);
	nimln_(45, "/p/try/glfm/example/src/main.nim");
	nimZeroMem((void*)(&T4_), sizeof(tyProc_l6Br0mXghIMqU7Ht2wXupA));
	T4_.ClP_0 = ((TM_V45tF8B8NBcxFcjfe7lhBw_5) (onFrame_worPUOVG9cMhL9b0NuNZ50DA)); T4_.ClE_0 = NIM_NIL;
	glfmSetMainLoopFunc(display, T4_);
	nimln_(46, "/p/try/glfm/example/src/main.nim");
	nimZeroMem((void*)(&T5_), sizeof(tyProc_oDTWi9cbxk4AYUr2vEpEYwg));
	T5_.ClP_0 = ((TM_V45tF8B8NBcxFcjfe7lhBw_6) (onTouch_rfsUyq33FCSZyzgpZl89c4Q)); T5_.ClE_0 = NIM_NIL;
	glfmSetTouchFunc(display, T5_);
	nimln_(47, "/p/try/glfm/example/src/main.nim");
	nimZeroMem((void*)(&T6_), sizeof(tyProc_nNzjeI8wQlvD3hxqR9adMDw));
	T6_.ClP_0 = ((TM_V45tF8B8NBcxFcjfe7lhBw_7) (onKey_9cXgScGyT58rgnRzHlo9ainA)); T6_.ClE_0 = NIM_NIL;
	glfmSetKeyFunc(display, T6_);
	popFrame();
}

static N_INLINE(void, initStackBottomWith)(void* locals) {
	nimGC_setStackBottom(locals);
}

static N_INLINE(void, minuseq__2gGQPdUypkoO8EiDQJwWdwsystem)(double* x, double y) {
	nimfr_("-=", "/Users/andre.vonhouck/.choosenim/toolchains/nim-#devel/lib/syst"
"em.nim");
	nimln_(4109, "/Users/andre.vonhouck/.choosenim/toolchains/nim-#devel/lib/syst"
"em.nim");
	(*x) = ((NF)((*x)) - (NF)(y));
	popFrame();
}

static N_INLINE(void, pluseq__2gGQPdUypkoO8EiDQJwWdw_2system)(double* x, double y) {
	nimfr_("+=", "/Users/andre.vonhouck/.choosenim/toolchains/nim-#devel/lib/syst"
"em.nim");
	nimln_(4104, "/Users/andre.vonhouck/.choosenim/toolchains/nim-#devel/lib/syst"
"em.nim");
	(*x) = ((NF)((*x)) + (NF)(y));
	popFrame();
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, onKey_9cXgScGyT58rgnRzHlo9ainA)(void** display, tyEnum_GLFMKey_Z9azk85obiQ9bHC3veTzjFzQ keyCode, tyEnum_GLFMKeyAction_yTAQoIN6dxsm8J5Qdix18w action, int modifiers) {
	NIM_BOOL result;
	NIM_BOOL handled;
	nimfr_("onKey", "/p/try/glfm/example/src/main.nim");
{	result = (NIM_BOOL)0;
	nimln_(72, "/p/try/glfm/example/src/main.nim");
	handled = NIM_FALSE;
	nimln_(73, "/p/try/glfm/example/src/main.nim");
	{
		if (!(action == ((tyEnum_GLFMKeyAction_yTAQoIN6dxsm8J5Qdix18w) 0))) goto LA3_;
		nimln_(75, "/p/try/glfm/example/src/main.nim");
		switch (keyCode) {
		case ((tyEnum_GLFMKey_Z9azk85obiQ9bHC3veTzjFzQ) 37):
		{
			nimln_(77, "/p/try/glfm/example/src/main.nim");
			minuseq__2gGQPdUypkoO8EiDQJwWdwsystem((&app_kU8s08R79a31ZN3xV9bMxJBQ.offsetX), 1.0000000000000001e-01);
			nimln_(78, "/p/try/glfm/example/src/main.nim");
			handled = NIM_TRUE;
		}
		break;
		case ((tyEnum_GLFMKey_Z9azk85obiQ9bHC3veTzjFzQ) 39):
		{
			nimln_(80, "/p/try/glfm/example/src/main.nim");
			pluseq__2gGQPdUypkoO8EiDQJwWdw_2system((&app_kU8s08R79a31ZN3xV9bMxJBQ.offsetX), 1.0000000000000001e-01);
			nimln_(81, "/p/try/glfm/example/src/main.nim");
			handled = NIM_TRUE;
		}
		break;
		case ((tyEnum_GLFMKey_Z9azk85obiQ9bHC3veTzjFzQ) 38):
		{
			nimln_(83, "/p/try/glfm/example/src/main.nim");
			minuseq__2gGQPdUypkoO8EiDQJwWdwsystem((&app_kU8s08R79a31ZN3xV9bMxJBQ.offsetY), 1.0000000000000001e-01);
			nimln_(84, "/p/try/glfm/example/src/main.nim");
			handled = NIM_TRUE;
		}
		break;
		case ((tyEnum_GLFMKey_Z9azk85obiQ9bHC3veTzjFzQ) 40):
		{
			nimln_(86, "/p/try/glfm/example/src/main.nim");
			pluseq__2gGQPdUypkoO8EiDQJwWdw_2system((&app_kU8s08R79a31ZN3xV9bMxJBQ.offsetY), 1.0000000000000001e-01);
			nimln_(87, "/p/try/glfm/example/src/main.nim");
			handled = NIM_TRUE;
		}
		break;
		default:
		{
		}
		break;
		}
	}
	LA3_: ;
	nimln_(90, "/p/try/glfm/example/src/main.nim");
	result = handled;
	goto BeforeRet_;
	}BeforeRet_: ;
	popFrame();
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, onTouch_rfsUyq33FCSZyzgpZl89c4Q)(void** display, int touch, tyEnum_GLFMTouchPhase_eOF31Gkae59aGGDBGN1Sj3w phase, double x, double y) {
	NIM_BOOL result;
	nimfr_("onTouch", "/p/try/glfm/example/src/main.nim");
{	result = (NIM_BOOL)0;
	nimln_(51, "/p/try/glfm/example/src/main.nim");
	{
		if (!(phase == ((tyEnum_GLFMTouchPhase_eOF31Gkae59aGGDBGN1Sj3w) 0))) goto LA3_;
		nimln_(52, "/p/try/glfm/example/src/main.nim");
		result = NIM_FALSE;
		goto BeforeRet_;
	}
	LA3_: ;
	nimln_(54, "/p/try/glfm/example/src/main.nim");
	{
		int width;
		int height;
		if (!!((phase == ((tyEnum_GLFMTouchPhase_eOF31Gkae59aGGDBGN1Sj3w) 1)))) goto LA7_;
		width = (int)0;
		height = (int)0;
		nimln_(58, "/p/try/glfm/example/src/main.nim");
		glfmGetDisplaySize(display, (&width), (&height));
		nimln_(60, "/p/try/glfm/example/src/main.nim");
		pluseq__2gGQPdUypkoO8EiDQJwWdw_2system((&app_kU8s08R79a31ZN3xV9bMxJBQ.offsetX), ((NF)(((NF)(2.0000000000000000e+00) * (NF)(((NF)(x) - (NF)(app_kU8s08R79a31ZN3xV9bMxJBQ.lastTouchX))))) / (NF)(((NF) (width)))));
		nimln_(62, "/p/try/glfm/example/src/main.nim");
		minuseq__2gGQPdUypkoO8EiDQJwWdwsystem((&app_kU8s08R79a31ZN3xV9bMxJBQ.offsetY), ((NF)(((NF)(2.0000000000000000e+00) * (NF)(((NF)(y) - (NF)(app_kU8s08R79a31ZN3xV9bMxJBQ.lastTouchY))))) / (NF)(((NF) (height)))));
		nimln_(64, "/p/try/glfm/example/src/main.nim");
		echoBinSafe(TM_V45tF8B8NBcxFcjfe7lhBw_8, 1);
	}
	LA7_: ;
	nimln_(66, "/p/try/glfm/example/src/main.nim");
	app_kU8s08R79a31ZN3xV9bMxJBQ.lastTouchX = x;
	nimln_(67, "/p/try/glfm/example/src/main.nim");
	app_kU8s08R79a31ZN3xV9bMxJBQ.lastTouchY = y;
	nimln_(68, "/p/try/glfm/example/src/main.nim");
	result = NIM_TRUE;
	goto BeforeRet_;
	}BeforeRet_: ;
	popFrame();
	return result;
}

static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s) {
	NCSTRING result;
	result = (NCSTRING)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (s == NIM_NIL);
		if (T3_) goto LA4_;
		T3_ = ((*s).Sup.len == ((NI) 0));
		LA4_: ;
		if (!T3_) goto LA5_;
		result = "";
	}
	goto LA1_;
	LA5_: ;
	{
		result = ((NCSTRING) ((*s).data));
	}
	LA1_: ;
	return result;
}

static N_INLINE(NI, chckRange)(NI i, NI a, NI b) {
	NI result;
{	result = (NI)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (a <= i);
		if (!(T3_)) goto LA4_;
		T3_ = (i <= b);
		LA4_: ;
		if (!T3_) goto LA5_;
		result = i;
		goto BeforeRet_;
	}
	goto LA1_;
	LA5_: ;
	{
		raiseRangeError(((NI64) (i)));
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NU32, compileShader_ZzwoHWFExdvZEADGJXsExA)(NU32 type_0, NimStringDesc* shaderString) {
	NU32 result;
	NU32 shader;
	tyArray_NmEsK2qSxmxyFA4fWeYieg shaderTextArr;
	NI32 status;
	nimfr_("compileShader", "/p/try/glfm/example/src/main.nim");
{	result = (NU32)0;
	nimln_(126, "/p/try/glfm/example/src/main.nim");
	shader = glCreateShader_aJRhkMsONGw6YriVczeVXw(type_0);
	nimZeroMem((void*)shaderTextArr, sizeof(tyArray_NmEsK2qSxmxyFA4fWeYieg));
	nimln_(127, "/p/try/glfm/example/src/main.nim");
	shaderTextArr[0] = nimToCStringConv(shaderString);
	nimln_(128, "/p/try/glfm/example/src/main.nim");
	echoBinSafe(TM_V45tF8B8NBcxFcjfe7lhBw_14, 1);
	nimln_(129, "/p/try/glfm/example/src/main.nim");
	glShaderSource_aAChP39b9c74do2PBxq3lQ2w(shader, ((NI32) 1), ((NCSTRING*) (shaderTextArr)), NIM_NIL);
	nimln_(130, "/p/try/glfm/example/src/main.nim");
	echoBinSafe(TM_V45tF8B8NBcxFcjfe7lhBw_16, 1);
	nimln_(131, "/p/try/glfm/example/src/main.nim");
	glCompileShader_JXarxWIUYZC38YQw9bzOQOQ(shader);
	status = (NI32)0;
	nimln_(136, "/p/try/glfm/example/src/main.nim");
	glGetShaderiv_7nfLUNau354MWYxYlFPRkQ(shader, ((NU32) 35713), (&status));
	nimln_(137, "/p/try/glfm/example/src/main.nim");
	{
		NI32 logLength;
		tyArray_Re75IspeoxXy2oCZHwcRrA T5_;
		if (!(status == ((NI32) 0))) goto LA3_;
		nimln_(138, "/p/try/glfm/example/src/main.nim");
		echoBinSafe(TM_V45tF8B8NBcxFcjfe7lhBw_18, 1);
		logLength = (NI32)0;
		nimln_(140, "/p/try/glfm/example/src/main.nim");
		echoBinSafe(TM_V45tF8B8NBcxFcjfe7lhBw_20, 1);
		nimln_(141, "/p/try/glfm/example/src/main.nim");
		glGetShaderiv_7nfLUNau354MWYxYlFPRkQ(shader, ((NU32) 35716), (&logLength));
		nimln_(142, "/p/try/glfm/example/src/main.nim");
		nimZeroMem((void*)T5_, sizeof(tyArray_Re75IspeoxXy2oCZHwcRrA));
		T5_[0] = copyString(((NimStringDesc*) &TM_V45tF8B8NBcxFcjfe7lhBw_22));
		T5_[1] = nimIntToStr(((NI) (logLength)));
		echoBinSafe(T5_, 2);
		nimln_(143, "/p/try/glfm/example/src/main.nim");
		{
			NimStringDesc* log;
			tyArray_Re75IspeoxXy2oCZHwcRrA T10_;
			if (!(((NI32) 0) < logLength)) goto LA8_;
			nimln_(144, "/p/try/glfm/example/src/main.nim");
			log = rawNewString(((NI)chckRange(logLength, ((NI) 0), ((NI) IL64(9223372036854775807)))));
			nimln_(145, "/p/try/glfm/example/src/main.nim");
			glGetShaderInfoLog_P49ccOMvJ0UTL619cwd54DAw(shader, logLength, (&logLength), nimToCStringConv(log));
			nimln_(146, "/p/try/glfm/example/src/main.nim");
			nimZeroMem((void*)T10_, sizeof(tyArray_Re75IspeoxXy2oCZHwcRrA));
			T10_[0] = copyString(((NimStringDesc*) &TM_V45tF8B8NBcxFcjfe7lhBw_23));
			T10_[1] = copyString(log);
			echoBinSafe(T10_, 2);
		}
		LA8_: ;
		nimln_(147, "/p/try/glfm/example/src/main.nim");
		glDeleteShader_JXarxWIUYZC38YQw9bzOQOQ_2(shader);
		nimln_(148, "/p/try/glfm/example/src/main.nim");
		shader = ((NU32) 0);
	}
	LA3_: ;
	nimln_(149, "/p/try/glfm/example/src/main.nim");
	result = shader;
	goto BeforeRet_;
	}BeforeRet_: ;
	popFrame();
	return result;
}

static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}

N_LIB_PRIVATE N_NIMCALL(void, onFrame_worPUOVG9cMhL9b0NuNZ50DA)(void** display, double frameTime) {
	NI32 stride;
	tyArray_G3UmgAkY79bNxQUIZv9aDe9bw vertices;
	nimfr_("onFrame", "/p/try/glfm/example/src/main.nim");
{	nimln_(159, "/p/try/glfm/example/src/main.nim");
	echoBinSafe(TM_V45tF8B8NBcxFcjfe7lhBw_10, 1);
	nimln_(161, "/p/try/glfm/example/src/main.nim");
	glClearColor_mRmvKpMRWVe0olxA2D6ibg(0.0, 0.0, 0.0, 1.0000000000000000e+00);
	nimln_(162, "/p/try/glfm/example/src/main.nim");
	glClear_bP2CTzt9boHsiXofCPEwKlw(((NU32) 16384));
	nimln_(164, "/p/try/glfm/example/src/main.nim");
	{
		NU32 vertShader;
		NU32 fragShader;
		if (!(app_kU8s08R79a31ZN3xV9bMxJBQ.program == ((NI) 0))) goto LA3_;
		nimln_(165, "/p/try/glfm/example/src/main.nim");
		echoBinSafe(TM_V45tF8B8NBcxFcjfe7lhBw_12, 1);
		nimln_(166, "/p/try/glfm/example/src/main.nim");
		vertShader = compileShader_ZzwoHWFExdvZEADGJXsExA(((NU32) 35633), ((NimStringDesc*) &TM_V45tF8B8NBcxFcjfe7lhBw_24));
		nimln_(167, "/p/try/glfm/example/src/main.nim");
		fragShader = compileShader_ZzwoHWFExdvZEADGJXsExA(((NU32) 35632), ((NimStringDesc*) &TM_V45tF8B8NBcxFcjfe7lhBw_25));
		nimln_(168, "/p/try/glfm/example/src/main.nim");
		{
			NIM_BOOL T7_;
			T7_ = (NIM_BOOL)0;
			T7_ = (vertShader == ((NI) 0));
			if (T7_) goto LA8_;
			T7_ = (fragShader == ((NI) 0));
			LA8_: ;
			if (!T7_) goto LA9_;
			nimln_(169, "/p/try/glfm/example/src/main.nim");
			glfmSetMainLoopFunc(display, TM_V45tF8B8NBcxFcjfe7lhBw_26);
			nimln_(170, "/p/try/glfm/example/src/main.nim");
			goto BeforeRet_;
		}
		LA9_: ;
		nimln_(171, "/p/try/glfm/example/src/main.nim");
		app_kU8s08R79a31ZN3xV9bMxJBQ.program = glCreateProgram_5U6O7XOWiz3Kro2j6K7fHg();
		nimln_(172, "/p/try/glfm/example/src/main.nim");
		glAttachShader_59cx9cQog6uHwSy9cvdhQccbw(app_kU8s08R79a31ZN3xV9bMxJBQ.program, vertShader);
		nimln_(173, "/p/try/glfm/example/src/main.nim");
		glAttachShader_59cx9cQog6uHwSy9cvdhQccbw(app_kU8s08R79a31ZN3xV9bMxJBQ.program, fragShader);
		nimln_(174, "/p/try/glfm/example/src/main.nim");
		glBindAttribLocation_uRnkKx7xCCCMIm9bGBTjK9bw(app_kU8s08R79a31ZN3xV9bMxJBQ.program, ((NU32) 0), "a_position");
		nimln_(175, "/p/try/glfm/example/src/main.nim");
		glBindAttribLocation_uRnkKx7xCCCMIm9bGBTjK9bw(app_kU8s08R79a31ZN3xV9bMxJBQ.program, ((NU32) 1), "a_color");
		nimln_(176, "/p/try/glfm/example/src/main.nim");
		glLinkProgram_VmBV9c0dEsSOFA4kB5FAiVw(app_kU8s08R79a31ZN3xV9bMxJBQ.program);
		nimln_(177, "/p/try/glfm/example/src/main.nim");
		glDeleteShader_JXarxWIUYZC38YQw9bzOQOQ_2(vertShader);
		nimln_(178, "/p/try/glfm/example/src/main.nim");
		glDeleteShader_JXarxWIUYZC38YQw9bzOQOQ_2(fragShader);
		nimln_(179, "/p/try/glfm/example/src/main.nim");
		echoBinSafe(TM_V45tF8B8NBcxFcjfe7lhBw_27, 1);
	}
	LA3_: ;
	nimln_(181, "/p/try/glfm/example/src/main.nim");
	echoBinSafe(TM_V45tF8B8NBcxFcjfe7lhBw_29, 1);
	nimln_(182, "/p/try/glfm/example/src/main.nim");
	glUseProgram_VmBV9c0dEsSOFA4kB5FAiVw_2(app_kU8s08R79a31ZN3xV9bMxJBQ.program);
	nimln_(183, "/p/try/glfm/example/src/main.nim");
	echoBinSafe(TM_V45tF8B8NBcxFcjfe7lhBw_31, 1);
	nimln_(184, "/p/try/glfm/example/src/main.nim");
	{
		if (!(app_kU8s08R79a31ZN3xV9bMxJBQ.vertexBuffer == ((NI) 0))) goto LA13_;
		nimln_(185, "/p/try/glfm/example/src/main.nim");
		glGenBuffers_aY0U7QWUPiGqN6yoXyh0iw(((NI32) 1), (&app_kU8s08R79a31ZN3xV9bMxJBQ.vertexBuffer));
	}
	LA13_: ;
	nimln_(186, "/p/try/glfm/example/src/main.nim");
	echoBinSafe(TM_V45tF8B8NBcxFcjfe7lhBw_33, 1);
	nimln_(187, "/p/try/glfm/example/src/main.nim");
	glBindBuffer_WUKuVaNXamgrBpVZ9bAUV9cA(((NU32) 34962), app_kU8s08R79a31ZN3xV9bMxJBQ.vertexBuffer);
	nimln_(188, "/p/try/glfm/example/src/main.nim");
	stride = ((NI32) 24);
	nimln_(189, "/p/try/glfm/example/src/main.nim");
	glEnableVertexAttribArray_L4zGXkv7mX9cYBOWvb4Jlrg(((NU32) 0));
	nimln_(190, "/p/try/glfm/example/src/main.nim");
	glVertexAttribPointer_vD9cW9bmh7DJKgusHwHNi9byw(((NU32) 0), ((NI32) 3), ((NU32) 5126), NIM_FALSE, stride, ((void*) (((NI) 0))));
	nimln_(191, "/p/try/glfm/example/src/main.nim");
	glEnableVertexAttribArray_L4zGXkv7mX9cYBOWvb4Jlrg(((NU32) 1));
	nimln_(192, "/p/try/glfm/example/src/main.nim");
	glVertexAttribPointer_vD9cW9bmh7DJKgusHwHNi9byw(((NU32) 1), ((NI32) 3), ((NU32) 5126), NIM_FALSE, stride, ((void*) (((NI) 12))));
	nimln_(200, "/p/try/glfm/example/src/main.nim");
	echoBinSafe(TM_V45tF8B8NBcxFcjfe7lhBw_35, 1);
	nimZeroMem((void*)vertices, sizeof(tyArray_G3UmgAkY79bNxQUIZv9aDe9bw));
	nimln_(205, "/p/try/glfm/example/src/main.nim");
	nimCopyMem((void*)vertices, (NIM_CONST void*)TM_V45tF8B8NBcxFcjfe7lhBw_37, sizeof(tyArray_G3UmgAkY79bNxQUIZv9aDe9bw));
	nimln_(210, "/p/try/glfm/example/src/main.nim");
	echoBinSafe(TM_V45tF8B8NBcxFcjfe7lhBw_38, 2);
	nimln_(211, "/p/try/glfm/example/src/main.nim");
	glBufferData_VLz8e7mQdBq50nh4P9btjaA(((NU32) 34962), ((NI) 72), ((void*) ((&vertices[(((NI) 0))- 0]))), ((NU32) 35044));
	nimln_(212, "/p/try/glfm/example/src/main.nim");
	echoBinSafe(TM_V45tF8B8NBcxFcjfe7lhBw_41, 1);
	nimln_(213, "/p/try/glfm/example/src/main.nim");
	glDrawArrays_4aN8a5dpLSl7We9cWglkQeA(((NU32) 4), ((NI32) 0), ((NI32) 3));
	nimln_(215, "/p/try/glfm/example/src/main.nim");
	echoBinSafe(TM_V45tF8B8NBcxFcjfe7lhBw_43, 1);
	}BeforeRet_: ;
	popFrame();
}

N_LIB_PRIVATE N_NIMCALL(void, onSurfaceDestroyed_w9akNxRa6Pyg4zRwLoVlSoA)(void** display) {
	nimfr_("onSurfaceDestroyed", "/p/try/glfm/example/src/main.nim");
	nimln_(103, "/p/try/glfm/example/src/main.nim");
	app_kU8s08R79a31ZN3xV9bMxJBQ.program = ((NU32) 0);
	nimln_(104, "/p/try/glfm/example/src/main.nim");
	app_kU8s08R79a31ZN3xV9bMxJBQ.vertexBuffer = ((NU32) 0);
	popFrame();
}

N_LIB_PRIVATE N_NIMCALL(void, onSurfaceCreated_CESQkNRToi4EHbAJjA9bNrA)(void** display, int width, int height) {
	tyEnum_GLFMRenderingAPI_VewemnQqcjOlqSqMHBLLvA api;
	nimfr_("onSurfaceCreated", "/p/try/glfm/example/src/main.nim");
	nimln_(93, "/p/try/glfm/example/src/main.nim");
	glViewport_d738gxwcyV6Jhkv9aL2fVlQ(((NI32) 0), ((NI32) 0), width, height);
	nimln_(94, "/p/try/glfm/example/src/main.nim");
	api = glfmGetRenderingAPI(display);
	popFrame();
}

void PreMainInner(void) {
	opengl_openglInit000();
}

int cmdCount;
char** cmdLine;
char** gEnv;
void PreMain(void) {
	void (*volatile inner)(void);
	inner = PreMainInner;
	systemDatInit000();
	initStackBottomWith((void *)&inner);
	systemInit000();
	opengl_openglDatInit000();
	(*inner)();
}

N_CDECL(void, NimMainInner)(void) {
	NimMainModule();
}

N_CDECL(void, NimMain)(void) {
	void (*volatile inner)(void);
	PreMain();
	inner = NimMainInner;
	initStackBottomWith((void *)&inner);
	(*inner)();
}

int main(int argc, char** args, char** env) {
	cmdLine = args;
	cmdCount = argc;
	gEnv = env;
	NimMain();
	return nim_program_result;
}

N_LIB_PRIVATE N_NIMCALL(void, NimMainModule)(void) {
{
}
}

