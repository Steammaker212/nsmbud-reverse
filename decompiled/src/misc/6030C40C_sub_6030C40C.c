/* sub_6030C40C
 * address: 0x6030C40C   size: 472   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6030C40C(int a1)
{
  int result; // r0
  unsigned __int8 *v3; // r9
  int v4; // r7
  int v5; // r0
  float v6; // s0
  int v7; // r8
  unsigned int v8; // r0
  int v9; // r5
  unsigned int v10; // r2
  unsigned int v11; // r1
  int v12; // r6
  float *v13; // r3
  float v14; // s2
  float v15; // s4
  float v16; // s14
  float v17; // s10
  float v18; // s6
  float v19; // s1
  float v20; // s5
  float v21; // s11
  float v22; // s12
  float v23; // [sp+0h] [bp-70h]
  float v24; // [sp+4h] [bp-6Ch]
  float v25[26]; // [sp+8h] [bp-68h] BYREF

  v3 = (unsigned __int8 *)(a1 + 7605);
  result = FIELD_U8(a1, 7605);
  if ( result )
  {
    v4 = 0;
    v24 = *(float *)(v3 - 7489);
    v23 = *(float *)(v3 - 7497);
    do
    {
      v5 = 0;
      v6 = FIELD_F32(a1, 112);
      if ( (unsigned int)v4 < 8 )
        v5 = v4;
      v7 = a1 + 4 * v5;
      v8 = FIELD_U32(v7, 7536);
      FIELD_U32(a1, 160) = v8;
      v9 = (v8 >> 20) & 0xFF0;
      v10 = FIELD_U32(a1, 164);
      v11 = FIELD_U32(a1, 156);
      v12 = (v11 >> 20) & 0xFF0;
      v13 = (float *)((char *)sinLutTable + ((v10 >> 20) & 0xFF0));
      v14 = (float)(v8 & 0xFFFFFF) * 0.000000059605;
      v15 = (float)(v10 & 0xFFFFFF) * 0.000000059605;
      v16 = (float)(v11 & 0xFFFFFF) * 0.000000059605;
      v17 = *(float *)((char *)&sinLutTable[2] + v9) + (float)(v14 * *(float *)((char *)&sinLutTable[3] + v9));
      v18 = *(float *)((char *)sinLutTable + v9) + (float)(v14 * *(float *)((char *)&sinLutTable[1] + v9));
      v19 = *v13 + (float)(v15 * v13[1]);
      v20 = v13[2] + (float)(v15 * v13[3]);
      v21 = *(float *)((char *)&sinLutTable[2] + v12) + (float)(v16 * *(float *)((char *)&sinLutTable[3] + v12));
      v22 = *(float *)((char *)sinLutTable + v12) + (float)(*(float *)((char *)&sinLutTable[1] + v12) * v16);
      v25[0] = v17 * v20;
      v25[4] = v17 * v19;
      v25[8] = -v18;
      v25[1] = (float)((float)(v22 * v18) * v20) - (float)(v21 * v19);
      v25[5] = (float)(v21 * v20) + (float)((float)(v22 * v18) * v19);
      v25[9] = v22 * v17;
      v25[2] = (float)(v18 * (float)(v21 * v20)) + (float)(v22 * v19);
      v25[6] = (float)(v18 * (float)(v21 * v19)) - (float)(v22 * v20);
      v25[10] = v21 * v17;
      v25[3] = v23;
      v25[7] = v6 + (float)((float)v4 * 16.0);
      v25[11] = v24;
      (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(v7 + 6960) + 60))(**(_DWORD **)(v7 + 6960), v25);
      ModelWrapper_updateModel(*(ModelWrapper **)(v7 + 6960));
      result = *v3;
      ++v4;
    }
    while ( v4 < result );
  }
  return result;
}
