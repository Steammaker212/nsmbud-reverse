/* sub_6016CDA0
 * address: 0x6016CDA0   size: 468   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n128 __fastcall sub_6016CDA0(int a1)
{
  int v2; // r0
  float v3; // s4
  float v4; // s2
  float *v5; // r2
  float v6; // s1
  int v7; // r1
  int v8; // r0
  float v9; // s16
  float *v10; // r0
  float v11; // s18
  int *v12; // r1
  float v13; // s0
  float v14; // s16
  float v15; // s0
  float v16; // s10
  float v17; // s6
  __n128 result; // q0

  v2 = FIELD_U32(a1, 776);
  if ( v2 != 1 )
  {
    if ( v2 )
      goto LABEL_10;
    v3 = FIELD_F32(a1, 672) + FIELD_F32(a1, 1048);
    v4 = FIELD_F32(a1, 668) + FIELD_F32(a1, 1044);
    FIELD_F32(a1, 784) = FIELD_F32(a1, 664) + FIELD_F32(a1, 1040);
    FIELD_F32(a1, 788) = v4;
    FIELD_F32(a1, 792) = v3;
    FIELD_U32(a1, 776) = 1;
    FIELD_U32(a1, 780) = 1069547520;
  }
  if ( FIELD_U8(a1, 1371) )
  {
    v5 = *(float **)(a1 + 880);
    v6 = FIELD_F32(a1, 780);
    v7 = FIELD_U32(a1, 752);
    v8 = a1 + 664;
    if ( v5 )
    {
      v9 = sub_608332CC(v8, v7, *v5, v6, v5[2]);
      v10 = (float *)(FIELD_U32(a1, 880) + 4);
    }
    else
    {
      v9 = sub_608332CC(v8, v7, FIELD_F32(a1, 640), v6, FIELD_F32(a1, 648));
      v10 = (float *)(a1 + 644);
    }
    ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(a1 + 780, *v10, 0.1, 0.02, 0.01);
    if ( v9 == 0.0 )
    {
      FIELD_U32(a1, 752) = 0;
      FIELD_U32(a1, 880) = 0;
      FIELD_U8(a1, 1371) = 0;
    }
  }
LABEL_10:
  v11 = FIELD_F32(a1, 848);
  if ( FIELD_U8(a1, 1374) )
    v11 = v11 + FIELD_F32(a1, 864);
  v12 = dword_6016CF80;
  if ( FIELD_U32(a1, 1360) == 8 )
    v12 = &dword_6016CF80[1];
  v13 = FIELD_F32(a1, 696) + *(float *)v12;
  FIELD_F32(a1, 692) = v13;
  v14 = cosf(v13);
  v15 = sinf(FIELD_F32(a1, 692));
  v16 = FIELD_F32(a1, 672);
  result.n128_u32[1] = FIELD_U32(a1, 1048);
  result.n128_f32[0] = (float)(v11 + 2540.0) * v15;
  result.n128_f32[2] = (float)(v11 + 2540.0) * v14;
  v17 = result.n128_f32[0] + (float)(FIELD_F32(a1, 668) + FIELD_F32(a1, 1044));
  FIELD_F32(a1, 652) = (float)(FIELD_F32(a1, 664) + FIELD_F32(a1, 1040)) + 0.0;
  FIELD_F32(a1, 656) = v17;
  FIELD_F32(a1, 660) = result.n128_f32[2] + (float)(v16 + result.n128_f32[1]);
  result.n128_f32[0] = result.n128_f32[0] + FIELD_F32(a1, 832);
  result.n128_f32[2] = result.n128_f32[2] + FIELD_F32(a1, 836);
  FIELD_F32(a1, 816) = FIELD_F32(a1, 828) + 0.0;
  FIELD_U32(a1, 820) = result.n128_u32[0];
  FIELD_U32(a1, 824) = result.n128_u32[2];
  return result;
}
