/* sub_6006CED0
 * address: 0x6006CED0   size: 552   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6006CED0(int a1)
{
  int v2; // r0
  int v3; // r4
  int v4; // r1
  unsigned int v5; // r0
  int v6; // r1
  unsigned int v7; // r0
  int v8; // r0
  int v9; // r5
  char v10; // r12
  _DWORD v12[2]; // [sp+0h] [bp-38h] BYREF
  _DWORD v13[2]; // [sp+8h] [bp-30h] BYREF
  int (**v14)(); // [sp+10h] [bp-28h] BYREF
  const char *v15; // [sp+14h] [bp-24h]

  v13[0] = &sead__SafeStringBase__vtable;
  v14 = &sead__SafeStringBase__vtable;
  v15 = "koopa";
  v13[1] = "lkp_shell_in";
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
  v12[1] = "lkp_shell_model_in";
  v8 = LoadResource(ResourceMgrRelated_instance, &v14);
  SkeletalAnim_play(**(_DWORD **)(FIELD_U32(a1, 7116) + 12), v8, (int)v12);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 7116) + 12) + 4), 0);
  *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 7116) + 12) + 24) = 1065353216;
  FIELD_U32(a1, 7144) |= 2u;
  FIELD_U32(a1, 26108) = 0;
  FIELD_U8(a1, 25365) = 0;
  v9 = *(_DWORD *)sub_60008598(ActorMgr__instance, 373, *(_DWORD *)(ActorMgr__instance + 27172));
  if ( ((unsigned int)&dword_60C81104 & ~(1611059280 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C81104) )
  {
    dword_60C81100 = (int)&off_60BC66E8;
    _cxa_guard_release(&dword_60C81104);
  }
  if ( v9 && (**(int (__fastcall ***)(int, int *))v9)(v9, &dword_60C81100) == 1 )
    FIELD_U8(v9, 15262) = 1;
  FIELD_U64(a1, 120) = 0x40C0000000000000LL;
  FIELD_U32(a1, 100) = -1102263091;
  return sub_60813430(a1 + 6332, "SE_BOSS_KOOPA_L_SHELL_IN", 0);
}
