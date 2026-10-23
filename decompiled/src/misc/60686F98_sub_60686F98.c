/* sub_60686F98
 * address: 0x60686F98   size: 1676   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60686F98(int a1)
{
  int v2; // r0
  unsigned __int8 *v3; // r8
  void *v4; // r5
  int *v5; // r9
  void *v6; // r6
  ModelWrapper *v7; // r7
  ModelWrapper *v8; // r0
  int (__fastcall ***v9)(void *, int *); // r5
  char v10; // r12
  int v11; // r6
  int *v12; // r1
  unsigned int v13; // r0
  int v14; // r0
  int v15; // r1
  int v16; // r1
  unsigned int v17; // r0
  int *v18; // r1
  unsigned int v19; // r0
  int v20; // r0
  int v21; // r1
  unsigned int v22; // r0
  void *v23; // r5
  void *v24; // r6
  ModelWrapper *v25; // r7
  ModelWrapper *v26; // r0
  int v27; // r4
  unsigned int v28; // r2
  int *v29; // r0
  int v30; // r1
  int v31; // r0
  char *v32; // r2
  void *v33; // r5
  int *v34; // r9
  void *Model2; // r6
  ModelWrapper *v36; // r7
  ModelWrapper *v37; // r0
  int (__fastcall ***model)(void *, int *); // r5
  char v39; // r12
  int v40; // r6
  int *v41; // r1
  unsigned int v42; // r0
  int v43; // r0
  int v44; // r1
  int v45; // r1
  unsigned int v46; // r0
  int *v47; // r1
  unsigned int v48; // r0
  int v49; // r0
  int v50; // r1
  unsigned int v51; // r0
  void *v52; // r5
  void *v53; // r6
  ModelWrapper *v54; // r7
  ModelWrapper *v55; // r0
  unsigned int animations; // r2
  int *v57; // r0
  int *v58; // t1
  int v59; // r0
  int (__fastcall *v60)(int, sead__SafeString *); // r2
  char v61; // r0
  int v62; // r4
  sead__SafeString a2; // [sp+14h] [bp-34h] BYREF
  int v65; // [sp+1Ch] [bp-2Ch]
  int v66; // [sp+20h] [bp-28h]

  v3 = (unsigned __int8 *)(a1 + 7659);
  v2 = FIELD_U8(a1, 7659);
  if ( v2 == 1 )
  {
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "magic_hand";
    v33 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
    FIELD_U32(a1, 7600) = v33;
    v34 = (int *)(a1 + 7600);
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "magic_hand";
    Model2 = (void *)Resource_getModel2(v33, &a2, 2, 0, 0, 0, 0, 0, 0);
    v36 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
    v37 = sub_60421830(v36, Model2, 2, 0, 0, 0, 0);
    j_ModelWrapper_setupModel(v37, v33, 0, 0);
    FIELD_U32(a1, 6112) = v36;
    model = (int (__fastcall ***)(void *, int *))FIELD_U32(v36, 0x0);
    if ( ((unsigned int)&dword_60C80400 & ~(1617457996 << v39) & 1) == 0 && _cxa_guard_acquire(&dword_60C80400) )
    {
      dword_60C803FC = (int)&off_60BC3228;
      _cxa_guard_release(&dword_60C80400);
    }
    v40 = a1 + 6112;
    if ( model && (**model)(model, &dword_60C803FC) == 1 )
    {
      model[78] = (int (__fastcall **)(void *, int *))6;
      model[9] = (int (__fastcall **)(void *, int *))8;
    }
    v41 = *(int **)(*(_DWORD *)v40 + 12);
    v42 = *(_DWORD *)(*(_DWORD *)v40 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v40 + 8) > v42 )
      v41 += v42;
    v43 = *v41;
    v44 = *v34;
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "demo_W7_wait";
    SkeletalAnim_play(v43, v44, (const char **)&a2);
    v45 = *(_DWORD *)(*(_DWORD *)v40 + 12);
    v46 = *(_DWORD *)(*(_DWORD *)v40 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v40 + 8) > v46 )
      v45 += 4 * v46;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v45 + 4), 1);
    v47 = *(int **)(*(_DWORD *)v40 + 12);
    v48 = *(_DWORD *)(*(_DWORD *)v40 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v40 + 8) > v48 )
      v47 += v48;
    v49 = *v47;
    FIELD_U32(v49, 20) = 0;
    FIELD_U32(v49, 28) |= 2u;
    v50 = *(_DWORD *)(*(_DWORD *)v40 + 12);
    v51 = *(_DWORD *)(*(_DWORD *)v40 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v40 + 8) > v51 )
      v50 += 4 * v51;
    *(_DWORD *)(*(_DWORD *)v50 + 24) = 1065353216;
    v52 = (void *)*v34;
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "shadow_pa";
    v53 = (void *)Resource_getModel2(v52, &a2, 2, 0, 0, 0, 0, 0, 0);
    v54 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
    v55 = sub_60421830(v54, v53, 2, 0, 0, 0, 0);
    j_ModelWrapper_setupModel(v55, v52, 0, 0);
    FIELD_U32(a1, 6116) = v54;
    v27 = a1 + 6116;
    animations = (unsigned int)v54[1].texAnims.animations;
    v57 = (int *)FIELD_U32(v54, 0xC);
    v30 = *v34;
    if ( FIELD_U32(v54, 0x8) > animations )
      v57 += animations;
    v31 = *v57;
    a2.vtable = &sead__SafeStringBase__vtable;
    v32 = "demo_W7_wait_shadow";
  }
  else
  {
    if ( v2 )
      goto LABEL_38;
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "magic_hand";
    v4 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
    FIELD_U32(a1, 7600) = v4;
    v5 = (int *)(a1 + 7600);
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "magic_hand";
    v6 = (void *)Resource_getModel2(v4, &a2, 2, 0, 0, 0, 0, 0, 0);
    v7 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
    v8 = sub_60421830(v7, v6, 2, 0, 0, 0, 0);
    j_ModelWrapper_setupModel(v8, v4, 0, 0);
    FIELD_U32(a1, 6112) = v7;
    v9 = (int (__fastcall ***)(void *, int *))FIELD_U32(v7, 0x0);
    if ( ((unsigned int)&dword_60C80400 & ~(1617457296 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C80400) )
    {
      dword_60C803FC = (int)&off_60BC3228;
      _cxa_guard_release(&dword_60C80400);
    }
    v11 = a1 + 6112;
    if ( v9 && (**v9)(v9, &dword_60C803FC) == 1 )
    {
      v9[78] = (int (__fastcall **)(void *, int *))6;
      v9[9] = (int (__fastcall **)(void *, int *))8;
    }
    v12 = *(int **)(*(_DWORD *)v11 + 12);
    v13 = *(_DWORD *)(*(_DWORD *)v11 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v11 + 8) > v13 )
      v12 += v13;
    v14 = *v12;
    v15 = *v5;
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "demo_W5_wait";
    SkeletalAnim_play(v14, v15, (const char **)&a2);
    v16 = *(_DWORD *)(*(_DWORD *)v11 + 12);
    v17 = *(_DWORD *)(*(_DWORD *)v11 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v11 + 8) > v17 )
      v16 += 4 * v17;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v16 + 4), 1);
    v18 = *(int **)(*(_DWORD *)v11 + 12);
    v19 = *(_DWORD *)(*(_DWORD *)v11 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v11 + 8) > v19 )
      v18 += v19;
    v20 = *v18;
    FIELD_U32(v20, 20) = 0;
    FIELD_U32(v20, 28) |= 2u;
    v21 = *(_DWORD *)(*(_DWORD *)v11 + 12);
    v22 = *(_DWORD *)(*(_DWORD *)v11 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v11 + 8) > v22 )
      v21 += 4 * v22;
    *(_DWORD *)(*(_DWORD *)v21 + 24) = 1065353216;
    v23 = (void *)*v5;
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "shadow_pa";
    v24 = (void *)Resource_getModel2(v23, &a2, 2, 0, 0, 0, 0, 0, 0);
    v25 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
    v26 = sub_60421830(v25, v24, 2, 0, 0, 0, 0);
    j_ModelWrapper_setupModel(v26, v23, 0, 0);
    FIELD_U32(a1, 6116) = v25;
    v27 = a1 + 6116;
    v28 = (unsigned int)v25[1].texAnims.animations;
    v29 = (int *)FIELD_U32(v25, 0xC);
    v30 = *v5;
    if ( FIELD_U32(v25, 0x8) > v28 )
      v29 += v28;
    v31 = *v29;
    a2.vtable = &sead__SafeStringBase__vtable;
    v32 = "demo_W5_wait_shadow";
  }
  a2.cstr = v32;
  SkeletalAnim_play(v31, v30, (const char **)&a2);
  *(_DWORD *)(**(_DWORD **)v27 + 36) = 8;
  FIELD_U8(a1, 7596) = 0;
LABEL_38:
  v58 = *(int **)(a1 + 6116);
  v59 = *v58;
  v60 = *(int (__fastcall **)(int, sead__SafeString *))(*(_DWORD *)*v58 + 124);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "mat_shadow_magic_hand";
  v61 = v60(v59, &a2);
  v62 = (*(int (__fastcall **)(_DWORD, _DWORD))(***(_DWORD ***)(a1 + 6116) + 132))(**(_DWORD **)(a1 + 6116), v61);
  a2.vtable = 0;
  a2.cstr = 0;
  v65 = 0;
  v66 = 1065353216;
  (*(void (__fastcall **)(int, _DWORD, sead__SafeString *))(*(_DWORD *)v62 + 24))(v62, 0, &a2);
  if ( *v3 <= 1u )
    v66 = 1050253722;
  return (*(int (__fastcall **)(int, _DWORD, sead__SafeString *))(*(_DWORD *)v62 + 20))(v62, 0, &a2);
}
