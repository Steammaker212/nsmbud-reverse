/* sub_604E1820
 * address: 0x604E1820   size: 1324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604E1820(_DWORD *a1)
{
  _DWORD *v2; // r5
  char v3; // r12
  char v4; // r12
  char v5; // r12
  int v7[8]; // [sp+8h] [bp-20h] BYREF

  v2 = a1 + 10;
  sub_604734E4(a1 + 10, 0);
  sub_60475C8C((int)v2);
  v7[0] = (int)&sead__SafeStringBase__vtable;
  v7[1] = (int)"Command.bflyt";
  message_ref(v2, v7, 0, 0, 0);
  if ( ((unsigned int)dword_60CA55C0 & ~(1615730852 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60CA55C0) )
  {
    dword_60CA55EC = (int)&sead__SafeStringBase__vtable;
    dword_60CA55F0 = dword_60CA53F0;
    dword_60CA55F4 = (int)&sead__SafeStringBase__vtable;
    dword_60CA55F8 = dword_60CA53F8;
    dword_60CA55FC = (int)&sead__SafeStringBase__vtable;
    dword_60CA5600 = dword_60CA5400;
    dword_60CA5604 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5608 = dword_60CA5408;
    dword_60CA560C = (int)&sead__SafeStringBase__vtable;
    dword_60CA5610 = dword_60CA5410;
    dword_60CA5614 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5618 = dword_60CA5418;
    sub_60000288();
    _cxa_guard_release(dword_60CA55C0);
  }
  v7[0] = 6;
  sub_60476030((int)v2, &dword_60CA55EC, v7);
  if ( ((unsigned int)&dword_60CA55C0[1] & ~(1615731092 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60CA55C0[1]) )
  {
    dword_60CA5620 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5624 = (int)"N_Rotate_00";
    dword_60CA5628 = (int)&sead__SafeStringBase__vtable;
    dword_60CA562C = (int)"N_LiftY_00";
    dword_60CA5630 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5634 = (int)"N_LiftB_00";
    dword_60CA5638 = (int)&sead__SafeStringBase__vtable;
    dword_60CA563C = (int)"N_Lift4BtnL_00";
    dword_60CA5640 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5644 = (int)"N_Lift4BtnB_00";
    dword_60CA5648 = (int)&sead__SafeStringBase__vtable;
    dword_60CA564C = (int)"N_ShakeT_00";
    dword_60CA5650 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5654 = (int)"N_ShakeB_00";
    dword_60CA5658 = (int)&sead__SafeStringBase__vtable;
    dword_60CA565C = (int)"N_Hold4BtnL_00";
    dword_60CA5660 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5664 = (int)"N_Hold4BtnB_00";
    dword_60CA5668 = (int)&sead__SafeStringBase__vtable;
    dword_60CA566C = (int)"N_HoldY_00";
    dword_60CA5670 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5674 = (int)"N_HoldB_00";
    dword_60CA5678 = (int)&sead__SafeStringBase__vtable;
    dword_60CA567C = (int)"N_BeatA_00";
    dword_60CA5680 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5684 = (int)"N_BeatB_00";
    dword_60CA5688 = (int)&sead__SafeStringBase__vtable;
    dword_60CA568C = (int)"N_Beat4BtnR_00";
    dword_60CA5690 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5694 = (int)"N_Beat4BtnB_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA55C0[1]);
  }
  v7[0] = 15;
  sub_6047518C((int)v2, (int)(a1 + 897), &dword_60CA5620, v7);
  *(_BYTE *)(a1[897] + 64) &= ~1u;
  *(_BYTE *)(a1[898] + 64) &= ~1u;
  *(_BYTE *)(a1[899] + 64) &= ~1u;
  *(_BYTE *)(a1[900] + 64) &= ~1u;
  *(_BYTE *)(a1[901] + 64) &= ~1u;
  *(_BYTE *)(a1[902] + 64) &= ~1u;
  *(_BYTE *)(a1[903] + 64) &= ~1u;
  *(_BYTE *)(a1[904] + 64) &= ~1u;
  *(_BYTE *)(a1[905] + 64) &= ~1u;
  *(_BYTE *)(a1[906] + 64) &= ~1u;
  *(_BYTE *)(a1[907] + 64) &= ~1u;
  *(_BYTE *)(a1[908] + 64) &= ~1u;
  *(_BYTE *)(a1[909] + 64) &= ~1u;
  *(_BYTE *)(a1[910] + 64) &= ~1u;
  *(_BYTE *)(a1[911] + 64) &= ~1u;
  if ( ((unsigned int)&dword_60CA55C0[2] & ~(1615731716 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CA55C0[2]) )
  {
    dword_60CA55CC = (int)&sead__SafeStringBase__vtable;
    dword_60CA55D0 = (int)"P_RBtn_04";
    dword_60CA55D4 = (int)&sead__SafeStringBase__vtable;
    dword_60CA55D8 = (int)"P_Arrow_04";
    dword_60CA55DC = (int)&sead__SafeStringBase__vtable;
    dword_60CA55E0 = (int)"P_RBtn_05";
    dword_60CA55E4 = (int)&sead__SafeStringBase__vtable;
    dword_60CA55E8 = (int)"P_Arrow_07";
    sub_60000288();
    _cxa_guard_release(&dword_60CA55C0[2]);
  }
  v7[0] = 4;
  __Player__applyPowerUpTransform((int)v2, (int)(a1 + 912), (int)&dword_60CA55CC, v7);
  *(_BYTE *)(a1[912] + 64) |= 1u;
  *(_BYTE *)(a1[913] + 64) |= 1u;
  *(_BYTE *)(a1[914] + 64) |= 1u;
  *(_BYTE *)(a1[915] + 64) |= 1u;
  sub_6045BF58((int)(a1 + 920), 0);
  sub_6045BF58((int)(a1 + 1021), 1);
  sub_6045BF58((int)(a1 + 1122), 2);
  sub_6045BF58((int)(a1 + 1223), 3);
  return sub_6045BF58((int)(a1 + 1324), 4);
}
