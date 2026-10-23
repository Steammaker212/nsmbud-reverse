/* block_zen_rail_shiro_ref
 * address: 0x60693FC8   size: 636   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelWrapper *__fastcall block_zen_rail_shiro_ref(int a1, void *r1_0, int a3)
{
  unsigned int v4; // r0
  int v5; // r2
  int v6; // r9
  int v7; // r8
  int v8; // r10
  int v9; // r5
  unsigned int v10; // r0
  void *v11; // r6
  void *Model2; // r4
  ModelWrapper *v13; // r5
  ModelWrapper *v14; // r0
  int v15; // r8
  void *v16; // r4
  ModelWrapper *v17; // r5
  ModelWrapper *v18; // r0
  void *v19; // r4
  ModelWrapper *v20; // r5
  ModelWrapper *v21; // r0
  ModelWrapper *result; // r0
  unsigned int v23; // [sp+14h] [bp-44h]
  int v24; // [sp+18h] [bp-40h]
  int v25; // [sp+24h] [bp-34h]
  sead__SafeString a2; // [sp+2Ch] [bp-2Ch] BYREF

  v4 = a3 + 2;
  v5 = 17;
  v25 = a1 + 60;
  FIELD_U32(a1, 128) = a1 + 60;
  if ( v4 >> 1 < 0x11 )
    v5 = v4 >> 1;
  FIELD_U32(a1, 132) = v5;
  if ( v5 )
  {
    v6 = 0;
    v7 = 0;
    v8 = 0;
    v24 = a1;
    v23 = 0;
    do
    {
      if ( v6 )
      {
        v9 = v7;
      }
      else
      {
        v10 = 0;
        if ( v23 < 3 )
          v10 = v23;
        v9 = a1 + 20 * v10;
        sub_60002B50(v9);
        ++v23;
      }
      v7 = v9;
      a2.vtable = &sead__SafeStringBase__vtable;
      a2.cstr = "block_zen_rail_shiro1_M";
      v11 = *(void **)(v9 + 16);
      Model2 = (void *)Resource_getModel2(r1_0, &a2, 0, 0, 0, 0, 0, 0, (int)v11);
      v13 = (ModelWrapper *)operator_new_8DE25C(0x30u, v11, 4);
      v14 = ModelWrapper_ctor(v13, Model2, 0, 0, 0, 0, 0);
      ModelWrapper_setup(v14, r1_0, 0, v11);
      if ( (unsigned int)++v6 > 5 )
        v6 = 0;
      *(_DWORD *)(v25 + 4 * v8++) = v13;
      a1 = v24;
    }
    while ( v8 != FIELD_U32(v24, 132) );
  }
  v15 = a1;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "block_zen_rail_shiro1_L";
  v16 = (void *)Resource_getModel2(r1_0, &a2, 0, 0, 0, 0, 0, 0, 0);
  v17 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v18 = ModelWrapper_ctor(v17, v16, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v18, r1_0, 0, 0);
  FIELD_U32(v15, 1224) = v17;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "block_zen_rail_shiro1_R";
  v19 = (void *)Resource_getModel2(r1_0, &a2, 0, 0, 0, 0, 0, 0, 0);
  v20 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v21 = ModelWrapper_ctor(v20, v19, 0, 0, 0, 0, 0);
  result = ModelWrapper_setup(v21, r1_0, 0, 0);
  FIELD_U32(v15, 1228) = v20;
  return result;
}
