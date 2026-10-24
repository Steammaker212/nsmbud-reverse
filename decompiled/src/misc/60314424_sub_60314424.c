/* sub_60314424
 * address: 0x60314424   size: 568   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60314424(int a1)
{
  void *v2; // r9
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r10
  unsigned int animations; // r2
  int *v8; // r0
  int v9; // r6
  int v10; // r0
  int v11; // r1
  unsigned int v12; // r0
  int v13; // r9
  int v14; // r1
  unsigned int v15; // r0
  void *v16; // r6
  char *v17; // r0
  void *v18; // r7
  ModelWrapper *v19; // r4
  ModelWrapper *v20; // r0
  int result; // r0
  sead__SafeString a2; // [sp+1Ch] [bp-34h] BYREF
  int (**v23)(); // [sp+24h] [bp-2Ch] BYREF
  const char *v24; // [sp+28h] [bp-28h]

  v23 = &sead__SafeStringBase__vtable;
  v24 = "karon";
  a2.vtable = &sead__SafeStringBase__vtable;
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &v23);
  a2.cstr = "karon";
  Model2 = (void *)Resource_getModel2(v2, &a2, 2, 0, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v5 = sub_60421830(v4, Model2, 2, 0, 0, 0, 0);
  j_ModelWrapper_setupModel((int)v5, (int)v2, 0, 0);
  FIELD_U32(a1, 6300) = v4;
  v6 = a1 + 6300;
  animations = (unsigned int)FIELD_U32(v4 + (1) * 48, 0x14);
  v8 = (int *)FIELD_U32(v4, 0xC);
  if ( FIELD_U32(v4, 0x8) > animations )
    v8 += animations;
  v9 = *v8;
  v23 = &sead__SafeStringBase__vtable;
  v24 = "karon";
  v10 = LoadResource(ResourceMgrRelated_instance, &v23);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "walk";
  SkeletalAnim_play(v9, v10, (int)&a2);
  v11 = *(_DWORD *)(*(_DWORD *)v6 + 12);
  v12 = *(_DWORD *)(*(_DWORD *)v6 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v6 + 8) > v12 )
    v11 += 4 * v12;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v11 + 4), 1);
  v13 = 0;
  v14 = *(_DWORD *)(*(_DWORD *)v6 + 12);
  v15 = *(_DWORD *)(*(_DWORD *)v6 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v6 + 8) > v15 )
    v14 += 4 * v15;
  *(_DWORD *)(*(_DWORD *)v14 + 24) = 1065353216;
  do
  {
    v23 = &sead__SafeStringBase__vtable;
    v24 = "karon";
    v16 = (void *)LoadResource(ResourceMgrRelated_instance, &v23);
    v17 = off_60BEA360[v13];
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = v17;
    v18 = (void *)Resource_getModel2(v16, &a2, 2, 0, 0, 0, 0, 0, 0);
    v19 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
    v20 = sub_60421830(v19, v18, 2, 0, 0, 0, 0);
    j_ModelWrapper_setupModel((int)v20, (int)v16, 0, 0);
    result = v6 + 4;
    *(_DWORD *)(v6 + 4 + 4 * v13++) = v19;
  }
  while ( v13 != 6 );
  return result;
}
