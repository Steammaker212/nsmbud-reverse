/* sub_60080094
 * address: 0x60080094   size: 468   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60080094(int a1)
{
  unsigned int v2; // r5
  unsigned int v3; // r0
  int v4; // r6
  char v5; // r12
  int result; // r0
  int v7; // r1

  v2 = 0;
  v3 = FIELD_U32(a1, 6344);
  if ( v3 > 3 )
    return v2;
  v2 = sub_6000F7B8(
         (float)(*(float *)(*(_DWORD *)(dword_60CBF354 + 4 * v3 + 32) + 4) + 16.0) - FIELD_F32(a1, 112),
         **(float **)(dword_60CBF354 + 4 * v3 + 32) - FIELD_F32(a1, 108));
  v4 = FIELD_U32(a1, 56);
  if ( ((unsigned int)&dword_60C7B364 & ~(1611137280 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( !v4 || (**(int (__fastcall ***)(int, int *))v4)(v4, &StageActor_RTTI) != 1 )
    return v2;
  if ( FIELD_U32(v4, 80) )
  {
    if ( v2 < 0x80000000 - dword_60C81930 )
      v2 = 0x80000000 - dword_60C81930;
    if ( v2 > (dword_60C81934 ^ 0x80000000) )
      v2 = dword_60C81934 ^ 0x80000000;
    result = v2;
  }
  else
  {
    v7 = dword_60C81930;
    if ( (v2 & 0x80000000) == 0 || (result = ~dword_60C81934, v2 >= ~dword_60C81934) )
    {
      if ( v2 <= dword_60C81930 )
        v7 = v2;
      if ( v2 >= 0x80000001 )
        v7 = v2;
      result = v7;
    }
  }
  switch ( FIELD_U8(a1, 23) & 7 )
  {
    case 1:
      result += dword_60C81938;
      break;
    case 2:
      result -= dword_60C81938;
      break;
    case 3:
      result += (unsigned int)dword_60C81938 >> 1;
      break;
    case 4:
      return result - ((unsigned int)dword_60C81938 >> 1);
    default:
      return result;
  }
  return result;
}
