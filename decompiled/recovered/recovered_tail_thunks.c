#include "nsmbudx_prelude.h"
#include "nsmbudx_recovered_deps.h"

/* NintendoSDK namespaces are not C. The thunks only pass pointers through, so the pointee stays opaque. */
typedef struct nn_mii { uint8_t _opaque[0x4]; } nn_mii;

/* The final addresses in main.i64 with no body anywhere in the corpus.
 *
 * These are 4- and 12-byte import/destructor thunks whose Hex-Rays signature is not parseable as C: template
 * arguments inside the name (`GetTouchScreenState<1u>()`), overloaded operators (`operator==`) and destructors
 * (`struct sead_IDisposer::~IDisposer`). They live in their own unit so the repaired recovered_missing.c is never
 * regenerated -- rebuilding that file discards a thousand lines of accumulated repair which the merge scripts do
 * not themselves reproduce.
 */

/* ============================================================================
 * StageActor__dtor_StageActor
 * RVA 0x005CD26C   size 0x4   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x605CD26C  RVA 0x005CD26C  size 0x4 */
// attributes: thunk
Actor *__fastcall StageActor__dtor_StageActor(Actor *a1)
{
  return _ZN10StageActorD2Ev(a1);
}

/* ============================================================================
 * StageActor__dtor_StageActor
 * RVA 0x005D5B84   size 0x4   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x605D5B84  RVA 0x005D5B84  size 0x4 */
// attributes: thunk
Actor *__fastcall StageActor__dtor_StageActor_005D5B84(Actor *a1)
{
  return _ZN10StageActorD2Ev(a1);
}

/* ============================================================================
 * StageActor__dtor_StageActor
 * RVA 0x0060F174   size 0x4   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x6060F174  RVA 0x0060F174  size 0x4 */
// attributes: thunk
Actor *__fastcall StageActor__dtor_StageActor_0060F174(Actor *a1)
{
  return _ZN10StageActorD2Ev(a1);
}

/* ============================================================================
 * StageActor__dtor_StageActor
 * RVA 0x006E89B8   size 0x4   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x606E89B8  RVA 0x006E89B8  size 0x4 */
// attributes: thunk
Actor *__fastcall StageActor__dtor_StageActor_006E89B8(Actor *a1)
{
  return _ZN10StageActorD2Ev(a1);
}

/* ============================================================================
 * StageActor__dtor_StageActor
 * RVA 0x00746194   size 0x4   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x60746194  RVA 0x00746194  size 0x4 */
// attributes: thunk
Actor *__fastcall StageActor__dtor_StageActor_00746194(Actor *a1)
{
  return _ZN10StageActorD2Ev(a1);
}

/* ============================================================================
 * StageActor__dtor_StageActor
 * RVA 0x007473C4   size 0x4   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x607473C4  RVA 0x007473C4  size 0x4 */
// attributes: thunk
Actor *__fastcall StageActor__dtor_StageActor_007473C4(Actor *a1)
{
  return _ZN10StageActorD2Ev(a1);
}

/* ============================================================================
 * StageActor__dtor_StageActor
 * RVA 0x0074CC7C   size 0x4   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x6074CC7C  RVA 0x0074CC7C  size 0x4 */
// attributes: thunk
Actor *__fastcall StageActor__dtor_StageActor_0074CC7C(Actor *a1)
{
  return _ZN10StageActorD2Ev(a1);
}

/* ============================================================================
 * StageActor__dtor_StageActor
 * RVA 0x0074E2A0   size 0x4   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x6074E2A0  RVA 0x0074E2A0  size 0x4 */
// attributes: thunk
Actor *__fastcall StageActor__dtor_StageActor_0074E2A0(Actor *a1)
{
  return _ZN10StageActorD2Ev(a1);
}

/* ============================================================================
 * sead_CalculateTask__dtor_CalculateTask
 * RVA 0x007F89F0   size 0x4   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x607F89F0  RVA 0x007F89F0  size 0x4 */
// attributes: thunk
int __fastcall sead_CalculateTask__dtor_CalculateTask(_DWORD *a1)
{
  return _ZN4sead13CalculateTaskD2Ev(a1);
}

/* ============================================================================
 * sead_CalculateTask__dtor_CalculateTask
 * RVA 0x00825A00   size 0x4   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x60825A00  RVA 0x00825A00  size 0x4 */
// attributes: thunk
int __fastcall sead_CalculateTask__dtor_CalculateTask_00825A00(_DWORD *a1)
{
  return _ZN4sead13CalculateTaskD2Ev(a1);
}

/* ============================================================================
 * sead_IDisposer__dtor_IDisposer
 * RVA 0x002311B8   size 0x4   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x602311B8  RVA 0x002311B8  size 0x4 */
// attributes: thunk
_DWORD *__fastcall sead_IDisposer__dtor_IDisposer(_DWORD *a1)
{
  return _ZN4sead9IDisposerD2Ev(a1);
}

/* ============================================================================
 * sead_IDisposer__dtor_IDisposer
 * RVA 0x0043005C   size 0x4   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x6043005C  RVA 0x0043005C  size 0x4 */
// attributes: thunk
_DWORD *__fastcall sead_IDisposer__dtor_IDisposer_0043005C(_DWORD *a1)
{
  return _ZN4sead9IDisposerD2Ev(a1);
}

/* ============================================================================
 * sead_IDisposer__dtor_IDisposer
 * RVA 0x00792AB8   size 0x4   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x60792AB8  RVA 0x00792AB8  size 0x4 */
// attributes: thunk
_DWORD *__fastcall sead_IDisposer__dtor_IDisposer_00792AB8(_DWORD *a1)
{
  return _ZN4sead9IDisposerD2Ev(a1);
}

/* ============================================================================
 * sead_IDisposer__dtor_IDisposer
 * RVA 0x0080095C   size 0x4   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x6080095C  RVA 0x0080095C  size 0x4 */
// attributes: thunk
_DWORD *__fastcall sead_IDisposer__dtor_IDisposer_0080095C(_DWORD *a1)
{
  return _ZN4sead9IDisposerD2Ev(a1);
}

/* ============================================================================
 * sead_IDisposer__dtor_IDisposer
 * RVA 0x0090B2A0   size 0x4   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x6090B2A0  RVA 0x0090B2A0  size 0x4 */
// attributes: thunk
_DWORD *__fastcall sead_IDisposer__dtor_IDisposer_0090B2A0(_DWORD *a1)
{
  return _ZN4sead9IDisposerD2Ev(a1);
}

/* ============================================================================
 * nn_mii_Database__dtor_Database
 * RVA 0x009AD5F8   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD5F8  RVA 0x009AD5F8  size 0xC */
// attributes: thunk
void __fastcall nn_mii_Database__dtor_Database(struct nn_mii_Database *self)
{
  __imp__ZN2nn3mii8DatabaseD1Ev(self);
}

/* ============================================================================
 * nn_hid_GetTouchScreenState
 * RVA 0x009AD640   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD640  RVA 0x009AD640  size 0xC */
// attributes: thunk
int nn_hid_GetTouchScreenState()
{
  return __imp__ZN2nn3hid19GetTouchScreenStateILj1EEEvPNS0_16TouchScreenStateIXT_EEE();
}

/* ============================================================================
 * nn_hid_VibrationNodeConnection__dtor_VibrationNodeConnection
 * RVA 0x009AD7C0   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD7C0  RVA 0x009AD7C0  size 0xC */
// attributes: thunk
void __fastcall nn_hid_VibrationNodeConnection__dtor_VibrationNodeConnection(nn_hid_VibrationNodeConnection *self)
{
  __imp__ZN2nn3hid23VibrationNodeConnectionD1Ev(self);
}

/* ============================================================================
 * nn_hid_VibrationMixer__dtor_VibrationMixer
 * RVA 0x009AD7CC   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD7CC  RVA 0x009AD7CC  size 0xC */
// attributes: thunk
void __fastcall nn_hid_VibrationMixer__dtor_VibrationMixer(nn_hid_VibrationMixer *self)
{
  __imp__ZN2nn3hid14VibrationMixerD2Ev(self);
}

/* ============================================================================
 * nn_hid_VibrationTarget__dtor_VibrationTarget
 * RVA 0x009AD7D8   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD7D8  RVA 0x009AD7D8  size 0xC */
// attributes: thunk
void __fastcall nn_hid_VibrationTarget__dtor_VibrationTarget(nn_hid_VibrationTarget *self)
{
  __imp__ZN2nn3hid15VibrationTargetD1Ev(self);
}

/* ============================================================================
 * nn_hid_VibrationPlayer__dtor_VibrationPlayer
 * RVA 0x009AD88C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD88C  RVA 0x009AD88C  size 0xC */
// attributes: thunk
void __fastcall nn_hid_VibrationPlayer__dtor_VibrationPlayer(nn_hid_VibrationPlayer *self)
{
  __imp__ZN2nn3hid15VibrationPlayerD2Ev(self);
}

/* ============================================================================
 * nn_hid_VibrationNode__dtor_VibrationNode
 * RVA 0x009AD898   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD898  RVA 0x009AD898  size 0xC */
// attributes: thunk
void __fastcall nn_hid_VibrationNode__dtor_VibrationNode(nn_hid_VibrationNode *self)
{
  __imp__ZN2nn3hid13VibrationNodeD2Ev(self);
}

/* ============================================================================
 * nn_mii_detail_BufferAllocator__dtor_BufferAllocator
 * RVA 0x009ADB74   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADB74  RVA 0x009ADB74  size 0xC */
// attributes: thunk
void __fastcall nn_mii_detail_BufferAllocator__dtor_BufferAllocator(struct nn_mii_detail_BufferAllocator *self)
{
  __imp__ZN2nn3mii6detail15BufferAllocatorD1Ev(self);
}

/* ============================================================================
 * nn_mii_detail_CalculateSizeAndAlignment__dtor_CalculateSizeAndAlignment
 * RVA 0x009ADC4C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADC4C  RVA 0x009ADC4C  size 0xC */
// attributes: thunk
void __fastcall nn_mii_detail_CalculateSizeAndAlignment__dtor_CalculateSizeAndAlignment(
        struct nn_mii_detail_CalculateSizeAndAlignment *self)
{
  __imp__ZN2nn3mii6detail25CalculateSizeAndAlignmentD1Ev(self);
}

/* ============================================================================
 * nn_audio_PerformanceInfo__dtor_PerformanceInfo
 * RVA 0x009AE1B0   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE1B0  RVA 0x009AE1B0  size 0xC */
// attributes: thunk
void __fastcall nn_audio_PerformanceInfo__dtor_PerformanceInfo(struct nn_audio_PerformanceInfo *self)
{
  __imp__ZN2nn5audio15PerformanceInfoD1Ev(self);
}

/* ============================================================================
 * nn_settings___operator_eq
 * RVA 0x009AE7C8   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE7C8  RVA 0x009AE7C8  size 0xC */
// attributes: thunk
int nn_settings___operator_eq()
{
  return __imp__ZN2nn8settingseqERKNS0_12LanguageCodeES3_();
}
