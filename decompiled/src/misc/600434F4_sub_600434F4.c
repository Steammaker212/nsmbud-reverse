/* sub_600434F4
 * address: 0x600434F4   size: 1132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600434F4(Actor *a1)
{
  _BYTE *p_next; // r5
  int v3; // r0
  void *v4; // r5
  int *v5; // r4
  void *Model2; // r6
  ModelWrapper *v7; // r7
  ModelWrapper *v8; // r0
  unsigned int animations; // r2
  int *v10; // r0
  int v11; // r1
  int v12; // r0
  _DWORD *v13; // r0
  int v14; // r1
  unsigned int v15; // r2
  unsigned int v16; // r0
  _DWORD *v17; // r0
  int *v18; // r1
  unsigned int v19; // r2
  unsigned int v20; // r0
  int v21; // r0
  _DWORD *v22; // r0
  int v23; // r1
  unsigned int v24; // r2
  unsigned int v25; // r0
  int v26; // r0
  int v27; // r1
  int v28; // r0
  int v29; // r0
  int (__fastcall *v30)(int, sead__SafeString *); // r2
  int v31; // r0
  int result; // r0
  void *v33; // r5
  int *v34; // r4
  void *v35; // r6
  ModelWrapper *v36; // r7
  ModelWrapper *v37; // r0
  unsigned int v38; // r2
  int *v39; // r0
  int v40; // r1
  int v41; // r0
  _DWORD *v42; // r0
  int v43; // r1
  unsigned int v44; // r2
  unsigned int v45; // r0
  _DWORD *v46; // r0
  int *v47; // r1
  unsigned int v48; // r2
  unsigned int v49; // r0
  int v50; // r0
  _DWORD *v51; // r0
  int v52; // r1
  unsigned int v53; // r2
  unsigned int v54; // r0
  int v55; // r0
  int v56; // r1
  int v57; // r0
  _DWORD *v58; // r0
  int v59; // r1
  int v60; // r0
  sead__SafeString a2; // [sp+14h] [bp-2Ch] BYREF

  sub_600D061C(a1);
  p_next = &a1[147].field_20.next;
  if ( Actor__getProfileId(a1) == 826 )
  {
    *p_next = 1;
    v3 = ResourceMgrRelated_instance;
LABEL_4:
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "koopaJr_clown";
    v4 = (void *)LoadResource(v3, &a2);
    a1[78].field_3C = (int)v4;
    v5 = &a1[78].field_3C;
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "koopaJr_clown";
    Model2 = (void *)Resource_getModel2(v4, &a2, 2, 1, 0, 0, 0, 0, 0);
    v7 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
    v8 = sub_60421830(v7, Model2, 2, 1, 0, 0, 0);
    j_ModelWrapper_setupModel((int)v8, (int)v4, 0, 0);
    v5[1369] = (int)v7;
    animations = (unsigned int)v7[1].texAnims.animations;
    v10 = (int *)FIELD_U32(v7, 0xC);
    v11 = *v5;
    if ( FIELD_U32(v7, 0x8) > animations )
      v10 += animations;
    v12 = *v10;
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "jc_wait";
    SkeletalAnim_play(v12, v11, (int)&a2);
    v13 = (_DWORD *)v5[1369];
    v14 = v13[3];
    v15 = v13[2];
    v16 = v13[17];
    if ( v15 > v16 )
      v14 += 4 * v16;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v14 + 4), 1);
    v17 = (_DWORD *)v5[1369];
    v18 = (int *)v17[3];
    v19 = v17[2];
    v20 = v17[17];
    if ( v19 > v20 )
      v18 += v20;
    v21 = *v18;
    FIELD_U32(v21, 20) = 0;
    FIELD_U32(v21, 28) |= 2u;
    v22 = (_DWORD *)v5[1369];
    v23 = v22[3];
    v24 = v22[2];
    v25 = v22[17];
    if ( v24 > v25 )
      v23 += 4 * v25;
    *(_DWORD *)(*(_DWORD *)v23 + 24) = 1065353216;
    v26 = **(_DWORD **)(v5[1369] + 20);
    v5[1370] = v26;
    v27 = *v5;
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "koopaJr_clown";
    TexAnim_play(v26, v27, &a2);
    AnimationCtrl_setRepeat((ModelAnimation *)(v5[1370] + 4), 0);
    v28 = v5[1370];
    FIELD_U32(v28, 20) = 0;
    FIELD_U32(v28, 28) |= 2u;
    *(_DWORD *)(v5[1370] + 24) = 0;
    v29 = *(_DWORD *)v5[1369];
    v30 = *(int (__fastcall **)(int, sead__SafeString *))(*(_DWORD *)v29 + 124);
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "cover";
    v31 = v30(v29, &a2);
    return (*(int (__fastcall **)(_DWORD, int, _DWORD))(**(_DWORD **)v5[1369] + 136))(*(_DWORD *)v5[1369], v31, 0);
  }
  v3 = ResourceMgrRelated_instance;
  if ( *p_next )
    goto LABEL_4;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "koopaJr_clown_b";
  v33 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
  a1[78].field_3C = (int)v33;
  v34 = &a1[78].field_3C;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "koopaJr_clown_b";
  v35 = (void *)Resource_getModel2(v33, &a2, 2, 1, 1, 1, 0, 0, 0);
  v36 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v37 = sub_60421830(v36, v35, 2, 1, 1, 1, 0);
  j_ModelWrapper_setupModel((int)v37, (int)v33, 0, 0);
  v34[1] = (int)v36;
  v38 = (unsigned int)v36[1].texAnims.animations;
  v39 = (int *)FIELD_U32(v36, 0xC);
  v40 = *v34;
  if ( FIELD_U32(v36, 0x8) > v38 )
    v39 += v38;
  v41 = *v39;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "jcb_wait";
  SkeletalAnim_play(v41, v40, (int)&a2);
  v42 = (_DWORD *)v34[1];
  v43 = v42[3];
  v44 = v42[2];
  v45 = v42[17];
  if ( v44 > v45 )
    v43 += 4 * v45;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v43 + 4), 1);
  v46 = (_DWORD *)v34[1];
  v47 = (int *)v46[3];
  v48 = v46[2];
  v49 = v46[17];
  if ( v48 > v49 )
    v47 += v49;
  v50 = *v47;
  FIELD_U32(v50, 20) = 0;
  FIELD_U32(v50, 28) |= 2u;
  v51 = (_DWORD *)v34[1];
  v52 = v51[3];
  v53 = v51[2];
  v54 = v51[17];
  if ( v53 > v54 )
    v52 += 4 * v54;
  *(_DWORD *)(*(_DWORD *)v52 + 24) = 1065353216;
  v55 = **(_DWORD **)(v34[1] + 20);
  v34[2] = v55;
  v56 = *v34;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "koopaJr_clown_b";
  TexAnim_play(v55, v56, &a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(v34[2] + 4), 0);
  v57 = v34[2];
  FIELD_U32(v57, 20) = 0;
  FIELD_U32(v57, 28) |= 2u;
  *(_DWORD *)(v34[2] + 24) = 0;
  v58 = **(_DWORD ***)(v34[1] + 28);
  v34[3] = (int)v58;
  v59 = *v34;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "jcb_damage_s";
  ShuAnim_play(v58, v59, (int)&a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(v34[3] + 4), 1);
  v60 = v34[3];
  FIELD_U32(v60, 20) = 0;
  FIELD_U32(v60, 28) |= 2u;
  result = v34[3];
  FIELD_U32(result, 24) = 0;
  return result;
}
