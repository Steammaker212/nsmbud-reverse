/* sub_60345A00
 * address: 0x60345A00   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelAnimation *__fastcall sub_60345A00(int a1, int a2)
{
  char v2; // r12
  int *v5; // r4
  int v6; // t1

  if ( ((unsigned int)&dword_60C94884[2] & ~(1614043680 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C94884[2]) )
  {
    dword_60C948F0[0] = (int)&sead__SafeStringBase__vtable;
    dword_60C948F4 = (int)"throw_1";
    dword_60C948F8 = (int)&sead__SafeStringBase__vtable;
    dword_60C948FC = (int)"throw_2";
    dword_60C94900 = (int)&sead__SafeStringBase__vtable;
    dword_60C94904 = (int)"throw_3";
    dword_60C94908 = (int)&sead__SafeStringBase__vtable;
    dword_60C9490C = (int)"throw_4_left_hand";
    dword_60C94910 = (int)&sead__SafeStringBase__vtable;
    dword_60C94914 = (int)"throw_4_right_hand";
    dword_60C94918 = (int)&sead__SafeStringBase__vtable;
    dword_60C9491C = (int)"throw_5";
    dword_60C94920 = (int)&sead__SafeStringBase__vtable;
    dword_60C94924 = (int)"return";
    dword_60C94928 = (int)&sead__SafeStringBase__vtable;
    dword_60C9492C = (int)"dead";
    sub_60000288();
    _cxa_guard_release(&dword_60C94884[2]);
  }
  v6 = FIELD_U32(a1, 6300);
  v5 = (int *)(a1 + 6300);
  SkeletalAnim_play(**(_DWORD **)(v6 + 12), v5[1], (int)&dword_60C948F0[2 * a2]);
  *(_DWORD *)(**(_DWORD **)(*v5 + 12) + 24) = 1065353216;
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*v5 + 12) + 4), dword_60AF4B50[a2]);
  return sub_6041838C((ModelAnimation *)(**(_DWORD **)(*v5 + 12) + 4));
}
