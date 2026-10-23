/* Actor__getRuntimeTypeInfo_const
 * address: 0x60002FF8   size: 92   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x6000270C : StageActor
//   - 0x6082D294 : BgCenter
int *__cdecl Actor__getRuntimeTypeInfo_const(Actor *this)
{
  char v1; // r12

  if ( ((unsigned int)&dword_60C7B36C & ~(1610625036 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B36C) )
  {
    Actor_RTTI = (int)&off_60BC00A4;
    _cxa_guard_release(&dword_60C7B36C);
  }
  return &Actor_RTTI;
}
