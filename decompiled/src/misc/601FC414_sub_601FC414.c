/* sub_601FC414
 * address: 0x601FC414   size: 436   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601FC414(int a1)
{
  int v2; // r0
  unsigned int v3; // r1
  int *v4; // r0
  int result; // r0
  unsigned int v6; // r0
  unsigned int v7; // r2
  int v8; // s14
  float *v9; // r1
  float v10; // s0
  float v11; // s2
  float *v12; // r0
  float v13; // s6
  float v14; // s8
  float v15; // s10
  float v16; // s12
  float *v17; // r1
  float v18; // s14
  float v19; // s10
  float v20; // s6
  float v21; // s5
  float v22; // s1
  float v23; // s13
  float v24; // s9
  float v25[14]; // [sp+0h] [bp-38h] BYREF

  if ( FIELD_U8(a1, 281) )
  {
    v2 = FIELD_U32(a1, 268);
    v3 = FIELD_U32(v2, 8);
    v4 = *(int **)(v2 + 12);
    if ( v3 > 1 )
      ++v4;
    Animation_update(*v4);
  }
  result = FIELD_U8(a1, 216);
  if ( (result & 8) == 0 )
  {
    v6 = FIELD_U32(a1, 176);
    v7 = FIELD_U32(a1, 184);
    v8 = v6 & 0xFFFFFF;
    v9 = (float *)((char *)sinLutTable + ((v7 >> 20) & 0xFF0));
    v10 = (float)(v7 & 0xFFFFFF) * 0.000000059605;
    v11 = (float)(FIELD_U32(a1, 180) & 0xFFFFFF) * 0.000000059605;
    v12 = (float *)((char *)sinLutTable + ((v6 >> 20) & 0xFF0));
    v13 = *v9;
    v14 = v9[1];
    v15 = v9[2];
    v16 = v9[3];
    v17 = (float *)((char *)sinLutTable + ((FIELD_U32(a1, 180) >> 20) & 0xFF0));
    v18 = (float)(unsigned int)v8;
    v19 = v15 + (float)(v10 * v16);
    v20 = v13 + (float)(v10 * v14);
    v21 = v17[2] + (float)(v11 * v17[3]);
    v22 = *v17 + (float)(v11 * v17[1]);
    v23 = v12[2] + (float)((float)(v18 * 0.000000059605) * v12[3]);
    v24 = *v12 + (float)((float)(v18 * 0.000000059605) * v12[1]);
    v25[0] = v21 * v19;
    v25[4] = v21 * v20;
    v25[8] = -v22;
    v25[1] = (float)((float)(v24 * v22) * v19) - (float)(v23 * v20);
    v25[5] = (float)(v23 * v19) + (float)((float)(v24 * v22) * v20);
    v25[9] = v24 * v21;
    v25[2] = (float)(v22 * (float)(v23 * v19)) + (float)(v24 * v20);
    v25[6] = (float)(v22 * (float)(v23 * v20)) - (float)(v24 * v19);
    v25[10] = v23 * v21;
    v25[3] = FIELD_F32(a1, 80);
    v25[7] = FIELD_F32(a1, 84);
    v25[11] = FIELD_F32(a1, 88);
    (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 268) + 60))(**(_DWORD **)(a1 + 268), v25);
    (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 268) + 52))(**(_DWORD **)(a1 + 268));
    return (*(int (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 268) + 56))(**(_DWORD **)(a1 + 268));
  }
  return result;
}
