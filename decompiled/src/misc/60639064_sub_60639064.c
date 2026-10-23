/* sub_60639064
 * address: 0x60639064   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60639064(int a1, float *a2)
{
  ModelWrapper *v2; // r5
  float v3; // s2
  float v4; // s0
  float v5; // s4
  float v7; // [sp+0h] [bp-40h] BYREF
  float v8; // [sp+4h] [bp-3Ch]
  float v9; // [sp+8h] [bp-38h]
  float v10; // [sp+Ch] [bp-34h]
  float v11; // [sp+10h] [bp-30h]
  float v12; // [sp+14h] [bp-2Ch]
  float v13; // [sp+18h] [bp-28h]
  float v14; // [sp+1Ch] [bp-24h]
  float v15; // [sp+20h] [bp-20h]
  float v16; // [sp+24h] [bp-1Ch]
  float v17; // [sp+28h] [bp-18h]
  float v18; // [sp+2Ch] [bp-14h]

  v2 = *(ModelWrapper **)a1;
  v7 = *a2;
  v8 = a2[1];
  v9 = a2[2];
  v3 = FIELD_F32(a1, 8);
  v4 = FIELD_F32(a1, 4);
  v5 = FIELD_F32(a1, 12);
  v10 = a2[3] + (float)((float)((float)(v8 * v3) + (float)(v7 * v4)) + (float)(v9 * v5));
  v11 = a2[4];
  v12 = a2[5];
  v13 = a2[6];
  v14 = a2[7] + (float)((float)((float)(v12 * v3) + (float)(v11 * v4)) + (float)(v13 * v5));
  v15 = a2[8];
  v16 = a2[9];
  v17 = a2[10];
  v18 = a2[11] + (float)((float)((float)(v16 * v3) + (float)(v15 * v4)) + (float)(v17 * v5));
  (*(void (__fastcall **)(void *, float *))(*(_DWORD *)FIELD_U32(v2, 0x0) + 60))(FIELD_U32(v2, 0x0), &v7);
  return ModelWrapper_updateModel(v2);
}
