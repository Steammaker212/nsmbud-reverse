/* sub_60536A80
 * address: 0x60536A80   size: 1292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60536A80(int a1)
{
  _DWORD *v2; // r6
  char v3; // r12
  int v4; // r9
  char v5; // r12
  int v6; // r6
  int v7; // r0
  _DWORD *v8; // r4
  int v9; // t1
  int v11; // [sp+4h] [bp-2Ch] BYREF
  const char *v12; // [sp+8h] [bp-28h]

  v2 = (_DWORD *)(a1 + 12092);
  sub_604734E4((_DWORD *)(a1 + 12092), 0);
  sub_60475C8C((int)v2);
  v11 = (int)&sead__SafeStringBase__vtable;
  v12 = "SaveDataSelect.bflyt";
  message_ref(v2, &v11, a1 + 15740, 0, 0);
  sub_60537024(a1);
  if ( ((unsigned int)dword_60CAB270 & ~(1616079640 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60CAB270) )
  {
    dword_60CAB2D0 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB2D4 = (int)"Pa_SaveData_00";
    dword_60CAB2D8 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB2DC = (int)"Pa_SaveData_01";
    dword_60CAB2E0 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB2E4 = (int)"Pa_SaveData_02";
    sub_60000288();
    _cxa_guard_release(dword_60CAB270);
  }
  v4 = a1 + 15700;
  sub_60531B9C(a1 + 56);
  sub_60531B9C(a1 + 4068);
  sub_60531B9C(a1 + 8080);
  if ( ((unsigned int)&dword_60CAB270[1] & ~(1616079844 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CAB270[1]) )
  {
    dword_60CAB3D0 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB3D4 = dword_60CAADB0;
    dword_60CAB3D8 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB3DC = dword_60CAADB8;
    dword_60CAB3E0 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB3E4 = dword_60CAADC0;
    dword_60CAB3E8 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB3EC = dword_60CAADC8;
    dword_60CAB3F0 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB3F4 = dword_60CAADD0;
    dword_60CAB3F8 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB3FC = dword_60CAADD8;
    dword_60CAB400 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB404 = dword_60CAADE0;
    dword_60CAB408 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB40C = dword_60CAADE8;
    dword_60CAB410 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB414 = dword_60CAADF0;
    dword_60CAB418 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB41C = dword_60CAADF8;
    dword_60CAB420 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB424 = dword_60CAAE00;
    sub_60000288();
    _cxa_guard_release(&dword_60CAB270[1]);
  }
  v11 = 11;
  sub_60476030((int)v2, &dword_60CAB3D0, &v11);
  FIELD_U8(a1, 16754) = 1;
  sub_60502210(a1 + 15700, &dword_60B03A28, 17);
  v11 = (int)&sead__SafeStringBase__vtable;
  v12 = "SaveDataSelect";
  sead__SafeStringBase__operator_assign(a1 + 16712, (int)&v11);
  sub_6050292C(a1 + 15700, 15);
  sub_60502960(a1 + 15700, 15);
  sub_60502994(a1 + 15700, 15);
  sub_605029C8(a1 + 15700, 15);
  sub_605029FC(v4, dword_60B03A2C, (int)"SE_SYS_BACK");
  sub_605028F0(v4, dword_60B03A2C, 1);
  v6 = a1 + 15752;
  v7 = sub_608DE61C(a1 + 15752, 9);
  v9 = FIELD_U32(a1, 15764);
  v8 = (_DWORD *)(a1 + 15764);
  *(_DWORD *)(v7 - v9 + 176) = "SE_SYS_BACK_BTN_OVER";
  *(_DWORD *)(sub_608DE61C(v6, 9) - *v8 + 180) = "SE_SYS_BACK_BTN_OVER_OFF";
  sub_605029FC(v4, &dword_60B03A2C[1], (int)"SE_SYS_BACK");
  sub_605028F0(v4, &dword_60B03A2C[1], 1);
  *(_DWORD *)(sub_608DE61C(v6, 10) - *v8 + 176) = "SE_SYS_BACK_BTN_OVER";
  *(_DWORD *)(sub_608DE61C(v6, 10) - *v8 + 180) = "SE_SYS_BACK_BTN_OVER_OFF";
  sub_605029FC(v4, &dword_60B03A2C[2], (int)"SE_SYS_BACK");
  sub_605028F0(v4, &dword_60B03A2C[2], 1);
  *(_DWORD *)(sub_608DE61C(v6, 11) - *v8 + 176) = "SE_SYS_BACK_BTN_OVER";
  *(_DWORD *)(sub_608DE61C(v6, 11) - *v8 + 180) = "SE_SYS_BACK_BTN_OVER_OFF";
  sub_605029FC(v4, &dword_60B03A2C[3], (int)"SE_SYS_BACK");
  sub_605028F0(v4, &dword_60B03A2C[3], 1);
  *(_DWORD *)(sub_608DE61C(v6, 12) - *v8 + 176) = "SE_SYS_BACK_BTN_OVER";
  *(_DWORD *)(sub_608DE61C(v6, 12) - *v8 + 180) = "SE_SYS_BACK_BTN_OVER_OFF";
  sub_6045BF58((int)(v8 + 9228), 0);
  sub_6045BF58((int)(v8 + 9329), 1);
  sub_6045BF58((int)(v8 + 9430), 2);
  sub_6045BF58((int)(v8 + 9531), 3);
  sub_6045BF58((int)(v8 + 9632), 4);
  return sub_60540E5C(v8 + 504, 0);
}
