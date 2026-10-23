/* sub_60234748
 * address: 0x60234748   size: 508   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60234748(_DWORD *a1, void *a2, void *a3, int a4)
{
  int v7; // s2
  int v8; // s3
  int v9; // s2
  int v10; // s3
  void *Model; // r7
  ModelWrapper *v12; // r5
  ModelWrapper *v13; // r0
  _DWORD *v14; // r0
  int v15; // r4
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int result; // r0
  double v20; // [sp+18h] [bp-48h] BYREF
  int v21; // [sp+20h] [bp-40h]
  int v22; // [sp+24h] [bp-3Ch]
  double v23; // [sp+28h] [bp-38h] BYREF
  int v24; // [sp+30h] [bp-30h]
  int v25; // [sp+34h] [bp-2Ch]
  sead__SafeString identifier; // [sp+38h] [bp-28h] BYREF

  *a1 = a3;
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = (char *)dword_60C8D944;
  a1[3] = a4;
  FIELD_U32(a4, 32) = 0;
  *(_DWORD *)(a1[3] + 36) = 0;
  *(_DWORD *)(a1[3] + 888) = 1;
  v23 = 0.00781250185;
  v24 = 1065353216;
  v20 = 0.00781250185;
  v21 = 1065353216;
  v25 = 1065353216;
  v22 = 1065353216;
  if ( sub_604377C4(a1[3]) == 1 )
    sead__SafeStringBase__operator_assign((int)&identifier, (int)&unk_60C8D948);
  v23 = sub_604377B0(a1[3]);
  v24 = v7;
  v25 = v8;
  v20 = sub_6043779C(a1[3]);
  v21 = v9;
  v22 = v10;
  Model = (void *)Resource_getModel(a3, &identifier, 1, 2, 0, 0, 0, 0, 1, (int)a2);
  v12 = (ModelWrapper *)operator_new_8DE25C(0x48u, a2, 4);
  v13 = sub_60421830(v12, Model, 2, 0, 0, 0, 0);
  j_ModelWrapper_setupModel((int)v13, (int)a3, 0, (int)a2);
  a1[1] = v12;
  v14 = FIELD_U32(v12, 0x0);
  v14[8] = 0;
  v14[9] = 0;
  a1[4] = (*(int (__fastcall **)(_DWORD *, int *))(*v14 + 84))(v14, &dword_60C8D950);
  v15 = *(_DWORD *)a1[1];
  v16 = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v15 + 124))(v15, &dword_60C8D958);
  v17 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v15 + 132))(v15, v16);
  if ( v17 )
    (*(void (__fastcall **)(int, _DWORD, double *))(*(_DWORD *)v17 + 20))(v17, 0, &v23);
  v18 = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v15 + 124))(v15, &dword_60C8D960);
  result = (*(int (__fastcall **)(int, int))(*(_DWORD *)v15 + 132))(v15, v18);
  if ( result )
    return (*(int (__fastcall **)(int, _DWORD, double *))(*(_DWORD *)result + 20))(result, 0, &v20);
  return result;
}
