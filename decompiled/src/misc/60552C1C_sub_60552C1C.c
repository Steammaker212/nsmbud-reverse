/* sub_60552C1C
 * address: 0x60552C1C   size: 576   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60552C1C(int a1)
{
  char v1; // r12
  int v3; // r5
  int v4; // r6
  int v5; // r0
  _DWORD *v6; // r4
  int v7; // t1
  int result; // r0
  int v9[10]; // [sp+0h] [bp-28h] BYREF

  if ( ((unsigned int)&dword_60CAD1A0[3] & ~(1616194620 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CAD1A0[3]) )
  {
    dword_60CAD1F0 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD1F4 = (int)"Pa_ArrowBtnL_00";
    dword_60CAD1F8 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD1FC = (int)"Pa_ArrowBtnR_00";
    dword_60CAD200 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD204 = (int)"Pa_Close_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CAD1A0[3]);
  }
  v9[0] = 3;
  sub_604756E0(a1 + 44, a1 + 17828, &dword_60CAD1F0, v9);
  v3 = a1 + 17840;
  v9[0] = 0;
  sub_60502210(a1 + 17840, v9, 15);
  v9[0] = (int)&sead__SafeStringBase__vtable;
  v9[1] = (int)"StarCoinList";
  sead__SafeStringBase__operator_assign(a1 + 18852, (int)v9);
  v9[0] = 0;
  sub_605028F0(a1 + 17840, v9, 1);
  v4 = a1 + 17892;
  v5 = sub_608DE61C(a1 + 17892, 0);
  v7 = FIELD_U32(a1, 17904);
  v6 = (_DWORD *)(a1 + 17904);
  *(_BYTE *)(v5 - v7 + 208) = 0;
  v9[0] = 1;
  sub_605028F0(v3, v9, 1);
  *(_BYTE *)(sub_608DE61C(v4, 1) - *v6 + 208) = 0;
  v9[0] = 2;
  sub_605028F0(v3, v9, 1);
  *(_BYTE *)(sub_608DE61C(v4, 2) - *v6 + 208) = 0;
  *(_DWORD *)(sub_608DE61C(v4, 0) - *v6 + 192) = 0;
  *(_DWORD *)(sub_608DE61C(v4, 1) - *v6 + 192) = 0;
  v9[0] = 2;
  sub_605029FC(v3, v9, (int)"SE_SYS_BACK");
  *(_DWORD *)(sub_608DE61C(v4, v9[0]) - *v6 + 176) = "SE_SYS_BACK_BTN_OVER";
  result = sub_608DE61C(v4, v9[0]) - *v6;
  FIELD_U32(result, 180) = "SE_SYS_BACK_BTN_OVER_OFF";
  return result;
}
