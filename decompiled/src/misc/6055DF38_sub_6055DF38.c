/* sub_6055DF38
 * address: 0x6055DF38   size: 468   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6055DF38(int a1)
{
  char v2; // r12
  char v3; // r12
  int v4; // r4
  int v6; // [sp+4h] [bp-14h] BYREF

  sub_6055E15C();
  sub_6055E394(a1);
  sub_6055E4FC(a1);
  if ( ((unsigned int)dword_60CAE048 & ~(1616240492 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60CAE048) )
  {
    dword_60CAE09C = (int)&sead__SafeStringBase__vtable;
    dword_60CAE0A0 = (int)"T_TextR_00";
    dword_60CAE0A4 = (int)&sead__SafeStringBase__vtable;
    dword_60CAE0A8 = (int)"T_TextC_00";
    dword_60CAE0AC = (int)&sead__SafeStringBase__vtable;
    dword_60CAE0B0 = (int)"T_TextL_00";
    sub_60000288();
    _cxa_guard_release(dword_60CAE048);
  }
  v6 = 3;
  sub_60475334(a1 + 44, a1 + 13448, &dword_60CAE09C, &v6);
  sub_6055E6D8(a1);
  if ( ((unsigned int)&dword_60CAE048[1] & ~(1616240684 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CAE048[1]) )
  {
    dword_60CAE07C = (int)&sead__SafeStringBase__vtable;
    dword_60CAE080 = (int)"W_Frame_00";
    dword_60CAE084 = (int)&sead__SafeStringBase__vtable;
    dword_60CAE088 = (int)"W_Arrow_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CAE048[1]);
  }
  sub_604754E4(a1 + 44, (int *)(a1 + 13556), &dword_60CAE07C, 2);
  sub_6055E970(a1);
  sub_6055ECDC(a1);
  v4 = a1 + 5772;
  sub_6045BF58(v4, 0);
  return sub_609094C4(v4, 240, 40, 5);
}
