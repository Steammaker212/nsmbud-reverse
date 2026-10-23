/* Actor__checkDerivedRuntimeTypeInfo_const
 * address: 0x60002F74   size: 108   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x6000260C : StageActor
//   - 0x6082D194 : BgCenter
bool __fastcall Actor__checkDerivedRuntimeTypeInfo_const(Actor *this, int *rtti)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C7B36C & ~(1610624908 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B36C) )
  {
    Actor_RTTI = (int)&off_60BC00A4;
    _cxa_guard_release(&dword_60C7B36C);
  }
  return rtti == &Actor_RTTI;
}
