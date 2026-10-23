/* sub_6016C7D4
 * address: 0x6016C7D4   size: 396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n128 __fastcall sub_6016C7D4(int a1)
{
  int v2; // r0
  float v3; // s4
  float v4; // s2
  int v5; // r0
  int v6; // r1
  int v7; // r2
  float v8; // s18
  int *v9; // r1
  float v10; // s0
  float v11; // s16
  float v12; // s0
  float v13; // s10
  float v14; // s6
  __n128 result; // q0

  v2 = FIELD_U32(a1, 776);
  if ( v2 != 1 )
  {
    if ( v2 )
      goto LABEL_8;
    v3 = FIELD_F32(a1, 672) + FIELD_F32(a1, 1048);
    v4 = FIELD_F32(a1, 668) + FIELD_F32(a1, 1044);
    FIELD_F32(a1, 784) = FIELD_F32(a1, 664) + FIELD_F32(a1, 1040);
    FIELD_F32(a1, 788) = v4;
    FIELD_F32(a1, 792) = v3;
    FIELD_U32(a1, 776) = 1;
  }
  if ( FIELD_U8(dword_60C8C188, 3224) )
  {
    v5 = FIELD_U32(a1, 664);
    v6 = FIELD_U32(a1, 668);
    v7 = FIELD_U32(a1, 672);
  }
  else
  {
    v5 = FIELD_U32(dword_60C88BC8, 76);
    v6 = FIELD_U32(dword_60C88BC8, 80);
    v7 = FIELD_U32(dword_60C88BC8, 84);
    FIELD_U32(a1, 664) = v5;
    FIELD_U32(a1, 668) = v6;
    FIELD_U32(a1, 672) = v7;
  }
  FIELD_U32(a1, 828) = v5;
  FIELD_U32(a1, 832) = v6;
  FIELD_U32(a1, 836) = v7;
LABEL_8:
  v8 = FIELD_F32(a1, 848);
  if ( FIELD_U8(a1, 1374) )
    v8 = v8 + FIELD_F32(a1, 864);
  v9 = dword_6016C968;
  if ( FIELD_U32(a1, 1360) == 8 )
    v9 = &dword_6016C968[1];
  v10 = FIELD_F32(a1, 696) + *(float *)v9;
  FIELD_F32(a1, 692) = v10;
  v11 = cosf(v10);
  v12 = sinf(FIELD_F32(a1, 692));
  v13 = FIELD_F32(a1, 672);
  result.n128_u32[1] = FIELD_U32(a1, 1048);
  result.n128_f32[0] = (float)(v8 + 2540.0) * v12;
  result.n128_f32[2] = (float)(v8 + 2540.0) * v11;
  v14 = result.n128_f32[0] + (float)(FIELD_F32(a1, 668) + FIELD_F32(a1, 1044));
  FIELD_F32(a1, 652) = (float)(FIELD_F32(a1, 664) + FIELD_F32(a1, 1040)) + 0.0;
  FIELD_F32(a1, 656) = v14;
  FIELD_F32(a1, 660) = result.n128_f32[2] + (float)(v13 + result.n128_f32[1]);
  result.n128_f32[0] = result.n128_f32[0] + FIELD_F32(a1, 832);
  result.n128_f32[2] = result.n128_f32[2] + FIELD_F32(a1, 836);
  FIELD_F32(a1, 816) = FIELD_F32(a1, 828) + 0.0;
  FIELD_U32(a1, 820) = result.n128_u32[0];
  FIELD_U32(a1, 824) = result.n128_u32[2];
  return result;
}
