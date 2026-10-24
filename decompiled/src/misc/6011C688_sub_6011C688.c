/* sub_6011C688
 * address: 0x6011C688   size: 1072   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6011C688(int *a1)
{
  void *v2; // r5
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  unsigned int animations; // r2
  int *v7; // r0
  int v8; // r1
  int v9; // r0
  _DWORD *v10; // r0
  int v11; // r1
  unsigned int v12; // r2
  unsigned int v13; // r0
  _DWORD *v14; // r0
  int *v15; // r1
  unsigned int v16; // r2
  unsigned int v17; // r0
  int v18; // r0
  _DWORD *v19; // r0
  int v20; // r1
  unsigned int v21; // r2
  unsigned int v22; // r0
  int v23; // r0
  int v24; // r1
  int v25; // r0
  _DWORD *v26; // r0
  int v27; // r1
  int v28; // r0
  void *v29; // r5
  void *v30; // r6
  ModelWrapper *v31; // r7
  ModelWrapper *v32; // r0
  unsigned int v33; // r2
  int *v34; // r0
  int v35; // r1
  int v36; // r0
  _DWORD *v37; // r0
  int v38; // r1
  unsigned int v39; // r2
  unsigned int v40; // r0
  _DWORD *v41; // r0
  int *v42; // r1
  unsigned int v43; // r2
  unsigned int v44; // r0
  int v45; // r0
  _DWORD *v46; // r0
  int v47; // r1
  unsigned int v48; // r2
  unsigned int v49; // r0
  int v50; // r0
  int v51; // r1
  int v52; // r0
  int v53; // r0
  int (__fastcall *v54)(int, sead__SafeString *); // r2
  int v55; // r0
  sead__SafeString a2; // [sp+1Ch] [bp-2Ch] BYREF

  sub_600D061C(a1);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "koopaJr_clown_m";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
  a1[1575] = (int)v2;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "koopaJr_clown_m";
  Model2 = (void *)Resource_getModel2(v2, &a2, 2, 1, 1, 1, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v5 = sub_60421830(v4, Model2, 2, 1, 1, 1, 0);
  j_ModelWrapper_setupModel((int)v5, (int)v2, 0, 0);
  a1[1576] = (int)v4;
  animations = (unsigned int)FIELD_U32(v4 + (1) * 48, 0x14);
  v7 = (int *)FIELD_U32(v4, 0xC);
  v8 = a1[1575];
  if ( FIELD_U32(v4, 0x8) > animations )
    v7 += animations;
  v9 = *v7;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "jcm_wait";
  SkeletalAnim_play(v9, v8, (int)&a2);
  v10 = (_DWORD *)a1[1576];
  v11 = v10[3];
  v12 = v10[2];
  v13 = v10[17];
  if ( v12 > v13 )
    v11 += 4 * v13;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v11 + 4), 1);
  v14 = (_DWORD *)a1[1576];
  v15 = (int *)v14[3];
  v16 = v14[2];
  v17 = v14[17];
  if ( v16 > v17 )
    v15 += v17;
  v18 = *v15;
  FIELD_U32(v18, 20) = 0;
  FIELD_U32(v18, 28) |= 2u;
  v19 = (_DWORD *)a1[1576];
  v20 = v19[3];
  v21 = v19[2];
  v22 = v19[17];
  if ( v21 > v22 )
    v20 += 4 * v22;
  *(_DWORD *)(*(_DWORD *)v20 + 24) = 1065353216;
  v23 = **(_DWORD **)(a1[1576] + 20);
  a1[1577] = v23;
  v24 = a1[1575];
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "koopaJr_clown_m";
  TexAnim_play(v23, v24, &a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(a1[1577] + 4), 0);
  v25 = a1[1577];
  FIELD_U32(v25, 20) = 0;
  FIELD_U32(v25, 28) |= 2u;
  *(_DWORD *)(a1[1577] + 24) = 0;
  v26 = **(_DWORD ***)(a1[1576] + 28);
  a1[1578] = (int)v26;
  v27 = a1[1575];
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "jcm_damage_s";
  ShuAnim_play(v26, v27, (int)&a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(a1[1578] + 4), 1);
  v28 = a1[1578];
  FIELD_U32(v28, 20) = 0;
  FIELD_U32(v28, 28) |= 2u;
  *(_DWORD *)(a1[1578] + 24) = 0;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "koopaJr_clown";
  v29 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
  a1[1915] = (int)v29;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "koopaJr_clown";
  v30 = (void *)Resource_getModel2(v29, &a2, 2, 1, 1, 1, 0, 0, 0);
  v31 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v32 = sub_60421830(v31, v30, 2, 1, 1, 1, 0);
  j_ModelWrapper_setupModel((int)v32, (int)v29, 0, 0);
  a1[1914] = (int)v31;
  v33 = (unsigned int)FIELD_U32(v31 + (1) * 48, 0x14);
  v34 = (int *)FIELD_U32(v31, 0xC);
  v35 = a1[1915];
  if ( FIELD_U32(v31, 0x8) > v33 )
    v34 += v33;
  v36 = *v34;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "jc_wait";
  SkeletalAnim_play(v36, v35, (int)&a2);
  v37 = (_DWORD *)a1[1914];
  v38 = v37[3];
  v39 = v37[2];
  v40 = v37[17];
  if ( v39 > v40 )
    v38 += 4 * v40;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v38 + 4), 1);
  v41 = (_DWORD *)a1[1914];
  v42 = (int *)v41[3];
  v43 = v41[2];
  v44 = v41[17];
  if ( v43 > v44 )
    v42 += v44;
  v45 = *v42;
  FIELD_U32(v45, 20) = 0;
  FIELD_U32(v45, 28) |= 2u;
  v46 = (_DWORD *)a1[1914];
  v47 = v46[3];
  v48 = v46[2];
  v49 = v46[17];
  if ( v48 > v49 )
    v47 += 4 * v49;
  *(_DWORD *)(*(_DWORD *)v47 + 24) = 1065353216;
  v50 = **(_DWORD **)(a1[1914] + 20);
  a1[1916] = v50;
  v51 = a1[1915];
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "koopaJr_clown";
  TexAnim_play(v50, v51, &a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(a1[1916] + 4), 0);
  v52 = a1[1916];
  FIELD_U32(v52, 20) = 0;
  FIELD_U32(v52, 28) |= 2u;
  *(_DWORD *)(a1[1916] + 24) = 0;
  v53 = *(_DWORD *)a1[1914];
  v54 = *(int (__fastcall **)(int, sead__SafeString *))(*(_DWORD *)v53 + 124);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "cover";
  v55 = v54(v53, &a2);
  return (*(int (__fastcall **)(_DWORD, int, _DWORD))(**(_DWORD **)a1[1914] + 136))(*(_DWORD *)a1[1914], v55, 0);
}
