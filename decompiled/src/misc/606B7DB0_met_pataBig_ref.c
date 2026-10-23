/* met_pataBig_ref
 * address: 0x606B7DB0   size: 524   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall met_pataBig_ref(int a1)
{
  void *v2; // r5
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  _DWORD *v6; // r9
  unsigned int animations; // r2
  int *v8; // r0
  int v9; // r5
  int v10; // r0
  int v11; // r1
  unsigned int v12; // r0
  int v13; // r1
  unsigned int v14; // r0
  int v15; // r1
  unsigned int v16; // r0
  int v17; // r1
  unsigned int v18; // r0
  float v19; // s16
  unsigned int U32; // r0
  int *v21; // r2
  unsigned int v22; // r1
  int v23; // r1
  int result; // r0
  sead__SafeString a2; // [sp+18h] [bp-40h] BYREF
  int (**v26)(); // [sp+20h] [bp-38h] BYREF
  const char *v27; // [sp+24h] [bp-34h]

  v26 = &sead__SafeStringBase__vtable;
  v27 = "met_pataBig";
  a2.vtable = &sead__SafeStringBase__vtable;
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &v26);
  a2.cstr = "met_pataBig";
  Model2 = (void *)Resource_getModel2(v2, &a2, 2, 0, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v5 = sub_60421830(v4, Model2, 2, 0, 0, 0, 0);
  j_ModelWrapper_setupModel(v5, v2, 0, 0);
  FIELD_U32(a1, 6104) = v4;
  v6 = (_DWORD *)(a1 + 6104);
  animations = (unsigned int)v4[1].texAnims.animations;
  v8 = (int *)FIELD_U32(v4, 0xC);
  if ( FIELD_U32(v4, 0x8) > animations )
    v8 += animations;
  v9 = *v8;
  v26 = &sead__SafeStringBase__vtable;
  v27 = "met_pataBig";
  v10 = LoadResource(ResourceMgrRelated_instance, &v26);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "wait";
  SkeletalAnim_play(v9, v10, (const char **)&a2);
  v11 = *(_DWORD *)(*v6 + 12);
  v12 = *(_DWORD *)(*v6 + 68);
  if ( *(_DWORD *)(*v6 + 8) > v12 )
    v11 += 4 * v12;
  *(_DWORD *)(*(_DWORD *)v11 + 24) = 1065353216;
  v13 = *(_DWORD *)(*v6 + 12);
  v14 = *(_DWORD *)(*v6 + 68);
  if ( *(_DWORD *)(*v6 + 8) > v14 )
    v13 += 4 * v14;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v13 + 4), 1);
  v15 = *(_DWORD *)(*v6 + 12);
  v16 = *(_DWORD *)(*v6 + 68);
  if ( *(_DWORD *)(*v6 + 8) > v16 )
    v15 += 4 * v16;
  sub_6041838C((ModelAnimation *)(*(_DWORD *)v15 + 4));
  v17 = *(_DWORD *)(*v6 + 12);
  v18 = *(_DWORD *)(*v6 + 68);
  if ( *(_DWORD *)(*v6 + 8) > v18 )
    v17 += 4 * v18;
  v19 = *(float *)(*(_DWORD *)v17 + 8);
  U32 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
  v21 = *(int **)(*v6 + 12);
  v22 = *(_DWORD *)(*v6 + 68);
  if ( *(_DWORD *)(*v6 + 8) > v22 )
    v21 += v22;
  v23 = *v21;
  FIELD_F32(v23, 20) = (float)((U32 * (unsigned __int64)(unsigned int)v19) >> 32);
  result = FIELD_U32(v23, 28) | 2;
  FIELD_U32(v23, 28) = result;
  v6[16] = 0;
  return result;
}
