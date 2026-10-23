/* sub_606BA3D4
 * address: 0x606BA3D4   size: 528   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606BA3D4(_DWORD *a1)
{
  int v2; // r2
  float v3; // s20
  int v4; // r1
  int v5; // r10
  int v6; // r8
  int v7; // r0
  int v8; // r6
  float v9; // s26
  int result; // r0
  int v11; // r2
  _DWORD *v12; // r2
  int v13; // r1
  int v14; // r3
  _DWORD *v15; // r7
  int v16; // r9
  int v17; // r1
  float *v18; // r2
  float v19; // r6
  float *v20; // r0
  float v21; // r11
  float v22; // s16
  float v23; // s18
  float v24; // s26
  unsigned int v25; // r0
  float *v26; // r1
  float v27; // s8
  int v28; // r0
  int v29; // r2
  int v30; // r3
  float *v31; // r1
  int v32; // r0

  v2 = -1;
  v3 = 0.0;
  v4 = -1;
  v5 = 1;
  v6 = 0;
  v7 = a1[1530];
  v8 = a1[29];
  v9 = 52.0;
  if ( v7 < 1 )
    v2 = 0x1FFF;
  result = v2 + v7;
  v11 = 0;
  if ( (unsigned int)result <= 0x2000 )
    v11 = result;
  v12 = &a1[2 * v11];
  if ( result < 1 )
    v4 = 0x1FFF;
  v13 = v4 + result;
  v14 = v12[1565];
  a1[17964] = v12[1564];
  v15 = a1 + 1564;
  a1[17965] = v14;
  a1[17966] = v8;
  do
  {
    v16 = v13;
    v17 = 0;
    if ( (unsigned int)v16 <= 0x2000 )
      v17 = v16;
    v18 = (float *)&v15[2 * v17];
    v19 = *v18;
    if ( (unsigned int)result > 0x2000 )
      result = 0;
    v20 = (float *)&v15[2 * result];
    v21 = v18[1];
    v22 = v19 - *v20;
    v23 = v21 - v20[1];
    v3 = v3 + sqrtf((float)(v23 * v23) + (float)(v22 * v22));
    if ( v3 < v9 )
      goto LABEL_19;
    v24 = v9 - v3;
    if ( v24 != 0.0 )
    {
      v25 = sub_6000F7B8(v23, v22);
      v26 = (float *)((char *)sinLutTable + ((v25 >> 20) & 0xFF0));
      v27 = (float)(v25 & 0xFFFFFF);
      v19 = v19 - (float)(v24 * (float)(*v26 + (float)((float)(v27 * v26[1]) * 0.000000059605)));
      v21 = v21 - (float)(v24 * (float)(v26[2] + (float)((float)(v27 * v26[3]) * 0.000000059605)));
    }
    v28 = 0;
    v29 = a1[29];
    LOWORD(v30) = 6324;
    if ( (unsigned int)v5 < 0xE )
      v28 = v5;
    HIWORD(v30) = 1;
    v31 = (float *)&a1[3 * v28];
    v31[17964] = v19;
    result = v5 + 1;
    *(float *)((char *)v31 + v30) = v21;
    *((_DWORD *)v31 + 17966) = v29;
    if ( v5 > 11 )
      break;
    v9 = (float)++v5 * 52.0;
LABEL_19:
    v32 = -1;
    ++v6;
    if ( v16 < 1 )
      v32 = 0x1FFF;
    v13 = v32 + v16;
    result = v16;
  }
  while ( v6 < 0x2000 );
  return result;
}
