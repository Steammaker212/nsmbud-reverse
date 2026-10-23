/* sub_6016D6F0
 * address: 0x6016D6F0   size: 560   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n128 __fastcall sub_6016D6F0(int a1)
{
  int v2; // r0
  _DWORD *v3; // r0
  int v4; // r1
  int v5; // r2
  int v6; // r3
  int v7; // r0
  int v8; // r1
  int v9; // r2
  float v10; // s18
  int *v11; // r1
  float v12; // s0
  float v13; // s16
  float v14; // s0
  float v15; // s10
  float v16; // s6
  __n128 result; // q0

  v2 = FIELD_U32(a1, 776);
  if ( v2 )
  {
    if ( v2 != 1 || !FIELD_U32(a1, 752) )
      goto LABEL_14;
  }
  else
  {
    v3 = *(_DWORD **)(a1 + 752);
    FIELD_U32(a1, 784) = *v3;
    FIELD_U32(a1, 788) = v3[1];
    FIELD_U32(a1, 792) = v3[2];
    FIELD_U32(a1, 776) = 1;
    v4 = FIELD_U32(a1, 664);
    FIELD_U32(a1, 964) = v4;
    v5 = FIELD_U32(a1, 668);
    FIELD_U32(a1, 968) = v5;
    v6 = FIELD_U32(a1, 672);
    FIELD_U32(a1, 972) = v6;
    FIELD_U32(a1, 976) = v4;
    FIELD_U32(a1, 980) = v5;
    FIELD_U32(a1, 984) = v6;
    if ( !v3 )
      goto LABEL_14;
  }
  if ( sub_608332CC(a1 + 964, a1 + 784, FIELD_F32(a1, 640), FIELD_F32(a1, 644), FIELD_F32(a1, 648)) == 0.0 )
  {
    FIELD_U32(a1, 880) = 0;
    FIELD_U32(a1, 768) = 0;
    FIELD_U32(a1, 752) = 0;
    FIELD_U32(a1, 748) = 0;
    FIELD_U8(a1, 1369) = 0;
    FIELD_U32(a1, 776) = 0;
    FIELD_U32(a1, 644) = 1106247680;
    FIELD_U32(a1, 640) = 1053609165;
    FIELD_U32(a1, 648) = 1065353216;
    FIELD_U8(a1, 1371) = 0;
  }
  v7 = *(_DWORD *)(sub_601918EC(dword_60C8996C) + 516);
  FIELD_U32(a1, 664) = FIELD_U32(a1, 964);
  FIELD_U32(a1, 668) = FIELD_U32(a1, 968);
  FIELD_U32(a1, 672) = FIELD_U32(a1, 972);
  v8 = dword_60C88BC8;
  v9 = FIELD_U32(dword_60C88BC8, 196);
  if ( (v7 & v9 & 4) != 0 )
  {
    FIELD_U32(a1, 664) = FIELD_U32(a1, 976);
    v9 = FIELD_U32(v8, 196);
  }
  if ( (v7 & v9 & 8) != 0 )
  {
    FIELD_U32(a1, 668) = FIELD_U32(a1, 980);
    v9 = FIELD_U32(v8, 196);
  }
  if ( ((unsigned __int8)v7 & (unsigned __int8)v9 & 0x10) != 0 )
    FIELD_U32(a1, 672) = FIELD_U32(a1, 984);
LABEL_14:
  v10 = FIELD_F32(a1, 848);
  if ( FIELD_U8(a1, 1374) )
    v10 = v10 + FIELD_F32(a1, 864);
  v11 = dword_6016D928;
  if ( FIELD_U32(a1, 1360) == 8 )
    v11 = &dword_6016D928[1];
  v12 = FIELD_F32(a1, 696) + *(float *)v11;
  FIELD_F32(a1, 692) = v12;
  v13 = cosf(v12);
  v14 = sinf(FIELD_F32(a1, 692));
  v15 = FIELD_F32(a1, 672);
  result.n128_u32[1] = FIELD_U32(a1, 1048);
  result.n128_f32[0] = (float)(v10 + 2540.0) * v14;
  result.n128_f32[2] = (float)(v10 + 2540.0) * v13;
  v16 = result.n128_f32[0] + (float)(FIELD_F32(a1, 668) + FIELD_F32(a1, 1044));
  FIELD_F32(a1, 652) = (float)(FIELD_F32(a1, 664) + FIELD_F32(a1, 1040)) + 0.0;
  FIELD_F32(a1, 656) = v16;
  FIELD_F32(a1, 660) = result.n128_f32[2] + (float)(v15 + result.n128_f32[1]);
  result.n128_f32[0] = result.n128_f32[0] + FIELD_F32(a1, 832);
  result.n128_f32[2] = result.n128_f32[2] + FIELD_F32(a1, 836);
  FIELD_F32(a1, 816) = FIELD_F32(a1, 828) + 0.0;
  FIELD_U32(a1, 820) = result.n128_u32[0];
  FIELD_U32(a1, 824) = result.n128_u32[2];
  return result;
}
