/* sub_602C3C80
 * address: 0x602C3C80   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602C3C80(int result)
{
  float v1; // s2
  float v2; // s0
  int v3; // r4
  float v4; // s2
  int v5; // r2
  float v6; // s4
  int v7; // r1
  int v8; // r1
  int v9; // r1

  if ( (FIELD_U8(dword_60C99DD4, 1052) & 7) != 0 )
  {
    v1 = FIELD_F32(result, 120);
    v2 = FIELD_F32(result, 124);
  }
  else
  {
    v3 = FIELD_U8(result, 6330);
    v2 = FIELD_F32(result, 124) - flt_60C91568[v3];
    v4 = -flt_60AFE864[v3];
    FIELD_F32(result, 124) = v2;
    if ( v2 == v4 )
      FIELD_U8(result, 6330) = (v3 & 1) == 0;
    v5 = FIELD_U8(result, 6329);
    v1 = flt_60C91568[v5] + FIELD_F32(result, 120);
    v6 = flt_60AFE864[v5];
    FIELD_F32(result, 120) = v1;
    if ( v1 == v6 )
      FIELD_U8(result, 6329) = (v5 & 1) == 0;
  }
  FIELD_F32(result, 108) = FIELD_F32(result, 108) + v1;
  FIELD_F32(result, 112) = FIELD_F32(result, 112) + v2;
  FIELD_F32(result, 116) = FIELD_F32(result, 116) + FIELD_F32(result, 128);
  v7 = FIELD_U32(result, 160);
  if ( v7 < 0 )
  {
    v9 = dword_60C91564 + v7;
    FIELD_U32(result, 160) = v9;
    v8 = v9 & (v9 >> 31);
  }
  else
  {
    if ( !v7 )
      goto LABEL_12;
    v8 = dword_60C91564 + v7;
  }
  FIELD_U32(result, 160) = v8;
LABEL_12:
  if ( --FIELD_U8(result, 6332) == 0 )
    FIELD_U8(result, 19) = 1;
  return result;
}
