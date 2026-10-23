/* sub_605087C0
 * address: 0x605087C0   size: 948   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605087C0(int *a1)
{
  char v1; // r12
  char v3; // r12
  char v4; // r12
  int v6; // [sp+0h] [bp-20h] BYREF
  int v7; // [sp+4h] [bp-1Ch] BYREF

  if ( ((unsigned int)dword_60CA7B40 & ~(1615890396 << v1) & 1) == 0 && _cxa_guard_acquire(dword_60CA7B40) )
  {
    dword_60CA7B64 = (int)&sead__SafeStringBase__vtable;
    dword_60CA7B68 = (int)"T_Easy_00";
    dword_60CA7B6C = (int)&sead__SafeStringBase__vtable;
    dword_60CA7B70 = (int)"T_Musasabi_00";
    dword_60CA7B74 = (int)&sead__SafeStringBase__vtable;
    dword_60CA7B78 = (int)"T_Athletic_00";
    dword_60CA7B7C = (int)&sead__SafeStringBase__vtable;
    dword_60CA7B80 = (int)"T_Yoshi_00";
    dword_60CA7B84 = (int)&sead__SafeStringBase__vtable;
    dword_60CA7B88 = (int)"T_Penguin_00";
    dword_60CA7B8C = (int)&sead__SafeStringBase__vtable;
    dword_60CA7B90 = (int)"T_Hard_00";
    dword_60CA7B94 = (int)&sead__SafeStringBase__vtable;
    dword_60CA7B98 = (int)"T_Special_00";
    dword_60CA7B9C = (int)&sead__SafeStringBase__vtable;
    dword_60CA7BA0 = (int)"T_Random_00";
    sub_60000288();
    _cxa_guard_release(dword_60CA7B40);
  }
  v7 = 8;
  sub_604753A8((int)(a1 + 10), (int)(a1 + 920), &dword_60CA7B64, &v7);
  if ( ((unsigned int)&dword_60CA7B40[1] & ~(1615890656 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CA7B40[1]) )
  {
    dword_60CA7BB0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA7BB4 = (int)"LabelFree_Easy_00";
    dword_60CA7BB8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA7BBC = (int)"LabelFree_Musasabi_00";
    dword_60CA7BC0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA7BC4 = (int)"LabelFree_Athletic_00";
    dword_60CA7BC8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA7BCC = (int)"LabelFree_Yoshi_00";
    dword_60CA7BD0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA7BD4 = (int)"LabelFree_Penguin_00";
    dword_60CA7BD8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA7BDC = (int)"LabelFree_Hard_00";
    dword_60CA7BE0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA7BE4 = (int)"LabelFree_Special_00";
    dword_60CA7BE8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA7BEC = (int)"LabelFree_Random_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA7B40[1]);
  }
  sub_6047E0EC(&dword_60CA7BB0, a1[920], 0);
  sub_6047E0EC(&dword_60CA7BB8, a1[921], 0);
  sub_6047E0EC(&dword_60CA7BC0, a1[922], 0);
  sub_6047E0EC(&dword_60CA7BC8, a1[923], 0);
  sub_6047E0EC(&dword_60CA7BD0, a1[924], 0);
  sub_6047E0EC(&dword_60CA7BD8, a1[925], 0);
  sub_6047E0EC(&dword_60CA7BE0, a1[926], 0);
  sub_6047E0EC(&dword_60CA7BE8, a1[927], 0);
  if ( ((unsigned int)&dword_60CA7B40[2] & ~(1615891028 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60CA7B40[2]) )
  {
    dword_60CA7BF0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA7BF4 = (int)"T_EasyCourseNum_00";
    dword_60CA7BF8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA7BFC = (int)"T_MusasabiCourseNum_00";
    dword_60CA7C00 = (int)&sead__SafeStringBase__vtable;
    dword_60CA7C04 = (int)"T_AthleticCourseNum_00";
    dword_60CA7C08 = (int)&sead__SafeStringBase__vtable;
    dword_60CA7C0C = (int)"T_YoshiCourseNum_00";
    dword_60CA7C10 = (int)&sead__SafeStringBase__vtable;
    dword_60CA7C14 = (int)"T_PenguinCourseNum_00";
    dword_60CA7C18 = (int)&sead__SafeStringBase__vtable;
    dword_60CA7C1C = (int)"T_HardCourseNum_00";
    dword_60CA7C20 = (int)&sead__SafeStringBase__vtable;
    dword_60CA7C24 = (int)"T_SpecialCourseNum_00";
    dword_60CA7C28 = (int)&sead__SafeStringBase__vtable;
    dword_60CA7C2C = (int)"T_RandomCourseNum_00";
    dword_60CA7C30 = (int)&sead__SafeStringBase__vtable;
    dword_60CA7C34 = (int)"T_BestTime_00";
    dword_60CA7C38 = (int)&sead__SafeStringBase__vtable;
    dword_60CA7C3C = (int)"T_BestTime_01";
    sub_60000288();
    _cxa_guard_release(&dword_60CA7B40[2]);
  }
  v6 = 10;
  return sub_604753A8((int)(a1 + 10), (int)(a1 + 920), &dword_60CA7BF0, &v6);
}
