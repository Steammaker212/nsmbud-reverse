/* sub_603EC9F0
 * address: 0x603EC9F0   size: 432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603EC9F0(_DWORD *a1)
{
  int result; // r0
  int v3; // r7
  int i; // r6
  _DWORD *v5; // r12
  unsigned int v6; // r3
  unsigned int v7; // r1
  float *v8; // r0
  int v9; // r2
  int v10; // s12
  float *v11; // r1
  float v12; // s2
  float v13; // s0
  float v14; // s8
  float v15; // s4
  float v16; // s3
  float v17; // s14
  float v18; // s10
  float v19; // s11
  float v20; // s7
  float v21[24]; // [sp+0h] [bp-60h] BYREF

  result = 0x8750D8u;
  v3 = 23;
  for ( i = 0; i != 24; i += 6 )
  {
    v5 = (_DWORD *)a1[v3];
    if ( v5 )
    {
      v6 = a1[19];
      v7 = a1[17];
      v8 = (float *)((char *)sinLutTable + ((v6 >> 20) & 0xFF0));
      v9 = (v7 >> 20) & 0xFF0;
      v10 = v7 & 0xFFFFFF;
      v11 = (float *)((char *)sinLutTable + ((a1[18] >> 20) & 0xFF0));
      v12 = (float)(v6 & 0xFFFFFF) * 0.000000059605;
      v13 = (float)(a1[18] & 0xFFFFFF) * 0.000000059605;
      v14 = v8[2] + (float)(v12 * v8[3]);
      v15 = *v8 + (float)(v12 * v8[1]);
      v16 = v11[2] + (float)(v13 * v11[3]);
      v17 = *v11 + (float)(v13 * v11[1]);
      v18 = (float)(unsigned int)v10 * 0.000000059605;
      v19 = *(float *)((char *)&sinLutTable[2] + v9) + (float)(v18 * *(float *)((char *)&sinLutTable[3] + v9));
      v20 = *(float *)((char *)sinLutTable + v9) + (float)(v18 * *(float *)((char *)&sinLutTable[1] + v9));
      v21[0] = v16 * v14;
      v21[4] = v16 * v15;
      v21[8] = -v17;
      v21[1] = (float)((float)(v20 * v17) * v14) - (float)(v19 * v15);
      v21[5] = (float)(v19 * v14) + (float)((float)(v20 * v17) * v15);
      v21[9] = v20 * v16;
      v21[2] = (float)(v17 * (float)(v19 * v14)) + (float)(v20 * v15);
      v21[6] = (float)(v17 * (float)(v19 * v15)) - (float)(v20 * v14);
      v21[10] = v19 * v16;
      v21[3] = *(float *)&a1[i + 27];
      v21[7] = *(float *)&a1[i + 28];
      v21[11] = *(float *)&a1[i + 29];
      (*(void (__fastcall **)(_DWORD, float *))(*(_DWORD *)*v5 + 60))(*v5, v21);
      (*(void (__fastcall **)(_DWORD, _DWORD *))(**(_DWORD **)a1[v3] + 68))(*(_DWORD *)a1[v3], a1 + 14);
      result = ModelWrapper_updateModel((ModelWrapper *)a1[v3]);
    }
    ++v3;
  }
  return result;
}
