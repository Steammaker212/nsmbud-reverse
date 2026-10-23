/* sub_60548168
 * address: 0x60548168   size: 548   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60548168(_DWORD *a1)
{
  char v1; // r12
  int result; // r0
  int v4[9]; // [sp+4h] [bp-24h] BYREF

  if ( ((unsigned int)&dword_60CAC6A8[1] & ~(1616150920 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CAC6A8[1]) )
  {
    dword_60CAC6F8 = (int)&sead__SafeStringBase__vtable;
    dword_60CAC6FC = (int)"B_Btn_00";
    dword_60CAC700 = (int)&sead__SafeStringBase__vtable;
    dword_60CAC704 = (int)"B_Arrow_00";
    dword_60CAC708 = (int)&sead__SafeStringBase__vtable;
    dword_60CAC70C = (int)"B_Arrow_00";
    dword_60CAC710 = (int)&sead__SafeStringBase__vtable;
    dword_60CAC714 = (int)"B_Btn_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CAC6A8[1]);
  }
  if ( ((unsigned int)&dword_60CAC6A8[2] & ~(1616151068 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CAC6A8[2]) )
  {
    dword_60CAC720 = (int)&sead__SafeStringBase__vtable;
    dword_60CAC724 = (int)"Pa_Cursor_00";
    dword_60CAC728 = (int)&sead__SafeStringBase__vtable;
    dword_60CAC72C = (int)"Pa_ArrowBtnR_00";
    dword_60CAC730 = (int)&sead__SafeStringBase__vtable;
    dword_60CAC734 = (int)"Pa_ArrowBtnL_00";
    dword_60CAC738 = (int)&sead__SafeStringBase__vtable;
    dword_60CAC73C = (int)"Pa_OK_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CAC6A8[2]);
  }
  v4[0] = 1;
  sub_604755C4((int)(a1 + 10), (int)(a1 + 1445), &dword_60CAC720, (int)&dword_60CAC6F8, v4);
  a1[1449] = *(_DWORD *)(a1[1445] + 28);
  v4[0] = 1;
  sub_604755C4((int)(a1 + 10), (int)(a1 + 1446), &dword_60CAC728, (int)&dword_60CAC700, v4);
  a1[1450] = *(_DWORD *)(a1[1446] + 28);
  v4[0] = 1;
  sub_604755C4((int)(a1 + 10), (int)(a1 + 1447), &dword_60CAC730, (int)&dword_60CAC708, v4);
  a1[1451] = *(_DWORD *)(a1[1447] + 28);
  v4[0] = 1;
  sub_604755C4((int)(a1 + 10), (int)(a1 + 1448), &dword_60CAC738, (int)&dword_60CAC710, v4);
  result = *(_DWORD *)(a1[1448] + 28);
  a1[1452] = result;
  return result;
}
