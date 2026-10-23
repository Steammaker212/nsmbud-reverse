/* sub_6016D574
 * address: 0x6016D574   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n128 __fastcall sub_6016D574(int a1)
{
  int v2; // r0
  float v3; // s18
  int *v4; // r1
  float v5; // s0
  float v6; // s16
  float v7; // s0
  float v8; // s10
  float v9; // s6
  __n128 result; // q0

  v2 = FIELD_U32(a1, 776);
  if ( v2 != 1 )
  {
    if ( v2 )
      goto LABEL_7;
    FIELD_U32(a1, 776) = 1;
  }
  if ( FIELD_U32(a1, 752)
    && sub_608332CC(a1 + 664, a1 + 784, FIELD_F32(a1, 640), FIELD_F32(a1, 644), FIELD_F32(a1, 648)) == 0.0 )
  {
    FIELD_U32(a1, 880) = 0;
    FIELD_U32(a1, 768) = 0;
    FIELD_U8(a1, 1369) = 0;
    FIELD_U32(a1, 776) = 0;
    FIELD_U32(a1, 752) = 0;
    FIELD_U32(a1, 748) = 0;
    FIELD_U32(a1, 644) = 1106247680;
    FIELD_U32(a1, 640) = 1053609165;
    FIELD_U32(a1, 648) = 1065353216;
    FIELD_U8(a1, 1371) = 0;
  }
LABEL_7:
  v3 = FIELD_F32(a1, 848);
  if ( FIELD_U8(a1, 1374) )
    v3 = v3 + FIELD_F32(a1, 864);
  v4 = dword_6016D6E0;
  if ( FIELD_U32(a1, 1360) == 8 )
    v4 = &dword_6016D6E0[1];
  v5 = FIELD_F32(a1, 696) + *(float *)v4;
  FIELD_F32(a1, 692) = v5;
  v6 = cosf(v5);
  v7 = sinf(FIELD_F32(a1, 692));
  v8 = FIELD_F32(a1, 672);
  result.n128_u32[1] = FIELD_U32(a1, 1048);
  result.n128_f32[0] = (float)(v3 + 2540.0) * v7;
  result.n128_f32[2] = (float)(v3 + 2540.0) * v6;
  v9 = result.n128_f32[0] + (float)(FIELD_F32(a1, 668) + FIELD_F32(a1, 1044));
  FIELD_F32(a1, 652) = (float)(FIELD_F32(a1, 664) + FIELD_F32(a1, 1040)) + 0.0;
  FIELD_F32(a1, 656) = v9;
  FIELD_F32(a1, 660) = result.n128_f32[2] + (float)(v8 + result.n128_f32[1]);
  result.n128_f32[0] = result.n128_f32[0] + FIELD_F32(a1, 832);
  result.n128_f32[2] = result.n128_f32[2] + FIELD_F32(a1, 836);
  FIELD_F32(a1, 816) = FIELD_F32(a1, 828) + 0.0;
  FIELD_U32(a1, 820) = result.n128_u32[0];
  FIELD_U32(a1, 824) = result.n128_u32[2];
  return result;
}
