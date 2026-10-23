/* sub_605265D4
 * address: 0x605265D4   size: 720   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605265D4(_DWORD *a1)
{
  char v1; // r12
  int result; // r0
  int v4; // [sp+4h] [bp-Ch] BYREF

  if ( ((unsigned int)&dword_60CAA158 & ~(1616012784 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CAA158) )
  {
    dword_60CAA0C0 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA0C4 = (int)"T_Round_01";
    dword_60CAA0C8 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA0CC = (int)"T_Result_01";
    dword_60CAA0D0 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA0D4 = (int)"T_Round_00";
    dword_60CAA0D8 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA0DC = (int)"T_Result_00";
    dword_60CAA0E0 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA0E4 = (int)"T_TotalCoin_00";
    dword_60CAA0E8 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA0EC = (int)"T_StarCoinBonus_00";
    dword_60CAA0F0 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA0F4 = (int)"T_BonusCoin_00";
    dword_60CAA0F8 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA0FC = (int)"T_TeamA_00";
    dword_60CAA100 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA104 = (int)"T_TeamB_00";
    dword_60CAA108 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA10C = (int)"T_Draw_00";
    dword_60CAA110 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA114 = (int)"T_1st_00";
    dword_60CAA118 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA11C = (int)"T_1st_01";
    dword_60CAA120 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA124 = (int)"T_1st_02";
    dword_60CAA128 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA12C = (int)"T_2nd_00";
    dword_60CAA130 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA134 = (int)"T_2nd_01";
    dword_60CAA138 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA13C = (int)"T_2nd_02";
    dword_60CAA140 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA144 = (int)"T_Score_00";
    dword_60CAA148 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA14C = (int)"T_ScoreA_00";
    dword_60CAA150 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA154 = (int)"T_ScoreB_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CAA158);
  }
  v4 = 19;
  sub_60475334((int)(a1 + 11), (int)(a1 + 1010), &dword_60CAA0C0, &v4);
  *(_BYTE *)(a1[1010] + 64) &= ~1u;
  *(_BYTE *)(a1[1011] + 64) &= ~1u;
  *(_BYTE *)(a1[1012] + 64) &= ~1u;
  *(_BYTE *)(a1[1013] + 64) &= ~1u;
  *(_BYTE *)(a1[1014] + 64) &= ~1u;
  *(_BYTE *)(a1[1015] + 64) &= ~1u;
  *(_BYTE *)(a1[1016] + 64) &= ~1u;
  *(_BYTE *)(a1[1017] + 64) &= ~1u;
  *(_BYTE *)(a1[1018] + 64) &= ~1u;
  *(_BYTE *)(a1[1019] + 64) &= ~1u;
  *(_BYTE *)(a1[1020] + 64) &= ~1u;
  *(_BYTE *)(a1[1021] + 64) &= ~1u;
  *(_BYTE *)(a1[1022] + 64) &= ~1u;
  *(_BYTE *)(a1[1023] + 64) &= ~1u;
  *(_BYTE *)(a1[1024] + 64) &= ~1u;
  result = a1[1025];
  FIELD_U8(result, 64) &= ~1u;
  return result;
}
