/* sub_606CFD50
 * address: 0x606CFD50   size: 676   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606CFD50(int a1, float *a2)
{
  ModelWrapper *v4; // r6
  float v5; // s16
  ModelWrapper *v6; // r6
  ModelWrapper *v7; // r5
  float v9; // [sp+0h] [bp-50h] BYREF
  float v10; // [sp+4h] [bp-4Ch]
  float v11; // [sp+8h] [bp-48h]
  float v12; // [sp+Ch] [bp-44h]
  float v13; // [sp+10h] [bp-40h]
  float v14; // [sp+14h] [bp-3Ch]
  float v15; // [sp+18h] [bp-38h]
  float v16; // [sp+1Ch] [bp-34h]
  float v17; // [sp+20h] [bp-30h]
  float v18; // [sp+24h] [bp-2Ch]
  float v19; // [sp+28h] [bp-28h]
  float v20; // [sp+2Ch] [bp-24h]

  v4 = *(ModelWrapper **)a1;
  v5 = FIELD_F32(a1, 12);
  v9 = *a2;
  v10 = a2[1];
  v11 = a2[2];
  v12 = a2[3] + (float)((float)((float)(v10 * 0.0) + (float)(v5 * v9)) + (float)(v11 * 0.0));
  v13 = a2[4];
  v14 = a2[5];
  v15 = a2[6];
  v16 = a2[7] + (float)((float)((float)(v14 * 0.0) + (float)(v5 * v13)) + (float)(v15 * 0.0));
  v17 = a2[8];
  v18 = a2[9];
  v19 = a2[10];
  v20 = a2[11] + (float)((float)((float)(v18 * 0.0) + (float)(v5 * v17)) + (float)(v19 * 0.0));
  (*(void (__fastcall **)(void *, float *))(*(_DWORD *)FIELD_U32(v4, 0x0) + 60))(FIELD_U32(v4, 0x0), &v9);
  ModelWrapper_updateModel(v4);
  v6 = *(ModelWrapper **)(a1 + 4);
  v9 = *a2;
  v10 = a2[1];
  v11 = a2[2];
  v12 = a2[3] + (float)((float)((float)(v10 * 0.0) + (float)(v9 * 0.0)) + (float)(v11 * 0.0));
  v13 = a2[4];
  v14 = a2[5];
  v15 = a2[6];
  v16 = a2[7] + (float)((float)((float)(v14 * 0.0) + (float)(v13 * 0.0)) + (float)(v15 * 0.0));
  v17 = a2[8];
  v18 = a2[9];
  v19 = a2[10];
  v20 = a2[11] + (float)((float)((float)(v18 * 0.0) + (float)(v17 * 0.0)) + (float)(v19 * 0.0));
  (*(void (__fastcall **)(void *, float *))(*(_DWORD *)FIELD_U32(v6, 0x0) + 60))(FIELD_U32(v6, 0x0), &v9);
  ModelWrapper_updateModel(v6);
  v7 = *(ModelWrapper **)(a1 + 8);
  v9 = *a2;
  v10 = a2[1];
  v11 = a2[2];
  v12 = a2[3] + (float)((float)((float)(v10 * 0.0) - (float)(v9 * v5)) + (float)(v11 * 0.0));
  v13 = a2[4];
  v14 = a2[5];
  v15 = a2[6];
  v16 = a2[7] + (float)((float)((float)(v14 * 0.0) - (float)(v13 * v5)) + (float)(v15 * 0.0));
  v17 = a2[8];
  v18 = a2[9];
  v19 = a2[10];
  v20 = a2[11] + (float)((float)((float)(v18 * 0.0) - (float)(v17 * v5)) + (float)(v19 * 0.0));
  (*(void (__fastcall **)(void *, float *))(*(_DWORD *)FIELD_U32(v7, 0x0) + 60))(FIELD_U32(v7, 0x0), &v9);
  return ModelWrapper_updateModel(v7);
}
