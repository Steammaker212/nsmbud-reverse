/* sub_607AE348
 * address: 0x607AE348   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607AE348(int a1, int a2, int a3)
{
  char v3; // r12
  int v7; // r5
  _DWORD *v8; // r6

  v7 = 0;
  if ( (FIELD_U8(a1, 1230) & 0x40) == 0 )
  {
    v8 = *(_DWORD **)(a2 + 64);
    if ( ((unsigned int)&dword_60C7B374 & ~(1618666364 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
    {
      dword_60C7B370 = (int)&off_60BC00B0;
      _cxa_guard_release(&dword_60C7B374);
    }
    if ( v8
      && (*(int (__fastcall **)(_DWORD *, int *))*v8)(v8, &dword_60C7B370) == 1
      && !FIELD_U32(a1, 13000)
      && (*(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)a1 + 1444))(a1, v8) == 1
      && !sub_6079C0B8((int)v8)
      && ((int (__fastcall *)(int, int, int))loc_60765BFC)(a1, a2, a3) == 1
      && (FIELD_U8(a1, 1224) & 0x10) != 0 )
    {
      FIELD_U32(a1, 12996) = v8[2];
      sub_6079BFA4((int)v8, a1);
      (*(void (__fastcall **)(int, _DWORD *))(*(_DWORD *)a1 + 1212))(a1, v8);
      (*(void (__fastcall **)(_DWORD *, int))(*v8 + 1212))(v8, a1);
      Player_changeState(a1, (StateBase *)&dword_60CC518C, 0);
      return 1;
    }
  }
  return v7;
}
