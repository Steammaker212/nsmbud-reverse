/* sub_605B1D60
 * address: 0x605B1D60   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605B1D60(int a1, int a2)
{
  char v2; // r12
  int (__fastcall ***v5)(_DWORD, int *); // r6
  int v6; // r7
  int result; // r0
  bool v8; // zf

  v5 = *(int (__fastcall ****)(_DWORD, int *))(a2 + 64);
  if ( ((unsigned int)&dword_60C7B364 & ~(1616584064 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  v6 = (int)v5 + 533;
  if ( !(**v5)(v5, &StageActor_RTTI) )
    v6 = 533;
  result = *(unsigned __int8 *)v6;
  v8 = result == 4;
  if ( result == 4 )
  {
    result = FIELD_U32(a2, 140);
    v8 = result == 26;
  }
  if ( v8 )
  {
    *(_WORD *)(FIELD_U32(a1, 64) + 6764) = 360;
    result = FIELD_U8(a1, 110) | 2;
    FIELD_U8(a1, 110) = result;
  }
  return result;
}
