/* obj_dokan_CB_wait_ref
 * address: 0x6069DBD8   size: 1020   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall obj_dokan_CB_wait_ref(int a1, int a2, float a3)
{
  sead__SafeString *v6; // r5
  void *Resource; // r7
  sead__SafeString *v8; // r9
  void *Model2; // r10
  ModelWrapper *v10; // r5
  ModelWrapper *v11; // r0
  void *v12; // r11
  sead__SafeString *v13; // r8
  void *v14; // r5
  ModelWrapper *v15; // r7
  ModelWrapper *v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int result; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0
  void *v26; // r1
  int v27; // r0
  int v28; // r0
  void *v29; // r1
  int v30; // r0
  int v31; // r0
  unsigned int v32; // r1
  _DWORD **v33; // r0
  _DWORD *v34; // r0
  void *v35; // r1
  int v36; // r0
  int v37; // r0
  unsigned int v38; // r1
  _DWORD **v39; // r0
  _DWORD *v40; // r0
  void *v41; // r1
  int v42; // r0
  int v43; // [sp+14h] [bp-3Ch]
  int (**v44)(); // [sp+18h] [bp-38h] BYREF
  const char *v45; // [sp+1Ch] [bp-34h]

  v6 = (sead__SafeString *)&dword_60CB9730[2 * a2];
  Resource = (void *)LoadResource(ResourceMgrRelated_instance, &v6[1].vtable);
  v8 = v6 + 6;
  *(_DWORD *)a1 = Resource;
  Model2 = (void *)Resource_getModel2(Resource, v6 + 6, 0, 1, 2, 0, 0, 0, 0);
  v10 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v11 = ModelWrapper_ctor(v10, Model2, 0, 1, 2, 0, 0);
  ModelWrapper_setup(v11, Resource, 0, 0);
  FIELD_U32(a1, 4) = v10;
  v12 = *(void **)a1;
  v43 = a2;
  v13 = (sead__SafeString *)&dword_60CB9790[2 * a2];
  v14 = (void *)Resource_getModel2(*(void **)a1, v13, 0, 1, 2, 0, 0, 0, 0);
  v15 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v16 = ModelWrapper_ctor(v15, v14, 0, 1, 2, 0, 0);
  ModelWrapper_setup(v16, v12, 0, 0);
  FIELD_U32(a1, 8) = v15;
  if ( a3 != -1.0 )
  {
    v17 = **(_DWORD **)(FIELD_U32(a1, 4) + 20);
    FIELD_U32(a1, 12) = v17;
    TexAnim_play(v17, *(_DWORD *)a1, v8);
    AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(a1, 12) + 4), 0);
    v18 = FIELD_U32(a1, 12);
    FIELD_F32(v18, 20) = a3;
    FIELD_U32(v18, 28) |= 2u;
    v19 = **(_DWORD **)(FIELD_U32(a1, 8) + 20);
    FIELD_U32(a1, 16) = v19;
    TexAnim_play(v19, *(_DWORD *)a1, v13);
    AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(a1, 16) + 4), 0);
    v20 = FIELD_U32(a1, 16);
    FIELD_F32(v20, 20) = a3;
    FIELD_U32(v20, 28) |= 2u;
  }
  result = v43;
  if ( v43 == 4 )
  {
    v25 = **(_DWORD **)(FIELD_U32(a1, 4) + 28);
    FIELD_U32(a1, 20) = v25;
    v26 = *(void **)a1;
    v44 = &sead__SafeStringBase__vtable;
    v45 = "obj_dokan_CB_wait";
    sub_60446088(v25, (int)v26, &v44);
    AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(a1, 20) + 4), 1);
    v27 = FIELD_U32(a1, 20);
    FIELD_U32(v27, 20) = 0;
    FIELD_U32(v27, 28) |= 2u;
    *(_DWORD *)(FIELD_U32(a1, 20) + 24) = 1065353216;
    v28 = **(_DWORD **)(FIELD_U32(a1, 8) + 28);
    FIELD_U32(a1, 24) = v28;
    v29 = *(void **)a1;
    v44 = &sead__SafeStringBase__vtable;
    v45 = "obj_dokan_CB_wait";
    sub_60446088(v28, (int)v29, &v44);
    AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(a1, 24) + 4), 1);
    v30 = FIELD_U32(a1, 24);
    FIELD_U32(v30, 20) = 0;
    FIELD_U32(v30, 28) |= 2u;
    *(_DWORD *)(FIELD_U32(a1, 24) + 24) = 1065353216;
    v31 = FIELD_U32(a1, 4);
    v32 = FIELD_U32(v31, 24);
    v33 = *(_DWORD ***)(v31 + 28);
    if ( v32 > 1 )
      ++v33;
    v34 = *v33;
    FIELD_U32(a1, 28) = v34;
    v35 = *(void **)a1;
    v44 = &sead__SafeStringBase__vtable;
    v45 = "obj_dokan_CB_wait";
    ShuAnim_play(v34, (int)v35, &v44);
    AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(a1, 28) + 4), 1);
    v36 = FIELD_U32(a1, 28);
    FIELD_U32(v36, 20) = 0;
    FIELD_U32(v36, 28) |= 2u;
    *(_DWORD *)(FIELD_U32(a1, 28) + 24) = 1065353216;
    v37 = FIELD_U32(a1, 8);
    v38 = FIELD_U32(v37, 24);
    v39 = *(_DWORD ***)(v37 + 28);
    if ( v38 > 1 )
      ++v39;
    v40 = *v39;
    FIELD_U32(a1, 32) = v40;
    v41 = *(void **)a1;
    v44 = &sead__SafeStringBase__vtable;
    v45 = "obj_dokan_CB_wait";
    ShuAnim_play(v40, (int)v41, &v44);
    AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(a1, 32) + 4), 1);
    v42 = FIELD_U32(a1, 32);
    FIELD_U32(v42, 20) = 0;
    FIELD_U32(v42, 28) |= 2u;
    result = FIELD_U32(a1, 32);
    FIELD_U32(result, 24) = 1065353216;
  }
  else if ( v43 == 1 )
  {
    v22 = **(_DWORD **)(FIELD_U32(a1, 4) + 28);
    FIELD_U32(a1, 20) = v22;
    sub_60446088(v22, *(_DWORD *)a1, v8);
    AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(a1, 20) + 4), 0);
    v23 = FIELD_U32(a1, 20);
    FIELD_F32(v23, 20) = a3;
    FIELD_U32(v23, 28) |= 2u;
    v24 = **(_DWORD **)(FIELD_U32(a1, 8) + 28);
    FIELD_U32(a1, 24) = v24;
    sub_60446088(v24, *(_DWORD *)a1, v13);
    AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(a1, 24) + 4), 0);
    result = FIELD_U32(a1, 24);
    FIELD_F32(result, 20) = a3;
    FIELD_U32(result, 28) |= 2u;
  }
  return result;
}
