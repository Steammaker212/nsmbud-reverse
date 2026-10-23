/* lkp_demo_die_fall_ref
 * address: 0x6006E218   size: 476   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall lkp_demo_die_fall_ref(int a1)
{
  int v2; // r0
  int v3; // r5
  int v4; // r1
  unsigned int v5; // r0
  int v6; // r1
  unsigned int v7; // r0
  int v8; // r0
  int (__fastcall ***v9)(_DWORD, int *); // r5
  char v10; // r12
  _DWORD v12[2]; // [sp+0h] [bp-38h] BYREF
  _DWORD v13[2]; // [sp+8h] [bp-30h] BYREF
  int (**v14)(); // [sp+10h] [bp-28h] BYREF
  const char *v15; // [sp+14h] [bp-24h]

  v14 = &sead__SafeStringBase__vtable;
  v15 = "koopa";
  v13[0] = &sead__SafeStringBase__vtable;
  v13[1] = "lkp_demo_die_fall";
  v2 = LoadResource(ResourceMgrRelated_instance, &v14);
  v3 = a1 + 7112;
  sub_60421938(*(_DWORD **)(a1 + 7112), v2, (int)v13);
  v4 = *(_DWORD *)(FIELD_U32(a1, 7112) + 12);
  v5 = *(_DWORD *)(FIELD_U32(a1, 7112) + 68);
  if ( *(_DWORD *)(FIELD_U32(a1, 7112) + 8) > v5 )
    v4 += 4 * v5;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v4 + 4), 0);
  v6 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  v7 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v7 )
    v6 += 4 * v7;
  *(_DWORD *)(*(_DWORD *)v6 + 24) = 1065353216;
  v12[0] = &sead__SafeStringBase__vtable;
  v12[1] = "lkp_demo_die_fall";
  v14 = &sead__SafeStringBase__vtable;
  v15 = "koopa_model";
  v8 = LoadResource(ResourceMgrRelated_instance, &v14);
  TexAnim_play(**(_DWORD **)(*(_DWORD *)v3 + 20), v8, v12);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v3 + 20) + 4), 0);
  *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v3 + 20) + 24) = 1065353216;
  v9 = *(int (__fastcall ****)(_DWORD, int *))sub_60008598(
                                                ActorMgr__instance,
                                                726,
                                                *(_DWORD *)(ActorMgr__instance + 27172));
  if ( ((unsigned int)&dword_60C81760 & ~(1611064164 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C81760) )
  {
    dword_60C8175C = (int)&off_60BC6E94;
    _cxa_guard_release(&dword_60C81760);
  }
  if ( v9 && (**v9)(v9, &dword_60C8175C) == 1 )
    lkp_demo_die_fall_ref_2(v9);
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U16(a1, 6278) = 241;
  return 6278;
}
