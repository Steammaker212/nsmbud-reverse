/* balloon_coin_model_ref_3
 * address: 0x6057CD28   size: 608   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall balloon_coin_model_ref_3(int a1)
{
  ModelWrapper **v1; // r6
  int v2; // r8
  float v3; // s2
  float v4; // s18
  float v5; // s6
  float v6; // s10
  ModelWrapper **v7; // r4
  ModelWrapper **v8; // r5
  void *model; // r0
  int (__fastcall *v10)(void *, _DWORD *); // r2
  int v11; // r0
  float v12; // s0
  float v13; // s2
  float v14; // s6
  ModelWrapper *v15; // t1
  _DWORD v17[12]; // [sp+0h] [bp-88h] BYREF
  float v18; // [sp+30h] [bp-58h] BYREF
  float v19; // [sp+34h] [bp-54h]
  float v20; // [sp+38h] [bp-50h]
  int v21; // [sp+3Ch] [bp-4Ch]
  float v22; // [sp+40h] [bp-48h]
  float v23; // [sp+44h] [bp-44h]
  float v24; // [sp+48h] [bp-40h]
  float v25; // [sp+4Ch] [bp-3Ch]
  float v26; // [sp+50h] [bp-38h]
  float v27; // [sp+54h] [bp-34h]
  float v28; // [sp+58h] [bp-30h]
  float v29; // [sp+5Ch] [bp-2Ch]

  v1 = (ModelWrapper **)a1;
  v2 = FIELD_U32(a1, 108);
  v3 = FIELD_F32(a1, 116);
  v4 = FIELD_F32(a1, 112) + FIELD_F32(a1, 7356);
  v5 = (float)(0.024541 * 0.0) + 0.0;
  v6 = (float)(-0.00030118 * 0.0) + 1.0;
  v18 = v6 * v6;
  v22 = v5 * v6;
  v26 = -v5;
  v19 = (float)((float)(v5 * v5) * v6) - (float)(v5 * v6);
  v23 = (float)(v6 * v6) + (float)(v5 * (float)(v5 * v5));
  v27 = v5 * v6;
  v20 = (float)(v5 * v5) + (float)(v5 * (float)(v6 * v6));
  v24 = (float)(v5 * v27) - v27;
  v28 = v6 * v6;
  v21 = v2;
  v25 = v4;
  v29 = v3 + 40.0;
  v7 = (ModelWrapper **)(a1 + 7484);
  (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 7484) + 60))(**(_DWORD **)(a1 + 7484), &v18);
  v8 = v1 + 1890;
  (*(void (__fastcall **)(void *, ModelWrapper **))(*(_DWORD *)(*v7)->model + 68))((*v7)->model, v1 + 1890);
  ModelWrapper_updateAnims(*v7);
  (*(void (__fastcall **)(void *))(*(_DWORD *)(*v7)->model + 52))((*v7)->model);
  (*(void (__fastcall **)(void *))(*(_DWORD *)(*v7)->model + 56))((*v7)->model);
  model = (*v7)->model;
  v10 = *(int (__fastcall **)(void *, _DWORD *))(*(_DWORD *)model + 84);
  v17[0] = &sead__SafeStringBase__vtable;
  v17[1] = "balloon_coin_model";
  v11 = v10(model, v17);
  (*(void (__fastcall **)(void *, int, _DWORD *))(*(_DWORD *)(*v7)->model + 108))((*v7)->model, v11, v17);
  v1[1877] = (ModelWrapper *)v17[3];
  v1[1878] = (ModelWrapper *)v17[7];
  v1[1879] = (ModelWrapper *)v17[11];
  v12 = *((float *)v1 + 29);
  v13 = (float)(0.024541 * 0.0) + 0.0;
  v14 = (float)(-0.00030118 * 0.0) + 1.0;
  v18 = v14 * v14;
  v22 = v13 * v14;
  v26 = -v13;
  v19 = (float)((float)(v13 * v13) * v14) - (float)(v13 * v14);
  v23 = (float)(v14 * v14) + (float)(v13 * (float)(v13 * v13));
  v27 = v13 * v14;
  v20 = (float)(v13 * v13) + (float)(v13 * (float)(v14 * v14));
  v24 = (float)(v13 * v27) - v27;
  v28 = v14 * v14;
  v21 = v2;
  v25 = v4;
  v29 = v12 + -40.0;
  v15 = v1[1872];
  v1 += 1872;
  (*(void (__fastcall **)(void *, float *))(*(_DWORD *)FIELD_U32(v15, 0x0) + 60))(FIELD_U32(v15, 0x0), &v18);
  (*(void (__fastcall **)(void *, ModelWrapper **))(*(_DWORD *)(*v1)->model + 68))((*v1)->model, v8);
  ModelWrapper_updateAnims(*v1);
  return ModelWrapper_updateModel(*v1);
}
