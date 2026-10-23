/* sub_6087DEC4
 * address: 0x6087DEC4   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6087DEC4(_DWORD *a1, int a2)
{
  int v3; // r9
  __int16 *v4; // r8
  float32x2_t *v5; // r4
  int v6; // r0
  int v7; // r2
  unsigned int v8; // r12
  int v9; // lr
  int32x4x2_t *v10; // r3
  __int16 *v11; // r6
  int v12; // t1
  float32x2_t *v13; // r7
  float32x2_t *v14; // r2
  float32x2_t v15; // d0
  float32x2_t v16; // d1
  float32x2_t v17; // d4
  float32x2_t v18; // d5
  float32x2_t v19; // d3
  int v20; // r5
  int32x4_t *v21; // r2
  int32x4x2_t *v22; // r1
  int v23; // r3
  unsigned int v24; // r3
  __int16 *v25; // r2
  unsigned int v26; // r3
  int32x4x2_t *v27; // r0
  int v28; // t1
  int v29; // r7
  int32x4_t *v30; // r6
  int32x4x2_t *v31; // r1
  int32x4_t *v32; // r7
  int32x4_t v33; // 0:q8.16
  float32x4_t v34; // 0:q9.16
  int32x4_t v35; // 0:q9.16
  float32x4_t v36; // 0:q11.16
  int32x4_t v37; // 0:q11.16
  float32x4_t v38; // 0:q13.16
  int32x4x2_t v39; // 0:q8.16,16:q9.16
  int32x4x2_t v40; // 0:q9.16,16:q11.16
  int32x4x2_t v41; // 0:q10.16,16:q8.16
  int32x4x2_t v42; // 0:q11.16,16:q10.16

  if ( a1[9] )
  {
    v3 = 9 * a2;
    v4 = *(__int16 **)(*a1 + 32);
    v5 = *(float32x2_t **)(*a1 + 40);
    v6 = sub_608354C4(a1[8] + 72 * a2);
    v7 = *a1;
    v8 = *(unsigned __int16 *)(*a1 + 78);
    if ( *(_WORD *)(*a1 + 78) )
    {
      v9 = *(unsigned __int16 *)(*a1 + 78);
      v10 = (int32x4x2_t *)v6;
      v11 = v4;
      do
      {
        v12 = *v11++;
        v13 = v5;
        v14 = v5 + 4;
        --v9;
        v5 += 6;
        v15.n64_u64[0] = FIELD_U64(v13, 0x0)[0];
        v16.n64_u64[0] = v13[1].n64_u64[0];
        v13 += 2;
        v17.n64_u64[0] = FIELD_U64(v14, 0x0)[0];
        v18.n64_u64[0] = v14[1].n64_u64[0];
        v19.n64_u64[0] = v13[1].n64_u64[0];
        v20 = a1[4] + (v12 << 6);
        v34 = *(float32x4_t *)v20;
        v38 = *(float32x4_t *)(v20 + 32);
        v21 = v10[1].val;
        v36 = *(float32x4_t *)(v20 + 16);
        v22 = v10;
        v10 = (int32x4x2_t *)((char *)v10 + 48);
        v41 = vzipq_s32(
                vmlaq_lane_f32(
                  vmlaq_lane_f32(vmulq_n_f32(v34, v15.n64_f32[0]), v36, (float32x2_t)FIELD_U64(v13, 0x0)[0], 0),
                  v38,
                  v17,
                  0),
                vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(v34, v16.n64_f32[0]), v36, v19, 0), v38, v18, 0));
        v40 = vzipq_s32(
                vmlaq_lane_f32(
                  vmlaq_lane_f32(vmulq_lane_f32(v34, v15, 1), v36, (float32x2_t)FIELD_U64(v13, 0x0)[0], 1),
                  v38,
                  v17,
                  1),
                vaddq_f32(
                  *(float32x4_t *)(v20 + 48),
                  vmlaq_lane_f32(vmlaq_lane_f32(vmulq_lane_f32(v34, v16, 1), v36, v19, 1), v38, v18, 1)));
        *v22 = vzipq_s32(v41.val[0], v40.val[0]);
        *v21 = (int32x4_t)vzipq_s32(v41.val[1], v40.val[1]).val;
      }
      while ( v9 );
      v7 = *a1;
      v23 = *(unsigned __int16 *)(*a1 + 78);
    }
    else
    {
      v23 = 0;
      v8 = 0;
    }
    v24 = FIELD_U16(v7, 80) + v23;
    if ( v8 < v24 )
    {
      v25 = &v4[v8];
      v26 = v24 - v8;
      v27 = (int32x4x2_t *)(v6 + 48 * v8);
      do
      {
        v28 = *v25++;
        --v26;
        v29 = a1[4] + (v28 << 6);
        v30 = (int32x4_t *)(v29 + 48);
        v33 = *(int32x4_t *)v29;
        v35 = *(int32x4_t *)(v29 + 32);
        v31 = v27;
        v37 = *(int32x4_t *)(v29 + 16);
        v32 = v27[1].val;
        v27 = (int32x4x2_t *)((char *)v27 + 48);
        v39 = vzipq_s32(v33, v35);
        v42 = vzipq_s32(v37, *v30);
        *v31 = vzipq_s32(v39.val[0], v42.val[0]);
        *v32 = (int32x4_t)vzipq_s32(v39.val[1], v42.val[1]).val;
      }
      while ( v26 );
    }
    sub_608354E0(a1[8] + 8 * v3);
    nullsub_66();
  }
}
