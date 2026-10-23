/* lift_han_leaf_ref
 * address: 0x6063FC54   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelAnimation *__fastcall lift_han_leaf_ref(int a1)
{
  char v1; // r12
  int v3; // r4
  int v4; // t1
  int v5; // r5
  int Resource; // r1
  _DWORD v8[6]; // [sp+0h] [bp-18h] BYREF

  if ( ((unsigned int)&dword_60CB5880[2] & ~(1617165428 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CB5880[2]) )
  {
    dword_60CB58F0[0] = (int)&sead__SafeStringBase__vtable;
    dword_60CB58F4 = (int)"waitS";
    dword_60CB58F8 = (int)&sead__SafeStringBase__vtable;
    dword_60CB58FC = (int)"waitM";
    dword_60CB5900 = (int)&sead__SafeStringBase__vtable;
    dword_60CB5904 = (int)"waitL";
    sub_60000288();
    _cxa_guard_release(&dword_60CB5880[2]);
  }
  v4 = FIELD_U32(a1, 6108);
  v3 = a1 + 6108;
  v5 = **(_DWORD **)(v4 + 12);
  v8[0] = &sead__SafeStringBase__vtable;
  v8[1] = "lift_han_leaf";
  Resource = LoadResource(ResourceMgrRelated_instance, v8);
  SkeletalAnim_play(v5, Resource, (const char **)((char *)dword_60CB58F0 + ((*(_DWORD *)(v3 - 6084) >> 5) & 0x18)));
  *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v3 + 12) + 24) = 1065353216;
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v3 + 12) + 4), 1);
  return sub_6041838C((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v3 + 12) + 4));
}
