/* sub_6019D04C
 * address: 0x6019D04C   size: 1168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6019D04C(int a1)
{
  float *v2; // r9
  int v3; // r0
  int v4; // r1
  int v5; // r2
  unsigned int v6; // r1
  float *v7; // r6
  float v8; // s4
  float v9; // s0
  signed int result; // r0
  unsigned __int8 *v11; // r10
  signed int v12; // r5
  float v13; // s22
  float v14; // s24
  int v15; // r7
  float *v16; // r0
  int v17; // r0
  float v18; // s28
  float v19; // s26
  float v20; // s19
  float v21; // s21
  float v22; // s17
  float v23; // s0
  float v24; // s0
  float v25; // s30
  float v26; // s28
  signed int v27; // r0
  float v28; // s26
  float *v29; // r0
  float *v30; // r0
  bool v31; // zf
  float *v32; // r0
  bool v33; // zf
  float *v34; // r0
  bool v35; // zf
  float *v36; // r0
  bool v37; // zf
  float *v38; // r0
  bool v39; // zf
  float *v40; // r0
  bool v41; // zf
  float v42; // s4
  int v43; // [sp+0h] [bp-80h] BYREF
  int v44; // [sp+4h] [bp-7Ch]
  int v45; // [sp+8h] [bp-78h]
  _DWORD v46[29]; // [sp+Ch] [bp-74h] BYREF

  v46[0] = FIELD_U32(a1, 240);
  v46[1] = 0;
  v46[2] = 0;
  sub_601DAE88(v46);
  v2 = (float *)sub_601DFFE4(v46);
  v3 = *((_DWORD *)v2 + 18);
  FIELD_U32(a1, 12644) = v3;
  v4 = *((_DWORD *)v2 + 19);
  FIELD_U32(a1, 12648) = v4;
  v5 = *((_DWORD *)v2 + 20);
  FIELD_U32(a1, 12652) = v5;
  FIELD_U32(a1, 80) = v3;
  FIELD_U32(a1, 84) = v4;
  FIELD_U32(a1, 88) = v5;
  v6 = FIELD_U32(a1, 240);
  if ( v6 != 3 )
    v6 = 5;
  v7 = (float *)sub_60178694((int)v2, v6);
  v8 = v2[20] - v7[20];
  v9 = sqrtf(
         (float)((float)((float)(v2[19] - v7[19]) * (float)(v2[19] - v7[19]))
               + (float)((float)(v2[18] - v7[18]) * (float)(v2[18] - v7[18])))
       + (float)(v8 * v8));
  v11 = (unsigned __int8 *)(a1 + 12891);
  result = FIELD_U8(a1, 12891);
  if ( (unsigned int)result >= 2 )
  {
    v12 = 1;
    v13 = 75.0;
    do
    {
      v14 = v9;
      v15 = (int)v7;
      while ( v13 < v14 )
      {
        v16 = v2 + 18;
        if ( v13 >= 75.0 )
        {
          v17 = v12 - 1;
          if ( (unsigned int)(v12 - 1) >= 6 )
            v17 = 0;
          v16 = (float *)(a1 + 40 * v17 + 12644);
        }
        v18 = v16[1];
        v19 = v16[2];
        v20 = v7[19] - v18;
        v21 = v7[18] - *v16;
        v22 = v7[20] - v19;
        v23 = sqrtf((float)((float)(v20 * v20) + (float)(v21 * v21)) + (float)(v22 * v22));
        if ( v23 > 0.0 )
        {
          v24 = 1.0 / v23;
          v22 = v22 * v24;
          v20 = v20 * v24;
          v21 = v21 * v24;
        }
        v25 = *v16 + (float)(v13 * v21);
        v26 = v18 + (float)(v13 * v20);
        v27 = 0;
        v28 = v19 + (float)(v13 * v22);
        if ( (unsigned int)v12 < 6 )
          v27 = v12;
        v14 = v14 - v13;
        v13 = 75.0;
        ++v12;
        v29 = (float *)(a1 + 40 * v27);
        v29[3161] = v25;
        v29[3162] = v26;
        v29[3163] = v28;
        v29[3158] = v25 + (float)(v21 * 7.5);
        v29[3159] = v26 + (float)(v20 * 7.5);
        v29[3160] = v28 + (float)(v22 * 7.5);
        result = *v11;
        if ( v12 >= result )
          return result;
      }
      v43 = -1;
      v44 = -1;
      v45 = -1;
      v30 = (float *)sub_60178694((int)v7, 0);
      v7 = v30;
      v31 = v30 == 0;
      if ( v30 )
        v31 = v30 == v2;
      if ( !v31 )
      {
        v43 = *((_DWORD *)v30 + 21);
        v44 = *((_DWORD *)v30 + 22);
        v45 = *((_DWORD *)v30 + 24);
        if ( sub_601DADDC(&v43) != 1 )
          goto LABEL_45;
      }
      v32 = (float *)sub_60178694(v15, 1u);
      v7 = v32;
      v33 = v32 == 0;
      if ( v32 )
        v33 = v32 == v2;
      if ( !v33 )
      {
        v43 = *((_DWORD *)v32 + 21);
        v44 = *((_DWORD *)v32 + 22);
        v45 = *((_DWORD *)v32 + 24);
        if ( sub_601DADDC(&v43) != 1 )
          goto LABEL_45;
      }
      v34 = (float *)sub_60178694(v15, 2u);
      v7 = v34;
      v35 = v34 == 0;
      if ( v34 )
        v35 = v34 == v2;
      if ( !v35 )
      {
        v43 = *((_DWORD *)v34 + 21);
        v44 = *((_DWORD *)v34 + 22);
        v45 = *((_DWORD *)v34 + 24);
        if ( sub_601DADDC(&v43) != 1 )
          goto LABEL_45;
      }
      v36 = (float *)sub_60178694(v15, 3u);
      v7 = v36;
      v37 = v36 == 0;
      if ( v36 )
        v37 = v36 == v2;
      if ( !v37 )
      {
        v43 = *((_DWORD *)v36 + 21);
        v44 = *((_DWORD *)v36 + 22);
        v45 = *((_DWORD *)v36 + 24);
        if ( sub_601DADDC(&v43) != 1 )
          goto LABEL_45;
      }
      v38 = (float *)sub_60178694(v15, 4u);
      v7 = v38;
      v39 = v38 == 0;
      if ( v38 )
        v39 = v38 == v2;
      if ( v39
        || (v43 = *((_DWORD *)v38 + 21),
            v44 = *((_DWORD *)v38 + 22),
            v45 = *((_DWORD *)v38 + 24),
            sub_601DADDC(&v43) == 1) )
      {
        v40 = (float *)sub_60178694(v15, 5u);
        v7 = v40;
        v41 = v40 == 0;
        if ( v40 )
          v41 = v40 == v2;
        if ( v41 )
        {
          v7 = (float *)v15;
        }
        else
        {
          v43 = *((_DWORD *)v40 + 21);
          v44 = *((_DWORD *)v40 + 22);
          v45 = *((_DWORD *)v40 + 24);
          if ( sub_601DADDC(&v43) )
            v7 = (float *)v15;
          else
            v2 = (float *)v15;
        }
      }
      else
      {
LABEL_45:
        v2 = (float *)v15;
      }
      v42 = v2[20] - v7[20];
      v9 = sqrtf(
             (float)((float)((float)(v2[19] - v7[19]) * (float)(v2[19] - v7[19]))
                   + (float)((float)(v2[18] - v7[18]) * (float)(v2[18] - v7[18])))
           + (float)(v42 * v42));
      result = *v11;
      v13 = v13 - v14;
    }
    while ( v12 < result );
  }
  return result;
}
