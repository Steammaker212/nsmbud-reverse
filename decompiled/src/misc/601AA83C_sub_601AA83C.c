/* sub_601AA83C
 * address: 0x601AA83C   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601AA83C(int a1)
{
  int result; // r0
  unsigned int v3; // r0
  unsigned int v4; // r2
  int v5; // s14
  float *v6; // r1
  float v7; // s0
  float v8; // s2
  float *v9; // r0
  float v10; // s6
  float v11; // s8
  float v12; // s10
  float v13; // s12
  float *v14; // r1
  float v15; // s14
  float v16; // s10
  float v17; // s6
  float v18; // s5
  float v19; // s1
  float v20; // s13
  float v21; // s9
  float v22[14]; // [sp+0h] [bp-38h] BYREF

  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 268));
  result = FIELD_U8(a1, 216);
  if ( (result & 8) == 0 )
  {
    v3 = FIELD_U32(a1, 176);
    v4 = FIELD_U32(a1, 184);
    v5 = v3 & 0xFFFFFF;
    v6 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
    v7 = (float)(v4 & 0xFFFFFF) * 0.000000059605;
    v8 = (float)(FIELD_U32(a1, 180) & 0xFFFFFF) * 0.000000059605;
    v9 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
    v10 = *v6;
    v11 = v6[1];
    v12 = v6[2];
    v13 = v6[3];
    v14 = (float *)((char *)sinLutTable + ((FIELD_U32(a1, 180) >> 20) & 0xFF0));
    v15 = (float)(unsigned int)v5;
    v16 = v12 + (float)(v7 * v13);
    v17 = v10 + (float)(v7 * v11);
    v18 = v14[2] + (float)(v8 * v14[3]);
    v19 = *v14 + (float)(v8 * v14[1]);
    v20 = v9[2] + (float)((float)(v15 * 0.000000059605) * v9[3]);
    v21 = *v9 + (float)((float)(v15 * 0.000000059605) * v9[1]);
    v22[0] = v18 * v16;
    v22[4] = v18 * v17;
    v22[8] = -v19;
    v22[1] = (float)((float)(v21 * v19) * v16) - (float)(v20 * v17);
    v22[5] = (float)(v20 * v16) + (float)((float)(v21 * v19) * v17);
    v22[9] = v21 * v18;
    v22[2] = (float)(v19 * (float)(v20 * v16)) + (float)(v21 * v17);
    v22[6] = (float)(v19 * (float)(v20 * v17)) - (float)(v21 * v16);
    v22[10] = v20 * v18;
    v22[3] = FIELD_F32(a1, 80);
    v22[7] = FIELD_F32(a1, 84);
    v22[11] = FIELD_F32(a1, 88);
    (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 268) + 60))(**(_DWORD **)(a1 + 268), v22);
    return ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 268));
  }
  return result;
}
