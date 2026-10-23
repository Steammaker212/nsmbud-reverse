/* FinalBowser__beginState_DieFumi
 * address: 0x60078510   size: 476   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x600260D0
// 
// Overridden by: None
int __fastcall FinalBowser__beginState_DieFumi(int a1)
{
  int v2; // r0
  int v3; // r7
  int v4; // r1
  unsigned int v5; // r0
  int v6; // r1
  unsigned int v7; // r0
  int v8; // r0
  int v9; // r5
  int v10; // r2
  int v11; // r3
  int result; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  _DWORD v16[2]; // [sp+0h] [bp-38h] BYREF
  _DWORD v17[2]; // [sp+8h] [bp-30h] BYREF
  int (**v18)(); // [sp+10h] [bp-28h] BYREF
  const char *v19; // [sp+14h] [bp-24h]

  v18 = &sead__SafeStringBase__vtable;
  v19 = "koopa";
  v17[0] = &sead__SafeStringBase__vtable;
  v17[1] = "lkp_demo_die";
  v2 = LoadResource(ResourceMgrRelated_instance, &v18);
  v3 = a1 + 7112;
  sub_60421938(*(_DWORD **)(a1 + 7112), v2, (int)v17);
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
  v16[0] = &sead__SafeStringBase__vtable;
  v16[1] = "lkp_demo_die";
  v18 = &sead__SafeStringBase__vtable;
  v19 = "koopa_model";
  v8 = LoadResource(ResourceMgrRelated_instance, &v18);
  TexAnim_play(**(_DWORD **)(*(_DWORD *)v3 + 20), v8, v16);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v3 + 20) + 4), 0);
  *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v3 + 20) + 24) = 1065353216;
  v9 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  result = (*(int (__fastcall **)(int *, _DWORD, int, int))(dword_60C8168C + 8))(
             &dword_60C8168C,
             FIELD_U32(dword_60C8168C, 8),
             v10,
             v11);
  if ( v9 != result )
  {
    *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v3 + 28) + 24) = 0;
    v13 = **(_DWORD **)(*(_DWORD *)v3 + 28);
    FIELD_U32(v13, 20) = 0;
    FIELD_U32(v13, 28) |= 2u;
    sub_60075CE0(a1);
    v14 = FIELD_U32(EnemyCounterMaybe_instance, 24);
    if ( v14 )
      FIELD_U8(v14, 6102) = 1;
    v15 = dword_60CBC000;
    FIELD_U8(dword_60CBC000, 166) = 0;
    FIELD_U32(v15, 132) = 0;
    FIELD_U32(v15, 140) = 0;
    result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 800))(a1);
  }
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  return result;
}
