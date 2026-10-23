/* sub_60644830
 * address: 0x60644830   size: 1384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelWrapper *__fastcall sub_60644830(int a1)
{
  int v2; // r8
  void *v3; // r5
  void *Model2; // r6
  ModelWrapper *v5; // r7
  ModelWrapper *v6; // r0
  int v7; // r6
  ModelWrapper *result; // r0
  int v9; // r0
  int v10; // r8
  int v11; // r11
  void *v12; // r6
  bool v13; // cc
  char *v14; // r0
  void *v15; // r7
  void *v16; // r5
  ModelWrapper *v17; // r4
  ModelWrapper *v18; // r0
  int v19; // r0
  char *v20; // r0
  void *v21; // r4
  ModelWrapper *v22; // r5
  ModelWrapper *v23; // r0
  int v24; // r0
  void *v25; // r5
  void *v26; // r7
  ModelWrapper *v27; // r6
  void *v28; // r8
  void *v29; // r6
  void *v30; // r4
  ModelWrapper *v31; // r7
  ModelWrapper *v32; // r0
  void *v33; // r4
  void *v34; // r5
  void *v35; // r4
  ModelWrapper *v36; // r6
  ModelWrapper *v37; // r0
  int v38; // [sp+18h] [bp-40h]
  sead__SafeString a2; // [sp+2Ch] [bp-2Ch] BYREF

  v2 = FIELD_U32(a1, 224);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = off_60C13678[v2];
  v3 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
  *(_DWORD *)a1 = v3;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = off_60C136A8[4 * v2];
  Model2 = (void *)Resource_getModel2(v3, &a2, 1, 0, 0, 0, 0, 0, 0);
  v5 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v6 = ModelWrapper_ctor(v5, Model2, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v6, v3, 0, 0);
  FIELD_U32(a1, 4) = v5;
  v7 = 4 * v2;
  result = *(ModelWrapper **)(a1 + 224);
  switch ( (unsigned int)result )
  {
    case 0u:
    case 1u:
    case 7u:
      v38 = 4 * v2;
      v9 = FIELD_U32(a1, 220);
      if ( v9 >= 28 )
      {
        sub_60002B50(a1 + 236);
        v9 = FIELD_U32(a1, 220);
      }
      if ( v9 >= 3 )
      {
        v10 = 0;
        v11 = v38 | 1;
        do
        {
          v12 = *(void **)a1;
          v13 = v10 < 8;
          if ( v10 >= 8 )
            v13 = v9 < 28;
          if ( v13 )
          {
            v20 = off_60C136A8[v11];
            a2.vtable = &sead__SafeStringBase__vtable;
            a2.cstr = v20;
            v21 = (void *)Resource_getModel2(v12, &a2, 1, 0, 0, 0, 0, 0, 0);
            v22 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
            v23 = ModelWrapper_ctor(v22, v21, 1, 0, 0, 0, 0);
            ModelWrapper_setup(v23, v12, 0, 0);
            v24 = 0;
            if ( (unsigned int)v10 < 0x1E )
              v24 = v10;
            *(_DWORD *)(a1 + 4 * v24 + 16) = v22;
          }
          else
          {
            v14 = off_60C136A8[v11];
            a2.vtable = &sead__SafeStringBase__vtable;
            a2.cstr = v14;
            v15 = *(void **)(a1 + 252);
            v16 = (void *)Resource_getModel2(v12, &a2, 1, 0, 0, 0, 0, 0, (int)v15);
            v17 = (ModelWrapper *)operator_new_8DE25C(0x30u, v15, 4);
            v18 = ModelWrapper_ctor(v17, v16, 1, 0, 0, 0, 0);
            ModelWrapper_setup(v18, v12, 0, v15);
            v19 = 0;
            if ( (unsigned int)v10 < 0x1E )
              v19 = v10;
            *(_DWORD *)(a1 + 4 * v19 + 16) = v17;
          }
          v9 = FIELD_U32(a1, 220);
          ++v10;
        }
        while ( v10 < v9 - 2 );
      }
      goto LABEL_22;
    case 8u:
      return result;
    case 0xAu:
      v38 = 4 * v2;
      if ( FIELD_U8(a1, 232) )
      {
        sub_60002B50(a1 + 236);
        v28 = *(void **)a1;
        a2.vtable = &sead__SafeStringBase__vtable;
        a2.cstr = off_60C136A8[v7 | 1];
        v29 = *(void **)(a1 + 252);
        v30 = (void *)Resource_getModel2(v28, &a2, 1, 0, 0, 0, 0, 0, (int)v29);
        v31 = (ModelWrapper *)operator_new_8DE25C(0x30u, v29, 4);
        v32 = ModelWrapper_ctor(v31, v30, 1, 0, 0, 0, 0);
        ModelWrapper_setup(v32, v28, 0, v29);
        FIELD_U32(a1, 8) = v31;
      }
      else
      {
        v25 = *(void **)a1;
        a2.vtable = &sead__SafeStringBase__vtable;
        a2.cstr = off_60C136A8[v7 | 1];
        v33 = (void *)Resource_getModel2(v25, &a2, 1, 0, 0, 0, 0, 0, 0);
        v27 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
        ModelWrapper_ctor(v27, v33, 1, 0, 0, 0, 0);
LABEL_21:
        ModelWrapper_setup(v27, v25, 0, 0);
        FIELD_U32(a1, 8) = v27;
      }
LABEL_22:
      v34 = *(void **)a1;
      a2.vtable = &sead__SafeStringBase__vtable;
      a2.cstr = off_60C136A8[v38 | 2];
      v35 = (void *)Resource_getModel2(v34, &a2, 1, 0, 0, 0, 0, 0, 0);
      v36 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
      v37 = ModelWrapper_ctor(v36, v35, 1, 0, 0, 0, 0);
      result = ModelWrapper_setup(v37, v34, 0, 0);
      FIELD_U32(a1, 12) = v36;
      return result;
    default:
      v25 = *(void **)a1;
      v38 = 4 * v2;
      a2.vtable = &sead__SafeStringBase__vtable;
      a2.cstr = off_60C136A8[v7 | 1];
      v26 = (void *)Resource_getModel2(v25, &a2, 1, 0, 0, 0, 0, 0, 0);
      v27 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
      ModelWrapper_ctor(v27, v26, 1, 0, 0, 0, 0);
      goto LABEL_21;
  }
}
