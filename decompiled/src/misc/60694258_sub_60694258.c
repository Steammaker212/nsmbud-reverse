/* sub_60694258
 * address: 0x60694258   size: 764   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60694258(int a1, float *a2)
{
  int v4; // r6
  float v5; // s22
  int v6; // r0
  ModelWrapper *v7; // r6
  float v8; // s0
  float v9; // s4
  float v10; // s6
  ModelWrapper *v11; // r4
  float v13; // [sp+0h] [bp-68h] BYREF
  float v14; // [sp+4h] [bp-64h]
  float v15; // [sp+8h] [bp-60h]
  float v16; // [sp+Ch] [bp-5Ch]
  float v17; // [sp+10h] [bp-58h]
  float v18; // [sp+14h] [bp-54h]
  float v19; // [sp+18h] [bp-50h]
  float v20; // [sp+1Ch] [bp-4Ch]
  float v21; // [sp+20h] [bp-48h]
  float v22; // [sp+24h] [bp-44h]
  float v23; // [sp+28h] [bp-40h]
  float v24; // [sp+2Ch] [bp-3Ch]

  if ( FIELD_U32(a1, 132) )
  {
    v4 = 0;
    v5 = 32.0;
    do
    {
      v13 = *a2;
      v14 = a2[1];
      v15 = a2[2];
      v16 = a2[3] + (float)((float)((float)(v5 * v13) - (float)(v14 * 16.0)) + (float)(v15 * 0.0));
      v17 = a2[4];
      v18 = a2[5];
      v19 = a2[6];
      v20 = a2[7] + (float)((float)((float)(v5 * v17) - (float)(v18 * 16.0)) + (float)(v19 * 0.0));
      v21 = a2[8];
      v22 = a2[9];
      v23 = a2[10];
      v24 = a2[11] + (float)((float)((float)(v5 * v21) - (float)(v22 * 16.0)) + (float)(v23 * 0.0));
      v6 = **(_DWORD **)(a1 + 60 + 4 * v4);
      (*(void (__fastcall **)(int, float *))(*(_DWORD *)v6 + 60))(v6, &v13);
      v5 = v5 + 32.0;
      ++v4;
    }
    while ( v4 != FIELD_U32(a1, 132) );
  }
  v13 = *a2;
  v14 = a2[1];
  v15 = a2[2];
  v16 = a2[3] + (float)((float)((float)(v13 * 8.0) - (float)(v14 * 16.0)) + (float)(v15 * 0.0));
  v17 = a2[4];
  v18 = a2[5];
  v19 = a2[6];
  v20 = a2[7] + (float)((float)((float)(v17 * 8.0) - (float)(v18 * 16.0)) + (float)(v19 * 0.0));
  v21 = a2[8];
  v22 = a2[9];
  v23 = a2[10];
  v24 = a2[11] + (float)((float)((float)(v21 * 8.0) - (float)(v22 * 16.0)) + (float)(v23 * 0.0));
  v7 = *(ModelWrapper **)(a1 + 1224);
  (*(void (__fastcall **)(void *, float *))(*(_DWORD *)FIELD_U32(v7, 0x0) + 60))(FIELD_U32(v7, 0x0), &v13);
  ModelWrapper_updateModel(v7);
  v13 = *a2;
  v14 = a2[1];
  v15 = a2[2];
  v8 = FIELD_F32(a1, 1236);
  v9 = FIELD_F32(a1, 1232);
  v10 = FIELD_F32(a1, 1240);
  v16 = a2[3] + (float)((float)((float)(v14 * v8) + (float)(v13 * v9)) + (float)(v15 * v10));
  v17 = a2[4];
  v18 = a2[5];
  v19 = a2[6];
  v20 = a2[7] + (float)((float)((float)(v18 * v8) + (float)(v17 * v9)) + (float)(v19 * v10));
  v21 = a2[8];
  v22 = a2[9];
  v23 = a2[10];
  v24 = a2[11] + (float)((float)((float)(v22 * v8) + (float)(v21 * v9)) + (float)(v23 * v10));
  v11 = *(ModelWrapper **)(a1 + 1228);
  (*(void (__fastcall **)(void *, float *))(*(_DWORD *)FIELD_U32(v11, 0x0) + 60))(FIELD_U32(v11, 0x0), &v13);
  return ModelWrapper_updateModel(v11);
}
