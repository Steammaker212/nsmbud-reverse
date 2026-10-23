/* sub_6016DB58
 * address: 0x6016DB58   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n128 __fastcall sub_6016DB58(int a1)
{
  int v2; // r0
  float v3; // s18
  int *v4; // r0
  int *v5; // r1
  int *v6; // r2
  int *v7; // r1
  float v8; // s0
  float v9; // s16
  float v10; // s0
  float v11; // s10
  float v12; // s6
  __n128 result; // q0

  v2 = FIELD_U32(a1, 776);
  if ( v2 )
  {
    if ( v2 != 1 )
    {
      v3 = FIELD_F32(a1, 848);
      goto LABEL_9;
    }
  }
  else
  {
    FIELD_U32(a1, 1040) = 0;
    FIELD_U32(a1, 1044) = 0;
    FIELD_U32(a1, 1048) = 0;
    FIELD_U8(a1, 1373) = 0;
    FIELD_U32(a1, 852) = FIELD_U32(a1, 848);
    FIELD_U32(a1, 776) = 1;
  }
  if ( FIELD_U8(a1, 1369) )
  {
    v3 = 800.0;
    v4 = &dword_60C88B34;
    v5 = &dword_60C88B30;
    v6 = &dword_60C88B2C;
  }
  else
  {
    v3 = 6500.0;
    v4 = &dword_60C88B28;
    v5 = &dword_60C88B24;
    v6 = &dword_60C88B20;
  }
  FIELD_U32(a1, 664) = *v6;
  FIELD_U32(a1, 668) = *v5;
  FIELD_U32(a1, 672) = *v4;
  FIELD_F32(a1, 848) = v3;
LABEL_9:
  if ( FIELD_U8(a1, 1374) )
    v3 = v3 + FIELD_F32(a1, 864);
  v7 = dword_6016DCE4;
  if ( FIELD_U32(a1, 1360) == 8 )
    v7 = &dword_6016DCE4[1];
  v8 = FIELD_F32(a1, 696) + *(float *)v7;
  FIELD_F32(a1, 692) = v8;
  v9 = cosf(v8);
  v10 = sinf(FIELD_F32(a1, 692));
  v11 = FIELD_F32(a1, 672);
  result.n128_u32[1] = FIELD_U32(a1, 1048);
  result.n128_f32[0] = (float)(v3 + 2540.0) * v10;
  result.n128_f32[2] = (float)(v3 + 2540.0) * v9;
  v12 = result.n128_f32[0] + (float)(FIELD_F32(a1, 668) + FIELD_F32(a1, 1044));
  FIELD_F32(a1, 652) = (float)(FIELD_F32(a1, 664) + FIELD_F32(a1, 1040)) + 0.0;
  FIELD_F32(a1, 656) = v12;
  FIELD_F32(a1, 660) = result.n128_f32[2] + (float)(v11 + result.n128_f32[1]);
  result.n128_f32[0] = result.n128_f32[0] + FIELD_F32(a1, 832);
  result.n128_f32[2] = result.n128_f32[2] + FIELD_F32(a1, 836);
  FIELD_F32(a1, 816) = FIELD_F32(a1, 828) + 0.0;
  FIELD_U32(a1, 820) = result.n128_u32[0];
  FIELD_U32(a1, 824) = result.n128_u32[2];
  return result;
}
