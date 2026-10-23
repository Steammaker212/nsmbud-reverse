/* sub_602D1E58
 * address: 0x602D1E58   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602D1E58(
        int a1,
        int a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8,
        float a9,
        float a10,
        double a11,
        float a12,
        float a13,
        float a14,
        float a15,
        float32x2_t a16)
{
  float v17; // s2
  float *v18; // r0
  float v19; // r5
  float *v20; // lr
  float v21; // s10
  float v22; // s6
  float *v23; // r1
  float v24; // r12
  float v25; // s0
  float *v26; // r2
  float v27; // s12
  float v28; // s4
  int v29; // r5
  float v30; // s8
  float v31; // s8
  int v33; // [sp+0h] [bp-18h] BYREF
  int target; // [sp+4h] [bp-14h] BYREF

  if ( a2 )
  {
    v17 = 0.0;
    LODWORD(a11) = 1079246848;
    FIELD_U32(a1, 32) = 0;
    FIELD_U32(a1, 36) = 1080033280;
    v18 = (float *)(a1 + 36);
    FIELD_U32(a1, 40) = 0;
    v20 = (float *)(a1 + 8);
    v19 = FIELD_F32(a1, 8);
    v21 = 0.0;
    FIELD_F32(a1, 44) = v19;
    v22 = v19;
    v23 = (float *)(a1 + 12);
    v24 = FIELD_F32(a1, 12);
    FIELD_F32(a1, 48) = v24;
    v25 = v24;
    v26 = (float *)(a1 + 16);
    v27 = v24;
    v28 = FIELD_F32(a1, 16);
    FIELD_F32(a1, 52) = v28;
  }
  else
  {
    v25 = FIELD_F32(a1, 48);
    v21 = FIELD_F32(a1, 32);
    v17 = FIELD_F32(a1, 40);
    v27 = FIELD_F32(a1, 12);
    v28 = FIELD_F32(a1, 16);
    v22 = FIELD_F32(a1, 8);
    v26 = (float *)(a1 + 16);
    v23 = (float *)(a1 + 12);
    v20 = (float *)(a1 + 8);
    v18 = (float *)(a1 + 36);
    *(float *)&a11 = FIELD_F32(a1, 36) + -0.1875;
    v24 = FIELD_F32(a1, 48);
  }
  a16.n64_u32[0] = -5.0;
  v29 = 0;
  v30 = vmax_f32(*(float32x2_t *)&a11, a16).n64_f32[0];
  *v18 = v30;
  v31 = v27 + v30;
  *v20 = v22 + v21;
  *v23 = v31;
  *v26 = v28 + v17;
  if ( v31 <= v25 )
  {
    v29 = 1;
    *v18 = 0.0;
    *v23 = v24;
  }
  SE_OBJ_CMN_SPLASH_ref_2D1F80(a1);
  target = 0x80000000;
  v33 = 0x8000000;
  return v29 & moveValueTo((int *)(a1 + 28), &target, &v33);
}
