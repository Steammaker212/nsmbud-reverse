/* sub_60303948
 * address: 0x60303948   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60303948(int *a1, int a2, int a3)
{
  int *v6; // r6
  int v7; // r7
  int Resource; // r0
  _DWORD v10[2]; // [sp+0h] [bp-30h] BYREF
  _DWORD v11[10]; // [sp+8h] [bp-28h] BYREF

  v6 = a1 + 1738;
  v7 = **(_DWORD **)(a1[1738] + 12);
  v11[0] = &sead__SafeStringBase__vtable;
  v11[1] = "jugem";
  Resource = LoadResource(ResourceMgrRelated_instance, v11);
  v10[0] = &sead__SafeStringBase__vtable;
  v10[1] = "dead";
  SkeletalAnim_play(v7, Resource, (int)v10);
  *(_DWORD *)(**(_DWORD **)(*v6 + 12) + 24) = 1065353216;
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*v6 + 12) + 4), 1);
  sub_6041838C((ModelAnimation *)(**(_DWORD **)(*v6 + 12) + 4));
  a1[1750] = 4;
  (*(void (__fastcall **)(int *))(*a1 + 72))(a1);
  return Enemy__collisionGroundPound(a1, a2, a3);
}
