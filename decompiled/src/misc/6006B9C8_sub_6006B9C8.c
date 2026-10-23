/* sub_6006B9C8
 * address: 0x6006B9C8   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6006B9C8(_DWORD *a1)
{
  int Resource; // r0
  int v3; // t1
  int result; // r0
  _DWORD v5[2]; // [sp+0h] [bp-18h] BYREF
  _DWORD v6[4]; // [sp+8h] [bp-10h] BYREF

  v5[0] = &sead__SafeStringBase__vtable;
  v6[0] = &sead__SafeStringBase__vtable;
  v5[1] = "lkp_wait";
  v6[1] = "koopa_model";
  Resource = LoadResource(ResourceMgrRelated_instance, v6);
  v3 = a1[1778];
  a1 += 1778;
  TexAnim_play(**(_DWORD **)(v3 + 20), Resource, v5);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*a1 + 20) + 4), 1);
  result = **(_DWORD **)(*a1 + 20);
  FIELD_U32(result, 24) = 1065353216;
  return result;
}
