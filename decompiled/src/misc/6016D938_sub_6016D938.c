/* sub_6016D938
 * address: 0x6016D938   size: 524   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n128 __fastcall sub_6016D938(int a1, float a2, float a3)
{
  int v4; // r0
  int v5; // r0
  float v6; // s4
  float v7; // s10
  float v8; // s2
  int v9; // r0
  float v10; // s2
  float v11; // s4
  float v12; // s18
  int *v13; // r1
  float v14; // s0
  float v15; // s16
  float v16; // s0
  float v17; // s10
  float v18; // s6
  __n128 result; // q0
  int v20; // [sp+Ch] [bp-24h]
  int v21; // [sp+10h] [bp-20h]
  int v22; // [sp+14h] [bp-1Ch]

  v4 = FIELD_U32(a1, 776);
  if ( v4 )
  {
    if ( v4 == 4 )
    {
      v10 = FIELD_F32(a1, 1016) + *(float *)&dword_60C88BBC;
      v11 = FIELD_F32(a1, 1020) + *(float *)&dword_60C88BC0;
      FIELD_F32(a1, 664) = FIELD_F32(a1, 1012) + *(float *)&dword_60C88BB8;
      FIELD_F32(a1, 668) = v10;
      FIELD_F32(a1, 672) = v11;
      goto LABEL_10;
    }
    if ( v4 != 1 )
      goto LABEL_10;
    v5 = FIELD_U32(a1, 1024);
  }
  else
  {
    v6 = FIELD_F32(a1, 672);
    v7 = FIELD_F32(a1, 1048);
    v8 = FIELD_F32(a1, 668) + FIELD_F32(a1, 1044);
    FIELD_F32(a1, 784) = FIELD_F32(a1, 664) + FIELD_F32(a1, 1040);
    a2 = v6 + v7;
    FIELD_F32(a1, 788) = v8;
    FIELD_F32(a1, 792) = v6 + v7;
    FIELD_U32(a1, 776) = 1;
    v5 = 0;
    FIELD_U32(a1, 1024) = 0;
  }
  if ( v5 <= FIELD_U32(a1, 1028) )
  {
    sub_60833AF0(a2, a3);
    v9 = FIELD_U32(a1, 1024) + 1;
    FIELD_U32(a1, 1024) = v9;
    FIELD_U32(a1, 664) = v20;
    FIELD_U32(a1, 668) = v21;
    FIELD_U32(a1, 672) = v22;
    if ( v9 >= FIELD_U32(a1, 1028) )
    {
      FIELD_U32(a1, 752) = 0;
      FIELD_U32(a1, 880) = 0;
      FIELD_U8(a1, 1371) = 0;
      FIELD_U32(a1, 776) = 4;
    }
  }
LABEL_10:
  v12 = FIELD_F32(a1, 848);
  if ( FIELD_U8(a1, 1374) )
    v12 = v12 + FIELD_F32(a1, 864);
  v13 = dword_6016DB48;
  if ( FIELD_U32(a1, 1360) == 8 )
    v13 = &dword_6016DB48[1];
  v14 = FIELD_F32(a1, 696) + *(float *)v13;
  FIELD_F32(a1, 692) = v14;
  v15 = cosf(v14);
  v16 = sinf(FIELD_F32(a1, 692));
  v17 = FIELD_F32(a1, 672);
  result.n128_u32[1] = FIELD_U32(a1, 1048);
  result.n128_f32[0] = (float)(v12 + 2540.0) * v16;
  result.n128_f32[2] = (float)(v12 + 2540.0) * v15;
  v18 = result.n128_f32[0] + (float)(FIELD_F32(a1, 668) + FIELD_F32(a1, 1044));
  FIELD_F32(a1, 652) = (float)(FIELD_F32(a1, 664) + FIELD_F32(a1, 1040)) + 0.0;
  FIELD_F32(a1, 656) = v18;
  FIELD_F32(a1, 660) = result.n128_f32[2] + (float)(v17 + result.n128_f32[1]);
  result.n128_f32[0] = result.n128_f32[0] + FIELD_F32(a1, 832);
  result.n128_f32[2] = result.n128_f32[2] + FIELD_F32(a1, 836);
  FIELD_F32(a1, 816) = FIELD_F32(a1, 828) + 0.0;
  FIELD_U32(a1, 820) = result.n128_u32[0];
  FIELD_U32(a1, 824) = result.n128_u32[2];
  return result;
}
