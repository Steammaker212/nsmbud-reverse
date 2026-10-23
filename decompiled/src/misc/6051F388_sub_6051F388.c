/* sub_6051F388
 * address: 0x6051F388   size: 920   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6051F388(int *a1)
{
  char v1; // r12
  _DWORD *v3; // r5
  int v4; // r7
  int v6; // [sp+0h] [bp-20h] BYREF
  const char *v7; // [sp+4h] [bp-1Ch]

  if ( ((unsigned int)&dword_60CA9120[1] & ~(1615983528 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA9120[1]) )
  {
    dword_60CA9190 = (int)&sead__SafeStringBase__vtable;
    dword_60CA9194 = (int)"T_CoinNum_00";
    dword_60CA9198 = (int)&sead__SafeStringBase__vtable;
    dword_60CA919C = (int)"T_SCoinNum_00";
    dword_60CA91A0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA91A4 = (int)"T_GoalNum_00";
    dword_60CA91A8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA91AC = (int)"T_3UPMoonNum_00";
    dword_60CA91B0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA91B4 = (int)"T_ClapNum_00";
    dword_60CA91B8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA91BC = (int)"T_Assist_00";
    dword_60CA91C0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA91C4 = (int)"T_MiniAssist_00";
    dword_60CA91C8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA91CC = (int)"T_ShadowNum_00";
    dword_60CA91D0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA91D4 = (int)"T_KuriboNum_00";
    dword_60CA91D8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA91DC = (int)"T_ItemNum_00";
    dword_60CA91E0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA91E4 = (int)"T_YosshiNum_00";
    dword_60CA91E8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA91EC = (int)"T_CYosshiNum_00";
    dword_60CA91F0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA91F4 = (int)"T_Goal1UPNum_00";
    dword_60CA91F8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA91FC = (int)"T_GoalHanabiNum_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA9120[1]);
  }
  v6 = 14;
  sub_60475334((int)(a1 + 10), (int)(a1 + 907), &dword_60CA9190, &v6);
  v3 = (_DWORD *)dword_60C99DD4;
  v6 = (int)&sead__SafeStringBase__vtable;
  v7 = "RecordList_CoinNum_00";
  sub_6047E0EC(&v6, a1[907], 1, FIELD_U32(dword_60C99DD4, 852));
  v6 = (int)&sead__SafeStringBase__vtable;
  v7 = "RecordList_SCoinNum_00";
  sub_6047E0EC(&v6, a1[908], 1, v3[214]);
  v6 = (int)&sead__SafeStringBase__vtable;
  v7 = "RecordList_GoalNum_00";
  sub_6047E0EC(&v6, a1[909], 1, v3[215]);
  v6 = (int)&sead__SafeStringBase__vtable;
  v7 = "RecordList_3UPMoonNum_00";
  sub_6047E0EC(&v6, a1[910], 1, v3[226]);
  v6 = (int)&sead__SafeStringBase__vtable;
  v7 = "RecordList_ClapNum_00";
  sub_6047E0EC(&v6, a1[911], 1, v3[216]);
  v4 = dword_60C99DD4;
  v6 = (int)&sead__SafeStringBase__vtable;
  v7 = "RecordList_Assist_00";
  sub_6047E0EC(&v6, a1[912], 1, FIELD_U32(dword_60C99DD4, 868));
  v6 = (int)&sead__SafeStringBase__vtable;
  v7 = "RecordList_MiniAssist_00";
  sub_6047E0EC(&v6, a1[913], 1, FIELD_U32(v4, 872));
  v6 = (int)&sead__SafeStringBase__vtable;
  v7 = "RecordList_ShadowNum_00";
  sub_6047E0EC(&v6, a1[914], 1, v3[219]);
  v6 = (int)&sead__SafeStringBase__vtable;
  v7 = "RecordList_KuriboNum_00";
  sub_6047E0EC(&v6, a1[915], 1, v3[220]);
  v6 = (int)&sead__SafeStringBase__vtable;
  v7 = "RecordList_ItemNum_00";
  sub_6047E0EC(&v6, a1[916], 1, v3[221]);
  v6 = (int)&sead__SafeStringBase__vtable;
  v7 = "RecordList_YosshiNum_00";
  sub_6047E0EC(&v6, a1[917], 1, v3[222]);
  v6 = (int)&sead__SafeStringBase__vtable;
  v7 = "RecordList_CYosshiNum_00";
  sub_6047E0EC(&v6, a1[918], 1, v3[223]);
  v6 = (int)&sead__SafeStringBase__vtable;
  v7 = "RecordList_Goal1UPNum_00";
  sub_6047E0EC(&v6, a1[919], 1, v3[224]);
  v6 = (int)&sead__SafeStringBase__vtable;
  v7 = "RecordList_GoalHanabiNum_00";
  return sub_6047E0EC(&v6, a1[920], 1, v3[225]);
}
