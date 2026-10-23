/* sub_60851140
 * address: 0x60851140   size: 1020   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60851140(int a1, _BYTE *a2, int a3)
{
  float32x2_t v3; // d9
  float32x2_t v4; // d11
  int v5; // r4
  int v7; // r0
  int result; // r0
  int v9; // r10
  int v10; // r0
  int v11; // r1
  int v12; // r4
  int v13; // t1
  int v14; // r7
  float v15; // s16
  int v16; // r6
  int v17; // r5
  float v18; // s0
  int v19; // r6
  float v20; // s16
  int v21; // r7
  int v22; // r5
  float32x2_t v23; // d0
  unsigned __int64 v24; // d0
  int v25; // r1
  float v26; // s0
  int v27; // r3
  int v28; // r6
  float *v29; // r2
  int v30; // r3
  float v31; // s2
  int v32; // r7
  bool v33; // zf
  float v34; // s2
  int v35; // r0
  char v36; // r2
  int v37; // r8
  float v38; // s16
  int v39; // r7
  int v40; // r5
  int v41; // s0
  __int16 v42; // r0
  _WORD *v43; // r1
  int v44; // r7
  float v45; // s16
  int v46; // r8
  int v47; // r1
  int v48; // r6
  int v49; // [sp+4h] [bp-74h]
  _WORD *v51; // [sp+Ch] [bp-6Ch]
  _WORD *v52; // [sp+10h] [bp-68h]
  _WORD *v53; // [sp+14h] [bp-64h]
  int v55; // [sp+1Ch] [bp-5Ch]

  v5 = a3;
  if ( FIELD_U8(a3, 29) == 2 )
    v7 = a3 + FIELD_U32(a3, 32);
  else
    v7 = a3 + 32;
  v55 = v7;
  result = FIELD_U8(a3, 28);
  if ( FIELD_U8(a3, 28) )
  {
    v3.n64_u32[0] = 0;
    v4.n64_u32[0] = 1132396544;
    v9 = 0;
    v49 = a3 + 8;
    v53 = a2 + 180;
    v52 = a2 + 178;
    v51 = a2 + 182;
    do
    {
      v10 = *(_DWORD *)(v55 + 4 * v9);
      v13 = *(_DWORD *)(v5 + v10);
      v12 = v5 + v10;
      v11 = v13;
      if ( v13 <= 1230392389 )
      {
        if ( v11 == 1095781446 )
        {
          if ( FIELD_U8(v12, 4) )
          {
            v44 = 0;
            v45 = FIELD_F32(a1, 16);
            v46 = v49 + v10;
            do
            {
              v47 = v12 + *(_DWORD *)(v46 + 4 * v44);
              v48 = FIELD_U8(v47, 1);
              ++v44;
              *(float *)&a2[4 * v48 + 24] = sub_6085F6A0(
                                              v47 + FIELD_U32(v47, 8),
                                              FIELD_U16(v47, 4),
                                              v45);
              a2[64] |= 0x10u;
            }
            while ( v44 < FIELD_U8(v12, 4) );
          }
        }
        else if ( v11 == 1129729094 && FIELD_U8(v12, 4) )
        {
          v19 = 0;
          v20 = FIELD_F32(a1, 16);
          v21 = v49 + v10;
          do
          {
            v22 = v12 + *(_DWORD *)(v21 + 4 * v19);
            v23.n64_f32[0] = sub_6085F6A0(v22 + FIELD_U32(v22, 8), FIELD_U16(v22, 4), v20) + 0.5;
            v24 = vmin_f32(vmax_f32(v23, v3), v4).n64_u64[0];
            (*(void (__fastcall **)(_BYTE *, _DWORD, unsigned int, float, float))(*(_DWORD *)a2 + 28))(
              a2,
              FIELD_U8(v22, 1),
              (unsigned int)*(float *)&v24,
              COERCE_FLOAT((unsigned int)*(float *)&v24),
              *((float *)&v24 + 1));
            ++v19;
          }
          while ( v19 < FIELD_U8(v12, 4) );
        }
      }
      else if ( v11 == 1230392390 )
      {
        if ( FIELD_U8(v12, 4) )
        {
          v25 = 0;
          v26 = FIELD_F32(a1, 16);
          do
          {
            v27 = v12 + *(_DWORD *)(v12 + 8 + 4 * v25);
            v28 = FIELD_U16(v27, 4);
            v29 = (float *)(v27 + FIELD_U32(v27, 8));
            v30 = 0;
            if ( v28 != 1 )
            {
              v30 = 0;
              if ( *v29 < v26 )
              {
                v30 = v28 - 1;
                v31 = v29[2 * v28 - 2];
                if ( v31 > v26 )
                {
                  v32 = 0;
                  if ( v28 != 2 )
                  {
                    v32 = 0;
                    do
                    {
                      if ( v29[2 * ((v30 + v32) / 2)] > v26 )
                        v30 = (v30 + v32) / 2;
                      else
                        v32 = (v30 + v32) / 2;
                      v33 = v32 == v30;
                      if ( v32 != v30 )
                        v33 = v32 == v30 - 1;
                    }
                    while ( !v33 );
                    v31 = v29[2 * v30];
                  }
                  v34 = v26 - v31;
                  if ( v34 >= 0.001 )
                    v30 = v32;
                  if ( v34 <= -0.001 )
                    v30 = v32;
                }
              }
            }
            ++v25;
            v35 = LOWORD(v29[2 * v30 + 1]);
            v36 = a2[64] & 0xFE;
            if ( v35 )
              v36 |= 1u;
            a2[64] = v36;
          }
          while ( v25 < FIELD_U8(v12, 4) );
        }
      }
      else if ( v11 == 1314344006 )
      {
        if ( FIELD_U8(v12, 4) )
        {
          v37 = 0;
          v38 = FIELD_F32(a1, 16);
          v39 = v49 + v10;
          do
          {
            v40 = v12 + *(_DWORD *)(v39 + 4 * v37);
            v41 = (int)sub_6085F6A0(v40 + FIELD_U32(v40, 8), FIELD_U16(v40, 4), v38);
            v42 = v41;
            v43 = a2 + 184;
            switch ( FIELD_U8(v40, 1) )
            {
              case 0:
                v43 = v51;
                goto LABEL_49;
              case 1:
                goto LABEL_49;
              case 2:
                v43 = v52;
                goto LABEL_49;
              case 3:
                v43 = v53;
LABEL_49:
                if ( v41 <= 0 )
                  v42 = 0;
                *v43 = v42;
                break;
              default:
                break;
            }
            ++v37;
          }
          while ( v37 < FIELD_U8(v12, 4) );
        }
      }
      else if ( v11 == 1413696582 && FIELD_U8(v12, 4) )
      {
        v14 = 0;
        v15 = FIELD_F32(a1, 16);
        v16 = v49 + v10;
        do
        {
          v17 = v12 + *(_DWORD *)(v16 + 4 * v14);
          v18 = sub_6085F6A0(v17 + FIELD_U32(v17, 8), FIELD_U16(v17, 4), v15);
          sub_6085E94C(a2, FIELD_U8(v17, 1), v18);
          ++v14;
        }
        while ( v14 < FIELD_U8(v12, 4) );
      }
      v5 = a3;
      ++v9;
      result = FIELD_U8(a3, 28);
    }
    while ( v9 < result );
  }
  return result;
}
