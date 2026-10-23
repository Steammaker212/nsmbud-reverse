/* sub_601C7824
 * address: 0x601C7824   size: 936   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C7824(int a1, unsigned int a2, _DWORD *a3)
{
  int v5; // r0
  bool v6; // zf
  _DWORD *v7; // r1
  float *v8; // r0
  float v9; // r1
  int v10; // r2
  int v11; // r6
  float *v12; // r0
  int v13; // r0
  int v14; // r1
  _WORD *v15; // r1
  __int16 v16; // r0
  float v17; // s16
  float v18; // s18
  int v19; // r8
  int v20; // r7
  float v21; // s22
  float v22; // s20
  float *v23; // r0
  int v24; // r0
  float *v25; // r5
  float *v26; // r6
  float v27; // s16
  int v28; // r7
  _DWORD *v29; // r0
  float v30; // s18
  float v31; // s20
  int v32; // r6
  float *v33; // r0
  float v34; // r0
  float v35; // r1
  float v36; // r2
  float v37; // s2
  int v39; // [sp+Ch] [bp-5Ch] BYREF
  int v40; // [sp+10h] [bp-58h]
  int v41; // [sp+14h] [bp-54h]
  float v42; // [sp+18h] [bp-50h] BYREF
  int v43; // [sp+1Ch] [bp-4Ch]
  float v44; // [sp+20h] [bp-48h]
  int v45; // [sp+24h] [bp-44h] BYREF
  int v46; // [sp+28h] [bp-40h]
  int v47; // [sp+2Ch] [bp-3Ch]

  v45 = -1;
  v46 = -1;
  v47 = -1;
  if ( *a3 == -1 )
    goto LABEL_6;
  v5 = a3[1];
  v6 = v5 == -1;
  if ( v5 != -1 )
    v6 = a3[2] == -1;
  if ( v6 )
LABEL_6:
    v7 = (_DWORD *)(dword_60CC6D78 + 468);
  else
    v7 = a3;
  sub_6019EC34(&v45, v7);
  v8 = (float *)sub_601E0040(&v45);
  v9 = *v8;
  v10 = *((_DWORD *)v8 + 1);
  v44 = v8[2];
  v43 = v10;
  v42 = v9;
  v11 = sub_601CFF2C(dword_60C8AEF0, a2);
  if ( a2 == 7 )
  {
    v12 = (float *)sub_601C6BF0(a1);
    sub_601C4814(a1, &v42, v11, 0, v12[1]);
    v13 = *(_DWORD *)a1;
    v14 = 17;
  }
  else if ( (a2 | 1) == 5 )
  {
    v39 = -1;
    v40 = -1;
    v41 = -1;
    sub_601E0AB8(&v39);
    if ( v45 == v39 && v46 == v40 && v47 == v41 )
    {
      v15 = (_WORD *)(a1 + 440);
      v16 = FIELD_U16(a1, 440) | 2;
    }
    else
    {
      v15 = (_WORD *)(a1 + 440);
      v16 = FIELD_U16(a1, 440) & 0xFFFD;
    }
    *v15 = v16;
    if ( a2 == 4 )
    {
      v24 = sub_6019172C(dword_60C8996C);
      v25 = (float *)(a1 + 80);
      sub_60217DD8(v24, a1 + 80);
      v26 = (float *)sub_601CEEE4(a1 + 1032, &v45);
      v27 = *((float *)sub_601C6BF0(a1) + 1);
      v28 = 1;
    }
    else
    {
      v27 = 0.0;
      v26 = (float *)sub_601CEEE4(a1 + 1032, &v45);
      v25 = (float *)(a1 + 80);
      v28 = 10;
    }
    v29 = sub_601C6BF0(a1);
    v30 = *v26;
    v31 = v26[1];
    v32 = v29[256];
    v33 = (float *)sub_601C6BF0(a1);
    sub_601C4A1C(a1, v25, &v42, v32, v30, v31, v27, v33[1], v28);
    v14 = 15;
    FIELD_U32(a1, 1112) = 15;
    v13 = *(_DWORD *)a1;
  }
  else
  {
    v17 = FIELD_F32(v11, 4);
    v18 = FIELD_F32(v11, 12);
    v19 = FIELD_S16(v11, 8);
    v20 = FIELD_S16(v11, 10);
    v21 = *((float *)sub_601C6BF0(a1) + 1);
    v22 = FIELD_F32(v11, 16);
    v23 = (float *)sub_601C6BF0(a1);
    ((void (__fastcall *)(int, float *, _DWORD, int, float, float, float, int, int *))loc_60185F9C)(
      a1,
      &v42,
      0,
      v19,
      v17,
      v18 * v21,
      v22 * v23[1],
      v20,
      &dword_60B3B974);
    if ( sub_601C43E0(a1, a2) == 1 )
    {
      if ( a2 > 0xA || ((1 << a2) & 0x64E) == 0 )
        sub_601C5B4C(a1, 2);
      v13 = *(_DWORD *)a1;
      v14 = 14;
    }
    else
    {
      sub_601C5B4C(a1, 0);
      v13 = *(_DWORD *)a1;
      v14 = 7;
    }
  }
  (*(void (__fastcall **)(int, int, int, float))(v13 + 336))(a1, v14, -1, 0.0);
  v34 = FIELD_F32(a1, 80);
  FIELD_F32(a1, 968) = v34;
  FIELD_U32(a1, 972) = FIELD_U32(a1, 84);
  v35 = FIELD_F32(a1, 88);
  FIELD_F32(a1, 976) = v35;
  v36 = v42;
  FIELD_F32(a1, 980) = v42;
  FIELD_U32(a1, 984) = v43;
  v37 = v44;
  FIELD_F32(a1, 988) = v44;
  FIELD_F32(a1, 992) = sqrtf(
                           (float)((float)(v37 - v35) * (float)(v37 - v35))
                         + (float)((float)(v36 - v34) * (float)(v36 - v34)));
  sub_601721F0(dword_60C88BC8);
  sub_6019EC34((_DWORD *)(a1 + 1032), &v45);
  sub_601B2EF0(a1, a1 + 1032);
  return sub_601C6F70(a1);
}
