/* sub_6032FB2C
 * address: 0x6032FB2C   size: 640   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6032FB2C(int a1)
{
  float *v1; // r4
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
  _DWORD *v20; // t1
  float v21; // s4
  float v22; // s0
  float v24[12]; // [sp+0h] [bp-70h] BYREF
  float v25[3]; // [sp+30h] [bp-40h] BYREF
  float v26; // [sp+3Ch] [bp-34h]
  float v27; // [sp+40h] [bp-30h]
  float v28; // [sp+44h] [bp-2Ch]
  float v29; // [sp+48h] [bp-28h]
  float v30; // [sp+4Ch] [bp-24h]
  float v31; // [sp+50h] [bp-20h]
  float v32; // [sp+54h] [bp-1Ch]
  float v33; // [sp+58h] [bp-18h]
  float v34; // [sp+5Ch] [bp-14h]

  v1 = (float *)a1;
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
  v24[3] = v1[27];
  v24[7] = v1[28];
  v24[11] = v1[29];
  v20 = *((_DWORD **)v1 + 1575);
  v1 += 1575;
  (*(void (__fastcall **)(_DWORD, _DWORD **))(*(_DWORD *)*v20 + 68))(*v20, (_DWORD **)v1 + 193);
  (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)v1 + 60))(**(_DWORD **)v1, v24);
  (*(void (__fastcall **)(_DWORD, int, float *))(***(_DWORD ***)v1 + 108))(**(_DWORD **)v1, 10, v25);
  v26 = v26 + (float)((float)((float)(v25[1] * 0.0) + (float)(v25[0] * 0.0)) + (float)(v25[2] * 7.0));
  v30 = v30 + (float)((float)((float)(v28 * 0.0) + (float)(v27 * 0.0)) + (float)(v29 * 7.0));
  v21 = v30;
  v34 = v34 + (float)((float)((float)(v32 * 0.0) + (float)(v31 * 0.0)) + (float)(v33 * 7.0));
  v22 = v34;
  v1[5] = v26;
  v1[6] = v21;
  v1[7] = v22;
  (*(void (__fastcall **)(_DWORD, _DWORD, float *))(***(_DWORD ***)v1 + 108))(**(_DWORD **)v1, 0, v25);
  v1[8] = v26;
  v1[9] = v30;
  v1[10] = v34;
  (*(void (__fastcall **)(_DWORD, int, float *))(***(_DWORD ***)v1 + 108))(**(_DWORD **)v1, 4, v25);
  v1[11] = v26;
  v1[12] = v30;
  v1[13] = v34;
  return sub_60421880(*(_DWORD *)v1);
}
