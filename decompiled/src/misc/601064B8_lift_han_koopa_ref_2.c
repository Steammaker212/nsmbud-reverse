/* lift_han_koopa_ref_2
 * address: 0x601064B8   size: 600   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall lift_han_koopa_ref_2(_DWORD *a1)
{
  void *v2; // r4
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  void *v6; // r6
  ModelWrapper *v7; // r7
  ModelWrapper *v8; // r0
  signed int result; // r0
  signed int v10; // r9
  _DWORD *v11; // r10
  void *v12; // r7
  ModelWrapper *v13; // r6
  ModelWrapper *v14; // r0
  signed int *v15; // [sp+20h] [bp-30h]
  sead__SafeString a2; // [sp+24h] [bp-2Ch] BYREF

  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "lift_han_koopa";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "lift_han_koopa_L";
  Model2 = (void *)Resource_getModel2(v2, &a2, 0, 0, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v5, (int)v2, 0, 0);
  a1[1526] = v4;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "lift_han_koopa_R";
  v6 = (void *)Resource_getModel2(v2, &a2, 0, 0, 0, 0, 0, 0, 0);
  v7 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v8 = ModelWrapper_ctor(v7, v6, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v8, (int)v2, 0, 0);
  a1[1527] = v7;
  result = a1[1547];
  v15 = a1 + 1547;
  if ( result >= 1 )
  {
    v10 = 0;
    v11 = a1 + 1528;
    do
    {
      a2.vtable = &sead__SafeStringBase__vtable;
      a2.cstr = "lift_han_koopa_M";
      v12 = (void *)Resource_getModel2(v2, &a2, 0, 0, 0, 0, 0, 0, 0);
      v13 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
      v14 = ModelWrapper_ctor(v13, v12, 0, 0, 0, 0, 0);
      ModelWrapper_setup(v14, (int)v2, 0, 0);
      if ( *v11 < a1[1529] )
        *(_DWORD *)(a1[1530] + 4 * (*v11)++) = v13;
      ++v10;
      result = *v15;
    }
    while ( v10 < *v15 );
  }
  return result;
}
