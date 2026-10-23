/* Bowser__vf3EC
 * address: 0x600C5048   size: 608   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60026BE4
// 
// Overridden by: None
int __fastcall Bowser__vf3EC(int a1)
{
  int v2; // r4
  void *v3; // t1
  void *Model; // r6
  ModelWrapper *v5; // r7
  ModelWrapper *v6; // r0
  void *v7; // r9
  void *Model2; // r6
  ModelWrapper *v9; // r7
  ModelWrapper *v10; // r0
  int v11; // r11
  void **v12; // r9
  void *v13; // r6
  void *v14; // r7
  ModelWrapper *v15; // r4
  ModelWrapper *v16; // r0
  int v17; // r1
  _DWORD *v18; // r0
  int result; // r0
  int v20; // [sp+20h] [bp-48h]
  sead__SafeString identifier; // [sp+2Ch] [bp-3Ch] BYREF
  int v22; // [sp+34h] [bp-34h] BYREF
  int v23; // [sp+38h] [bp-30h]
  int v24; // [sp+3Ch] [bp-2Ch]
  int v25; // [sp+40h] [bp-28h] BYREF

  v22 = 0;
  v23 = 0;
  v24 = 0;
  sub_608DEB0C(&v22, 1, (int)&v25);
  if ( v22 < v23 )
    *(_DWORD *)(v24 + 4 * v22++) = FIELD_U32(a1, 7096);
  v3 = *(void **)(a1 + 7092);
  v2 = a1 + 7092;
  Model = (void *)Resource_getModel(v3, (sead__SafeString *)&dword_60C83C40, 6, 2, 1, 2, 0, 0, 1, 0);
  v5 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v6 = sub_60421830(v5, Model, 2, 1, 2, 0, 0);
  j_ModelWrapper_setupModel((int)v6, (int)v3, (int)&v22, 0);
  FIELD_U32(v2, 8) = v5;
  v7 = *(void **)v2;
  Model2 = (void *)Resource_getModel2(*(void **)v2, (sead__SafeString *)&dword_60C83C48, 0, 0, 0, 0, 0, 0, 0);
  v9 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v10 = ModelWrapper_ctor(v9, Model2, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v10, (int)v7, 0, 0);
  FIELD_U32(v2, 12) = v9;
  v11 = 0;
  *((_DWORD *)FIELD_U32(v9, 0x0) + 9) = 8;
  v20 = v2 + 892;
  v12 = (void **)v2;
  do
  {
    v13 = *v12;
    identifier.vtable = &sead__SafeStringBase__vtable;
    identifier.cstr = "koopa_damage";
    v14 = (void *)Resource_getModel(v13, &identifier, 6, 0, 0, 1, 0, 0, 1, 0);
    v15 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
    v16 = ModelWrapper_ctor(v15, v14, 0, 0, 1, 0, 0);
    ModelWrapper_setup(v16, (int)v13, 0, 0);
    *(_DWORD *)(v20 + 32 * v11) = v15;
    v17 = (int)*v12;
    v18 = *FIELD_U32(v15, 0x1C);
    identifier.vtable = &sead__SafeStringBase__vtable;
    identifier.cstr = "koopa_damage";
    result = ShuAnim_play(v18, v17, (int)&identifier);
    ++v11;
  }
  while ( v11 != 8 );
  return result;
}
