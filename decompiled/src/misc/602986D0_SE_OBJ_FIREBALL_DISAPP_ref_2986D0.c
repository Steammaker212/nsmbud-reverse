/* SE_OBJ_FIREBALL_DISAPP_ref_2986D0
 * address: 0x602986D0   size: 688   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_FIREBALL_DISAPP_ref_2986D0(int a1, int a2, int a3)
{
  _BYTE *v5; // r6
  int v6; // r0
  int v7; // r1
  int v8; // r1
  int v9; // r2
  int v10; // r3
  unsigned int v11; // r1
  float *v12; // r2
  float v13; // s4
  float v14; // s8
  float v15; // s0
  float v16; // s14
  float v17; // s3
  float32x4_t v18; // q9
  float32x4_t v19; // q11
  int32x4_t v20; // q10
  float32x4_t v21; // q15
  int8x16_t v22; // q10
  int v23; // r0
  int v24; // r4
  Vec2 out; // [sp+30h] [bp-70h] BYREF
  unsigned int v27; // [sp+38h] [bp-68h]
  int v28; // [sp+3Ch] [bp-64h]
  float v29; // [sp+40h] [bp-60h]
  float v30; // [sp+44h] [bp-5Ch]
  float v31; // [sp+48h] [bp-58h]
  int v32; // [sp+4Ch] [bp-54h]
  float v33; // [sp+50h] [bp-50h]
  float v34; // [sp+54h] [bp-4Ch]
  float v35; // [sp+58h] [bp-48h]
  int v36; // [sp+5Ch] [bp-44h]
  __int64 position; // [sp+60h] [bp-40h] BYREF
  unsigned __int64 position_8; // [sp+68h] [bp-38h]
  __int64 v39; // [sp+70h] [bp-30h]
  unsigned __int64 v40; // [sp+78h] [bp-28h]
  __int64 v41; // [sp+80h] [bp-20h]
  unsigned __int64 v42; // [sp+88h] [bp-18h]

  v5 = (_BYTE *)(a1 + 6672);
  if ( !FIELD_U8(a1, 6672) )
  {
    if ( (FIELD_U8(a1, 22) & 1) != 0 )
    {
      v24 = Global_BasicSoundActor2;
      position = *(_QWORD *)(FIELD_U32(a3, 64) + 108);
      mapPositionToScreen(&out, (Vec3 *)&position);
      BasicSoundActor2_play(v24, "SE_OBJ_FIREBALL_DISAPP", &out.x, 0);
    }
    else
    {
      Enemy__collisionFireball((float *)a1, a2, a3);
      v6 = FIELD_U32(a3, 64);
      *v5 = 1;
      v7 = FIELD_S8(v6, 84);
      if ( (unsigned __int8)v7 != 255 )
      {
        if ( (unsigned __int8)v7 >= 6u )
          v7 = 0;
        ++*(_DWORD *)(dword_60C99DD4 + 72 * v7 + 348);
      }
      v8 = FIELD_U32(v6, 120);
      v9 = FIELD_U32(v6, 124);
      v10 = FIELD_U32(v6, 128);
      position = 1065353216;
      LODWORD(position_8) = 0;
      v39 = 0x3F80000000000000LL;
      LODWORD(v40) = 0;
      v41 = 0;
      LODWORD(v42) = 1065353216;
      HIDWORD(position_8) = v8;
      HIDWORD(v40) = v9;
      HIDWORD(v42) = v10;
      v11 = -FIELD_U32(a1, 164);
      v12 = (float *)((char *)sinLutTable + ((v11 >> 20) & 0xFF0));
      v13 = (float)(0.024541 * 0.0) + 0.0;
      v14 = (float)(-0.00030118 * 0.0) + 1.0;
      v15 = (float)(v11 & 0xFFFFFF) * 0.000000059605;
      v16 = *v12 + (float)(v15 * v12[1]);
      v17 = v12[2] + (float)(v15 * v12[3]);
      out.x = v14 * v17;
      v29 = v14 * v16;
      v33 = -v13;
      out.y = (float)((float)(v13 * v13) * v17) - (float)(v14 * v16);
      v30 = (float)(v14 * v17) + (float)((float)(v13 * v13) * v16);
      v34 = v13 * v14;
      *(float *)&v27 = (float)(v13 * (float)(v14 * v17)) + (float)(v13 * v16);
      v31 = (float)(v13 * (float)(v14 * v16)) - (float)(v13 * v17);
      v35 = v14 * v14;
      v28 = 0;
      v32 = 0;
      v36 = 0;
      v18.n128_u64[0] = 1065353216;
      v18.n128_u64[1] = position_8;
      v19.n128_u64[0] = 0x3F80000000000000LL;
      v19.n128_u64[1] = v40;
      v20 = vdupq_lane_s32((int32x2_t)v27, 1);
      v21.n128_u64[0] = 0;
      v21.n128_u64[1] = v42;
      v22 = vextq_s8((int8x16_t)vzipq_s32(v20, v20).val, (int8x16_t)0, 0xCu);
      v23 = 715827882;
      if ( COERCE_FLOAT(vaddq_f32(
                          vextq_s8(v22, v22, 4u),
                          vmlaq_lane_f32(
                            vmlaq_lane_f32(vmulq_n_f32(v18, v14 * v17), v19, (float32x2_t)out, 1),
                            v21,
                            (float32x2_t)v27,
                            0)).n128_u32[3]) > 0.0 )
        v23 = -715827882;
      FIELD_U32(a1, 160) = v23;
    }
  }
  return 1;
}
