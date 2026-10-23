/* sub_6078C590
 * address: 0x6078C590   size: 948   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelWrapper *__fastcall sub_6078C590(int a1, int *a2)
{
  int *v3; // r5
  int v4; // r8
  int v5; // r10
  ModelWrapper *result; // r0
  void *v7; // r6
  int v8; // r0
  int v9; // r1
  int v10; // r0
  int v11; // r0
  void *v12; // r6
  sead__SafeString *v13; // r1
  int Model; // r0
  void *v15; // r5
  ModelWrapper *v16; // r7
  ModelWrapper *v17; // r0
  int v18; // r11
  int v19; // r0
  void *v20; // r6
  sead__SafeString *v21; // r1
  int Model2; // r0
  void *v23; // r5
  ModelWrapper *v24; // r7
  ModelWrapper *v25; // r0
  int v26; // r0
  sead__SafeString *v27; // r1
  int v28; // r0
  void *v29; // r5
  ModelWrapper *v30; // r7
  ModelWrapper *v31; // r0
  _WORD *v33; // [sp+24h] [bp-3Ch]
  int v34; // [sp+28h] [bp-38h] BYREF
  int v35; // [sp+2Ch] [bp-34h]
  int v36; // [sp+30h] [bp-30h]
  int v37; // [sp+34h] [bp-2Ch] BYREF

  v3 = a2;
  v4 = 16;
  v5 = 0;
  v33 = (_WORD *)(a1 + 304);
  while ( 1 )
  {
    result = (ModelWrapper *)((unsigned __int16)*v33 & (1 << v5));
    if ( (*v33 & (unsigned __int16)(1 << v5)) != 0 )
      break;
LABEL_25:
    ++v5;
    v4 += 8;
    if ( v5 == 6 )
      return result;
  }
  if ( v5 != 5 )
  {
    v11 = sub_60792ACC(a1);
    v12 = *(void **)(a1 + 16);
    v13 = (sead__SafeString *)(FIELD_U32(a1, 288) + v4);
    if ( v11 == 1 )
      Model = Resource_getModel(v12, v13, 6, 3, 2, 4, 0, 0, 1, 0);
    else
      Model = Resource_getModel2(*(void **)(a1 + 16), v13, 3, 2, 4, 0, 0, 0, 0);
    v15 = (void *)Model;
    v16 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
    v17 = ModelWrapper_ctor(v16, v15, 3, 2, 4, 0, 0);
    v3 = a2;
    ModelWrapper_setup(v17, v12, a2, 0);
    v18 = a1 + 4 * v5;
    FIELD_U32(v18, 240) = v16;
    result = (ModelWrapper *)**(unsigned __int8 **)(FIELD_U32(a1, 288) + 8 * v5 + 68);
    if ( **(_BYTE **)(FIELD_U32(a1, 288) + 8 * v5 + 68) )
    {
      v19 = sub_60792ACC(a1);
      v20 = *(void **)(a1 + 16);
      v21 = (sead__SafeString *)(FIELD_U32(a1, 288) + v4 + 48);
      if ( v19 == 1 )
        Model2 = Resource_getModel(v20, v21, 6, 1, 2, 4, 0, 0, 1, 0);
      else
        Model2 = Resource_getModel2(v20, v21, 1, 2, 4, 0, 0, 0, 0);
      v23 = (void *)Model2;
      v24 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
      v25 = ModelWrapper_ctor(v24, v23, 1, 2, 4, 0, 0);
      v3 = a2;
      result = ModelWrapper_setup(v25, v20, a2, 0);
      FIELD_U32(v18, 264) = v24;
    }
    goto LABEL_25;
  }
  v7 = (void *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 20))(a1);
  if ( v7 )
  {
    v34 = 0;
    v35 = 0;
    v36 = 0;
    sub_608DEB0C(&v34, 2, (int)&v37);
    v8 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 28))(a1);
    if ( v8 )
    {
      v9 = v34;
      if ( v34 < v35 )
      {
        *(_DWORD *)(v36 + 4 * v34) = v8;
        v9 = ++v34;
      }
      if ( *v3 )
        v10 = *(_DWORD *)v3[2];
      else
        v10 = 0;
      if ( v9 < v35 )
      {
        *(_DWORD *)(v36 + 4 * v9) = v10;
        ++v34;
      }
    }
    v26 = sub_60792ACC(a1);
    v27 = (sead__SafeString *)(FIELD_U32(a1, 288) + 56);
    if ( v26 == 1 )
      v28 = Resource_getModel(v7, v27, 6, 3, 2, 4, 0, 0, 1, 0);
    else
      v28 = Resource_getModel2(v7, v27, 3, 2, 4, 0, 0, 0, 0);
    v29 = (void *)v28;
    v30 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
    v31 = ModelWrapper_ctor(v30, v29, 3, 2, 4, 0, 0);
    result = ModelWrapper_setup(v31, v7, &v34, 0);
    FIELD_U32(a1, 260) = v30;
    v3 = a2;
    goto LABEL_25;
  }
  result = *(ModelWrapper **)(a1 + 240);
  FIELD_U32(a1, 260) = result;
  return result;
}
