/* sub_601DFE2C
 * address: 0x601DFE2C   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601DFE2C(int a1)
{
  int v2; // r0
  int v3; // r1
  int v4; // r1
  int v5; // r5
  int v6; // r0
  float v7; // s0
  float v8; // s16

  v2 = FIELD_U32(a1, 48);
  if ( v2 <= 0 && !FIELD_U8(a1, 66) )
    return 1;
  v3 = FIELD_U32(a1, 52);
  if ( v3 < 1 )
    return 0;
  v4 = v3 - 1;
  FIELD_U32(a1, 52) = v4;
  if ( !v4 )
  {
    if ( !FIELD_U8(a1, 66) )
      FIELD_U32(a1, 48) = v2 - 1;
    FIELD_U32(a1, 52) = FIELD_U32(a1, 56);
  }
  v5 = 0;
  FIELD_U32(a1, 32) = FIELD_U32(a1, 28);
  v6 = FIELD_S16(a1, 64) + FIELD_U32(a1, 20);
  if ( v6 >= 0x10000 )
    v6 = 0;
  FIELD_U32(a1, 20) = v6;
  v7 = FIELD_F32(a1, 40) + FIELD_F32(a1, 44);
  FIELD_F32(a1, 44) = v7;
  FIELD_U8(a1, 67) = 0;
  if ( v7 >= 360.0 )
  {
    FIELD_U8(a1, 67) = 1;
    v7 = v7 + -360.0;
    FIELD_F32(a1, 44) = v7;
  }
  v8 = FIELD_F32(a1, 24);
  FIELD_F32(a1, 28) = FIELD_F32(a1, 60) + (float)(v8 * sinf(v7 / 57.296));
  return v5;
}
