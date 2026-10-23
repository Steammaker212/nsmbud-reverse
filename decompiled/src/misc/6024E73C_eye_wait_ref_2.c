/* eye_wait_ref_2
 * address: 0x6024E73C   size: 436   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall eye_wait_ref_2(int a1)
{
  _DWORD *v2; // r5
  _DWORD *v3; // r6
  int ResArchiveById; // r0
  int v5; // r1
  unsigned int v6; // r0
  int v7; // r1
  unsigned int v8; // r0
  int v9; // r4
  _DWORD *v10; // r5
  int v11; // r0
  int v12; // r1
  unsigned int v13; // r0
  int v14; // r1
  unsigned int v15; // r0
  int v16; // r5
  int v17; // r0
  _DWORD v19[2]; // [sp+0h] [bp-30h] BYREF
  int (**v20)(); // [sp+8h] [bp-28h] BYREF
  const char *v21; // [sp+Ch] [bp-24h]

  v3 = (_DWORD *)(a1 + 6300);
  v2 = *(_DWORD **)(a1 + 6300);
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v20 = &sead__SafeStringBase__vtable;
  v21 = "wait";
  sub_60421938(v2, ResArchiveById, (int)&v20);
  v5 = *(_DWORD *)(*v3 + 12);
  v6 = *(_DWORD *)(*v3 + 68);
  if ( *(_DWORD *)(*v3 + 8) > v6 )
    v5 += 4 * v6;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v5 + 4), 1);
  v7 = *(_DWORD *)(*v3 + 12);
  v8 = *(_DWORD *)(*v3 + 68);
  if ( *(_DWORD *)(*v3 + 8) > v8 )
    v7 += 4 * v8;
  *(_DWORD *)(*(_DWORD *)v7 + 24) = 1065353216;
  if ( v3[9] )
  {
    v9 = a1 + 6308;
    v10 = *(_DWORD **)(a1 + 6308);
    v11 = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
    v20 = &sead__SafeStringBase__vtable;
    v21 = "eye_wait";
    sub_60421938(v10, v11, (int)&v20);
    v12 = *(_DWORD *)(FIELD_U32(a1, 6308) + 12);
    v13 = *(_DWORD *)(FIELD_U32(a1, 6308) + 68);
    if ( *(_DWORD *)(FIELD_U32(a1, 6308) + 8) > v13 )
      v12 += 4 * v13;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v12 + 4), 1);
    v14 = *(_DWORD *)(*(_DWORD *)v9 + 12);
    v15 = *(_DWORD *)(*(_DWORD *)v9 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v9 + 8) > v15 )
      v14 += 4 * v15;
    *(_DWORD *)(*(_DWORD *)v14 + 24) = 1065353216;
    v16 = FIELD_U32(a1, 6324);
    v20 = &sead__SafeStringBase__vtable;
    v21 = "basabasa";
    v17 = LoadResource(ResourceMgrRelated_instance, &v20);
    v19[0] = &sead__SafeStringBase__vtable;
    v19[1] = "eye_wait";
    TexAnim_play(v16, v17, v19);
    AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(a1, 6324) + 4), 1);
    *(_DWORD *)(FIELD_U32(a1, 6324) + 24) = 1065353216;
  }
  FIELD_U32(a1, 11816) = 1;
  return 11816;
}
