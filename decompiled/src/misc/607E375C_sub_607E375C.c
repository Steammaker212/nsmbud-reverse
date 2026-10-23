/* sub_607E375C
 * address: 0x607E375C   size: 3940   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607E375C(_DWORD *a1)
{
  _DWORD *v2; // r5
  int v3; // r6
  int v4; // r7
  int v5; // r7
  int v6; // r7
  void *v7; // r5
  void *Model; // r6
  ModelWrapper *v9; // r7
  ModelWrapper *v10; // r0
  void *v11; // r6
  ModelWrapper *v12; // r7
  ModelWrapper *v13; // r0
  void *v14; // r6
  ModelWrapper *v15; // r7
  ModelWrapper *v16; // r0
  void *v17; // r6
  ModelWrapper *v18; // r7
  ModelWrapper *v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int *v24; // r1
  int v25; // r4
  float v26; // s20
  int *v27; // r1
  int v28; // r4
  float v29; // s20
  int *v30; // r1
  int v31; // r4
  float v32; // s20
  int *v33; // r1
  int v34; // r4
  float v35; // s20
  void *v36; // r5
  void *v37; // r6
  ModelWrapper *v38; // r7
  ModelWrapper *v39; // r0
  void *v40; // r6
  ModelWrapper *v41; // r7
  ModelWrapper *v42; // r0
  void *v43; // r6
  ModelWrapper *v44; // r7
  ModelWrapper *v45; // r0
  void *v46; // r6
  ModelWrapper *v47; // r7
  ModelWrapper *v48; // r0
  int v49; // r0
  int v50; // r0
  void *v51; // r6
  ModelWrapper *v52; // r7
  ModelWrapper *v53; // r0
  void *v54; // r6
  ModelWrapper *v55; // r7
  ModelWrapper *v56; // r0
  int v57; // r0
  int v58; // r0
  int v59; // r0
  unsigned int v60; // r1
  _DWORD **v61; // r0
  _DWORD *v62; // r0
  int v63; // r0
  unsigned int v64; // r1
  int v65; // r0
  int v66; // r0
  unsigned int v67; // r1
  int *v68; // r0
  int v69; // r0
  int v70; // r0
  unsigned int v71; // r1
  int v72; // r0
  int v73; // r0
  unsigned int v74; // r1
  int v75; // r0
  void *v76; // r6
  ModelWrapper *v77; // r7
  ModelWrapper *v78; // r0
  int v79; // r0
  int v80; // r0
  int v81; // r0
  unsigned int v82; // r1
  _DWORD **v83; // r0
  _DWORD *v84; // r0
  int v85; // r0
  unsigned int v86; // r1
  int v87; // r0
  int v88; // r0
  unsigned int v89; // r1
  int *v90; // r0
  int v91; // r0
  int v92; // r0
  unsigned int v93; // r1
  int v94; // r0
  int v95; // r0
  unsigned int v96; // r1
  int v97; // r0
  sead__SafeString path; // [sp+24h] [bp-84h] BYREF
  int v100; // [sp+2Ch] [bp-7Ch]
  sead__SafeString identifier; // [sp+30h] [bp-78h] BYREF
  int v102; // [sp+38h] [bp-70h]
  int v103; // [sp+3Ch] [bp-6Ch]
  int v104; // [sp+40h] [bp-68h]
  int v105; // [sp+44h] [bp-64h]
  int v106; // [sp+48h] [bp-60h]
  int v107; // [sp+4Ch] [bp-5Ch]
  int v108; // [sp+50h] [bp-58h]
  int v109; // [sp+54h] [bp-54h]
  int v110; // [sp+58h] [bp-50h]
  int v111; // [sp+5Ch] [bp-4Ch]

  sub_60023F4C();
  v2 = (_DWORD *)operator_new(0x390u);
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "DarkCloudDemo";
  sub_60443FE0((int)v2, (int)&identifier);
  sub_60444108(v2, 3, 128, 5, 5, 0);
  identifier.vtable = &sead__SafeStringBase__vtable;
  v3 = dword_60CD0B40;
  identifier.cstr = "3D";
  v4 = operator_new_8DE25C(0x1FCu, 0, 4);
  sub_6044364C();
  sub_60958220(v3, v4, 6, &identifier, 0, 0);
  sub_60443628(v4, (int)v2);
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "DepthShadow";
  v5 = operator_new_8DE25C(0x1550u, 0, 4);
  sub_60446220(v5);
  sub_60958220(v3, v5, 5, &identifier, 0, 0);
  sub_60443628(v5, (int)v2);
  FIELD_U8(v5, 5449) = 1;
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "Reflection";
  v6 = operator_new_8DE25C(0x898u, 0, 4);
  sub_60441B18(v6);
  sub_60958220(v3, v6, 3, &identifier, 0, 0);
  sub_60443628(v6, (int)v2);
  sub_604269A8(dword_60C9BBD4);
  sub_60819D20(dword_60CC6BF4);
  path.vtable = &sead__SafeStringBase__vtable;
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "cobFlagPeach";
  path.cstr = "Model/cobFlagPeach.Nin_NX_NVN.szs";
  ArchiveManager_loadSzs(ArchiveManagerMaybe_instance, &identifier, &path, 0, 1);
  identifier.vtable = &sead__SafeStringBase__vtable;
  path.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "cobFlagPeach";
  path.cstr = "cobFlagPeach";
  sub_6043B2D8(ResourceMgrRelated_instance, &identifier, (int)&path, 0);
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "cobFlagPeach";
  v7 = (void *)LoadResource(ResourceMgrRelated_instance, &identifier);
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "cobFlagPeach";
  Model = (void *)Resource_getModel(v7, &identifier, 6, 1, 1, 2, 1, 1, 1, 0);
  v9 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v10 = ModelWrapper_ctor(v9, Model, 1, 1, 2, 1, 1);
  ModelWrapper_setup(v10, v7, 0, 0);
  a1[642] = v9;
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "cobFlagPeach";
  v11 = (void *)Resource_getModel(v7, &identifier, 6, 1, 1, 2, 1, 1, 1, 0);
  v12 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v13 = ModelWrapper_ctor(v12, v11, 1, 1, 2, 1, 1);
  ModelWrapper_setup(v13, v7, 0, 0);
  a1[643] = v12;
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "cobFlagPeach";
  v14 = (void *)Resource_getModel(v7, &identifier, 6, 1, 1, 2, 1, 1, 1, 0);
  v15 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v16 = ModelWrapper_ctor(v15, v14, 1, 1, 2, 1, 1);
  ModelWrapper_setup(v16, v7, 0, 0);
  a1[644] = v15;
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "cobFlagPeach";
  v17 = (void *)Resource_getModel(v7, &identifier, 6, 1, 1, 2, 1, 1, 1, 0);
  v18 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v19 = ModelWrapper_ctor(v18, v17, 1, 1, 2, 1, 1);
  ModelWrapper_setup(v19, v7, 0, 0);
  a1[645] = v18;
  v20 = a1[642];
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "cobFlagPeachWait";
  sub_6040F4B8(v20, (int)&identifier, 1, 1.0, 0.0);
  v21 = a1[643];
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "cobFlagPeachWait";
  sub_6040F4B8(v21, (int)&identifier, 1, 1.0, 0.0);
  v22 = a1[644];
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "cobFlagPeachWait";
  sub_6040F4B8(v22, (int)&identifier, 1, 1.0, 0.0);
  v23 = a1[645];
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "cobFlagPeachWait";
  sub_6040F4B8(v23, (int)&identifier, 1, 1.0, 0.0);
  sub_60427BC8(dword_60C9BBD4, *(_DWORD *)a1[642], 7, 0);
  sub_60427BC8(dword_60C9BBD4, *(_DWORD *)a1[643], 7, 0);
  sub_60427BC8(dword_60C9BBD4, *(_DWORD *)a1[644], 7, 0);
  sub_60427BC8(dword_60C9BBD4, *(_DWORD *)a1[645], 7, 0);
  v24 = *(int **)(a1[642] + 12);
  v25 = *v24;
  v26 = *(float *)(*v24 + 8);
  FIELD_F32(v25, 20) = (float)(v26
                               * (float)(COERCE_FLOAT(
                                           (sead__Random__getU32((void *)sead__GlobalRandom__sInstance) >> 9)
                                         | 0x3F800000)
                                       + -1.0))
                       + 0.0;
  FIELD_U32(v25, 28) |= 2u;
  v27 = *(int **)(a1[643] + 12);
  v28 = *v27;
  v29 = *(float *)(*v27 + 8);
  FIELD_F32(v28, 20) = (float)(v29
                               * (float)(COERCE_FLOAT(
                                           (sead__Random__getU32((void *)sead__GlobalRandom__sInstance) >> 9)
                                         | 0x3F800000)
                                       + -1.0))
                       + 0.0;
  FIELD_U32(v28, 28) |= 2u;
  v30 = *(int **)(a1[644] + 12);
  v31 = *v30;
  v32 = *(float *)(*v30 + 8);
  FIELD_F32(v31, 20) = (float)(v32
                               * (float)(COERCE_FLOAT(
                                           (sead__Random__getU32((void *)sead__GlobalRandom__sInstance) >> 9)
                                         | 0x3F800000)
                                       + -1.0))
                       + 0.0;
  FIELD_U32(v31, 28) |= 2u;
  v33 = *(int **)(a1[645] + 12);
  v34 = *v33;
  v35 = *(float *)(*v33 + 8);
  FIELD_F32(v34, 20) = (float)(v35
                               * (float)(COERCE_FLOAT(
                                           (sead__Random__getU32((void *)sead__GlobalRandom__sInstance) >> 9)
                                         | 0x3F800000)
                                       + -1.0))
                       + 0.0;
  FIELD_U32(v34, 28) |= 2u;
  path.vtable = (void *)1056964608;
  path.cstr = (char *)1056964608;
  v100 = 1056964608;
  identifier.vtable = (void *)1065353216;
  identifier.cstr = 0;
  v102 = 0;
  v104 = 0;
  v105 = 1065353216;
  v106 = 0;
  v108 = 0;
  v109 = 0;
  v110 = 1065353216;
  v103 = -1017774080;
  v107 = 1137049600;
  v111 = -1003962368;
  (*(void (__fastcall **)(_DWORD, sead__SafeString *))(**(_DWORD **)a1[642] + 60))(*(_DWORD *)a1[642], &identifier);
  (*(void (__fastcall **)(_DWORD, sead__SafeString *))(**(_DWORD **)a1[642] + 68))(*(_DWORD *)a1[642], &path);
  identifier.vtable = (void *)1065353216;
  identifier.cstr = 0;
  v102 = 0;
  v104 = 0;
  v105 = 1065353216;
  v106 = 0;
  v108 = 0;
  v109 = 0;
  v110 = 1065353216;
  v103 = -1024589824;
  v107 = 1141522432;
  v111 = -1001291776;
  (*(void (__fastcall **)(_DWORD, sead__SafeString *))(**(_DWORD **)a1[643] + 60))(*(_DWORD *)a1[643], &identifier);
  (*(void (__fastcall **)(_DWORD, sead__SafeString *))(**(_DWORD **)a1[643] + 68))(*(_DWORD *)a1[643], &path);
  identifier.vtable = (void *)1065353216;
  identifier.cstr = 0;
  v102 = 0;
  v104 = 0;
  v105 = 1065353216;
  v106 = 0;
  v108 = 0;
  v109 = 0;
  v110 = 1065353216;
  v103 = 0;
  v107 = 1143046144;
  v111 = -1001750528;
  (*(void (__fastcall **)(_DWORD, sead__SafeString *))(**(_DWORD **)a1[644] + 60))(*(_DWORD *)a1[644], &identifier);
  (*(void (__fastcall **)(_DWORD, sead__SafeString *))(**(_DWORD **)a1[644] + 68))(*(_DWORD *)a1[644], &path);
  identifier.vtable = (void *)1065353216;
  identifier.cstr = 0;
  v102 = 0;
  v104 = 0;
  v105 = 1065353216;
  v106 = 0;
  v108 = 0;
  v109 = 0;
  v110 = 1065353216;
  v103 = 1129709568;
  v107 = 1137049600;
  v111 = -1004175360;
  (*(void (__fastcall **)(_DWORD, sead__SafeString *))(**(_DWORD **)a1[645] + 60))(*(_DWORD *)a1[645], &identifier);
  (*(void (__fastcall **)(_DWORD, sead__SafeString *))(**(_DWORD **)a1[645] + 68))(*(_DWORD *)a1[645], &path);
  identifier.vtable = &sead__SafeStringBase__vtable;
  path.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "CS_W8a";
  path.cstr = "CS_W8a";
  sub_6043B2D8(ResourceMgrRelated_instance, &identifier, (int)&path, 0);
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "CS_W8a";
  v36 = (void *)LoadResource(ResourceMgrRelated_instance, &identifier);
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "CS_W8a_World";
  v37 = (void *)Resource_getModel(v36, &identifier, 6, 1, 1, 2, 1, 1, 1, 0);
  v38 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v39 = ModelWrapper_ctor(v38, v37, 1, 1, 2, 1, 1);
  ModelWrapper_setup(v39, v36, 0, 0);
  a1[639] = v38;
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "CS_W8a_Castle";
  v40 = (void *)Resource_getModel(v36, &identifier, 6, 1, 1, 2, 1, 1, 1, 0);
  v41 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v42 = ModelWrapper_ctor(v41, v40, 1, 1, 2, 1, 1);
  ModelWrapper_setup(v42, v36, 0, 0);
  a1[640] = v41;
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "CS_W8a_Wall";
  v43 = (void *)Resource_getModel(v36, &identifier, 6, 1, 1, 2, 1, 1, 1, 0);
  v44 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v45 = ModelWrapper_ctor(v44, v43, 1, 1, 2, 1, 1);
  ModelWrapper_setup(v45, v36, 0, 0);
  a1[641] = v44;
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "CS_W8a_Ocean";
  v46 = (void *)Resource_getModel(v36, &identifier, 6, 1, 1, 2, 1, 1, 1, 0);
  v47 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v48 = ModelWrapper_ctor(v47, v46, 1, 1, 2, 1, 1);
  ModelWrapper_setup(v48, v36, 0, 0);
  a1[646] = v47;
  v49 = (int)*FIELD_U32(v47, 0x18).animations;
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "CS_W8a_Ocean";
  sub_60446088(v49, (int)v36, &identifier);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(a1[646] + 28) + 4), 1);
  v50 = **(_DWORD **)(a1[646] + 28);
  FIELD_U32(v50, 20) = 0;
  FIELD_U32(v50, 28) |= 2u;
  *(_DWORD *)(**(_DWORD **)(a1[646] + 28) + 24) = 1065353216;
  sub_6041838C((ModelAnimation *)(**(_DWORD **)(a1[646] + 28) + 4));
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "CS_W8a_Synchro";
  v51 = (void *)Resource_getModel(v36, &identifier, 6, 1, 1, 2, 1, 1, 1, 0);
  v52 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v53 = ModelWrapper_ctor(v52, v51, 1, 1, 2, 1, 1);
  ModelWrapper_setup(v53, v36, 0, 0);
  a1[647] = v52;
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "CS_W8a_Synchro";
  sub_6040F4B8((int)v52, (int)&identifier, 1, 1.0, 0.0);
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "CS_W8a_CloudBG";
  v54 = (void *)Resource_getModel(v36, &identifier, 6, 1, 1, 2, 1, 1, 1, 0);
  v55 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v56 = ModelWrapper_ctor(v55, v54, 1, 1, 2, 1, 1);
  ModelWrapper_setup(v56, v36, 0, 0);
  a1[648] = v55;
  v57 = (int)*FIELD_U32(v55, 0x18).animations;
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "CS_W8a_CloudBG";
  sub_60446088(v57, (int)v36, &identifier);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(a1[648] + 28) + 4), 1);
  v58 = **(_DWORD **)(a1[648] + 28);
  FIELD_U32(v58, 20) = 0;
  FIELD_U32(v58, 28) |= 2u;
  *(_DWORD *)(**(_DWORD **)(a1[648] + 28) + 24) = 1065353216;
  sub_6041838C((ModelAnimation *)(**(_DWORD **)(a1[648] + 28) + 4));
  v59 = a1[648];
  v60 = FIELD_U32(v59, 24);
  v61 = *(_DWORD ***)(v59 + 28);
  if ( v60 > 1 )
    ++v61;
  v62 = *v61;
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "CS_W8a_CloudBG_EndDemo";
  ShuAnim_play(v62, (int)v36, &identifier);
  v63 = a1[648];
  v64 = FIELD_U32(v63, 24);
  v65 = FIELD_U32(v63, 28);
  if ( v64 > 1 )
    v65 += 4;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v65 + 4), 0);
  v66 = a1[648];
  v67 = FIELD_U32(v66, 24);
  v68 = *(int **)(v66 + 28);
  if ( v67 > 1 )
    ++v68;
  v69 = *v68;
  FIELD_U32(v69, 20) = 0;
  FIELD_U32(v69, 28) |= 2u;
  v70 = a1[648];
  v71 = FIELD_U32(v70, 24);
  v72 = FIELD_U32(v70, 28);
  if ( v71 > 1 )
    v72 += 4;
  *(_DWORD *)(*(_DWORD *)v72 + 24) = 1065353216;
  v73 = a1[648];
  v74 = FIELD_U32(v73, 24);
  v75 = FIELD_U32(v73, 28);
  if ( v74 > 1 )
    v75 += 4;
  sub_6041838C((ModelAnimation *)(*(_DWORD *)v75 + 4));
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "CS_W8a_DarkCloud_Demo2";
  v76 = (void *)Resource_getModel(v36, &identifier, 6, 1, 1, 2, 1, 1, 1, 0);
  v77 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v78 = ModelWrapper_ctor(v77, v76, 1, 1, 2, 1, 1);
  ModelWrapper_setup(v78, v36, 0, 0);
  a1[649] = v77;
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "CS_W8a_DarkCloud_EndDemo";
  sub_6040F4B8((int)v77, (int)&identifier, 0, 1.0, 0.0);
  v79 = **(_DWORD **)(a1[649] + 28);
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "CS_W8a_DarkCloud_EndDemo";
  sub_60446088(v79, (int)v36, &identifier);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(a1[649] + 28) + 4), 0);
  v80 = **(_DWORD **)(a1[649] + 28);
  FIELD_U32(v80, 20) = 0;
  FIELD_U32(v80, 28) |= 2u;
  *(_DWORD *)(**(_DWORD **)(a1[649] + 28) + 24) = 1065353216;
  sub_6041838C((ModelAnimation *)(**(_DWORD **)(a1[649] + 28) + 4));
  v81 = a1[649];
  v82 = FIELD_U32(v81, 24);
  v83 = *(_DWORD ***)(v81 + 28);
  if ( v82 > 1 )
    ++v83;
  v84 = *v83;
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "CS_W8a_DarkCloud_EndDemo";
  ShuAnim_play(v84, (int)v36, &identifier);
  v85 = a1[649];
  v86 = FIELD_U32(v85, 24);
  v87 = FIELD_U32(v85, 28);
  if ( v86 > 1 )
    v87 += 4;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v87 + 4), 0);
  v88 = a1[649];
  v89 = FIELD_U32(v88, 24);
  v90 = *(int **)(v88 + 28);
  if ( v89 > 1 )
    ++v90;
  v91 = *v90;
  FIELD_U32(v91, 20) = 0;
  FIELD_U32(v91, 28) |= 2u;
  v92 = a1[649];
  v93 = FIELD_U32(v92, 24);
  v94 = FIELD_U32(v92, 28);
  if ( v93 > 1 )
    v94 += 4;
  *(_DWORD *)(*(_DWORD *)v94 + 24) = 1065353216;
  v95 = a1[649];
  v96 = FIELD_U32(v95, 24);
  v97 = FIELD_U32(v95, 28);
  if ( v96 > 1 )
    v97 += 4;
  sub_6041838C((ModelAnimation *)(*(_DWORD *)v97 + 4));
  sub_604269A8(dword_60C9BBD4);
  a1[654] = 480;
  return sub_600240A4();
}
