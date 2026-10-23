/* sub_60430818
 * address: 0x60430818   size: 2964   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60430818(int a1, unsigned int a2, int a3, float32x2_t *a4, int a5, _DWORD *a6, float *a7)
{
  int v8; // r10
  int32x2_t v10; // d5
  int32x2_t v11; // d3
  int32x4_t v12; // q11
  int32x4_t v13; // q12
  int32x2_t v14; // d1
  int32x4_t v15; // q3
  int8x16_t v16; // q14
  float32x4_t v17; // q11
  float32x4_t v18; // q13
  float32x4_t v19; // q15
  int8x16_t v20; // q2
  int8x16_t v21; // q1
  float32x4_t v22; // q12
  float32x4_t v23; // q13
  float32x4_t v24; // q14
  int32x4_t v25; // q3
  float32x4_t v26; // q8
  int8x16_t v27; // q10
  int v28; // r1
  _DWORD *v29; // r11
  char v30; // r12
  int v31; // r9
  unsigned __int16 *v32; // r0
  unsigned int v33; // r2
  int v34; // r5
  int v35; // r6
  int v36; // r7
  unsigned __int16 *v37; // r0
  unsigned int v38; // r2
  bool v39; // zf
  bool v40; // zf
  int *v41; // r5
  char v42; // r12
  float v43; // s4
  float v44; // s2
  float v45; // s0
  float v46; // s14
  float v47; // s16
  float v48; // s18
  int v49; // r9
  int v50; // r5
  unsigned __int16 *v51; // r0
  unsigned int v52; // r1
  int v53; // r1
  float v54; // s0
  float v55; // s4
  float v56; // s2
  int v57; // r1
  int v58; // r1
  int v59; // r1
  int v60; // r7
  int v61; // r1
  int v62; // r1
  unsigned __int16 *v63; // r0
  unsigned int v64; // r1
  _BYTE *v65; // r5
  int v66; // r0
  int v67; // r7
  float v68; // r6
  int v69; // r1
  _DWORD *v71; // [sp+1Ch] [bp-9Ch]
  unsigned __int16 **v72; // [sp+28h] [bp-90h]
  unsigned int *v73; // [sp+2Ch] [bp-8Ch]
  _OWORD v74[4]; // [sp+30h] [bp-88h] BYREF
  float v75; // [sp+70h] [bp-48h] BYREF
  float v76; // [sp+74h] [bp-44h]
  float v77; // [sp+78h] [bp-40h]
  float v78[15]; // [sp+7Ch] [bp-3Ch] BYREF
  float32x4_t v79; // 0:q9.16

  v8 = FIELD_U32(a1, 8);
  if ( FIELD_U32(a1, 4) > a2 )
    v8 += 96 * a2;
  sub_60921A90(v8, 0);
  v10.n64_u64[0] = a4[1].n64_u64[0];
  v11.n64_u64[0] = a4[3].n64_u64[0];
  v79 = *(float32x4_t *)(a3 + 16);
  v12 = vdupq_lane_s32(v10, 1);
  v13 = vdupq_lane_s32(v11, 1);
  v14.n64_u64[0] = a4[5].n64_u64[0];
  v15 = vdupq_lane_s32(v14, 1);
  v16 = vextq_s8((int8x16_t)vzipq_s32(v12, v12).val, (int8x16_t)0, 0xCu);
  v17 = *(float32x4_t *)(a3 + 32);
  v18 = vmlaq_lane_f32(
          vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)a3, FIELD_F32(a4, 0x0)[0]), v79, (float32x2_t)FIELD_U64(a4, 0x0)[0], 1),
          v17,
          v10,
          0);
  v19 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)a3, a4[2].n64_f32[0]), v79, a4[2], 1), v17, v11, 0);
  v20 = vextq_s8((int8x16_t)vzipq_s32(v13, v13).val, (int8x16_t)0, 0xCu);
  v21 = vextq_s8((int8x16_t)vzipq_s32(v15, v15).val, (int8x16_t)0, 0xCu);
  v22 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)a3, a4[4].n64_f32[0]), v79, a4[4], 1), v17, v14, 0);
  v23 = vaddq_f32(vextq_s8(v16, v16, 4u), v18);
  v24 = vextq_s8(v20, v20, 4u);
  *(float32x2_t *)&v20.n128_i8[8] = a4[7];
  v25 = vdupq_lane_s32(*(int32x2_t *)&v20.n128_i8[8], 1);
  v26 = vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)a3, a4[6].n64_f32[0]), v79, a4[6], 1);
  v74[0] = v23;
  v74[1] = vaddq_f32(v24, v19);
  v27 = vextq_s8((int8x16_t)vzipq_s32(v25, v25).val, (int8x16_t)0, 0xCu);
  v74[2] = vaddq_f32(vextq_s8(v21, v21, 4u), v22);
  v74[3] = vaddq_f32(vextq_s8(v27, v27, 4u), vmlaq_lane_f32(v26, v17, *(float32x2_t *)&v20.n128_i8[8], 0));
  sub_60921988(v8, FIELD_U32(v8, 8), 0, a3, 0, 3);
  sub_60921988(v8, FIELD_U32(v8, 8), 1, v74, 0, 4);
  v28 = FIELD_U32(v8, 8);
  v29 = a6;
  if ( a5 )
    sub_60921988(v8, v28, 8, a5, 0, 4);
  else
    sub_60921988(v8, v28, 8, &unk_60B3B8FC, 0, 4);
  v31 = 0;
  if ( !a6 )
    goto LABEL_34;
  v32 = (unsigned __int16 *)a6[4];
  v33 = *(__int16 *)dword_60CD09C8;
  if ( a6[3] > v33 )
    v32 += 2 * v33;
  if ( v32[1] )
    v34 = *(_DWORD *)(a6[6] + 4 * *v32);
  else
    v34 = 0;
  if ( ((unsigned int)&dword_60C9BEE4 & ~(1615006212 << v30) & 1) == 0 && _cxa_guard_acquire(&dword_60C9BEE4) )
  {
    dword_60C9BEE0 = (int)&off_60BFA424;
    _cxa_guard_release(&dword_60C9BEE4);
  }
  v35 = 0;
  v36 = 0;
  if ( v34 )
  {
    v36 = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v34 + 36))(v34, &dword_60C9BEE0);
    if ( v36 )
      v36 = v34;
  }
  v37 = (unsigned __int16 *)a6[4];
  v38 = *(__int16 *)dword_60CD09C0;
  if ( a6[3] > v38 )
    v37 += 2 * v38;
  if ( v37[1] )
    v35 = *(_DWORD *)(a6[6] + 4 * *v37);
  if ( ((unsigned int)&dword_60C9BEF4 & ~(1615006396 << v30) & 1) == 0 && _cxa_guard_acquire(&dword_60C9BEF4) )
  {
    dword_60C9BEF0 = (int)&off_60BFA424;
    _cxa_guard_release(&dword_60C9BEF4);
  }
  if ( v35 )
  {
    v31 = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v35 + 36))(v35, &dword_60C9BEF0);
    if ( v31 )
      v31 = v35;
  }
  else
  {
    v31 = 0;
  }
  v39 = v36 == 0;
  if ( v36 )
    v39 = FIELD_U8(v36, 48) == 0;
  if ( v39 )
  {
LABEL_34:
    sub_60921988(v8, FIELD_U32(v8, 8), 3, &dword_60B45CCC, 0, 1);
    sub_60921988(v8, FIELD_U32(v8, 8), 3, &dword_60B45CCC, 1, 1);
    sub_60921988(v8, FIELD_U32(v8, 8), 3, &dword_60B45CCC, 2, 1);
    sub_60921988(v8, FIELD_U32(v8, 8), 3, &dword_60B45CCC, 3, 1);
    sub_60921988(v8, FIELD_U32(v8, 8), 3, &dword_60B45CCC, 4, 1);
    sub_60921988(v8, FIELD_U32(v8, 8), 3, &dword_60B45CCC, 5, 1);
    sub_60921988(v8, FIELD_U32(v8, 8), 3, &dword_60B45CCC, 6, 1);
    sub_60921988(v8, FIELD_U32(v8, 8), 3, &dword_60B45CCC, 7, 1);
  }
  else
  {
    sub_60921988(v8, FIELD_U32(v8, 8), 2, FIELD_U32(v36, 316), 0, 1);
    sub_60921988(v8, FIELD_U32(v8, 8), 3, v36 + 184, 0, 1);
    sub_60921988(v8, FIELD_U32(v8, 8), 2, FIELD_U32(v36, 316), 1, 1);
    sub_60921988(v8, FIELD_U32(v8, 8), 3, v36 + 184, 1, 1);
    sub_60921988(v8, FIELD_U32(v8, 8), 2, FIELD_U32(v36, 316), 2, 1);
    v29 = a6;
    sub_60921988(v8, FIELD_U32(v8, 8), 3, v36 + 184, 2, 1);
    sub_60921988(v8, FIELD_U32(v8, 8), 2, FIELD_U32(v36, 316), 3, 1);
    sub_60921988(v8, FIELD_U32(v8, 8), 3, v36 + 184, 3, 1);
    sub_60921988(v8, FIELD_U32(v8, 8), 2, FIELD_U32(v36, 316), 4, 1);
    sub_60921988(v8, FIELD_U32(v8, 8), 3, v36 + 184, 4, 1);
    sub_60921988(v8, FIELD_U32(v8, 8), 2, FIELD_U32(v36, 316), 5, 1);
    sub_60921988(v8, FIELD_U32(v8, 8), 3, v36 + 184, 5, 1);
    sub_60921988(v8, FIELD_U32(v8, 8), 2, FIELD_U32(v36, 316), 6, 1);
    sub_60921988(v8, FIELD_U32(v8, 8), 3, v36 + 184, 6, 1);
    sub_60921988(v8, FIELD_U32(v8, 8), 2, FIELD_U32(v36, 316), 7, 1);
    sub_60921988(v8, FIELD_U32(v8, 8), 3, v36 + 184, 7, 1);
  }
  v40 = v31 == 0;
  if ( v31 )
    v40 = FIELD_U8(v31, 48) == 0;
  if ( v40 )
  {
    v41 = &dword_60B45CCC;
    sub_60921988(v8, FIELD_U32(v8, 8), 4, &dword_60B45CCC, 0, 1);
  }
  else
  {
    v41 = (int *)(v31 + 184);
    sub_60921988(v8, FIELD_U32(v8, 8), 4, v31 + 184, 0, 1);
  }
  sub_60921988(v8, FIELD_U32(v8, 8), 4, v41, 1, 1);
  if ( a7 )
  {
    v43 = FIELD_F32(a3, 4);
    v44 = FIELD_F32(a3, 20);
    v45 = FIELD_F32(a3, 36);
    v46 = a7[1];
    v47 = (float)((float)((float)-(float)(FIELD_F32(a3, 12) * v43) - (float)(FIELD_F32(a3, 28) * v44))
                - (float)(FIELD_F32(a3, 44) * v45))
        - *a7;
    if ( v47 == (float)(v47 - v46) )
      v48 = 1.0;
    else
      v48 = 1.0 / (float)((float)(v47 - v46) - v47);
    v60 = 0;
    v75 = (float)((float)-(float)(0.0 * *(float *)a3) - (float)(v43 * 1.0)) - (float)(FIELD_F32(a3, 8) * 0.0);
    v76 = (float)((float)-(float)(0.0 * FIELD_F32(a3, 16)) - (float)(v44 * 1.0)) - (float)(FIELD_F32(a3, 24) * 0.0);
    v77 = (float)((float)-(float)(0.0 * FIELD_F32(a3, 32)) - (float)(v45 * 1.0)) - (float)(FIELD_F32(a3, 40) * 0.0);
    do
    {
      sub_60921988(v8, FIELD_U32(v8, 8), 5, a7 + 2, v60, 1);
      v61 = FIELD_U32(v8, 8);
      v78[0] = v47;
      sub_60921988(v8, v61, 6, v78, v60, 1);
      v62 = FIELD_U32(v8, 8);
      v78[0] = v48;
      sub_60921988(v8, v62, 7, v78, v60, 1);
      sub_60921988(v8, FIELD_U32(v8, 8), 9, &v75, v60++, 1);
    }
    while ( v60 != 8 );
    v71 = v29 + 6;
    v72 = (unsigned __int16 **)(v29 + 4);
    v73 = v29 + 3;
    if ( !v29 )
      goto LABEL_78;
    goto LABEL_66;
  }
  v49 = 0;
  v71 = v29 + 6;
  v72 = (unsigned __int16 **)(v29 + 4);
  v73 = v29 + 3;
  do
  {
    if ( !v29 )
      goto LABEL_58;
    v50 = 0;
    v51 = *v72;
    v52 = *(__int16 *)dword_60CD09BC;
    if ( *v73 > v52 )
      v51 += 2 * v52;
    if ( v51[1] > v49 )
      v50 = *(_DWORD *)(*v71 + 4 * (v49 + *v51));
    if ( ((unsigned int)dword_60C9C284 & ~(1615007684 << v42) & 1) == 0 && _cxa_guard_acquire(dword_60C9C284) )
    {
      dword_60C9C280 = (int)&off_60BFA424;
      _cxa_guard_release(dword_60C9C284);
    }
    if ( v50
      && (*(int (__fastcall **)(int, int *))(*(_DWORD *)v50 + 36))(v50, &dword_60C9C280) == 1
      && FIELD_U8(v50, 48) )
    {
      sub_60921988(v8, FIELD_U32(v8, 8), 5, v50 + 232, v49, 1);
      v53 = FIELD_U32(v8, 8);
      v75 = FIELD_F32(v50, 184);
      sub_60921988(v8, v53, 6, &v75, v49, 1);
      v54 = FIELD_F32(v50, 184);
      v55 = FIELD_F32(v50, 200);
      v56 = 1.0;
      if ( v55 != v54 )
        v56 = 1.0 / (float)(v55 - v54);
      v57 = FIELD_U32(v8, 8);
      v75 = v56;
      sub_60921988(v8, v57, 7, &v75, v49, 1);
      sub_60921988(v8, FIELD_U32(v8, 8), 9, v50 + 260, v49, 1);
    }
    else
    {
LABEL_58:
      v58 = FIELD_U32(v8, 8);
      v75 = 1000000.0;
      sub_60921988(v8, v58, 6, &v75, v49, 1);
      v59 = FIELD_U32(v8, 8);
      v75 = 1000000.0;
      sub_60921988(v8, v59, 7, &v75, v49, 1);
      v75 = -0.0;
      v76 = -0.0;
      v77 = -1.0;
      sub_60921988(v8, FIELD_U32(v8, 8), 9, &v75, v49, 1);
    }
    ++v49;
  }
  while ( v49 != 8 );
  if ( v29 )
  {
LABEL_66:
    v63 = *v72;
    v64 = *(__int16 *)dword_60CD09E4;
    if ( *v73 > v64 )
      v63 += 2 * v64;
    if ( v63[1] )
      v65 = *(_BYTE **)(*v71 + 4 * *v63);
    else
      v65 = 0;
    if ( ((unsigned int)&dword_60C9CA2C & ~(1615008464 << v42) & 1) == 0 && _cxa_guard_acquire(&dword_60C9CA2C) )
    {
      dword_60C9CA28 = (int)&off_60BFA424;
      _cxa_guard_release(&dword_60C9CA2C);
    }
    if ( v65 && (*(int (__fastcall **)(_BYTE *, int *))(*(_DWORD *)v65 + 36))(v65, &dword_60C9CA28) == 1 && v65[48] )
      sub_60921988(v8, FIELD_U32(v8, 8), 10, v65 + 452, 0, 4);
  }
LABEL_78:
  v66 = FIELD_U32(v8, 16);
  v67 = FIELD_U32(v8, 28);
  v68 = FIELD_F32(v8, 32);
  v69 = FIELD_U16(v8, 40) * FIELD_U8(v8, 37);
  v75 = FIELD_F32(v8, 24);
  LODWORD(v76) = v67 + v69 * v66;
  v77 = v68;
  return sub_60913B04(&v75, FIELD_U32(v8, 12));
}
