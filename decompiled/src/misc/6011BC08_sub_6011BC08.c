/* sub_6011BC08
 * address: 0x6011BC08   size: 820   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_6011BC08(float *a1)
{
  float *v2; // r11
  float *v3; // r8
  float *v4; // r10
  float *v5; // r7
  float *v6; // r5
  float *v7; // r6
  float v8; // s2
  float v9; // s22
  float v10; // s0
  float v11; // s8
  float v12; // s12
  float v13; // s4
  float v14; // s6
  float v15; // s10
  float v16; // s24
  float v17; // s0
  float v18; // s10
  float v19; // s12
  float v20; // s8
  float v21; // s4
  float v22; // s6
  float v23; // s16
  float v24; // s0
  float v25; // s2
  float v26; // s16
  float v27; // s0
  float *v29; // [sp+4h] [bp-6Ch]
  float *v30; // [sp+8h] [bp-68h]
  float *v31; // [sp+Ch] [bp-64h]
  float *v32; // [sp+10h] [bp-60h]
  float *v33; // [sp+18h] [bp-58h]
  float *v34; // [sp+1Ch] [bp-54h]

  v2 = a1 + 1718;
  v3 = a1 + 1712;
  v4 = a1 + 1717;
  v5 = a1 + 1713;
  v6 = a1 + 1711;
  v33 = a1 + 1715;
  v34 = a1 + 1716;
  v30 = a1 + 1711;
  v31 = a1 + 1713;
  v7 = a1 + 1714;
  v32 = a1 + 1717;
  v29 = a1 + 1718;
  v8 = (float)(a1[1718] + (float)((float)((float)(a1[1716] * 1.9) + (float)(a1[1715] * 0.0)) + (float)(a1[1717] * 0.0)))
     - a1[28];
  a1[76] = (float)(a1[1714]
                 + (float)((float)((float)(a1[1712] * 1.9) + (float)(a1[1711] * 0.0)) + (float)(a1[1713] * 0.0)))
         - a1[27];
  a1[77] = v8;
  v9 = (*(float (__fastcall **)(float *))(*(_DWORD *)a1 + 668))(a1) * 1.08;
  v10 = (*(float (__fastcall **)(float *))(*(_DWORD *)a1 + 668))(a1);
  a1[78] = v9;
  a1[79] = v10 * 1.08;
  v11 = *v4;
  v12 = *v34;
  v13 = a1[28];
  v14 = *v2;
  v15 = *v33;
  a1[1985] = (float)(*v7 + (float)((float)((float)(*v3 * 20.7) + (float)(*v6 * 0.0)) + (float)(*v5 * 0.0))) - a1[27];
  a1[1986] = (float)(v14 + (float)((float)((float)(v12 * 20.7) + (float)(v15 * 0.0)) + (float)(v11 * 0.0))) - v13;
  v16 = (*(float (__fastcall **)(float *))(*(_DWORD *)a1 + 668))(a1) * 0.9;
  v17 = (*(float (__fastcall **)(float *))(*(_DWORD *)a1 + 668))(a1);
  a1[1987] = v16;
  a1[1988] = v17 * 0.9;
  v18 = *v33;
  v19 = *v34;
  v20 = *v32;
  v21 = a1[28];
  v22 = *v29;
  a1[1866] = (float)(*v7 + (float)((float)((float)(*v3 * 1.9) + (float)(*v30 * 0.0)) + (float)(*v31 * 0.0))) - a1[27];
  a1[1867] = (float)(v22 + (float)((float)((float)(v19 * 1.9) + (float)(v18 * 0.0)) + (float)(v20 * 0.0))) - v21;
  v23 = (*(float (__fastcall **)(float *))(*(_DWORD *)a1 + 668))(a1);
  v24 = (*(float (__fastcall **)(float *, float))(*(_DWORD *)a1 + 668))(a1, v23);
  a1[1868] = v23;
  a1[1869] = v24;
  v25 = (float)(*v29 + (float)((float)((float)(*v34 * 20.7) + (float)(*v33 * 0.0)) + (float)(*v32 * 0.0))) - a1[28];
  a1[2061] = (float)(*v7 + (float)((float)((float)(*v3 * 20.7) + (float)(*v30 * 0.0)) + (float)(*v31 * 0.0))) - a1[27];
  a1[2062] = v25;
  v26 = (*(float (__fastcall **)(float *))(*(_DWORD *)a1 + 668))(a1);
  v27 = (*(float (__fastcall **)(float *, float))(*(_DWORD *)a1 + 668))(a1, v26);
  a1[2063] = v26;
  a1[2064] = v27;
  return a1 + 2064;
}
