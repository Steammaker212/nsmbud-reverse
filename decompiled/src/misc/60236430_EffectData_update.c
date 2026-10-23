/* EffectData_update
 * address: 0x60236430   size: 1164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall EffectData_update(EffectData *this, Vec3 *position, Vec3i *rotation, Vec3 *scale)
{
  int ret; // r5
  int _34; // r10
  int v7; // lr
  unsigned int x; // r7
  unsigned int y; // r5
  unsigned int z; // r2
  float *v11; // r9
  float *v12; // r6
  float *v13; // r0
  float v14; // s0
  float v15; // s2
  float v16; // s4
  float v17; // s12
  float v18; // s5
  float v19; // s8
  float v20; // s1
  float v21; // s9
  float v22; // s13
  float v23; // s4
  float v24; // s2
  float v25; // s0
  float *v26; // r2
  float v27; // s6
  float v28; // r5
  float v29; // r3
  float v30; // r1
  float v31; // s0
  float v32; // s2
  float v33; // s4
  int32x4_t *v34; // r0
  int8x16_t v35; // q13
  int8x16_t v36; // q13
  int32x4_t *v38; // [sp+8h] [bp-70h]
  int32x4_t *v39; // [sp+Ch] [bp-6Ch]
  int32x4x2_t v40; // 0:q9.16,16:q8.16
  int32x4x2_t v41; // 0:q10.16,16:q11.16

  ret = 0;
  _34 = FIELD_U32(this, 0x34);
  if ( !_34 )
    return ret;
  v7 = FIELD_U32(this, 0x38);
  if ( v7 != FIELD_U32(_34, 32) )
    return ret;
  *(_QWORD *)FIELD_F32(this, 0x0) = 1065353216;
  *(_QWORD *)&FIELD_F32(this, 0x0)[2] = 0;
  v38 = (int32x4_t *)&FIELD_F32(this, 0x0)[4];
  *(_QWORD *)&FIELD_F32(this, 0x0)[4] = 0x3F80000000000000LL;
  *(_QWORD *)&FIELD_F32(this, 0x0)[6] = 0;
  v39 = (int32x4_t *)&FIELD_F32(this, 0x0)[8];
  *(_QWORD *)&FIELD_F32(this, 0x0)[8] = 0;
  *(_QWORD *)&FIELD_F32(this, 0x0)[10] = 1065353216;
  FIELD_U8(this, 0x30) = 0;
  if ( rotation )
  {
    x = FIELD_U32(rotation, 0x0);
    y = FIELD_U32(rotation, 0x4);
    z = FIELD_U32(rotation, 0x8);
    v11 = (float *)((char *)sinLutTable + ((y >> 20) & 0xFF0));
    v12 = (float *)((char *)sinLutTable + ((z >> 20) & 0xFF0));
    v13 = (float *)((char *)sinLutTable + ((x >> 20) & 0xFF0));
    v14 = (float)(z & 0xFFFFFF) * 0.000000059605;
    v15 = (float)(y & 0xFFFFFF) * 0.000000059605;
    v16 = (float)(x & 0xFFFFFF) * 0.000000059605;
    v17 = v12[2] + (float)(v14 * v12[3]);
    v18 = v11[2] + (float)(v15 * v11[3]);
    v19 = *v12 + (float)(v14 * v12[1]);
    v20 = *v11 + (float)(v15 * v11[1]);
    v21 = *v13 + (float)(v16 * v13[1]);
    v22 = v13[2] + (float)(v16 * v13[3]);
    FIELD_F32(this, 0x0)[0] = (float)(v18 * v17) + (float)(v21 * (float)(v20 * v19));
    FIELD_F32(this, 0x0)[4] = v22 * v19;
    FIELD_F32(this, 0x0)[8] = (float)(v21 * (float)(v18 * v19)) - (float)(v20 * v17);
    FIELD_F32(this, 0x0)[1] = (float)(v21 * (float)(v20 * v17)) - (float)(v18 * v19);
    FIELD_F32(this, 0x0)[5] = v22 * v17;
    FIELD_F32(this, 0x0)[9] = (float)(v20 * v19) + (float)(v21 * (float)(v18 * v17));
    FIELD_F32(this, 0x0)[2] = v22 * v20;
    FIELD_F32(this, 0x0)[6] = -v21;
    FIELD_F32(this, 0x0)[10] = v22 * v18;
    FIELD_F32(this, 0x0)[3] = 0.0;
    FIELD_F32(this, 0x0)[7] = 0.0;
    FIELD_F32(this, 0x0)[11] = 0.0;
  }
  if ( scale )
  {
    v23 = FIELD_F32(scale, 0x0);
    v24 = FIELD_F32(scale, 0x4);
    v25 = FIELD_F32(scale, 0x8);
  }
  else
  {
    v25 = 1.0;
    v24 = 1.0;
    v23 = 1.0;
  }
  v26 = (float *)FIELD_U32(this, 0x3C);
  if ( v26 )
  {
    v27 = v26[1];
    v25 = v25 * v27;
    v24 = v24 * v27;
    v23 = v23 * v27;
  }
  if ( v25 != 1.0 || v23 != 1.0 )
  {
    FIELD_F32(this, 0x0)[0] = v23 * FIELD_F32(this, 0x0)[0];
    FIELD_F32(this, 0x0)[4] = v23 * FIELD_F32(this, 0x0)[4];
    FIELD_F32(this, 0x0)[8] = v23 * FIELD_F32(this, 0x0)[8];
    FIELD_F32(this, 0x0)[1] = v24 * FIELD_F32(this, 0x0)[1];
    FIELD_F32(this, 0x0)[5] = v24 * FIELD_F32(this, 0x0)[5];
    FIELD_F32(this, 0x0)[9] = v24 * FIELD_F32(this, 0x0)[9];
    FIELD_F32(this, 0x0)[2] = v25 * FIELD_F32(this, 0x0)[2];
    FIELD_F32(this, 0x0)[6] = v25 * FIELD_F32(this, 0x0)[6];
    FIELD_F32(this, 0x0)[10] = v25 * FIELD_F32(this, 0x0)[10];
    FIELD_U8(this, 0x30) = 1;
  }
  if ( !position )
  {
    v31 = 0.0;
    v30 = 0.0;
    v29 = 0.0;
    v28 = 0.0;
    v32 = 0.0;
    v33 = 0.0;
    if ( !v26 )
      goto LABEL_18;
    goto LABEL_17;
  }
  v28 = FIELD_F32(position, 0x0);
  v29 = FIELD_F32(position, 0x4);
  v30 = FIELD_F32(position, 0x8);
  v31 = v30;
  v32 = v29;
  v33 = v28;
  if ( v26 )
  {
LABEL_17:
    v30 = v31 + v26[4];
    v29 = v32 + v26[3];
    v28 = v33 + v26[2];
  }
LABEL_18:
  FIELD_F32(this, 0x0)[3] = v28;
  FIELD_F32(this, 0x0)[7] = v29;
  FIELD_F32(this, 0x0)[11] = v30;
  ret = 1;
  if ( v7 == FIELD_U32(_34, 32) )
  {
    v34 = (int32x4_t *)sub_60881DE8(&FIELD_U32(this, 0x34));
    if ( v34[22].n128_i32[0] >= 1 && FIELD_U32(v34, 0x0)[8] )
    {
      if ( FIELD_U8(this, 0x30) )
      {
        sub_60881BB0();
      }
      else
      {
        ret = 1;
        v40 = vzipq_s32(*(int32x4_t *)FIELD_F32(this, 0x0), *v38);
        v41 = vzipq_s32(*v39, (int32x4_t)0);
        v35 = vextq_s8(v41.val[0], v40.val[0], 8u);
        v41.val[0] = vextq_s8(vextq_s8(v40.val[0], v40.val[0], 8u), v41.val[0], 8u);
        v40.val[0] = vextq_s8(v40.val[0], v35, 8u);
        v36 = vextq_s8(v41.val[1], v40.val[1], 8u);
        v41.val[1] = vextq_s8(vextq_s8(v40.val[1], v40.val[1], 8u), v41.val[1], 8u);
        v34[9] = v41.val[0];
        v40.val[1] = vextq_s8(v40.val[1], v36, 8u);
        v34[10] = v40.val[0];
        v34[11] = v41.val[1];
        v34[12] = v40.val[1];
        v34[5] = v41.val[0];
        v34[6] = v40.val[0];
        v40.val[0].n128_u64[0] = 0x3F8000003F800000LL;
        v40.val[0].n128_u64[1] = 1065353216;
        v34[7] = v41.val[1];
        v34[8] = v40.val[1];
        v34[14].n128_u64[0] = 0x3F8000003F800000LL;
        v34[14].n128_u64[1] = 1065353216;
        v34[19] = vmulq_f32(v34[17], v40.val[0]);
        v34[1].n128_u32[1] = 1;
      }
    }
    else
    {
      FIELD_U32(this, 0x34) = 0;
      FIELD_U32(this, 0x38) = -1;
    }
  }
  return ret;
}
