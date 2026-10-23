/* sub_606B65D8
 * address: 0x606B65D8   size: 480   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606B65D8(int a1)
{
  int v2; // r5
  unsigned int v3; // r0
  unsigned int v4; // r1
  unsigned int v5; // r5
  int v6; // s2
  int v7; // s14
  float *v8; // r3
  float *v9; // r1
  float *v10; // r0
  float v11; // s14
  float v12; // s0
  float v13; // s2
  float v14; // s10
  float v15; // s5
  float v16; // s6
  float v17; // s1
  float v18; // s13
  float v19; // s9
  float **v20; // r5
  int *v21; // r1
  unsigned int v22; // r0
  float v24[16]; // [sp+0h] [bp-40h] BYREF

  v2 = a1 + 156;
  v3 = FIELD_U32(a1, 156);
  v4 = FIELD_U32(v2, 4);
  v5 = FIELD_U32(v2, 8);
  v6 = v4 & 0xFFFFFF;
  v7 = v3 & 0xFFFFFF;
  v8 = (float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0));
  v9 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
  v10 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
  v11 = (float)(unsigned int)v7;
  v12 = (float)(v5 & 0xFFFFFF) * 0.000000059605;
  v13 = (float)(unsigned int)v6 * 0.000000059605;
  v14 = v8[2] + (float)(v12 * v8[3]);
  v15 = v9[2] + (float)(v13 * v9[3]);
  v16 = *v8 + (float)(v12 * v8[1]);
  v17 = *v9 + (float)(v13 * v9[1]);
  v18 = v10[2] + (float)((float)(v11 * 0.000000059605) * v10[3]);
  v19 = *v10 + (float)((float)(v11 * 0.000000059605) * v10[1]);
  v24[0] = v15 * v14;
  v24[4] = v15 * v16;
  v24[8] = -v17;
  v24[1] = (float)((float)(v19 * v17) * v14) - (float)(v18 * v16);
  v24[5] = (float)(v18 * v14) + (float)((float)(v19 * v17) * v16);
  v24[9] = v19 * v15;
  v24[2] = (float)(v17 * (float)(v18 * v14)) + (float)(v19 * v16);
  v24[6] = (float)(v17 * (float)(v18 * v16)) - (float)(v19 * v14);
  v24[10] = v18 * v15;
  v24[3] = FIELD_F32(a1, 108);
  v24[7] = FIELD_F32(a1, 112);
  v24[11] = FIELD_F32(a1, 116);
  v20 = (float **)(a1 + 6104);
  (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 6104) + 60))(**(_DWORD **)(a1 + 6104), v24);
  (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)*v20 + 68))(*(_DWORD *)*v20, a1 + 6236);
  if ( !FIELD_U32(a1, 6172) )
  {
    v21 = *((int **)*v20 + 3);
    v22 = *((_DWORD *)*v20 + 17);
    if ( *((_DWORD *)*v20 + 2) > v22 )
      v21 += v22;
    Animation_update(*v21);
  }
  sub_604218E0(*v20);
  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)*v20 + 52))(*(_DWORD *)*v20);
  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)*v20 + 56))(*(_DWORD *)*v20);
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 204))(a1);
}
