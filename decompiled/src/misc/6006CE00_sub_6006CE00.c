/* sub_6006CE00
 * address: 0x6006CE00   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6006CE00(_DWORD *a1)
{
  _DWORD *v1; // r4
  int Resource; // r0
  int v3; // t1
  _DWORD v5[2]; // [sp+0h] [bp-18h] BYREF
  _DWORD v6[4]; // [sp+8h] [bp-10h] BYREF

  v1 = a1;
  (*(void (__fastcall **)(_DWORD *))(*a1 + 776))(a1);
  v5[0] = &sead__SafeStringBase__vtable;
  v6[0] = &sead__SafeStringBase__vtable;
  v5[1] = "lkp_wait";
  v6[1] = "koopa_model";
  Resource = LoadResource(ResourceMgrRelated_instance, v6);
  v3 = v1[1778];
  v1 += 1778;
  TexAnim_play(**(_DWORD **)(v3 + 20), Resource, v5);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*v1 + 20) + 4), 1);
  *(_DWORD *)(**(_DWORD **)(*v1 + 20) + 24) = 1065353216;
  return sub_60400BE4(AreaRumbleMgr_instance);
}
