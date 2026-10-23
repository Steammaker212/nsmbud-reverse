/* sub_6054E35C
 * address: 0x6054E35C   size: 1128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6054E35C(_DWORD *a1)
{
  _DWORD *v2; // r5
  char v3; // r12
  char v4; // r12
  char v5; // r12
  int result; // r0
  int v7[8]; // [sp+8h] [bp-20h] BYREF

  v2 = a1 + 10;
  sub_604734E4(a1 + 10, 0);
  sub_60475C8C((int)v2);
  v7[0] = (int)&sead__SafeStringBase__vtable;
  v7[1] = (int)"PointGet.bflyt";
  message_ref(v2, v7, 0, 0, 0);
  if ( ((unsigned int)dword_60CACE30 & ~(1616176096 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60CACE30) )
  {
    dword_60CACE54 = (int)&sead__SafeStringBase__vtable;
    dword_60CACE58 = dword_60CACBD0;
    dword_60CACE5C = (int)&sead__SafeStringBase__vtable;
    dword_60CACE60 = dword_60CACBD8;
    dword_60CACE64 = (int)&sead__SafeStringBase__vtable;
    dword_60CACE68 = dword_60CACBE0;
    dword_60CACE6C = (int)&sead__SafeStringBase__vtable;
    dword_60CACE70 = dword_60CACBE8;
    dword_60CACE74 = (int)&sead__SafeStringBase__vtable;
    dword_60CACE78 = dword_60CACBF0;
    sub_60000288();
    _cxa_guard_release(dword_60CACE30);
  }
  v7[0] = 5;
  sub_60476030((int)v2, &dword_60CACE54, v7);
  if ( ((unsigned int)&dword_60CACE30[1] & ~(1616176316 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60CACE30[1]) )
  {
    dword_60CACE80 = (int)&sead__SafeStringBase__vtable;
    dword_60CACE84 = (int)"T_RedCoin_00";
    dword_60CACE88 = (int)&sead__SafeStringBase__vtable;
    dword_60CACE8C = (int)"T_100_00";
    dword_60CACE90 = (int)&sead__SafeStringBase__vtable;
    dword_60CACE94 = (int)"T_1000_00";
    dword_60CACE98 = (int)&sead__SafeStringBase__vtable;
    dword_60CACE9C = (int)"T_1UP_00";
    dword_60CACEA0 = (int)&sead__SafeStringBase__vtable;
    dword_60CACEA4 = (int)"T_GreenCoin_00";
    dword_60CACEA8 = (int)&sead__SafeStringBase__vtable;
    dword_60CACEAC = (int)"T_Coin_00";
    dword_60CACEB0 = (int)&sead__SafeStringBase__vtable;
    dword_60CACEB4 = (int)"T_BonusCoin_00";
    dword_60CACEB8 = (int)&sead__SafeStringBase__vtable;
    dword_60CACEBC = (int)"T_BonusCoin_01";
    sub_60000288();
    _cxa_guard_release(&dword_60CACE30[1]);
  }
  v7[0] = 8;
  sub_60475334((int)v2, (int)(a1 + 912), &dword_60CACE80, v7);
  if ( ((unsigned int)&dword_60CACE30[2] & ~(1616176584 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CACE30[2]) )
  {
    dword_60CACEC0 = (int)&sead__SafeStringBase__vtable;
    dword_60CACEC4 = (int)"N_RedCoin_00";
    dword_60CACEC8 = (int)&sead__SafeStringBase__vtable;
    dword_60CACECC = (int)"N_GreenCoin_00";
    dword_60CACED0 = (int)&sead__SafeStringBase__vtable;
    dword_60CACED4 = (int)"N_Kinomi_00";
    dword_60CACED8 = (int)&sead__SafeStringBase__vtable;
    dword_60CACEDC = (int)"N_VSChamp_00";
    dword_60CACEE0 = (int)&sead__SafeStringBase__vtable;
    dword_60CACEE4 = (int)"N_Attention_00";
    dword_60CACEE8 = (int)&sead__SafeStringBase__vtable;
    dword_60CACEEC = (int)"N_Coin_00";
    dword_60CACEF0 = (int)&sead__SafeStringBase__vtable;
    dword_60CACEF4 = (int)"N_Bonus_00";
    dword_60CACEF8 = (int)&sead__SafeStringBase__vtable;
    dword_60CACEFC = (int)"N_Bonus_01";
    sub_60000288();
    _cxa_guard_release(&dword_60CACE30[2]);
  }
  v7[0] = 8;
  sub_6047518C((int)v2, (int)(a1 + 920), &dword_60CACEC0, v7);
  *(_BYTE *)(a1[920] + 64) &= ~1u;
  *(_BYTE *)(a1[921] + 64) &= ~1u;
  *(_BYTE *)(a1[922] + 64) &= ~1u;
  *(_BYTE *)(a1[923] + 64) &= ~1u;
  *(_BYTE *)(a1[924] + 64) &= ~1u;
  *(_BYTE *)(a1[925] + 64) &= ~1u;
  *(_BYTE *)(a1[926] + 64) &= ~1u;
  *(_BYTE *)(a1[927] + 64) &= ~1u;
  *(_BYTE *)(a1[912] + 64) &= ~1u;
  *(_BYTE *)(a1[913] + 64) &= ~1u;
  *(_BYTE *)(a1[914] + 64) &= ~1u;
  *(_BYTE *)(a1[915] + 64) &= ~1u;
  *(_BYTE *)(a1[916] + 64) &= ~1u;
  *(_BYTE *)(a1[917] + 64) &= ~1u;
  *(_BYTE *)(a1[918] + 64) &= ~1u;
  result = a1[919];
  FIELD_U8(result, 64) &= ~1u;
  return result;
}
