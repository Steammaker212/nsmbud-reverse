/* sub_603ED964
 * address: 0x603ED964   size: 536   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603ED964(int result)
{
  __int64 v1; // d8
  int v2; // r12
  int v3; // r2
  int v4; // r3
  float v5; // s0
  float v6; // s2
  float v7; // s4
  __int16 v8; // r1
  int v9; // r9
  int i; // r6
  unsigned int v11; // r0
  unsigned int v12; // r1
  unsigned int v13; // r2
  int v14; // s2
  float *v15; // r3
  float *v16; // r7
  float *v17; // r1
  float v18; // s0
  float v19; // s2
  float v20; // s8
  float v21; // s3
  float v22; // s4
  float v23; // s14
  float v24; // s10
  float v25; // s11
  float v26; // s7
  float v27[12]; // [sp+0h] [bp-58h] BYREF
  __int64 v28; // [sp+30h] [bp-28h]

  v2 = 0;
  do
  {
    v3 = result + v2;
    v4 = -100663296;
    v2 += 40;
    v5 = FIELD_F32(result, 80) + FIELD_F32(v3, 112);
    FIELD_F32(v3, 112) = v5;
    v6 = FIELD_F32(result, 48);
    if ( v5 < v6 )
    {
      FIELD_F32(v3, 112) = v6;
      v5 = v6;
    }
    v7 = FIELD_F32(v3, 108);
    if ( v7 < 0.0 )
      v4 = 100663296;
    FIELD_F32(v3, 96) = FIELD_F32(v3, 96) + v7;
    FIELD_F32(v3, 100) = v5 + FIELD_F32(v3, 100);
    FIELD_F32(v3, 104) = FIELD_F32(v3, 104) + FIELD_F32(v3, 116);
    FIELD_U32(v3, 128) += v4;
  }
  while ( v2 != 240 );
  v8 = FIELD_U16(result, 88) - 1;
  FIELD_U16(result, 88) = v8;
  if ( v8 )
  {
    v28 = v1;
    v9 = result;
    for ( i = 0; i != 240; i += 40 )
    {
      v11 = *(_DWORD *)(v9 + i + 120);
      v12 = *(_DWORD *)(v9 + i + 124);
      v13 = *(_DWORD *)(v9 + i + 128);
      v14 = v12 & 0xFFFFFF;
      v15 = (float *)((char *)sinLutTable + ((v12 >> 20) & 0xFF0));
      v16 = (float *)((char *)sinLutTable + ((v13 >> 20) & 0xFF0));
      v17 = (float *)((char *)sinLutTable + ((v11 >> 20) & 0xFF0));
      v18 = (float)(v13 & 0xFFFFFF) * 0.000000059605;
      v19 = (float)(unsigned int)v14 * 0.000000059605;
      v20 = v16[2] + (float)(v18 * v16[3]);
      v21 = v15[2] + (float)(v19 * v15[3]);
      v22 = *v16 + (float)(v18 * v16[1]);
      v23 = *v15 + (float)(v19 * v15[1]);
      v24 = (float)(v11 & 0xFFFFFF) * 0.000000059605;
      v25 = v17[2] + (float)(v24 * v17[3]);
      v26 = *v17 + (float)(v24 * v17[1]);
      v27[0] = v21 * v20;
      v27[4] = v21 * v22;
      v27[8] = -v23;
      v27[1] = (float)((float)(v26 * v23) * v20) - (float)(v25 * v22);
      v27[5] = (float)(v25 * v20) + (float)((float)(v26 * v23) * v22);
      v27[9] = v26 * v21;
      v27[2] = (float)(v23 * (float)(v25 * v20)) + (float)(v26 * v22);
      v27[6] = (float)(v23 * (float)(v25 * v22)) - (float)(v26 * v20);
      v27[10] = v25 * v21;
      v27[3] = *(float *)(v9 + i + 96);
      v27[7] = *(float *)(v9 + i + 100);
      v27[11] = *(float *)(v9 + i + 104);
      (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(v9 + i + 92) + 60))(**(_DWORD **)(v9 + i + 92), v27);
      result = ModelWrapper_updateModel(*(ModelWrapper **)(v9 + i + 92));
    }
  }
  else
  {
    FIELD_U8(result, 16) = 1;
  }
  return result;
}
