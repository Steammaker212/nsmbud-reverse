/* sub_60200954
 * address: 0x60200954   size: 464   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60200954(int a1)
{
  int result; // r0
  int v3; // r10
  int i; // r6
  float v5; // s18
  float v6; // r11
  float v7; // r8
  float v8; // s20
  unsigned int v9; // r0
  unsigned int v10; // r1
  unsigned int v11; // r2
  int v12; // r5
  float *v13; // r3
  float *v14; // r7
  float v15; // s2
  float v16; // s0
  float v17; // s8
  float v18; // s3
  float v19; // s4
  float v20; // s14
  float v21; // s10
  float v22; // s11
  float v23; // s7
  float v24[28]; // [sp+8h] [bp-70h] BYREF

  result = FIELD_U8(a1, 216);
  if ( (result & 8) == 0 )
  {
    v3 = a1 + 268;
    for ( i = 0; i != 3; ++i )
    {
      v5 = FIELD_F32(a1, 84);
      v6 = FIELD_F32(a1, 88);
      v7 = FIELD_F32(a1, 80);
      v8 = *(float *)(FIELD_U32(a1, 316) + 28);
      (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(v3 + 4 * i) + 68))(**(_DWORD **)(v3 + 4 * i), a1 + 128);
      v9 = FIELD_U32(a1, 176);
      v10 = FIELD_U32(a1, 180);
      v11 = FIELD_U32(a1, 184);
      v12 = (v9 >> 20) & 0xFF0;
      v13 = (float *)((char *)sinLutTable + ((v10 >> 20) & 0xFF0));
      v14 = (float *)((char *)sinLutTable + ((v11 >> 20) & 0xFF0));
      v15 = (float)(v11 & 0xFFFFFF) * 0.000000059605;
      v16 = (float)(v10 & 0xFFFFFF) * 0.000000059605;
      v17 = v14[2] + (float)(v15 * v14[3]);
      v18 = v13[2] + (float)(v16 * v13[3]);
      v19 = *v14 + (float)(v15 * v14[1]);
      v20 = *v13 + (float)(v16 * v13[1]);
      v21 = (float)(v9 & 0xFFFFFF) * 0.000000059605;
      v22 = *(float *)((char *)&sinLutTable[2] + v12) + (float)(v21 * *(float *)((char *)&sinLutTable[3] + v12));
      v23 = *(float *)((char *)sinLutTable + v12) + (float)(v21 * *(float *)((char *)&sinLutTable[1] + v12));
      v24[0] = v18 * v17;
      v24[4] = v18 * v19;
      v24[8] = -v20;
      v24[1] = (float)((float)(v23 * v20) * v17) - (float)(v22 * v19);
      v24[5] = (float)(v22 * v17) + (float)((float)(v23 * v20) * v19);
      v24[9] = v23 * v18;
      v24[2] = (float)(v20 * (float)(v22 * v17)) + (float)(v23 * v19);
      v24[6] = (float)(v20 * (float)(v22 * v19)) - (float)(v23 * v17);
      v24[10] = v22 * v18;
      v24[3] = v7;
      v24[7] = v5 + v8;
      v24[11] = v6;
      (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(v3 + 4 * i) + 60))(**(_DWORD **)(v3 + 4 * i), v24);
      (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(v3 + 4 * i) + 52))(**(_DWORD **)(v3 + 4 * i));
      result = (*(int (__fastcall **)(_DWORD))(***(_DWORD ***)(v3 + 4 * i) + 56))(**(_DWORD **)(v3 + 4 * i));
    }
  }
  return result;
}
