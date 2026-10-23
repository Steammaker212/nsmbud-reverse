/* SE_BOSS_KOOPA_L_SHELL_OUT_ref
 * address: 0x6006DC58   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_KOOPA_L_SHELL_OUT_ref(int a1)
{
  int v2; // r0
  int v3; // r4
  int v4; // r1
  unsigned int v5; // r0
  int v6; // r1
  unsigned int v7; // r0
  int v8; // r0
  int v9; // r6
  int v10; // t1
  _DWORD v12[2]; // [sp+0h] [bp-38h] BYREF
  _DWORD v13[2]; // [sp+8h] [bp-30h] BYREF
  int (**v14)(); // [sp+10h] [bp-28h] BYREF
  const char *v15; // [sp+14h] [bp-24h]

  v13[0] = &sead__SafeStringBase__vtable;
  v14 = &sead__SafeStringBase__vtable;
  v15 = "koopa";
  v13[1] = "lkp_shell_out";
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
  v14 = &sead__SafeStringBase__vtable;
  v15 = "koopa";
  v12[1] = "lkp_shell_model_out";
  v8 = LoadResource(ResourceMgrRelated_instance, &v14);
  v10 = FIELD_U32(a1, 7116);
  v9 = a1 + 7116;
  SkeletalAnim_play(**(_DWORD **)(v10 + 12), v8, (int)v12);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v9 + 12) + 4), 0);
  *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v9 + 12) + 24) = 1065353216;
  return sub_60813430(v9 - 784, "SE_BOSS_KOOPA_L_SHELL_OUT", 0);
}
