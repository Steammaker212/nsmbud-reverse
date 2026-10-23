/* sub_602D212C
 * address: 0x602D212C   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_602D212C(
        int a1,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8,
        float a9,
        double a10,
        float a11,
        float a12,
        float32x2_t a13)
{
  float v14; // s0
  float v15; // r1
  float v16; // s10
  float v17; // s6
  float v18; // r2
  float v19; // s4
  float v20; // s2
  float v21; // s8
  int v23; // [sp+0h] [bp-10h] BYREF
  int target; // [sp+4h] [bp-Ch] BYREF

  if ( FIELD_U8(a1, 104) )
  {
    v14 = 0.0;
    LODWORD(a10) = 1079246848;
    FIELD_U32(a1, 32) = 0;
    FIELD_U32(a1, 36) = 1080033280;
    FIELD_U32(a1, 40) = 0;
    v15 = FIELD_F32(a1, 8);
    v16 = 0.0;
    FIELD_F32(a1, 44) = v15;
    v17 = v15;
    v18 = FIELD_F32(a1, 12);
    FIELD_F32(a1, 48) = v18;
    v19 = v18;
    v20 = FIELD_F32(a1, 16);
    FIELD_F32(a1, 52) = v20;
    FIELD_U8(a1, 104) = 0;
  }
  else
  {
    v16 = FIELD_F32(a1, 32);
    v14 = FIELD_F32(a1, 40);
    v19 = FIELD_F32(a1, 12);
    v20 = FIELD_F32(a1, 16);
    v17 = FIELD_F32(a1, 8);
    *(float *)&a10 = FIELD_F32(a1, 36) + -0.1875;
  }
  a13.n64_u32[0] = -5.0;
  v21 = vmax_f32(*(float32x2_t *)&a10, a13).n64_f32[0];
  FIELD_F32(a1, 36) = v21;
  FIELD_F32(a1, 8) = v17 + v16;
  FIELD_F32(a1, 12) = v19 + v21;
  FIELD_F32(a1, 16) = v20 + v14;
  SE_OBJ_CMN_SPLASH_ref_2D1F80(a1);
  target = 0x80000000;
  v23 = 0x8000000;
  return moveValueTo((int *)(a1 + 28), &target, &v23);
}
