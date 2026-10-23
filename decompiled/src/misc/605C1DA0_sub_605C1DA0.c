/* sub_605C1DA0
 * address: 0x605C1DA0   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605C1DA0(int a1)
{
  float v2; // s0
  int result; // r0
  float v4; // s2
  int v5; // lr
  float v6; // s2
  float v7; // s0
  float v8; // s0
  int v9; // r3
  __int64 v10; // d17
  __int64 v11; // d17
  __int64 v12; // d17

  v2 = FIELD_F32(a1, 12);
  result = dword_60CC6484;
  if ( v2 >= (float)((float)(FIELD_F32(dword_60CC6484, 124) - FIELD_F32(dword_60CC6484, 108)) + -16.0) )
  {
    v4 = FIELD_F32(a1, 16);
    v5 = FIELD_U32(a1, 8);
    FIELD_U32(a1, 32) = v5;
    FIELD_F32(a1, 36) = v2;
    v6 = v4 + 4.0;
    FIELD_F32(a1, 40) = v6;
    FIELD_U32(a1, 44) = 1065353216;
    FIELD_U32(a1, 48) = 0;
    FIELD_U32(a1, 52) = 0;
    FIELD_U32(a1, 60) = 0;
    FIELD_U32(a1, 64) = 1065353216;
    FIELD_U32(a1, 68) = 0;
    FIELD_U32(a1, 76) = 0;
    FIELD_U32(a1, 80) = 0;
    FIELD_U32(a1, 84) = 1065353216;
    FIELD_U32(a1, 56) = v5;
    FIELD_F32(a1, 72) = v2;
    FIELD_F32(a1, 88) = v6;
    if ( FIELD_F32(a1, 104) != 0.0 )
    {
      v7 = FIELD_F32(a1, 108);
      FIELD_F32(a1, 44) = v7;
      v8 = v7 * 0.0;
      FIELD_F32(a1, 60) = v8;
      FIELD_F32(a1, 76) = v8;
    }
    v9 = FIELD_U32(a1, 4);
    v10 = FIELD_U64(a1, 52);
    FIELD_U64(v9, 4) = FIELD_U64(a1, 44);
    FIELD_U64(v9, 12) = v10;
    v11 = FIELD_U64(a1, 68);
    FIELD_U64(v9, 20) = FIELD_U64(a1, 60);
    FIELD_U64(v9, 28) = v11;
    v12 = FIELD_U64(a1, 84);
    FIELD_U64(v9, 36) = FIELD_U64(a1, 76);
    FIELD_U64(v9, 44) = v12;
    FIELD_U32(a1, 128) += FIELD_U32(a1, 136);
    FIELD_U32(a1, 132) += FIELD_U32(a1, 140);
    sub_605C1EE0(a1);
    if ( FIELD_U8(a1, 160) > 1u )
      ((void (__fastcall *)(int))loc_605C2534)(a1);
    else
      sub_605C2198(a1);
    JUMPOUT(0x605C292C);
  }
  return result;
}
