/* sub_6053D028
 * address: 0x6053D028   size: 1144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6053D028(int a1)
{
  _DWORD *v2; // r6
  char v3; // r12
  char v4; // r12
  int v5; // r4
  int v6; // r0
  _DWORD *v7; // r8
  int v8; // t1
  int v10; // [sp+8h] [bp-20h] BYREF
  const char *v11; // [sp+Ch] [bp-1Ch]

  v2 = (_DWORD *)(a1 + 12092);
  sub_604734E4((_DWORD *)(a1 + 12092), 0);
  sub_60475C8C((int)v2);
  v10 = (int)&sead__SafeStringBase__vtable;
  v11 = "SaveDataSelectDL.bflyt";
  message_ref(v2, &v10, a1 + 15720, 0, 0);
  sub_6053D538(a1);
  if ( ((unsigned int)dword_60CAB920 & ~(1616105660 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60CAB920) )
  {
    dword_60CAB970 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB974 = (int)"Pa_SaveData_00";
    dword_60CAB978 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB97C = (int)"Pa_SaveData_01";
    dword_60CAB980 = (int)&sead__SafeStringBase__vtable;
    dword_60CAB984 = (int)"Pa_SaveData_02";
    sub_60000288();
    _cxa_guard_release(dword_60CAB920);
  }
  sub_60531B9C(a1 + 56);
  sub_60531B9C(a1 + 4068);
  sub_60531B9C(a1 + 8080);
  if ( ((unsigned int)&dword_60CAB920[1] & ~(1616105864 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60CAB920[1]) )
  {
    dword_60CABA10 = (int)&sead__SafeStringBase__vtable;
    dword_60CABA14 = dword_60CAB440;
    dword_60CABA18 = (int)&sead__SafeStringBase__vtable;
    dword_60CABA1C = dword_60CAB448;
    dword_60CABA20 = (int)&sead__SafeStringBase__vtable;
    dword_60CABA24 = dword_60CAB450;
    dword_60CABA28 = (int)&sead__SafeStringBase__vtable;
    dword_60CABA2C = dword_60CAB458;
    dword_60CABA30 = (int)&sead__SafeStringBase__vtable;
    dword_60CABA34 = dword_60CAB460;
    dword_60CABA38 = (int)&sead__SafeStringBase__vtable;
    dword_60CABA3C = dword_60CAB468;
    dword_60CABA40 = (int)&sead__SafeStringBase__vtable;
    dword_60CABA44 = dword_60CAB470;
    dword_60CABA48 = (int)&sead__SafeStringBase__vtable;
    dword_60CABA4C = dword_60CAB478;
    dword_60CABA50 = (int)&sead__SafeStringBase__vtable;
    dword_60CABA54 = dword_60CAB480;
    dword_60CABA58 = (int)&sead__SafeStringBase__vtable;
    dword_60CABA5C = dword_60CAB488;
    dword_60CABA60 = (int)&sead__SafeStringBase__vtable;
    dword_60CABA64 = dword_60CAB490;
    sub_60000288();
    _cxa_guard_release(&dword_60CAB920[1]);
  }
  v10 = 11;
  sub_60476030((int)v2, &dword_60CABA10, &v10);
  FIELD_U8(a1, 16734) = 1;
  sub_60502210(a1 + 15680, &dword_60B03A74, 17);
  v10 = (int)&sead__SafeStringBase__vtable;
  v11 = "SaveDataSelectDL";
  sead__SafeStringBase__operator_assign(a1 + 16692, (int)&v10);
  sub_6050292C(a1 + 15680, 15);
  sub_60502960(a1 + 15680, 15);
  sub_60502994(a1 + 15680, 15);
  sub_605029C8(a1 + 15680, 15);
  sub_605029FC(a1 + 15680, dword_60B03A78, (int)"SE_SYS_BACK");
  sub_605028F0(a1 + 15680, dword_60B03A78, 1);
  sub_605029FC(a1 + 15680, &dword_60B03A78[1], (int)"SE_SYS_BACK");
  sub_605028F0(a1 + 15680, &dword_60B03A78[1], 1);
  sub_605029FC(a1 + 15680, &dword_60B03A78[2], (int)"SE_SYS_BACK");
  sub_605028F0(a1 + 15680, &dword_60B03A78[2], 1);
  sub_605029FC(a1 + 15680, &dword_60B03A78[3], (int)"SE_SYS_BACK");
  sub_605028F0(a1 + 15680, &dword_60B03A78[3], 1);
  v5 = a1 + 15732;
  v6 = sub_608DE61C(a1 + 15732, 7);
  v8 = FIELD_U32(a1, 15744);
  v7 = (_DWORD *)(a1 + 15744);
  *(_DWORD *)(v6 - v8 + 176) = "SE_SYS_BACK_BTN_OVER";
  *(_DWORD *)(sub_608DE61C(v5, 7) - *v7 + 180) = "SE_SYS_BACK_BTN_OVER_OFF";
  sub_6045BF58((int)(v7 + 9218), 0);
  sub_6045BF58((int)(v7 + 9319), 1);
  sub_6045BF58((int)(v7 + 9420), 2);
  sub_6045BF58((int)(v7 + 9521), 3);
  sub_6045BF58((int)(v7 + 9622), 4);
  return sub_60540E5C(v7 + 504, 1);
}
