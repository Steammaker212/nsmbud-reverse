/* vibrate_back_ref
 * address: 0x602453A0   size: 444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall vibrate_back_ref(int a1, int a2)
{
  char v2; // r12
  int ResArchiveById; // r6
  __guard *v6; // r5
  int v7; // r4
  int v8; // t1
  int result; // r0

  if ( ((unsigned int)dword_60C8DC40 & ~(1612993468 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C8DC40) )
  {
    dword_60C8DC48 = (int)&sead__SafeStringBase__vtable;
    dword_60C8DC4C = (int)"float";
    dword_60C8DC50 = (int)&sead__SafeStringBase__vtable;
    dword_60C8DC54 = (int)"vibrate";
    sub_60000288();
    _cxa_guard_release(dword_60C8DC40);
  }
  if ( ((unsigned int)&dword_60C8DC40[1] & ~(1612993596 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8DC40[1]) )
  {
    dword_60C8DC58 = (int)&sead__SafeStringBase__vtable;
    dword_60C8DC5C = (int)"float_back";
    dword_60C8DC60 = (int)&sead__SafeStringBase__vtable;
    dword_60C8DC64 = (int)"vibrate_back";
    sub_60000288();
    _cxa_guard_release(&dword_60C8DC40[1]);
  }
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v6 = &dword_60C8DC40[2 * a2];
  SkeletalAnim_play(**(_DWORD **)(FIELD_U32(a1, 6300) + 12), ResArchiveById, (int)(v6 + 2));
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6300) + 12) + 4), 1);
  *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 6300) + 12) + 24) = 1065353216;
  v8 = FIELD_U32(a1, 6304);
  v7 = a1 + 6304;
  SkeletalAnim_play(**(_DWORD **)(v8 + 12), ResArchiveById, (int)(v6 + 6));
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v7 + 12) + 4), 1);
  result = **(_DWORD **)(*(_DWORD *)v7 + 12);
  FIELD_U32(result, 24) = 1065353216;
  return result;
}
