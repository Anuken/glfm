/* Generated by Nim Compiler v0.20.99 */
/*   (c) 2019 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <setjmp.h>
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
  typedef struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ tySequence__sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct NimStrPayload NimStrPayload;
typedef struct AllocatorObj AllocatorObj;
typedef struct NimStringV2 NimStringV2;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA_Content tySequence__uB9b75OUPRENsBAu4AnoePA_Content;
typedef struct TSafePoint TSafePoint;
typedef struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA;
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ {
  NI len; tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content* p;
};
struct TNimType {
void* destructor;
NI size;
NCSTRING name;
};
struct RootObj {
TNimType* m_type;
};
struct NimStrPayload {
NI cap;
AllocatorObj* allocator;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
};
struct tySequence__uB9b75OUPRENsBAu4AnoePA {
  NI len; tySequence__uB9b75OUPRENsBAu4AnoePA_Content* p;
};
struct Exception {
  RootObj Sup;
Exception* parent;
NCSTRING name;
NimStringV2 message;
tySequence__uB9b75OUPRENsBAu4AnoePA trace;
NU raiseId;
Exception* up;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClP_0) (Exception* e, void* ClE_0);
void* ClE_0;
} tyProc__NT9bSe2DDkjdtx7j9aov2Z6g;
struct TSafePoint {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
tyProc__NT9bSe2DDkjdtx7j9aov2Z6g raiseAction;
};
typedef N_NIMCALL_PTR(void*, tyProc__g4DU8Xso7TeLfKjjMA54hg) (AllocatorObj* a, NI size, NI alignment);
typedef N_NIMCALL_PTR(void, tyProc__f0fmYWZ9bBl5n2coKW0dYBQ) (AllocatorObj* a, void* p, NI size);
typedef N_NIMCALL_PTR(void*, tyProc__pc9bof8Viqlm9byLAeLaBy4g) (AllocatorObj* a, void* p, NI oldSize, NI newSize);
typedef N_NIMCALL_PTR(void, tyProc__up7108S0Kt9cUg781lCWRSQ) (AllocatorObj* a);
typedef NU8 tySet_tyEnum_AllocatorFlag__djJDT3jOEYT7cpwNwzEzRg;
struct AllocatorObj {
TNimType* m_type;
tyProc__g4DU8Xso7TeLfKjjMA54hg alloc;
tyProc__f0fmYWZ9bBl5n2coKW0dYBQ dealloc;
tyProc__pc9bof8Viqlm9byLAeLaBy4g realloc;
tyProc__up7108S0Kt9cUg781lCWRSQ deallocAll;
tySet_tyEnum_AllocatorFlag__djJDT3jOEYT7cpwNwzEzRg flags;
NCSTRING name;
NI allocCount;
NI deallocCount;
};


#ifndef tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
#define tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content { NI cap;AllocatorObj* allocator;NimStringV2 data[SEQ_DECL_SIZE];};
#endif

      struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};


#ifndef tySequence__uB9b75OUPRENsBAu4AnoePA_Content_PP
#define tySequence__uB9b75OUPRENsBAu4AnoePA_Content_PP
struct tySequence__uB9b75OUPRENsBAu4AnoePA_Content { NI cap;AllocatorObj* allocator;tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];};
#endif

      static N_INLINE(void, pushSafePoint)(TSafePoint* s);
static N_INLINE(void, popSafePoint)(void);
static N_INLINE(TFrame*, getFrame)(void);
static N_INLINE(void, setFrame)(TFrame* s);
N_NIMCALL(void, reraiseException)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__mMRdr4sgmnykA9aWeM9aDZlw)(void);
static N_INLINE(void, popFrame)(void);
tySequence__sM4lkSb7zS6F7OVMvW9cffQ environment__mlhK49b6YMgc9cgrcYkKq9a3g;
extern TSafePoint* excHandler__rqLlY5bs9atDw2OXYqJEn5g;
extern TSafePoint* excHandler__rqLlY5bs9atDw2OXYqJEn5g;
NIM_BOOL envComputed__LLyFo9bsdu1ZXMDvAe8DhrQ;
extern NCSTRING* environ;
extern TSafePoint* excHandler__rqLlY5bs9atDw2OXYqJEn5g;
extern TSafePoint* excHandler__rqLlY5bs9atDw2OXYqJEn5g;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern int cmdCount;
extern NCSTRING* cmdLine;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = excHandler__rqLlY5bs9atDw2OXYqJEn5g;
	excHandler__rqLlY5bs9atDw2OXYqJEn5g = s;
}

static N_INLINE(void, popSafePoint)(void) {
	excHandler__rqLlY5bs9atDw2OXYqJEn5g = (*excHandler__rqLlY5bs9atDw2OXYqJEn5g).prev;
}

static N_INLINE(TFrame*, getFrame)(void) {
	TFrame* result;
	result = (TFrame*)0;
	result = framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
	return result;
}

static N_INLINE(void, setFrame)(TFrame* s) {
	framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw = s;
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI T1_;
	T1_ = (NI)0;
	{
		if (!(framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw == NIM_NIL)) goto LA4_;
		T1_ = ((NI) 0);
	}
	goto LA2_;
	LA4_: ;
	{
		T1_ = ((NI) ((NI16)((*framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw).calldepth + ((NI16) 1))));
	}
	LA2_: ;
	(*s).calldepth = ((NI16) (T1_));
	(*s).prev = framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
	framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw = s;
	{
		if (!((*s).calldepth == ((NI16) (((NI) 2000))))) goto LA9_;
		callDepthLimitReached__mMRdr4sgmnykA9aWeM9aDZlw();
	}
	LA9_: ;
}

static N_INLINE(void, popFrame)(void) {
	framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw = (*framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw).prev;
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_osInit000)(void) {
{
	TSafePoint TM__yu6cxgKBBXbNsTkT9cyMd4g_2;
	TFrame* _nimCurFrame;
	nimfr_("os", "/p/Nim/lib/pure/os.nim");
	_nimCurFrame = getFrame();
	nimln_(729, "/p/Nim/lib/pure/os.nim");
	pushSafePoint(&TM__yu6cxgKBBXbNsTkT9cyMd4g_2);
	TM__yu6cxgKBBXbNsTkT9cyMd4g_2.status = setjmp(TM__yu6cxgKBBXbNsTkT9cyMd4g_2.context);
	if (TM__yu6cxgKBBXbNsTkT9cyMd4g_2.status == 0) {
		popSafePoint();
	}
	else {
		popSafePoint();
		setFrame(_nimCurFrame);
	}
	{
	}
	if (TM__yu6cxgKBBXbNsTkT9cyMd4g_2.status != 0) reraiseException();
	popFrame();
}
}
