/* KoopalingBase__vf410
 * address: 0x600B31CC   size: 292   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
signed int __fastcall KoopalingBase__vf410(int a1)
{
  char v1; // r12
  unsigned int v3; // r0
  signed int result; // r0
  int (__fastcall ***v5)(_DWORD, int *); // r5
  float v6; // s16
  int v7; // r0
  _DWORD *v8; // r1

  v3 = FIELD_U32(a1, 7124);
  if ( v3 >= 4 )
    v3 = 0;
  result = PlayerMgr_instance + 4 * v3;
  v5 = *(int (__fastcall ****)(_DWORD, int *))(result + 32);
  if ( v5 )
  {
    if ( ((unsigned int)&dword_60C7B37C & ~(1611346452 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    result = (**v5)(v5, &dword_60C7B378);
    if ( result == 1 )
    {
      v6 = *(float *)sub_6075F960(v5) - FIELD_F32(a1, 7156);
      v7 = sub_6075F960(v5);
      result = sub_6000F7B8(FIELD_F32(v7, 4) - FIELD_F32(a1, 7160), fabsf(v6));
      FIELD_U32(a1, 7172) = result;
      v8 = (_DWORD *)(a1 + 7172);
      if ( result >= -417566264 )
      {
        if ( result > 417566264 )
          *v8 = 417566264;
      }
      else
      {
        *v8 = -417566264;
      }
    }
  }
  return result;
}
