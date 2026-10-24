/* sub_6089098C
 * address: 0x6089098C   size: 1076   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6089098C(int a1, unsigned int *a2, int *a3, float32x4_t *a4, int a5, int a6)
{
  int v8; // r8
  int v10; // r2
  unsigned __int32 *v11; // r5
  int v12; // r4
  int v13; // r2
  int v14; // r0
  int j; // r7
  int v16; // r4
  int v17; // r0
  int i; // r7
  int v19; // r7
  float32x4_t v20; // q0
  int v21; // r8
  int v22; // r9
  int v23; // r2
  int v24; // r10
  float *v25; // r1
  unsigned __int32 v26; // r12
  unsigned __int32 v27; // r7
  unsigned __int32 v28; // r4
  float32x4_t v29; // q3
  float32x4_t v30; // q6
  float32x4_t v31; // q5
  float32x4_t v32; // q4
  float32x4_t v33; // q1
  unsigned int v34; // r0
  unsigned int v35; // r1
  unsigned __int64 *n128_u64; // [sp+10h] [bp-80h]
  char v37[4]; // [sp+28h] [bp-68h] BYREF
  char v38[4]; // [sp+2Ch] [bp-64h] BYREF
  char v39[4]; // [sp+30h] [bp-60h] BYREF
  char v40[92]; // [sp+34h] [bp-5Ch] BYREF

  if ( (signed __int32)FIELD_U32(a4 + (2) * 16, 0x0)[2] <= FIELD_U32(a1, 2472) )
  {
    v8 = 1;
    v10 = 0;
    *a2 = *(_DWORD *)(FIELD_U32(a1, 8) + 2416 * a6 + 2408);
    *a3 = 0;
    v11 = (unsigned __int32 *)FIELD_U32(a4 + (9) * 16, 0x0)[3];
    if ( !*(_BYTE *)(a4[8].n128_u32[2] + 1874) )
      v11 = &a4[18].n128_u32[1];
    switch ( a5 )
    {
      case 3:
        v16 = FIELD_U32(a4 + (2) * 16, 0x0)[2];
        if ( v16 >= 1 )
        {
          v10 = 0;
          v17 = 8;
          for ( i = 0; i < v16; ++i )
          {
            if ( (float)(a4[4].n128_f32[1] - *(float *)(FIELD_U32(a4 + (9) * 16, 0x0)[1] + v17)) < *(float *)(FIELD_U32(a4 + (9) * 16, 0x0)[1]
                                                                                             + v17
                                                                                             + 4) )
            {
              *(_DWORD *)(*a2 + 8 * v10) = *(_DWORD *)(v11[1] + 16 * i + 12);
              *(_DWORD *)(*a2 + 8 * *a3 + 4) = i;
              v10 = *a3 + 1;
              *a3 = v10;
              v16 = FIELD_U32(a4 + (2) * 16, 0x0)[2];
            }
            v17 += 24;
          }
        }
        sub_60890F30(*a2, *a2 + 8 * v10, v37);
        break;
      case 2:
        v19 = FIELD_U32(a4 + (2) * 16, 0x0)[2];
        if ( v19 < 1 )
        {
          v23 = 0;
        }
        else
        {
          v20.n128_u32[3] = 0;
          v21 = 8;
          v22 = 0;
          v23 = 0;
          v24 = 0;
          v25 = (float *)(FIELD_U32(a1, 8) + 2416 * a6);
          n128_u64 = FIELD_U64(a4 + (37) * 16, 0x0);
          do
          {
            if ( (float)(a4[4].n128_f32[1] - *(float *)(FIELD_U32(a4 + (9) * 16, 0x0)[1] + v21)) < *(float *)(FIELD_U32(a4 + (9) * 16, 0x0)[1]
                                                                                             + v21
                                                                                             + 4) )
            {
              v26 = a4[20].n128_u32[1];
              v27 = a4[20].n128_u32[2];
              v28 = a4[20].n128_u32[3];
              if ( *(_BYTE *)(a4[8].n128_u32[2] + 1875) == 2 )
              {
                v20.n128_u32[2] = *(_DWORD *)(v28 + v22 + 8);
                v29.n128_u64[0] = *n128_u64;
                v29.n128_u64[1] = FIELD_U64(a4 + (37) * 16, 0x0)[1];
                v32.n128_u32[1] = *(_DWORD *)(v27 + v22);
                v31.n128_u32[1] = *(_DWORD *)(v27 + v22 + 4);
                v20.n128_u32[1] = *(_DWORD *)(v27 + v22 + 8);
                v20.n128_u32[0] = *(_DWORD *)(v26 + v22 + 8);
                v32.n128_u32[0] = *(_DWORD *)(v26 + v22);
                v31.n128_u32[0] = *(_DWORD *)(v26 + v22 + 4);
                v29.n128_u32[3] = 0;
                v31.n128_u64[1] = *(unsigned int *)(v28 + v22 + 4);
                v32.n128_u64[1] = *(unsigned int *)(v28 + v22);
                v30 = v20;
              }
              else if ( *(_BYTE *)(a4[8].n128_u32[2] + 1875) )
              {
                v32.n128_u32[1] = *(_DWORD *)(v27 + v22);
                v31.n128_u32[1] = *(_DWORD *)(v27 + v22 + 4);
                v30.n128_u32[1] = *(_DWORD *)(v27 + v22 + 8);
                v29.n128_u32[1] = *(_DWORD *)(v27 + v22 + 12);
                v32.n128_u32[0] = *(_DWORD *)(v26 + v22);
                v31.n128_u32[0] = *(_DWORD *)(v26 + v22 + 4);
                v30.n128_u32[0] = *(_DWORD *)(v26 + v22 + 8);
                v29.n128_u32[0] = *(_DWORD *)(v26 + v22 + 12);
                v29.n128_u64[1] = *(unsigned int *)(v28 + v22 + 12);
                v30.n128_u64[1] = *(unsigned int *)(v28 + v22 + 8);
                v31.n128_u64[1] = *(unsigned int *)(v28 + v22 + 4);
                v32.n128_u64[1] = *(unsigned int *)(v28 + v22);
              }
              else
              {
                v29.n128_u64[0] = *n128_u64;
                v29.n128_u64[1] = FIELD_U64(a4 + (37) * 16, 0x0)[1];
                v30 = a4[36];
                v31 = a4[35];
                v32 = a4[34];
              }
              v33 = vaddq_f32(
                      v29,
                      vmlaq_lane_f32(
                        vmlaq_lane_f32(
                          vmulq_lane_f32(v31, *(float32x2_t *)(*v11 + v22), 1),
                          v32,
                          *(float32x2_t *)(*v11 + v22),
                          0),
                        v30,
                        (float32x2_t)*(unsigned int *)(*v11 + v22 + 8),
                        0));
              *(float *)(*a2 + 8 * v23) = v25[393]
                                        + (float)((float)((float)(v25[391] * v33.n128_f32[1])
                                                        + (float)(v25[390] * v33.n128_f32[0]))
                                                + (float)(v25[392] * v33.n128_f32[2]));
              *(_DWORD *)(*a2 + 8 * *a3 + 4) = v24;
              v23 = *a3 + 1;
              *a3 = v23;
              v19 = FIELD_U32(a4 + (2) * 16, 0x0)[2];
            }
            ++v24;
            v21 += 24;
            v22 += 16;
          }
          while ( v24 < v19 );
        }
        v34 = *a2;
        v35 = *a2 + 8 * v23;
        if ( *(_BYTE *)(*(_DWORD *)(a4[21].n128_u32[3] + 12) + 2203) )
          sub_60893098(v34, v35, (int)v40);
        else
          sub_608945B8(v34, v35, (int)v38);
        return 1;
      case 1:
        v12 = FIELD_U32(a4 + (2) * 16, 0x0)[2];
        v13 = 0;
        if ( v12 >= 1 )
        {
          v14 = 8;
          for ( j = 0; j < v12; ++j )
          {
            if ( (float)(a4[4].n128_f32[1] - *(float *)(FIELD_U32(a4 + (9) * 16, 0x0)[1] + v14)) < *(float *)(FIELD_U32(a4 + (9) * 16, 0x0)[1]
                                                                                             + v14
                                                                                             + 4) )
            {
              *(_DWORD *)(*a2 + 8 * v13) = *(_DWORD *)(v11[1] + 16 * j + 12);
              *(_DWORD *)(*a2 + 8 * *a3 + 4) = j;
              v13 = *a3 + 1;
              *a3 = v13;
              v12 = FIELD_U32(a4 + (2) * 16, 0x0)[2];
            }
            v14 += 24;
          }
        }
        sub_60891FE4(*a2, *a2 + 8 * v13, v39);
        break;
    }
  }
  else
  {
    debugPrintRelated3("Particle sort has failed. More buffer size is needed. \n");
    v8 = 0;
    *a2 = 0;
    *a3 = 0;
  }
  return v8;
}
