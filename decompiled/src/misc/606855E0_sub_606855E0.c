/* sub_606855E0
 * address: 0x606855E0   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606855E0(_DWORD *a1)
{
  int result; // r0
  _DWORD *v3; // r11
  _DWORD *v4; // r4
  _DWORD *v5; // r5
  int v6; // r0
  int v7; // r1
  unsigned int v8; // r0
  int v9; // r1
  unsigned int v10; // r0
  int v11; // r1
  unsigned int v12; // r0
  _DWORD *v13; // r6
  _DWORD *v14; // t1
  int *v15; // r1
  unsigned int v16; // r0
  int v17; // r5
  int v18; // r0
  int v19; // r1
  unsigned int v20; // r0
  int v21; // r1
  unsigned int v22; // r0
  int v23; // r1
  unsigned int v24; // r0
  int (**v25)(); // [sp+4h] [bp-34h] BYREF
  const char *v26; // [sp+8h] [bp-30h]
  int (**v27)(); // [sp+Ch] [bp-2Ch] BYREF
  const char *v28; // [sp+10h] [bp-28h]

  v3 = a1 + 1878;
  result = a1[1878];
  if ( result != 2 )
  {
    v4 = a1 + 1528;
    v5 = (_DWORD *)a1[1528];
    v27 = &sead__SafeStringBase__vtable;
    v28 = "magic_hand";
    v6 = LoadResource(ResourceMgrRelated_instance, &v27);
    v25 = &sead__SafeStringBase__vtable;
    v26 = "pa_attack01";
    sub_60421938(v5, v6, (int)&v25);
    v7 = *(_DWORD *)(a1[1528] + 12);
    v8 = *(_DWORD *)(a1[1528] + 68);
    if ( *(_DWORD *)(a1[1528] + 8) > v8 )
      v7 += 4 * v8;
    *(_DWORD *)(*(_DWORD *)v7 + 24) = 1065353216;
    v9 = *(_DWORD *)(*v4 + 12);
    v10 = *(_DWORD *)(*v4 + 68);
    if ( *(_DWORD *)(*v4 + 8) > v10 )
      v9 += 4 * v10;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v9 + 4), 0);
    v11 = *(_DWORD *)(*v4 + 12);
    v12 = *(_DWORD *)(*v4 + 68);
    if ( *(_DWORD *)(*v4 + 8) > v12 )
      v11 += 4 * v12;
    sub_6041838C((ModelAnimation *)(*(_DWORD *)v11 + 4));
    v14 = (_DWORD *)a1[1529];
    v13 = a1 + 1529;
    v15 = (int *)v14[3];
    v16 = v14[17];
    if ( v14[2] > v16 )
      v15 += v16;
    v17 = *v15;
    v27 = &sead__SafeStringBase__vtable;
    v28 = "magic_hand";
    v18 = LoadResource(ResourceMgrRelated_instance, &v27);
    v25 = &sead__SafeStringBase__vtable;
    v26 = "shadow_pa_attack01";
    SkeletalAnim_play(v17, v18, (const char **)&v25);
    v19 = *(_DWORD *)(*v13 + 12);
    v20 = *(_DWORD *)(*v13 + 68);
    if ( *(_DWORD *)(*v13 + 8) > v20 )
      v19 += 4 * v20;
    *(_DWORD *)(*(_DWORD *)v19 + 24) = 1065353216;
    v21 = *(_DWORD *)(*v13 + 12);
    v22 = *(_DWORD *)(*v13 + 68);
    if ( *(_DWORD *)(*v13 + 8) > v22 )
      v21 += 4 * v22;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v21 + 4), 0);
    v23 = *(_DWORD *)(*v13 + 12);
    v24 = *(_DWORD *)(*v13 + 68);
    if ( *(_DWORD *)(*v13 + 8) > v24 )
      v23 += 4 * v24;
    sub_6041838C((ModelAnimation *)(*(_DWORD *)v23 + 4));
    *v3 = 2;
    return 2;
  }
  return result;
}
