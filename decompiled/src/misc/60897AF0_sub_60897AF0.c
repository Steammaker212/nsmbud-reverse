/* sub_60897AF0
 * address: 0x60897AF0   size: 840   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60897AF0(int *a1, float32x4_t *a2, float a3, float a4, float a5)
{
  float32x4_t v5; // q4
  int v6; // s9
  int v7; // r2
  int v8; // r11
  int v9; // s8
  int v10; // r5
  int v11; // r4
  int v12; // r3
  int v13; // r12
  int v14; // r3
  int v15; // r7
  int v16; // r9
  int v17; // r7
  int v18; // lr
  int v19; // r6
  char *v20; // r0
  int v21; // r8
  int v22; // r7
  int v23; // r10
  int v24; // r0
  int v25; // s4
  int v26; // s2
  int v27; // s0
  int v28; // r4
  int v29; // r10
  int v30; // r8
  char *v31; // r7
  int v32; // s14
  int v33; // s6
  int v34; // s12
  char *v35; // r5
  int v36; // s5
  int v37; // s1
  int v38; // s3
  int v39; // r0
  int v40; // r3
  int v41; // r12
  int v42; // r7
  char *v43; // r4
  char *v44; // r5
  char *v45; // r3
  float32x4_t v46; // q6
  float32x4_t v47; // q7
  float32x4_t v48; // q1
  float32x4_t v49; // q8
  float32x4_t v50; // q4
  float v51; // s0
  float32x4_t v52; // q5
  float32x4_t v53; // q3
  float32x4_t v54; // q8
  int v55; // r0
  int v56; // r11
  int v57; // t1
  int32x2_t v58; // d5
  float v59; // s8
  int32x2_t v60; // d4
  float32x4_t v61; // q12
  float32x4_t v62; // q5
  float32x4_t v63; // q6
  float32x4_t v64; // q8
  float32x4_t v65; // q3
  float32x4_t v66; // q0
  float32x4_t v67; // q3
  int v70; // [sp+4h] [bp-74h]

  v6 = (int)a4;
  v7 = *a1;
  v8 = a1[1];
  v9 = (int)a3;
  v10 = (int)a4;
  v11 = (int)a5;
  v70 = (int)a5;
  v12 = (int)a4 + 1;
  if ( (int)a4 < -1 )
    v12 = ~v10;
  v13 = v12 % v7;
  v14 = (int)a3;
  v15 = v9 + 1;
  if ( v9 < -1 )
    v15 = ~v9;
  v16 = v15 % v7;
  v17 = (int)a5;
  if ( v11 < 0 )
    v17 = -v11;
  v18 = v17 % v7;
  v19 = v13 + v16 * v7;
  v20 = (char *)(v8 + 3 * (v17 % v7 + v19 * v7));
  v21 = *v20;
  v22 = v20[1];
  v23 = v20[2];
  v24 = v11 + 1;
  if ( v11 < -1 )
    v24 = ~v11;
  if ( v10 < 0 )
    v10 = -v10;
  v25 = v21;
  if ( v9 < 0 )
    v14 = -v9;
  v26 = v23;
  v27 = v22;
  v28 = v24 % v7;
  v29 = v10 % v7;
  v30 = v10 % v7 + v16 * v7;
  v31 = (char *)(v8 + 3 * (v24 % v7 + v30 * v7));
  v32 = *v31;
  v33 = v31[1];
  v34 = v31[2];
  v35 = (char *)(v8 + 3 * (v24 % v7 + v19 * v7));
  v36 = *v35;
  v37 = v35[1];
  v38 = v35[2];
  v39 = v14 % v7;
  v40 = v13 + v14 % v7 * v7;
  v41 = v29 + v39 * v7;
  v42 = 3 * (v28 + v40 * v7);
  v43 = (char *)(v8 + 3 * (v28 + v41 * v7));
  v44 = (char *)(v8 + 3 * (v18 + v30 * v7));
  v45 = (char *)(v8 + 3 * (v18 + v40 * v7));
  v46.n128_f32[0] = (float)*(char *)(v8 + v42) / 127.0;
  v47.n128_f32[0] = (float)v32 / 127.0;
  v5.n128_f32[0] = (float)v36 / 127.0;
  v47.n128_f32[2] = (float)v34 / 127.0;
  v46.n128_f32[2] = (float)*(char *)(v8 + v42 + 2) / 127.0;
  v5.n128_f32[2] = (float)v38 / 127.0;
  v46.n128_f32[1] = (float)*(char *)(v8 + v42 + 1) / 127.0;
  v47.n128_f32[1] = (float)v33 / 127.0;
  v48.n128_f32[0] = (float)v25 / 127.0;
  v5.n128_f32[1] = (float)v37 / 127.0;
  v48.n128_f32[2] = (float)v26 / 127.0;
  v46.n128_u32[3] = 0;
  v49 = v5;
  v50.n128_f32[0] = (float)*v45 / 127.0;
  v47.n128_u32[3] = 0;
  v48.n128_f32[1] = (float)v27 / 127.0;
  v51 = (float)*v44 / 127.0;
  v66.n128_f32[2] = (float)v44[2] / 127.0;
  v48.n128_u32[3] = 0;
  v66.n128_f32[1] = (float)v44[1] / 127.0;
  v52.n128_f32[0] = (float)*v43 / 127.0;
  v53 = v49;
  v53.n128_u32[3] = 0;
  v54 = vsubq_f32(v53, v46);
  v52.n128_f32[2] = (float)v43[2] / 127.0;
  v66.n128_u32[3] = 0;
  v52.n128_f32[1] = (float)v43[1] / 127.0;
  v50.n128_f32[2] = (float)v45[2] / 127.0;
  v55 = 3 * (v18 + v41 * v7);
  v57 = *(char *)(v8 + v55);
  v56 = v8 + v55;
  v52.n128_u32[3] = 0;
  v50.n128_f32[1] = (float)v45[1] / 127.0;
  v53.n128_f32[0] = (float)v57 / 127.0;
  v50.n128_u32[3] = 0;
  v53.n128_f32[2] = (float)FIELD_S8(v56, 2) / 127.0;
  v58.n64_f32[1] = (float)FIELD_S8(v56, 1);
  v53.n128_f32[1] = v58.n64_f32[1] / 127.0;
  v58.n64_f32[0] = a3 - (float)v9;
  v59 = (float)v6;
  v60.n64_f32[1] = a4;
  v61 = vdupq_lane_s32(v58, 0);
  v60.n64_f32[0] = a4 - v59;
  v62 = vmlaq_f32(v52, v61, vsubq_f32(v47, v52));
  v53.n128_u32[3] = 0;
  v63 = vmlaq_f32(v46, v61, v54);
  v64 = vdupq_lane_s32(v60, 0);
  v65 = vmlaq_f32(v53, v61, vsubq_f32(v66, v53));
  v66.n128_f32[0] = a5 - (float)v70;
  v67 = vmlaq_f32(v65, v64, vsubq_f32(vmlaq_f32(v50, v61, vsubq_f32(v48, v50)), v65));
  *a2 = vmlaq_f32(
          v67,
          vdupq_lane_s32((int32x2_t)v66.n128_u64[0], 0),
          vsubq_f32(vmlaq_f32(v62, v64, vsubq_f32(v63, v62)), v67));
  return v66.n128_f32[0];
}
