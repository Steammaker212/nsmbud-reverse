/* sub_6052DFA0
 * address: 0x6052DFA0   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6052DFA0(_DWORD *a1)
{
  char v1; // r12
  int v3; // r0
  _DWORD *v4; // r0
  int v5; // r0
  _DWORD *v6; // r0
  int v7; // r0
  _DWORD *v8; // r0
  int v9; // r0
  _DWORD *v10; // r0

  if ( ((unsigned int)&dword_60CAA6A4[1] & ~(1616043964 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CAA6A4[1]) )
  {
    dword_60CAA710[0] = (int)&sead__SafeStringBase__vtable;
    dword_60CAA714 = (int)"Pa_Icon1P_00";
    dword_60CAA718 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA71C = (int)"Pa_Icon2P_00";
    dword_60CAA720 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA724 = (int)"Pa_Icon3P_00";
    dword_60CAA728 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA72C = (int)"Pa_Icon4P_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CAA6A4[1]);
  }
  v3 = operator_new(0xE24u);
  v4 = (_DWORD *)sub_60506DB0(v3);
  a1[935] = v4;
  sub_60506F20(v4, (int)(a1 + 18), dword_60CAA710);
  v5 = operator_new(0xE24u);
  v6 = (_DWORD *)sub_60506DB0(v5);
  a1[936] = v6;
  sub_60506F20(v6, (int)(a1 + 18), &dword_60CAA718);
  v7 = operator_new(0xE24u);
  v8 = (_DWORD *)sub_60506DB0(v7);
  a1[937] = v8;
  sub_60506F20(v8, (int)(a1 + 18), &dword_60CAA720);
  v9 = operator_new(0xE24u);
  v10 = (_DWORD *)sub_60506DB0(v9);
  a1[938] = v10;
  return sub_60506F20(v10, (int)(a1 + 18), &dword_60CAA728);
}
