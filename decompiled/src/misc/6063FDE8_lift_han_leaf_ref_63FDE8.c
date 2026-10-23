/* lift_han_leaf_ref_63FDE8
 * address: 0x6063FDE8   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelAnimation *__fastcall lift_han_leaf_ref_63FDE8(int a1)
{
  char v1; // r12
  int v3; // r4
  int v4; // t1
  int v5; // r5
  int Resource; // r1
  _DWORD v8[6]; // [sp+0h] [bp-18h] BYREF

  if ( ((unsigned int)&dword_60CB5880[1] & ~(1617165832 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CB5880[1]) )
  {
    dword_60CB58D4 = (int)&sead__SafeStringBase__vtable;
    dword_60CB58D8 = (int)"openS";
    dword_60CB58DC = (int)&sead__SafeStringBase__vtable;
    dword_60CB58E0 = (int)"openM";
    dword_60CB58E4 = (int)&sead__SafeStringBase__vtable;
    dword_60CB58E8 = (int)"openL";
    sub_60000288();
    _cxa_guard_release(&dword_60CB5880[1]);
  }
  v4 = FIELD_U32(a1, 6108);
  v3 = a1 + 6108;
  v5 = **(_DWORD **)(v4 + 12);
  v8[0] = &sead__SafeStringBase__vtable;
  v8[1] = "lift_han_leaf";
  Resource = LoadResource(ResourceMgrRelated_instance, v8);
  SkeletalAnim_play(v5, Resource, (const char **)((char *)&dword_60CB5880[21] + ((*(_DWORD *)(v3 - 6084) >> 5) & 0x18)));
  *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v3 + 12) + 24) = 1065353216;
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v3 + 12) + 4), 0);
  return sub_6041838C((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v3 + 12) + 4));
}
