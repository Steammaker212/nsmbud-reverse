/* lift_han_leaf_ref_640150
 * address: 0x60640150   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelAnimation *__fastcall lift_han_leaf_ref_640150(int a1)
{
  char v1; // r12
  int v3; // r4
  int v4; // t1
  int v5; // r5
  int Resource; // r1
  _DWORD v8[6]; // [sp+0h] [bp-18h] BYREF

  if ( ((unsigned int)&dword_60CB5880[3] & ~(1617166704 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CB5880[3]) )
  {
    dword_60CB5908 = (int)&sead__SafeStringBase__vtable;
    dword_60CB590C = (int)"yureS";
    dword_60CB5910 = (int)&sead__SafeStringBase__vtable;
    dword_60CB5914 = (int)"yureM";
    dword_60CB5918 = (int)&sead__SafeStringBase__vtable;
    dword_60CB591C = (int)"yureL";
    sub_60000288();
    _cxa_guard_release(&dword_60CB5880[3]);
  }
  v4 = FIELD_U32(a1, 6108);
  v3 = a1 + 6108;
  v5 = **(_DWORD **)(v4 + 12);
  v8[0] = &sead__SafeStringBase__vtable;
  v8[1] = "lift_han_leaf";
  Resource = LoadResource(ResourceMgrRelated_instance, v8);
  SkeletalAnim_play(v5, Resource, (const char **)((char *)&dword_60CB58F0[6] + ((*(_DWORD *)(v3 - 6084) >> 5) & 0x18)));
  *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v3 + 12) + 24) = 1065353216;
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v3 + 12) + 4), 0);
  return sub_6041838C((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v3 + 12) + 4));
}
