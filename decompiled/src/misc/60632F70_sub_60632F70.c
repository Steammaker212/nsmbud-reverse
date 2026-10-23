/* sub_60632F70
 * address: 0x60632F70   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60632F70(int a1, int *a2, int a3, unsigned int a4, float a5, unsigned int a6)
{
  float v10; // r1
  int v11; // r0
  int v12; // r3
  float *v13; // r2
  float v14; // s4
  float v15; // s10
  float v16; // s6
  float v17; // s5
  float v18; // s1
  float v19; // s2
  float v20; // s13
  float v21; // s9
  float v23; // [sp+0h] [bp-48h] BYREF
  float v24; // [sp+4h] [bp-44h]
  float v25; // [sp+8h] [bp-40h]
  int v26; // [sp+Ch] [bp-3Ch]
  float v27; // [sp+10h] [bp-38h]
  float v28; // [sp+14h] [bp-34h]
  float v29; // [sp+18h] [bp-30h]
  int v30; // [sp+1Ch] [bp-2Ch]
  float v31; // [sp+20h] [bp-28h]
  float v32; // [sp+24h] [bp-24h]
  float v33; // [sp+28h] [bp-20h]
  int v34; // [sp+2Ch] [bp-1Ch]

  v10 = FIELD_F32(a3, 4);
  v23 = *(float *)a3;
  v24 = v10;
  v25 = -3100.0;
  sub_606310C8(a1, a2, &v23, a4, a5, 16.0);
  if ( FIELD_U8(a1, 744) )
  {
    v11 = FIELD_U32(a3, 8);
    a2[2] = v11;
  }
  else
  {
    v11 = a2[2];
  }
  v12 = (a6 >> 20) & 0xFF0;
  v13 = (float *)((char *)sinLutTable + ((a4 >> 20) & 0xFF0));
  v14 = (float)(a4 & 0xFFFFFF) * 0.000000059605;
  v15 = (float)(-0.00030118 * 0.0) + 1.0;
  v16 = (float)(0.024541 * 0.0) + 0.0;
  v17 = v13[2] + (float)(v14 * v13[3]);
  v18 = *v13 + (float)(v14 * v13[1]);
  v19 = (float)(a6 & 0xFFFFFF) * 0.000000059605;
  v20 = *(float *)((char *)&sinLutTable[2] + v12) + (float)(v19 * *(float *)((char *)&sinLutTable[3] + v12));
  v21 = *(float *)((char *)sinLutTable + v12) + (float)(v19 * *(float *)((char *)&sinLutTable[1] + v12));
  v23 = v15 * v17;
  v27 = v15 * v18;
  v31 = -v16;
  v24 = (float)((float)(v21 * v16) * v17) - (float)(v20 * v18);
  v28 = (float)(v20 * v17) + (float)((float)(v21 * v16) * v18);
  v32 = v21 * v15;
  v25 = (float)(v16 * (float)(v20 * v17)) + (float)(v21 * v18);
  v29 = (float)(v16 * (float)(v20 * v18)) - (float)(v21 * v17);
  v33 = v20 * v15;
  v26 = *a2;
  v30 = a2[1];
  v34 = v11;
  return ((int (__fastcall *)(int, float *))loc_60630830)(a1 + 724, &v23);
}
