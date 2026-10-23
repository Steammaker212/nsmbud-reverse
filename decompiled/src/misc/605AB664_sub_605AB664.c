/* sub_605AB664
 * address: 0x605AB664   size: 2672   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605AB664(int a1)
{
  void *v2; // r5
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  _DWORD **v6; // r8
  int v7; // r0
  void (__fastcall ***v8)(_DWORD, _DWORD); // r0
  void (__fastcall *v9)(_DWORD, _DWORD); // r7
  void (__fastcall ***v10)(_DWORD, int, void *, sead__SafeString *, int *); // r0
  void (__fastcall *v11)(_DWORD, int, void *, sead__SafeString *, int *); // r7
  void (__fastcall ***v12)(_DWORD, int, void *, sead__SafeString *, int *); // r0
  void (__fastcall *v13)(_DWORD, int, void *, sead__SafeString *, int *); // r7
  void *v14; // r7
  ModelWrapper *v15; // r6
  ModelWrapper *v16; // r0
  int v17; // r0
  void (__fastcall ***v18)(_DWORD, _DWORD, void *, sead__SafeString *, int *); // r0
  void (__fastcall *v19)(_DWORD, _DWORD, void *, sead__SafeString *, int *); // r6
  void (__fastcall ***v20)(_DWORD, int, void *, sead__SafeString *, int *); // r0
  void (__fastcall *v21)(_DWORD, int, void *, sead__SafeString *, int *); // r6
  void (__fastcall ***v22)(_DWORD, int, void *, sead__SafeString *, int *); // r0
  void (__fastcall *v23)(_DWORD, int, void *, sead__SafeString *, int *); // r6
  void *v24; // r6
  ModelWrapper *v25; // r7
  ModelWrapper *v26; // r0
  int v27; // r6
  void (__fastcall ***v28)(_DWORD, int, void *, sead__SafeString *, int *); // r0
  void (__fastcall *v29)(_DWORD, int, void *, sead__SafeString *, int *); // r7
  int v30; // r0
  void *v31; // r6
  ModelWrapper *v32; // r7
  ModelWrapper *v33; // r0
  int v34; // r6
  void (__fastcall ***v35)(_DWORD, int, void *, sead__SafeString *, int *); // r0
  void (__fastcall *v36)(_DWORD, int, void *, sead__SafeString *, int *); // r7
  int v37; // r0
  void *v39; // r5
  void *v40; // r6
  ModelWrapper *v41; // r7
  ModelWrapper *v42; // r0
  int **v43; // r8
  int v44; // r0
  void (__fastcall ***v45)(_DWORD, _DWORD, void *, sead__SafeString *, int *); // r0
  void (__fastcall *v46)(_DWORD, _DWORD, void *, sead__SafeString *, int *); // r7
  void (__fastcall ***v47)(_DWORD, int, void *, sead__SafeString *, int *); // r0
  void (__fastcall *v48)(_DWORD, int, void *, sead__SafeString *, int *); // r7
  void (__fastcall ***v49)(_DWORD, int, void *, sead__SafeString *, int *); // r0
  void (__fastcall *v50)(_DWORD, int, void *, sead__SafeString *, int *); // r7
  void (__fastcall ***v51)(_DWORD, int, void *, sead__SafeString *, int *); // r0
  void (__fastcall *v52)(_DWORD, int, void *, sead__SafeString *, int *); // r7
  float v53; // s18
  float v54; // s16
  float v55; // s20
  float v56; // s0
  float v57; // s0
  int v58; // r0
  int v59; // r0
  unsigned int v60; // r5
  float *v61; // r4
  float *v62; // r6
  float v63; // s4
  float v64; // s0
  float v65; // s2
  float v66; // s10
  float v67; // s5
  float v68; // s6
  float v69; // s9
  float v70; // s1
  float v71; // s12
  int v72; // r0
  sead__SafeString a2; // [sp+28h] [bp-50h] BYREF
  float v74; // [sp+30h] [bp-48h]
  int v75; // [sp+34h] [bp-44h]

  if ( FIELD_U8(a1, 6894) || FIELD_U32(a1, 6836) )
  {
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "obj_waterhalf";
    v2 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "obj_waterhalf_under";
    Model2 = (void *)Resource_getModel2(v2, &a2, 1, 0, 1, 0, 0, 0, 0);
    v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
    v5 = ModelWrapper_ctor(v4, Model2, 1, 0, 1, 0, 0);
    ModelWrapper_setup(v5, v2, 0, 0);
    FIELD_U32(a1, 6104) = v4;
    v6 = (_DWORD **)(a1 + 6104);
    v7 = (int)*FIELD_U32(v4, 0x1C);
    v6[1] = (_DWORD *)v7;
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "obj_waterhalf_under";
    sub_60446088(v7, (int)v2, &a2);
    AnimationCtrl_setRepeat((ModelAnimation *)(v6[1] + 1), 1);
    v6[1][6] = 1065353216;
    v8 = (void (__fastcall ***)(_DWORD, _DWORD))(*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)**v6 + 132))(**v6, 0);
    v9 = **v8;
    a2.vtable = 0;
    v9(v8, 0);
    v10 = (void (__fastcall ***)(_DWORD, int, void *, sead__SafeString *, int *))(*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)**v6 + 132))(
                                                                                   **v6,
                                                                                   0);
    v11 = **v10;
    a2.vtable = 0;
    v11(v10, 1, &unk_60B023B4, &a2, &dword_60B3B944);
    v12 = (void (__fastcall ***)(_DWORD, int, void *, sead__SafeString *, int *))(*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)**v6 + 132))(
                                                                                   **v6,
                                                                                   0);
    v13 = **v12;
    a2.vtable = 0;
    v13(v12, 2, &unk_60B023B4, &a2, &dword_60B3B944);
    *(_DWORD *)(**v6 + 36) = ((unsigned int)*(v6 - 1521) >> 8) & 4 ^ 0xF;
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "obj_waterhalf_middle";
    v14 = (void *)Resource_getModel2(v2, &a2, 1, 0, 1, 0, 0, 0, 0);
    v15 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
    v16 = ModelWrapper_ctor(v15, v14, 1, 0, 1, 0, 0);
    ModelWrapper_setup(v16, v2, 0, 0);
    v6[16557] = &FIELD_U32(v15, 0x0);
    v17 = (int)*FIELD_U32(v15, 0x1C);
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "obj_waterhalf_middle";
    sub_60446088(v17, (int)v2, &a2);
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v6[16557][7] + 4), 1);
    *(_DWORD *)(*(_DWORD *)v6[16557][7] + 24) = 1065353216;
    v18 = (void (__fastcall ***)(_DWORD, _DWORD, void *, sead__SafeString *, int *))(*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)*v6[16557] + 132))(
                                                                                      *v6[16557],
                                                                                      0);
    v19 = **v18;
    a2.vtable = 0;
    v19(v18, 0, &unk_60B023B4, &a2, &dword_60B3B944);
    v20 = (void (__fastcall ***)(_DWORD, int, void *, sead__SafeString *, int *))(*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)*v6[16557] + 132))(
                                                                                   *v6[16557],
                                                                                   0);
    v21 = **v20;
    a2.vtable = 0;
    v21(v20, 1, &unk_60B023B4, &a2, &dword_60B3B944);
    v22 = (void (__fastcall ***)(_DWORD, int, void *, sead__SafeString *, int *))(*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)*v6[16557] + 132))(
                                                                                   *v6[16557],
                                                                                   0);
    v23 = **v22;
    a2.vtable = 0;
    v23(v22, 2, &unk_60B023B4, &a2, &dword_60B3B944);
    *(_DWORD *)(*v6[16557] + 36) = ((unsigned int)*(v6 - 1521) >> 8) & 4 ^ 0xF;
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "obj_waterhalf_behind";
    v24 = (void *)Resource_getModel2(v2, &a2, 1, 0, 1, 0, 0, 0, 0);
    v25 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
    v26 = ModelWrapper_ctor(v25, v24, 1, 0, 1, 0, 0);
    ModelWrapper_setup(v26, v2, 0, 0);
    v6[16556] = &FIELD_U32(v25, 0x0);
    v27 = (int)*FIELD_U32(v25, 0x1C);
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "obj_waterhalf_behind";
    sub_60446088(v27, (int)v2, &a2);
    AnimationCtrl_setRepeat((ModelAnimation *)(v27 + 4), 1);
    FIELD_U32(v27, 24) = 1065353216;
    v28 = (void (__fastcall ***)(_DWORD, int, void *, sead__SafeString *, int *))(*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)*v6[16556] + 132))(
                                                                                   *v6[16556],
                                                                                   0);
    v29 = **v28;
    a2.vtable = 0;
    v29(v28, 1, &unk_60B023B4, &a2, &dword_60B3B944);
    v30 = *v6[16556];
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "FB_dummy";
    sub_60418060(v30, (int)&a2);
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "obj_waterhalf_behind_middle";
    v31 = (void *)Resource_getModel2(v2, &a2, 1, 0, 1, 0, 0, 0, 0);
    v32 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
    v33 = ModelWrapper_ctor(v32, v31, 1, 0, 1, 0, 0);
    ModelWrapper_setup(v33, v2, 0, 0);
    v6[16558] = &FIELD_U32(v32, 0x0);
    v34 = (int)*FIELD_U32(v32, 0x1C);
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "obj_waterhalf_behind_middle";
    sub_60446088(v34, (int)v2, &a2);
    AnimationCtrl_setRepeat((ModelAnimation *)(v34 + 4), 1);
    FIELD_U32(v34, 24) = 1065353216;
    v35 = (void (__fastcall ***)(_DWORD, int, void *, sead__SafeString *, int *))(*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)*v6[16558] + 132))(
                                                                                   *v6[16558],
                                                                                   0);
    v36 = **v35;
    a2.vtable = 0;
    v36(v35, 1, &unk_60B023B4, &a2, &dword_60B3B944);
    v37 = *v6[16558];
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "FB_dummy";
    return sub_60418060(v37, (int)&a2);
  }
  else
  {
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "obj_waterfull";
    v39 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "obj_waterfull_caustics";
    v40 = (void *)Resource_getModel2(v39, &a2, 1, 0, 1, 0, 0, 0, 0);
    v41 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
    v42 = ModelWrapper_ctor(v41, v40, 1, 0, 1, 0, 0);
    ModelWrapper_setup(v42, v39, 0, 0);
    FIELD_U32(a1, 6104) = v41;
    v43 = (int **)(a1 + 6104);
    v44 = (int)*FIELD_U32(v41, 0x1C);
    v43[1] = (int *)v44;
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "obj_waterfull_caustics";
    sub_60446088(v44, (int)v39, &a2);
    AnimationCtrl_setRepeat((ModelAnimation *)(v43[1] + 1), 1);
    v43[1][6] = 1065353216;
    v45 = (void (__fastcall ***)(_DWORD, _DWORD, void *, sead__SafeString *, int *))(*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)**v43 + 132))(
                                                                                      **v43,
                                                                                      0);
    v46 = **v45;
    a2.vtable = 0;
    v46(v45, 0, &unk_60B023B4, &a2, &dword_60B3B944);
    v47 = (void (__fastcall ***)(_DWORD, int, void *, sead__SafeString *, int *))(*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)**v43 + 132))(
                                                                                   **v43,
                                                                                   0);
    v48 = **v47;
    a2.vtable = 0;
    v48(v47, 1, &unk_60B023B4, &a2, &dword_60B3B944);
    v49 = (void (__fastcall ***)(_DWORD, int, void *, sead__SafeString *, int *))(*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)**v43 + 132))(
                                                                                   **v43,
                                                                                   0);
    v50 = **v49;
    a2.vtable = 0;
    v50(v49, 2, &unk_60B023B4, &a2, &dword_60B3B944);
    v51 = (void (__fastcall ***)(_DWORD, int, void *, sead__SafeString *, int *))(*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)**v43 + 132))(
                                                                                   **v43,
                                                                                   0);
    v52 = **v51;
    a2.vtable = 0;
    v52(v51, 3, &unk_60B023B4, &a2, &dword_60B3B944);
    v53 = unk_60CB01D4;
    v54 = unk_60CB01D0;
    v55 = unk_60CB01D8;
    v56 = sqrtf((float)((float)(v53 * v53) + (float)(v54 * v54)) + (float)(v55 * v55));
    if ( v56 > 0.0 )
    {
      v57 = 1.0 / v56;
      v55 = unk_60CB01D8 * v57;
      v53 = unk_60CB01D4 * v57;
      v54 = unk_60CB01D0 * v57;
    }
    v58 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)**v43 + 132))(**v43, 0);
    *(float *)&a2.vtable = v54;
    *(float *)&a2.cstr = v53;
    v74 = v55;
    v75 = 1056964608;
    (*(void (__fastcall **)(int, _DWORD, sead__SafeString *))(*(_DWORD *)v58 + 20))(v58, 0, &a2);
    *(_DWORD *)(**v43 + 36) = 3;
    *(_DWORD *)(**v43 + 312) = 10;
    v59 = dword_60CBD830;
    FIELD_U8(dword_60CBD830, 1510) = 1;
    v60 = ((unsigned int)dword_60CB01DC >> 20) & 0xFF0;
    v61 = (float *)((char *)sinLutTable + (((unsigned int)dword_60CB01E0 >> 20) & 0xFF0));
    v62 = (float *)((char *)sinLutTable + (((unsigned int)dword_60CB01E4 >> 20) & 0xFF0));
    v63 = (float)(dword_60CB01E4 & 0xFFFFFF) * 0.000000059605;
    v64 = (float)(dword_60CB01E0 & 0xFFFFFF) * 0.000000059605;
    v65 = (float)(dword_60CB01DC & 0xFFFFFF) * 0.000000059605;
    v66 = v62[2] + (float)(v63 * v62[3]);
    v67 = v61[2] + (float)(v64 * v61[3]);
    v68 = *v62 + (float)(v63 * v62[1]);
    v69 = *(float *)((char *)&sinLutTable[2] + v60) + (float)(v65 * *(float *)((char *)&sinLutTable[3] + v60));
    v70 = *v61 + (float)(v64 * v61[1]);
    v71 = *(float *)((char *)sinLutTable + v60) + (float)(v65 * *(float *)((char *)&sinLutTable[1] + v60));
    FIELD_F32(v59, 1512) = v67 * v66;
    FIELD_F32(v59, 1528) = v67 * v68;
    FIELD_F32(v59, 1544) = -v70;
    FIELD_F32(v59, 1516) = (float)((float)(v71 * v70) * v66) - (float)(v69 * v68);
    FIELD_F32(v59, 1532) = (float)(v69 * v66) + (float)((float)(v71 * v70) * v68);
    FIELD_F32(v59, 1548) = v71 * v67;
    FIELD_F32(v59, 1520) = (float)(v70 * (float)(v69 * v66)) + (float)(v71 * v68);
    FIELD_F32(v59, 1536) = (float)(v70 * (float)(v69 * v68)) - (float)(v71 * v66);
    FIELD_F32(v59, 1552) = v69 * v67;
    FIELD_U32(v59, 1524) = 0;
    FIELD_U32(v59, 1540) = 0;
    FIELD_U32(v59, 1556) = 0;
    FIELD_U32(v59, 1560) = 0;
    FIELD_U32(v59, 1564) = 0;
    FIELD_U32(v59, 1568) = 0;
    FIELD_U32(v59, 1572) = 1065353216;
    v72 = **v43;
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "GB_dummy";
    return sub_6072100C(v72, &a2);
  }
}
