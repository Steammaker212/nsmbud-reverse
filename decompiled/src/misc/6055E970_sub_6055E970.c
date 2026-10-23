/* sub_6055E970
 * address: 0x6055E970   size: 740   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6055E970(int a1)
{
  char v1; // r12
  char v3; // r12
  int v5; // [sp+8h] [bp-28h] BYREF
  int v6[9]; // [sp+Ch] [bp-24h] BYREF

  if ( ((unsigned int)&dword_60CAE048[2] & ~(1616243088 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CAE048[2]) )
  {
    dword_60CAE0C0 = (int)&sead__SafeStringBase__vtable;
    dword_60CAE0C4 = (int)"Pa_Cursor_00";
    dword_60CAE0C8 = (int)&sead__SafeStringBase__vtable;
    dword_60CAE0CC = (int)"Pa_OK_00";
    dword_60CAE0D0 = (int)&sead__SafeStringBase__vtable;
    dword_60CAE0D4 = (int)"Pa_Return_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CAE048[2]);
  }
  if ( ((unsigned int)&dword_60CAE048[3] & ~(1616243244 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CAE048[3]) )
  {
    dword_60CAE064 = (int)&sead__SafeStringBase__vtable;
    dword_60CAE068 = (int)"B_Btn_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CAE048[3]);
  }
  v6[0] = 1;
  sub_604755C4(a1 + 44, a1 + 13564, &dword_60CAE0C0, (int)&dword_60CAE064, v6);
  v6[0] = 1;
  sub_604755C4(a1 + 44, a1 + 13568, &dword_60CAE0C8, (int)&dword_60CAE064, v6);
  v6[0] = 1;
  sub_604755C4(a1 + 44, a1 + 13572, &dword_60CAE0D0, (int)&dword_60CAE064, v6);
  if ( ((unsigned int)&dword_60CAE048[4] & ~(1616243476 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CAE048[4]) )
  {
    dword_60CAE08C = (int)&sead__SafeStringBase__vtable;
    dword_60CAE090 = (int)"Pa_ArrowBtnL_00";
    dword_60CAE094 = (int)&sead__SafeStringBase__vtable;
    dword_60CAE098 = (int)"Pa_ArrowBtnR_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CAE048[4]);
  }
  if ( ((unsigned int)&dword_60CAE048[5] & ~(1616243608 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CAE048[5]) )
  {
    dword_60CAE06C = (int)&sead__SafeStringBase__vtable;
    dword_60CAE070 = (int)"B_Arrow_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CAE048[5]);
  }
  v5 = 1;
  sub_604755C4(a1 + 44, a1 + 13576, &dword_60CAE08C, (int)&dword_60CAE06C, &v5);
  v5 = 1;
  return sub_604755C4(a1 + 44, a1 + 13580, &dword_60CAE094, (int)&dword_60CAE06C, &v5);
}
