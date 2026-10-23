/* sub_60682FDC
 * address: 0x60682FDC   size: 732   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void *__fastcall sub_60682FDC(_DWORD *a1)
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
  void *result; // r0
  sead__SafeString a2; // [sp+18h] [bp-30h] BYREF
  int (**v25)(); // [sp+20h] [bp-28h] BYREF
  const char *v26; // [sp+24h] [bp-24h]

  v25 = &sead__SafeStringBase__vtable;
  v26 = "magic_hand";
  a2.vtable = &sead__SafeStringBase__vtable;
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &v25);
  a2.cstr = "magic_hand";
  Model2 = (void *)Resource_getModel2(v2, &a2, 2, 0, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v5 = sub_60421830(v4, Model2, 2, 0, 0, 0, 0);
  j_ModelWrapper_setupModel(v5, v2, 0, 0);
  a1[1528] = v4;
  v6 = a1 + 1528;
  model = (int (__fastcall ***)(void *, int *))FIELD_U32(v4, 0x0);
  if ( ((unsigned int)&dword_60C80400 & ~(1617440944 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C80400) )
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
  v25 = &sead__SafeStringBase__vtable;
  v26 = "magic_hand";
  v12 = LoadResource(ResourceMgrRelated_instance, &v25);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "gu_wait00";
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
  v25 = &sead__SafeStringBase__vtable;
  v26 = "magic_hand";
  v19 = (void *)LoadResource(ResourceMgrRelated_instance, &v25);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "shadow_gu";
  v20 = (void *)Resource_getModel2(v19, &a2, 2, 0, 0, 0, 0, 0, 0);
  v21 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v22 = sub_60421830(v21, v20, 2, 0, 0, 0, 0);
  j_ModelWrapper_setupModel(v22, v19, 0, 0);
  a1[1529] = v21;
  result = FIELD_U32(v21, 0x0);
  *((_DWORD *)FIELD_U32(v21, 0x0) + 9) = 8;
  return result;
}
