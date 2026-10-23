/* lift_han_leaf_ref_6402E8
 * address: 0x606402E8   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelAnimation *__fastcall lift_han_leaf_ref_6402E8(int a1)
{
  char v1; // r12
  int v3; // r4
  int v4; // t1
  int v5; // r5
  int Resource; // r1
  _DWORD v8[6]; // [sp+0h] [bp-18h] BYREF

  if ( ((unsigned int)&dword_60CB5880[4] & ~(1617167112 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CB5880[4]) )
  {
    dword_60CB5920 = (int)&sead__SafeStringBase__vtable;
    dword_60CB5924 = (int)"fallS";
    dword_60CB5928 = (int)&sead__SafeStringBase__vtable;
    dword_60CB592C = (int)"fallM";
    dword_60CB5930 = (int)&sead__SafeStringBase__vtable;
    dword_60CB5934 = (int)"fallL";
    sub_60000288();
    _cxa_guard_release(&dword_60CB5880[4]);
  }
  v4 = FIELD_U32(a1, 6108);
  v3 = a1 + 6108;
  v5 = **(_DWORD **)(v4 + 12);
  v8[0] = &sead__SafeStringBase__vtable;
  v8[1] = "lift_han_leaf";
  Resource = LoadResource(ResourceMgrRelated_instance, v8);
  SkeletalAnim_play(v5, Resource, (const char **)((char *)&dword_60CB58F0[12] + ((*(_DWORD *)(v3 - 6084) >> 5) & 0x18)));
  *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v3 + 12) + 24) = 1065353216;
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v3 + 12) + 4), 1);
  return sub_6041838C((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v3 + 12) + 4));
}
