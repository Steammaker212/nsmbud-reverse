/* sub_600FFBD0
 * address: 0x600FFBD0   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600FFBD0(int a1, int a2)
{
  int (__fastcall ***v3)(_DWORD, int *); // r6
  char v4; // r12
  int v5; // r4
  int (__fastcall ***v6)(_DWORD, int *); // r5
  int v7; // r6
  bool v8; // zf
  int v9; // r2
  unsigned int v10; // r0

  v3 = (int (__fastcall ***)(_DWORD, int *))(*(int (__fastcall **)(int, int))(*(_DWORD *)a2 + 32))(a2, a1);
  if ( ((unsigned int)&dword_60C7B374 & ~(1611660288 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
  {
    dword_60C7B370 = (int)&off_60BC00B0;
    _cxa_guard_release(&dword_60C7B374);
  }
  if ( v3 )
  {
    v5 = (**v3)(v3, &dword_60C7B370);
    if ( v5 )
      v5 = (int)v3;
  }
  else
  {
    v5 = 0;
  }
  v6 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 144);
  if ( ((unsigned int)&dword_60C8110C & ~(1611660420 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C8110C) )
  {
    dword_60C81108 = (int)&off_60BC2CD4;
    _cxa_guard_release(&dword_60C8110C);
  }
  if ( v6 )
  {
    v7 = (**v6)(v6, &dword_60C81108);
    if ( v7 )
      v7 = (int)v6;
    if ( v5 )
    {
      v8 = v7 == 0;
      if ( v7 )
        v8 = (FIELD_U8(v5, 1216) & 0x30) == 0;
      if ( !v8 )
      {
        (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v5 + 1172))(v5, v7, 4);
        v9 = 0;
        FIELD_U32(v5, 9576) = 32;
        v10 = FIELD_U8(v5, 84);
        if ( v10 < 4 )
          v9 = (char)v10;
        *(_WORD *)(v7 + 2 * v9 + 6140) = 32;
      }
    }
  }
}
