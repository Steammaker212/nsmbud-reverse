/* sub_60684748
 * address: 0x60684748   size: 924   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelAnimation *__fastcall sub_60684748(_DWORD *a1)
{
  void *v2; // r5
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  _DWORD *v6; // r6
  int (__fastcall ***model)(void *, int *); // r5
  char v8; // r12
  int *v9; // r1
  unsigned int v10; // r0
  int v11; // r5
  int v12; // r0
  int v13; // r1
  unsigned int v14; // r0
  int v15; // r1
  unsigned int v16; // r0
  int v17; // r1
  unsigned int v18; // r0
  void *v19; // r5
  void *v20; // r6
  ModelWrapper *v21; // r7
  ModelWrapper *v22; // r0
  _DWORD *v23; // r0
  int *v24; // r1
  unsigned int v25; // r2
  unsigned int v26; // r0
  int v27; // r5
  int v28; // r0
  _DWORD *v29; // r0
  int v30; // r1
  unsigned int v31; // r2
  unsigned int v32; // r0
  _DWORD *v33; // r0
  int v34; // r1
  unsigned int v35; // r2
  unsigned int v36; // r0
  _DWORD *v37; // r0
  int v38; // r1
  unsigned int v39; // r2
  unsigned int v40; // r0
  sead__SafeString a2; // [sp+14h] [bp-34h] BYREF
  int (**v43)(); // [sp+1Ch] [bp-2Ch] BYREF
  const char *v44; // [sp+20h] [bp-28h]

  v43 = &sead__SafeStringBase__vtable;
  v44 = "magic_hand";
  a2.vtable = &sead__SafeStringBase__vtable;
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &v43);
  a2.cstr = "magic_hand";
  Model2 = (void *)Resource_getModel2(v2, &a2, 2, 0, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v5 = sub_60421830(v4, Model2, 2, 0, 0, 0, 0);
  j_ModelWrapper_setupModel(v5, v2, 0, 0);
  a1[1528] = v4;
  v6 = a1 + 1528;
  model = (int (__fastcall ***)(void *, int *))FIELD_U32(v4, 0x0);
  if ( ((unsigned int)&dword_60C80400 & ~(1617446940 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C80400) )
  {
    dword_60C803FC = (int)&off_60BC3228;
    _cxa_guard_release(&dword_60C80400);
  }
  if ( model && (**model)(model, &dword_60C803FC) == 1 )
  {
    model[78] = (int (__fastcall **)(void *, int *))6;
    model[9] = (int (__fastcall **)(void *, int *))8;
  }
  v9 = *(int **)(*v6 + 12);
  v10 = *(_DWORD *)(*v6 + 68);
  if ( *(_DWORD *)(*v6 + 8) > v10 )
    v9 += v10;
  v11 = *v9;
  v43 = &sead__SafeStringBase__vtable;
  v44 = "magic_hand";
  v12 = LoadResource(ResourceMgrRelated_instance, &v43);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "pa_wait00";
  SkeletalAnim_play(v11, v12, (const char **)&a2);
  v13 = *(_DWORD *)(*v6 + 12);
  v14 = *(_DWORD *)(*v6 + 68);
  if ( *(_DWORD *)(*v6 + 8) > v14 )
    v13 += 4 * v14;
  *(_DWORD *)(*(_DWORD *)v13 + 24) = 1065353216;
  v15 = *(_DWORD *)(*v6 + 12);
  v16 = *(_DWORD *)(*v6 + 68);
  if ( *(_DWORD *)(*v6 + 8) > v16 )
    v15 += 4 * v16;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v15 + 4), 1);
  v17 = *(_DWORD *)(*v6 + 12);
  v18 = *(_DWORD *)(*v6 + 68);
  if ( *(_DWORD *)(*v6 + 8) > v18 )
    v17 += 4 * v18;
  sub_6041838C((ModelAnimation *)(*(_DWORD *)v17 + 4));
  a1[1878] = 0;
  v43 = &sead__SafeStringBase__vtable;
  v44 = "magic_hand";
  v19 = (void *)LoadResource(ResourceMgrRelated_instance, &v43);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "shadow_pa";
  v20 = (void *)Resource_getModel2(v19, &a2, 2, 0, 0, 0, 0, 0, 0);
  v21 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v22 = sub_60421830(v21, v20, 2, 0, 0, 0, 0);
  j_ModelWrapper_setupModel(v22, v19, 0, 0);
  a1[1529] = v21;
  *((_DWORD *)FIELD_U32(v21, 0x0) + 9) = 8;
  v23 = (_DWORD *)a1[1529];
  v24 = (int *)v23[3];
  v25 = v23[2];
  v26 = v23[17];
  if ( v25 > v26 )
    v24 += v26;
  v27 = *v24;
  v43 = &sead__SafeStringBase__vtable;
  v44 = "magic_hand";
  v28 = LoadResource(ResourceMgrRelated_instance, &v43);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "shadow_pa_wait00";
  SkeletalAnim_play(v27, v28, (const char **)&a2);
  v29 = (_DWORD *)a1[1529];
  v30 = v29[3];
  v31 = v29[2];
  v32 = v29[17];
  if ( v31 > v32 )
    v30 += 4 * v32;
  *(_DWORD *)(*(_DWORD *)v30 + 24) = 1065353216;
  v33 = (_DWORD *)a1[1529];
  v34 = v33[3];
  v35 = v33[2];
  v36 = v33[17];
  if ( v35 > v36 )
    v34 += 4 * v36;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v34 + 4), 1);
  v37 = (_DWORD *)a1[1529];
  v38 = v37[3];
  v39 = v37[2];
  v40 = v37[17];
  if ( v39 > v40 )
    v38 += 4 * v40;
  return sub_6041838C((ModelAnimation *)(*(_DWORD *)v38 + 4));
}
