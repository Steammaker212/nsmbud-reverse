/* sub_6013EAE0
 * address: 0x6013EAE0   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6013EAE0(int a1, int a2)
{
  char v2; // r12
  int v5; // r6
  int result; // r0
  int v7; // r7

  v5 = FIELD_U32(a2, 64);
  result = FIELD_U8(v5, 533);
  if ( result == 1 )
  {
    if ( ((unsigned int)&dword_60C7B37C & ~(1611918092 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( v5 )
    {
      v7 = (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C7B378);
      if ( v7 )
        v7 = v5;
    }
    else
    {
      v7 = 0;
    }
    result = sub_6075EDF8(v7);
    if ( result == 1 )
    {
      result = FIELD_U32(a2, 136);
      if ( result != 15 )
      {
        (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v7 + 1164))(v7, a1, a2);
        result = FIELD_U8(a1, 110) | 2;
        FIELD_U8(a1, 110) = result;
      }
    }
  }
  return result;
}
