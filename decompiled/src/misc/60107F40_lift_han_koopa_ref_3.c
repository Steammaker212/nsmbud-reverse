/* lift_han_koopa_ref_3
 * address: 0x60107F40   size: 564   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall lift_han_koopa_ref_3(int a1)
{
  void *v2; // r11
  void *Model2; // r4
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  _DWORD *v6; // r5
  int v7; // t1
  unsigned int v8; // r9
  void *v9; // r7
  ModelWrapper *v10; // r4
  ModelWrapper *v11; // r0
  unsigned int v12; // r0
  void *v13; // r6
  ModelWrapper *v14; // r7
  ModelWrapper *v15; // r0
  int v17; // [sp+18h] [bp-30h]
  sead__SafeString a2; // [sp+1Ch] [bp-2Ch] BYREF

  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "lift_han_koopa";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "lift_han_koopa_L";
  Model2 = (void *)Resource_getModel2(v2, &a2, 0, 0, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v5, (int)v2, 0, 0);
  FIELD_U32(a1, 6612) = v4;
  v17 = a1;
  v7 = FIELD_U32(a1, 6684);
  v6 = (_DWORD *)(a1 + 6684);
  if ( v7 >= 1 )
  {
    v8 = 0;
    do
    {
      a2.vtable = &sead__SafeStringBase__vtable;
      a2.cstr = "lift_han_koopa_M";
      v9 = (void *)Resource_getModel2(v2, &a2, 0, 0, 0, 0, 0, 0, 0);
      v10 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
      v11 = ModelWrapper_ctor(v10, v9, 0, 0, 0, 0, 0);
      ModelWrapper_setup(v11, (int)v2, 0, 0);
      ++v8;
      v12 = 0;
      if ( v8 < 0x12 )
        v12 = v8;
      *(_DWORD *)(v17 + 4 * v12 + 6612) = v10;
    }
    while ( (signed int)v8 < *v6 );
  }
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "lift_han_koopa_R";
  v13 = (void *)Resource_getModel2(v2, &a2, 0, 0, 0, 0, 0, 0, 0);
  v14 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v15 = ModelWrapper_ctor(v14, v13, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v15, (int)v2, 0, 0);
  FIELD_U32(v17, 6672) = v14;
  return 6672;
}
