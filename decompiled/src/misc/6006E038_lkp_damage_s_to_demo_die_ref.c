/* lkp_damage_s_to_demo_die_ref
 * address: 0x6006E038   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall lkp_damage_s_to_demo_die_ref(_DWORD *a1)
{
  int v2; // r0
  _DWORD *v3; // r4
  _DWORD *v4; // t1
  int v5; // r1
  unsigned int v6; // r0
  int v7; // r1
  unsigned int v8; // r0
  int v9; // r0
  _DWORD v11[2]; // [sp+8h] [bp-38h] BYREF
  _DWORD v12[2]; // [sp+10h] [bp-30h] BYREF
  int (**v13)(); // [sp+18h] [bp-28h] BYREF
  const char *v14; // [sp+1Ch] [bp-24h]

  a1[30] = 0;
  a1[31] = 0;
  a1[32] = 0;
  v13 = &sead__SafeStringBase__vtable;
  v14 = "koopa";
  v12[0] = &sead__SafeStringBase__vtable;
  v12[1] = "lkp_damage_s_to_demo_die";
  v2 = LoadResource(ResourceMgrRelated_instance, &v13);
  v4 = (_DWORD *)a1[1778];
  v3 = a1 + 1778;
  sub_60421938(v4, v2, (int)v12);
  v5 = *(_DWORD *)(*v3 + 12);
  v6 = *(_DWORD *)(*v3 + 68);
  if ( *(_DWORD *)(*v3 + 8) > v6 )
    v5 += 4 * v6;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v5 + 4), 0);
  v7 = *(_DWORD *)(*v3 + 12);
  v8 = *(_DWORD *)(*v3 + 68);
  if ( *(_DWORD *)(*v3 + 8) > v8 )
    v7 += 4 * v8;
  *(_DWORD *)(*(_DWORD *)v7 + 24) = 1065353216;
  v13 = &sead__SafeStringBase__vtable;
  v11[0] = &sead__SafeStringBase__vtable;
  v11[1] = "lkp_damage_s_to_demo_die";
  v14 = "koopa_model";
  v9 = LoadResource(ResourceMgrRelated_instance, &v13);
  TexAnim_play(**(_DWORD **)(*v3 + 20), v9, v11);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*v3 + 20) + 4), 0);
  *(_DWORD *)(**(_DWORD **)(*v3 + 20) + 24) = 1065353216;
  AreaRumbleMgr_rumble(AreaRumbleMgr_instance, 0, 1, 0, 0);
  return sub_60813430(v3 - 195, "SE_BOSS_KOOPA_L_FOOT", 0);
}
