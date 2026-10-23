/* sub_6085154C
 * address: 0x6085154C   size: 1400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6085154C(int a1, _DWORD *a2, int a3)
{
  float32x2_t v3; // d9
  float32x2_t v4; // d10
  float32x2_t v5; // d12
  int v6; // r10
  int v8; // r0
  int result; // r0
  int v10; // r3
  int v11; // r0
  int v12; // r1
  int v13; // r10
  int v14; // t1
  int v15; // r6
  float v16; // s16
  int v17; // r4
  int v18; // r1
  int v19; // r5
  float v20; // s0
  unsigned int v21; // r0
  int v22; // r6
  float v23; // s16
  int v24; // r4
  unsigned __int8 *v25; // r1
  int v26; // r7
  int v27; // r5
  int v28; // r6
  float v29; // s16
  int v30; // r4
  float32x2_t v31; // d0
  int v32; // r1
  int v33; // r0
  _DWORD *v34; // r1
  int v35; // t1
  int v36; // r7
  float v37; // s16
  int v38; // r4
  int v39; // r6
  float32x2_t v40; // d0
  unsigned int v41; // r1
  unsigned __int64 v42; // d0
  signed int v43; // r1
  int v44; // r0
  int v45; // r1
  _DWORD *v46; // r0
  int v47; // r4
  float v48; // s16
  int v49; // r7
  int v50; // r1
  unsigned __int8 *v51; // r8
  int v52; // r3
  float *v53; // r0
  float v54; // s0
  int v55; // r2
  bool v56; // zf
  float v57; // s0
  int v58; // r6
  int v59; // r7
  float v60; // s16
  int v61; // r4
  int v62; // r6
  float32x2_t v63; // d0
  unsigned int v64; // r0
  int v65; // [sp+4h] [bp-74h]
  int v68; // [sp+10h] [bp-68h]
  int v69; // [sp+14h] [bp-64h]

  v6 = a3;
  if ( FIELD_U8(a3, 29) == 2 )
    v8 = a3 + FIELD_U32(a3, 32);
  else
    v8 = a3 + 32;
  v68 = v8;
  result = FIELD_U8(a3, 28);
  if ( FIELD_U8(a3, 28) )
  {
    v3.n64_u32[0] = 0;
    v5.n64_u32[0] = 1132396544;
    v4.n64_u32[0] = 1.0;
    v10 = 0;
    v65 = a3 + 8;
    do
    {
      v11 = *(_DWORD *)(v68 + 4 * v10);
      v14 = *(_DWORD *)(v6 + v11);
      v13 = v6 + v11;
      v12 = v14;
      v69 = v10;
      if ( v14 > 1347701829 )
      {
        if ( v12 == 1347701830 )
        {
          if ( FIELD_U8(v13, 4) )
          {
            v47 = 0;
            v48 = FIELD_F32(a1, 16);
            v49 = FIELD_U32(a1, 24);
            do
            {
              v50 = 0;
              v51 = (unsigned __int8 *)(v13 + *(_DWORD *)(v13 + 8 + 4 * v47));
              v52 = *((unsigned __int16 *)v51 + 2);
              v53 = (float *)&v51[*((_DWORD *)v51 + 2)];
              if ( v52 != 1 )
              {
                v50 = 0;
                if ( *v53 < v48 )
                {
                  v50 = v52 - 1;
                  v54 = v53[2 * v52 - 2];
                  if ( v54 > v48 )
                  {
                    v55 = 0;
                    if ( v52 != 2 )
                    {
                      v55 = 0;
                      do
                      {
                        if ( v53[2 * ((v50 + v55) / 2)] > v48 )
                          v50 = (v50 + v55) / 2;
                        else
                          v55 = (v50 + v55) / 2;
                        v56 = v55 == v50;
                        if ( v55 != v50 )
                          v56 = v55 == v50 - 1;
                      }
                      while ( !v56 );
                      v54 = v53[2 * v50];
                    }
                    v57 = v48 - v54;
                    if ( v57 >= 0.001 )
                      v50 = v55;
                    if ( v57 <= -0.001 )
                      v50 = v55;
                  }
                }
              }
              v58 = LOWORD(v53[2 * v50 + 1]);
              if ( (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(v49 + 4 * v58) + 24))(*(_DWORD *)(v49 + 4 * v58)) == 1 )
                *(_DWORD *)(a2[5] + 8 * *v51 + 4) = *(_DWORD *)(v49 + 4 * v58);
              ++v47;
            }
            while ( v47 < FIELD_U8(v13, 4) );
          }
        }
        else if ( v12 == 1397115974 )
        {
          if ( FIELD_U8(v13, 4) )
          {
            v59 = 0;
            v60 = FIELD_F32(a1, 16);
            v61 = v65 + v11;
            do
            {
              v62 = v13 + *(_DWORD *)(v61 + 4 * v59);
              v63.n64_f32[0] = sub_6085F6A0(v62 + FIELD_U32(v62, 8), FIELD_U16(v62, 4), v60) + 0.5;
              v64 = a2[3];
              ++v59;
              *(_BYTE *)(a2[5]
                       + ((8 * v64) & 0x18)
                       + (v64 & 0x30)
                       + ((v64 >> 6) & 8)
                       + 4 * ((v64 >> 10) & 3)
                       + 4 * ((v64 >> 6) & 7)
                       + (-((v64 >> 12) & 1) & 0xC)
                       + 20 * (((v64 >> 13) & 3) + ((v64 >> 2) & 3))
                       + FIELD_U8(v62, 1)) = (unsigned int)vmin_f32(vmax_f32(v63, v3), v5).n64_f32[0];
            }
            while ( v59 < FIELD_U8(v13, 4) );
          }
        }
        else if ( v12 == 1398033478 && FIELD_U8(v13, 4) )
        {
          v22 = 0;
          v23 = FIELD_F32(a1, 16);
          v24 = v65 + v11;
          do
          {
            v25 = (unsigned __int8 *)(v13 + *(_DWORD *)(v24 + 4 * v22));
            v26 = *v25;
            v27 = v25[1];
            ++v22;
            *(float *)(a2[5] + ((8 * a2[3]) & 0x18) + 20 * v26 + 4 * v27) = sub_6085F6A0(
                                                                              &v25[*((_DWORD *)v25 + 2)],
                                                                              *((unsigned __int16 *)v25 + 2),
                                                                              v23);
          }
          while ( v22 < FIELD_U8(v13, 4) );
        }
      }
      else if ( v12 == 1128352838 )
      {
        if ( FIELD_U8(v13, 4) )
        {
          v28 = 0;
          v29 = FIELD_F32(a1, 16);
          v30 = v65 + v11;
          do
          {
            v31.n64_f32[0] = sub_6085F6A0(
                               v13 + *(_DWORD *)(v30 + 4 * v28) + *(_DWORD *)(v13 + *(_DWORD *)(v30 + 4 * v28) + 8),
                               *(unsigned __int16 *)(v13 + *(_DWORD *)(v30 + 4 * v28) + 4),
                               v29);
            v32 = a2[5];
            ++v28;
            v33 = ((8 * a2[3]) & 0x18) + (a2[3] & 0x30) + 20 * ((a2[3] >> 2) & 3);
            v35 = *(unsigned __int8 *)(v32 + v33);
            v34 = (_DWORD *)(v32 + v33);
            *v34 = v35;
            v34[1] = vmin_f32(vmax_f32(v31, v3), v4).n64_u32[0];
          }
          while ( v28 < FIELD_U8(v13, 4) );
        }
      }
      else if ( v12 == 1129139270 )
      {
        if ( FIELD_U8(v13, 4) )
        {
          v36 = 0;
          v37 = FIELD_F32(a1, 16);
          v38 = v65 + v11;
          do
          {
            v39 = v13 + *(_DWORD *)(v38 + 4 * v36);
            v40.n64_f32[0] = sub_6085F6A0(v39 + FIELD_U32(v39, 8), FIELD_U16(v39, 4), v37);
            v41 = FIELD_U8(v39, 1);
            if ( v41 > 0x1C )
            {
              v43 = v41 - 28;
              v44 = v43 / 4;
              if ( (unsigned int)(v43 / 4) <= 1 )
              {
                v45 = v43 & 3;
                if ( v45 == 1 )
                {
                  *(_DWORD *)(a2[1] + 16 * v44 + 4) = v40.n64_u32[0];
                }
                else if ( v45 == 2 )
                {
                  *(_DWORD *)(a2[1] + 16 * v44 + 8) = v40.n64_u32[0];
                }
                else
                {
                  v46 = (_DWORD *)(a2[1] + 16 * v44);
                  if ( v45 == 3 )
                    v46[3] = v40.n64_u32[0];
                  else
                    *v46 = v40.n64_u32[0];
                }
              }
            }
            else
            {
              v40.n64_f32[0] = v40.n64_f32[0] + 0.5;
              v42 = vmin_f32(vmax_f32(v40, v3), v5).n64_u64[0];
              sub_608521F4(a2, COERCE_FLOAT((unsigned int)*(float *)&v42), *((float *)&v42 + 1));
            }
            ++v36;
          }
          while ( v36 < FIELD_U8(v13, 4) );
        }
      }
      else if ( v12 == 1296649286 && FIELD_U8(v13, 4) )
      {
        v15 = 0;
        v16 = FIELD_F32(a1, 16);
        v17 = v65 + v11;
        do
        {
          v18 = v13 + *(_DWORD *)(v17 + 4 * v15);
          v19 = FIELD_U8(v18, 1);
          v20 = sub_6085F6A0(v18 + FIELD_U32(v18, 8), FIELD_U16(v18, 4), v16);
          v21 = a2[3];
          ++v15;
          *(float *)(a2[5]
                   + ((8 * v21) & 0x18)
                   + (v21 & 0x30)
                   + ((v21 >> 6) & 8)
                   + 4 * ((v21 >> 10) & 3)
                   + 20 * ((v21 >> 2) & 3)
                   + 4 * v19) = v20;
        }
        while ( v15 < FIELD_U8(v13, 4) );
      }
      v6 = a3;
      result = FIELD_U8(a3, 28);
      v10 = v69 + 1;
    }
    while ( v69 + 1 < result );
  }
  return result;
}
