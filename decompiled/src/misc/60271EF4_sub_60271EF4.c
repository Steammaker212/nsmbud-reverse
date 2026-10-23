/* sub_60271EF4
 * address: 0x60271EF4   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60271EF4(int a1, int a2)
{
  char v4; // r12
  int v5; // r6
  int v6; // r0
  bool v7; // zf
  int v8; // r1
  int v9; // r2

  v5 = 0;
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 88))(a1) == 1 )
  {
    if ( ((unsigned int)&dword_60C7B374 & ~(1613176620 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
    {
      dword_60C7B370 = (int)&off_60BC00B0;
      _cxa_guard_release(&dword_60C7B374);
    }
    if ( a2 )
    {
      v6 = (**(int (__fastcall ***)(int, int *))a2)(a2, &dword_60C7B370);
      v7 = v6 == 1;
      if ( v6 == 1 )
        v7 = (FIELD_U8(a2, 1212) & 0x40) == 0;
      if ( v7 && (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 1432))(a2, a1, 1) == 1 )
      {
        v8 = dword_60C8EB0C;
        v9 = dword_60C8EB10;
        FIELD_U32(a1, 6308) = dword_60C8EB14;
        FIELD_U32(a1, 6304) = v9;
        FIELD_U32(a1, 6300) = v8;
        FIELD_U8(a1, 6349) = 0;
        FIELD_U8(a1, 6340) = FIELD_U8(a2, 84);
        (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 68))(a1, FIELD_S8(a2, 84));
        FIELD_U32(a1, 6344) = FIELD_U32(a2, 8);
        (*(void (__fastcall **)(int, State *))(*(_DWORD *)a1 + 192))(a1, &stru_60C8EA70);
        return 1;
      }
    }
  }
  return v5;
}
