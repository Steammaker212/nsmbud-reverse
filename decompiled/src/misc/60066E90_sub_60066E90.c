/* sub_60066E90
 * address: 0x60066E90   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60066E90(int a1)
{
  int v2; // r0
  int v3; // r5
  int v4; // r1
  unsigned int v5; // r0
  int v6; // r1
  unsigned int v7; // r0
  int v8; // r0
  float v9; // s2
  int v10; // r0
  int v11; // r1
  _DWORD v13[2]; // [sp+0h] [bp-38h] BYREF
  _DWORD v14[2]; // [sp+8h] [bp-30h] BYREF
  int (**v15)(); // [sp+10h] [bp-28h] BYREF
  const char *v16; // [sp+14h] [bp-24h]

  v15 = &sead__SafeStringBase__vtable;
  v16 = "koopa";
  v14[0] = &sead__SafeStringBase__vtable;
  v14[1] = "lkp_wait";
  v2 = LoadResource(ResourceMgrRelated_instance, &v15);
  v3 = a1 + 7112;
  sub_60421938(*(_DWORD **)(a1 + 7112), v2, (int)v14);
  v4 = *(_DWORD *)(FIELD_U32(a1, 7112) + 12);
  v5 = *(_DWORD *)(FIELD_U32(a1, 7112) + 68);
  if ( *(_DWORD *)(FIELD_U32(a1, 7112) + 8) > v5 )
    v4 += 4 * v5;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v4 + 4), 1);
  v6 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  v7 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v7 )
    v6 += 4 * v7;
  *(_DWORD *)(*(_DWORD *)v6 + 24) = 1065353216;
  v13[0] = &sead__SafeStringBase__vtable;
  v13[1] = "lkp_wait";
  v15 = &sead__SafeStringBase__vtable;
  v16 = "koopa_model";
  v8 = LoadResource(ResourceMgrRelated_instance, &v15);
  TexAnim_play(**(_DWORD **)(*(_DWORD *)v3 + 20), v8, v13);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v3 + 20) + 4), 1);
  *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v3 + 20) + 24) = 1065353216;
  v9 = FIELD_F32(dword_60CC6484, 132);
  v10 = FIELD_U32(a1, 108);
  FIELD_F32(a1, 112) = v9 + -600.0;
  v11 = FIELD_U32(a1, 116);
  FIELD_U32(a1, 584) = v10;
  FIELD_F32(a1, 588) = v9 + -600.0;
  FIELD_U32(a1, 592) = v11;
  FIELD_U32(a1, 608) = v10;
  FIELD_F32(a1, 612) = v9 + -600.0;
  FIELD_U32(a1, 616) = v11;
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 684))(a1);
}
