/* throw_st_ref_302B9C
 * address: 0x60302B9C   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall throw_st_ref_302B9C(int a1)
{
  int v1; // r4
  int v2; // r5
  int Resource; // r0
  _DWORD v5[2]; // [sp+0h] [bp-20h] BYREF
  _DWORD v6[6]; // [sp+8h] [bp-18h] BYREF

  v1 = a1 + 6952;
  v2 = **(_DWORD **)(FIELD_U32(a1, 6952) + 12);
  v6[0] = &sead__SafeStringBase__vtable;
  v6[1] = "jugem";
  Resource = LoadResource(ResourceMgrRelated_instance, v6);
  v5[0] = &sead__SafeStringBase__vtable;
  v5[1] = "throw_st";
  SkeletalAnim_play(v2, Resource, (int)v5);
  *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v1 + 12) + 24) = 1065353216;
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v1 + 12) + 4), 0);
  sub_6041838C((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v1 + 12) + 4));
  FIELD_U32(v1, 48) = 1;
  FIELD_U8(v1, 56) = 0;
  return 1;
}
