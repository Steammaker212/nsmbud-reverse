/* sub_60236A80
 * address: 0x60236A80   size: 640   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60236A80(int a1, __int64 *a2, char a3)
{
  int v4; // r5
  int v5; // r0
  int v6; // r3
  _QWORD *v7; // r7
  _QWORD *v8; // r1
  __int64 v9; // d16
  __int64 v10; // d17
  __int64 v11; // d17
  __int64 v12; // d17
  float *v13; // r1
  float v14; // s0
  float v15; // s4
  float v16; // s6
  int32x4_t *v17; // r0
  int32x4_t v18; // q8
  int32x4_t v19; // q9
  int32x4_t v20; // q10
  int8x16_t v21; // q13
  int8x16_t v22; // q13
  int32x4_t v24[2]; // [sp+0h] [bp-58h] BYREF
  int32x4_t v25; // [sp+20h] [bp-38h] BYREF
  int32x4_t v26[2]; // [sp+30h] [bp-28h] BYREF
  int32x4x2_t v27; // 0:q9.16,16:q8.16
  int32x4x2_t v28; // 0:q9.16,16:q8.16
  int32x4x2_t v29; // 0:q10.16,16:q11.16
  int32x4x2_t v30; // 0:q10.16,16:q11.16

  v4 = 0;
  v5 = FIELD_U32(a1, 52);
  if ( v5 )
  {
    v6 = FIELD_U32(a1, 56);
    if ( v6 == FIELD_U32(v5, 32) )
    {
      v7 = a2 + 4;
      v9 = *a2;
      v10 = a2[1];
      v8 = a2 + 2;
      *(_QWORD *)a1 = v9;
      FIELD_U64(a1, 8) = v10;
      v11 = v8[1];
      FIELD_U64(a1, 16) = *v8;
      FIELD_U64(a1, 24) = v11;
      v12 = v7[1];
      FIELD_U64(a1, 32) = *v7;
      FIELD_U64(a1, 40) = v12;
      FIELD_U8(a1, 48) = a3;
      v13 = *(float **)(a1 + 60);
      if ( v13 )
      {
        v14 = v13[1];
        if ( v14 != 1.0 )
        {
          *(float *)a1 = v14 * *(float *)a1;
          FIELD_F32(a1, 16) = v14 * FIELD_F32(a1, 16);
          FIELD_F32(a1, 32) = v14 * FIELD_F32(a1, 32);
          FIELD_F32(a1, 4) = v14 * FIELD_F32(a1, 4);
          FIELD_F32(a1, 20) = v14 * FIELD_F32(a1, 20);
          FIELD_F32(a1, 36) = v14 * FIELD_F32(a1, 36);
          FIELD_F32(a1, 8) = v14 * FIELD_F32(a1, 8);
          FIELD_F32(a1, 24) = v14 * FIELD_F32(a1, 24);
          FIELD_F32(a1, 40) = v14 * FIELD_F32(a1, 40);
          FIELD_U8(a1, 48) = 1;
        }
        v15 = v13[3];
        v16 = v13[4];
        FIELD_F32(a1, 12) = v13[2] + FIELD_F32(a1, 12);
        FIELD_F32(a1, 28) = v15 + FIELD_F32(a1, 28);
        FIELD_F32(a1, 44) = v16 + FIELD_F32(a1, 44);
      }
      v4 = 1;
      if ( v6 == FIELD_U32(v5, 32) )
      {
        v17 = (int32x4_t *)sub_60881DE8(a1 + 52);
        if ( v17[22].n128_i32[0] >= 1 && FIELD_U32(v17, 0x0)[8] )
        {
          v18 = *(int32x4_t *)(a1 + 16);
          v19 = *(int32x4_t *)a1;
          v20 = *(int32x4_t *)(a1 + 32);
          if ( FIELD_U8(a1, 48) )
          {
            v27 = vzipq_s32(v19, v18);
            v29 = vzipq_s32(v20, (int32x4_t)0);
            v24[0] = vextq_s8(vextq_s8(v27.val[0], v27.val[0], 8u), v29.val[0], 8u);
            v24[1] = vextq_s8(v27.val[0], vextq_s8(v29.val[0], v27.val[0], 8u), 8u);
            v25 = vextq_s8(vextq_s8(v27.val[1], v27.val[1], 8u), v29.val[1], 8u);
            v26[0] = vextq_s8(v27.val[1], vextq_s8(v29.val[1], v27.val[1], 8u), 8u);
            ((void (__fastcall *)(int32x4_t *, int32x4_t *, int32x4_t *, int32x4_t *))sub_60881BB0)(v17, v24, v26, &v25);
          }
          else
          {
            v4 = 1;
            v28 = vzipq_s32(v19, v18);
            v30 = vzipq_s32(v20, (int32x4_t)0);
            v21 = vextq_s8(v30.val[0], v28.val[0], 8u);
            v30.val[0] = vextq_s8(vextq_s8(v28.val[0], v28.val[0], 8u), v30.val[0], 8u);
            v28.val[0] = vextq_s8(v28.val[0], v21, 8u);
            v22 = vextq_s8(v30.val[1], v28.val[1], 8u);
            v30.val[1] = vextq_s8(vextq_s8(v28.val[1], v28.val[1], 8u), v30.val[1], 8u);
            v28.val[1] = vextq_s8(v28.val[1], v22, 8u);
            v17[9] = v30.val[0];
            v17[10] = v28.val[0];
            v17[11] = v30.val[1];
            v17[12] = v28.val[1];
            v17[5] = v30.val[0];
            v17[6] = v28.val[0];
            v28.val[0].n128_u64[0] = 0x3F8000003F800000LL;
            v28.val[0].n128_u64[1] = 1065353216;
            v17[7] = v30.val[1];
            v17[8] = v28.val[1];
            v17[14].n128_u64[0] = 0x3F8000003F800000LL;
            v17[14].n128_u64[1] = 1065353216;
            v17[19] = vmulq_f32(v17[17], v28.val[0]);
            v17[1].n128_u32[1] = 1;
          }
        }
        else
        {
          FIELD_U32(a1, 52) = 0;
          FIELD_U32(a1, 56) = -1;
        }
      }
    }
  }
  return v4;
}
