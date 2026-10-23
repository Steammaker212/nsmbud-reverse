/* lift_han_hikousen_ref
 * address: 0x60110D6C   size: 700   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall lift_han_hikousen_ref(int a1)
{
  void *v2; // r11
  void *Model2; // r4
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  _DWORD *v6; // r5
  int v7; // t1
  int v8; // r8
  void *v9; // r7
  ModelWrapper *v10; // r4
  ModelWrapper *v11; // r0
  int v12; // r0
  void *v13; // r4
  ModelWrapper *v14; // r7
  ModelWrapper *v15; // r0
  void *v16; // r4
  ModelWrapper *v17; // r7
  ModelWrapper *v18; // r0
  int v20; // [sp+18h] [bp-30h]
  sead__SafeString a2; // [sp+1Ch] [bp-2Ch] BYREF

  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "lift_han_hikousen";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "lift_han_hikousen_L";
  Model2 = (void *)Resource_getModel2(v2, &a2, 0, 0, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v5, (int)v2, 0, 0);
  FIELD_U32(a1, 6596) = v4;
  v20 = a1;
  v7 = FIELD_U32(a1, 6564);
  v6 = (_DWORD *)(a1 + 6564);
  if ( v7 - 1 >= 2 )
  {
    v8 = 1;
    do
    {
      a2.vtable = &sead__SafeStringBase__vtable;
      a2.cstr = "lift_han_hikousen_M";
      v9 = (void *)Resource_getModel2(v2, &a2, 0, 0, 0, 0, 0, 0, 0);
      v10 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
      v11 = ModelWrapper_ctor(v10, v9, 0, 0, 0, 0, 0);
      ModelWrapper_setup(v11, (int)v2, 0, 0);
      v12 = 0;
      if ( (unsigned int)v8 < 0x12 )
        v12 = v8;
      ++v8;
      *(_DWORD *)(v20 + 4 * v12 + 6596) = v10;
    }
    while ( v8 < *v6 - 1 );
  }
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "lift_han_hikousen_R";
  v13 = (void *)Resource_getModel2(v2, &a2, 0, 0, 0, 0, 0, 0, 0);
  v14 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v15 = ModelWrapper_ctor(v14, v13, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v15, (int)v2, 0, 0);
  FIELD_U32(v20, 6656) = v14;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "lift_han_hikousen_propeller";
  v16 = (void *)Resource_getModel2(v2, &a2, 0, 0, 0, 0, 0, 0, 0);
  v17 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v18 = ModelWrapper_ctor(v17, v16, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v18, (int)v2, 0, 0);
  FIELD_U32(v20, 6668) = v17;
  return 6668;
}
