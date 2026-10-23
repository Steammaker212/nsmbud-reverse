/* sub_6092E254
 * address: 0x6092E254   size: 1124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6092E254(int a1, int a2)
{
  int v2; // r10
  int v3; // r2
  int v4; // r8
  int v5; // r5
  int v6; // r7
  int v7; // r4
  int v8; // s0
  int v9; // r2
  int v10; // r4
  int v11; // r9
  _DWORD *v12; // r11
  float v13; // s22
  bool v14; // zf
  _DWORD *v15; // r8
  int v16; // r11
  int v17; // r7
  float v18; // s24
  int v19; // r9
  int v20; // r10
  int v21; // r4
  float v22; // s18
  float v23; // s16
  int v24; // r5
  int v25; // r0
  int v26; // r5
  int v27; // r0
  int v28; // r1
  float *v29; // r0
  int v30; // r5
  int v31; // r0
  int v32; // r10
  int v33; // r7
  int v34; // r5
  int v35; // r0
  float v36; // s16
  int v37; // r5
  int v38; // r4
  int v39; // r0
  int v40; // r5
  int v41; // r0
  int v42; // r5
  int v43; // r4
  int v44; // r0
  int v45; // r5
  int v46; // r0
  int v47; // r5
  int v48; // r4
  int v49; // r0
  int v50; // r5
  int v51; // r0
  int v52; // r0
  int result; // r0
  int v56; // [sp+14h] [bp-94h]
  int v57; // [sp+24h] [bp-84h]
  int v58; // [sp+2Ch] [bp-7Ch]
  int v59; // [sp+30h] [bp-78h]
  int v60; // [sp+34h] [bp-74h]
  int v61; // [sp+34h] [bp-74h]
  int v62; // [sp+38h] [bp-70h]
  int v63; // [sp+3Ch] [bp-6Ch]
  _DWORD v64[3]; // [sp+40h] [bp-68h] BYREF
  int v65; // [sp+4Ch] [bp-5Ch] BYREF

  v2 = a2;
  v3 = 0;
  do
  {
    v4 = v3;
    v5 = a1 + 744 * v3;
    v6 = v5 + 2112;
    v7 = dword_60AF22D8[v3];
    sub_60913D88(v5 + 2112, v7 << 6, v2, 4, 0);
    sub_60913A6C(&v65, v5 + 2112, 0);
    v8 = v7;
    v9 = v4;
    v62 = v7;
    v56 = v5;
    v10 = 0;
    v11 = 0;
    v12 = (_DWORD *)(v5 + 2124);
    v58 = v4 | 1;
    v13 = (float)v8;
    v59 = v4;
    do
    {
      if ( v9 == 1 )
      {
        v30 = dword_60CC73E8(*v12);
        v31 = v30 + sub_60913FB4(v6);
        v32 = v6;
        *(_DWORD *)(v31 + 16 * v11) = -1082130432;
        *(_DWORD *)(v31 + 16 * v11 + 4) = 1065353216;
        v33 = dword_60AF2CF4[v10];
        v34 = dword_60CC73E8(*v12);
        v35 = v34 + sub_60913FB4(v32) + 16 * v11;
        v36 = (float)v10;
        FIELD_U32(v35, 8) = v33;
        FIELD_F32(v35, 12) = (float)v10;
        v37 = dword_60CC73E8(*v12);
        v61 = v10;
        v38 = 16 * v11 + 16;
        v39 = v37 + sub_60913FB4(v32);
        *(_DWORD *)(v39 + v38) = -1082130432;
        *(_DWORD *)(v39 + v38 + 4) = -1082130432;
        v40 = dword_60CC73E8(*v12);
        v41 = v40 + sub_60913FB4(v32) + v38;
        FIELD_U32(v41, 8) = v33;
        FIELD_F32(v41, 12) = v36;
        v42 = dword_60CC73E8(*v12);
        v43 = 16 * v11 + 32;
        v44 = v42 + sub_60913FB4(v32);
        *(_DWORD *)(v44 + v43) = 1065353216;
        *(_DWORD *)(v44 + v43 + 4) = -1082130432;
        v45 = dword_60CC73E8(*v12);
        v46 = v45 + sub_60913FB4(v32) + v43;
        FIELD_U32(v46, 8) = v33;
        FIELD_F32(v46, 12) = v36;
        v47 = dword_60CC73E8(*v12);
        v48 = 16 * v11 + 48;
        v49 = v47 + sub_60913FB4(v32);
        *(_DWORD *)(v49 + v48) = 1065353216;
        *(_DWORD *)(v49 + v48 + 4) = 1065353216;
        v50 = dword_60CC73E8(*v12);
        v51 = sub_60913FB4(v32);
        v9 = v59;
        v11 += 4;
        v52 = v50 + v51 + v48;
        v10 = v61;
        FIELD_U32(v52, 8) = v33;
        v6 = v32;
        FIELD_F32(v52, 12) = v36;
      }
      else
      {
        v14 = v9 == 0;
        if ( !v9 )
          v14 = v58 == 1;
        if ( v14 )
        {
          v15 = v12;
          v16 = v6;
          v57 = v11;
          v17 = (16 * v11) | 0xC;
          v63 = (16 * v11) | 8;
          v18 = (float)v10;
          v60 = v10;
          v19 = (16 * v11) | 4;
          v20 = dword_60AF2CF4[v10];
          v21 = 0;
          do
          {
            v22 = cosf((float)((float)v21 * 6.2832) / v13);
            v23 = sinf((float)((float)v21 * 6.2832) / v13);
            v24 = ((int (__fastcall *)(_DWORD, float))dword_60CC73E8)(*v15, v23);
            v25 = v24 + sub_60913FB4(v16);
            *(float *)(v25 + v17 - 12) = v22;
            *(float *)(v25 + v19) = v23;
            v26 = dword_60CC73E8(*v15);
            v27 = v26 + sub_60913FB4(v16);
            v19 += 16;
            v28 = v27 + v63;
            v29 = (float *)(v27 + v17);
            v17 += 16;
            *(_DWORD *)(v28 + 16 * v21) = v20;
            *v29 = v18;
            ++v21;
          }
          while ( v21 < v62 );
          v9 = v59;
          v6 = v16;
          v12 = v15;
          v11 = v57 + v21;
          v10 = v60;
        }
      }
      ++v10;
    }
    while ( v10 != 4 );
    sub_60913A6C(v64, v6, 0);
    sub_609225B8(v56 + 2168, v64, 0x10u, FIELD_U32(v56, 2120));
    sub_60922768(v56 + 2168, 0, 22, 0, 0);
    sub_60922768(v56 + 2168, 1u, 22, 8, 0);
    v2 = a2;
    sub_60921D30(v56 + 2440, 1, a2);
    sub_60921DF0(v56 + 2440, 0, v56 + 2168, 0);
    sub_60921DF0(v56 + 2440, 1, v56 + 2168, 1);
    result = sub_60921F90(v56 + 2440);
    v3 = v59 + 1;
  }
  while ( v59 != 1 );
  return result;
}
