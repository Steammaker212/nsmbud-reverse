/* sub_60305C10
 * address: 0x60305C10   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60305C10(int a1)
{
  int v2; // r5
  int Resource; // r0
  _DWORD v5[2]; // [sp+0h] [bp-28h] BYREF
  _DWORD v6[8]; // [sp+8h] [bp-20h] BYREF

  FIELD_U32(a1, 116) = 1167867904;
  v2 = **(_DWORD **)(FIELD_U32(a1, 6952) + 12);
  v6[0] = &sead__SafeStringBase__vtable;
  v6[1] = "jugem";
  Resource = LoadResource(ResourceMgrRelated_instance, v6);
  v5[0] = &sead__SafeStringBase__vtable;
  v5[1] = "dead";
  SkeletalAnim_play(v2, Resource, (int)v5);
  *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 6952) + 12) + 24) = 1065353216;
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6952) + 12) + 4), 1);
  sub_6041838C((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6952) + 12) + 4));
  FIELD_U32(a1, 7000) = 4;
  return Enemy__beginState_DieFall((Enemy *)a1);
}
