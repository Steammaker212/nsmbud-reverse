/* lift_zen_float_ref
 * address: 0x60607D4C   size: 776   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall lift_zen_float_ref(int a1)
{
  void *ResArchiveById; // r11
  void *Model2; // r8
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int result; // r0
  int *v7; // r10
  unsigned int v8; // r5
  void *v9; // r7
  ModelWrapper *v10; // r6
  ModelWrapper *v11; // r0
  unsigned int v12; // r0
  void *v13; // r8
  ModelWrapper *v14; // r7
  ModelWrapper *v15; // r0
  int v16; // r5
  int *v17; // r10
  unsigned int v18; // r9
  void *v19; // r7
  ModelWrapper *v20; // r6
  ModelWrapper *v21; // r0
  unsigned int v22; // r0
  sead__SafeString a2; // [sp+1Ch] [bp-2Ch] BYREF

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  if ( FIELD_U32(a1, 6116) )
  {
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "lift_zen_float_30x3_yuki";
    Model2 = (void *)Resource_getModel2(ResArchiveById, &a2, 1, 0, 0, 0, 0, 0, 0);
    v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
    v5 = ModelWrapper_ctor(v4, Model2, 1, 0, 0, 0, 0);
    ModelWrapper_setup(v5, ResArchiveById, 0, 0);
    FIELD_U32(a1, 6112) = v4;
    v7 = (int *)(a1 + 6120);
    result = FIELD_U32(a1, 6120);
    if ( result >= 1 )
    {
      v8 = 0;
      do
      {
        a2.vtable = &sead__SafeStringBase__vtable;
        a2.cstr = "lift_zen_float_30x3";
        v9 = (void *)Resource_getModel2(ResArchiveById, &a2, 1, 0, 0, 0, 0, 0, 0);
        v10 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
        v11 = ModelWrapper_ctor(v10, v9, 1, 0, 0, 0, 0);
        ModelWrapper_setup(v11, ResArchiveById, 0, 0);
        v12 = 0;
        if ( v8 < 3 )
          v12 = v8;
        ++v8;
        *(_DWORD *)(a1 + 4 * v12 + 6100) = v10;
        result = *v7;
      }
      while ( (int)v8 < *v7 );
    }
  }
  else
  {
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "lift_zen_float_9x3_yuki";
    v13 = (void *)Resource_getModel2(ResArchiveById, &a2, 1, 0, 0, 0, 0, 0, 0);
    v14 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
    v15 = ModelWrapper_ctor(v14, v13, 1, 0, 0, 0, 0);
    ModelWrapper_setup(v15, ResArchiveById, 0, 0);
    v16 = a1;
    FIELD_U32(a1, 6112) = v14;
    v17 = (int *)(a1 + 6120);
    result = FIELD_U32(a1, 6120);
    if ( result >= 1 )
    {
      v18 = 0;
      do
      {
        a2.vtable = &sead__SafeStringBase__vtable;
        a2.cstr = "lift_zen_float_9x3";
        v19 = (void *)Resource_getModel2(ResArchiveById, &a2, 1, 0, 0, 0, 0, 0, 0);
        v20 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
        v21 = ModelWrapper_ctor(v20, v19, 1, 0, 0, 0, 0);
        ModelWrapper_setup(v21, ResArchiveById, 0, 0);
        v22 = 0;
        if ( v18 < 3 )
          v22 = v18;
        ++v18;
        *(_DWORD *)(v16 + 4 * v22 + 6100) = v20;
        result = *v17;
      }
      while ( (int)v18 < *v17 );
    }
  }
  return result;
}
