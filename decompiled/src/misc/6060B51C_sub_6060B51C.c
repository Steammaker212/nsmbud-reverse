/* sub_6060B51C
 * address: 0x6060B51C   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6060B51C(int a1, int a2, int a3)
{
  int v5; // r4
  char v6; // r12
  int v7; // r0
  char v8; // r12
  int v9; // r5

  v5 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a3 + 32))(a3, a2, 3);
  v7 = FIELD_U8(v5, 533);
  if ( v7 == 1 )
  {
    if ( a1 )
      return;
  }
  else if ( a1 || v7 != 2 )
  {
    return;
  }
  if ( ((unsigned int)&dword_60C7B37C & ~(1616950648 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  if ( v5 && (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C7B378) == 1 && sub_60769D94(v5, 0) == 1 )
  {
    v9 = FIELD_U32(a2, 144);
    if ( ((unsigned int)dword_60CB2D58 & ~(1616950788 << v8) & 1) == 0 && _cxa_guard_acquire(dword_60CB2D58) )
    {
      dword_60CB2D54 = (int)&off_60BC00E0;
      _cxa_guard_release(dword_60CB2D58);
    }
    if ( v9 )
    {
      if ( (**(int (__fastcall ***)(int, int *))v9)(v9, &dword_60CB2D54) == 1 )
        FIELD_U8(v9, 8492) = FIELD_U8(v5, 84);
    }
  }
}
