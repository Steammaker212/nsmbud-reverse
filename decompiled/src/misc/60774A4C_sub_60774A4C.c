/* sub_60774A4C
 * address: 0x60774A4C   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60774A4C(int a1)
{
  int v2; // r1
  int result; // r0
  bool v4; // zf
  float v5; // s2
  float v6; // s0
  int v7; // r0
  int v8; // r1
  int v9; // [sp+4h] [bp-Ch] BYREF

  v2 = FIELD_U32(a1, 6900);
  result = 0;
  v4 = (v2 & 2) == 0;
  if ( (v2 & 2) != 0 )
    v4 = (v2 & 0x60) == 0;
  if ( !v4 )
  {
    FIELD_U32(a1, 124) = 0;
    if ( sub_607868D4(a1 + 688, &v9) == 1 )
    {
      v5 = flt_60B0A898[v9];
      FIELD_F32(a1, 88) = v5 * 0.7;
      v6 = v5 + FIELD_F32(a1, 108);
      FIELD_F32(a1, 108) = v6;
      v7 = FIELD_U32(a1, 112);
      v8 = FIELD_U32(a1, 116);
      FIELD_F32(a1, 584) = v6;
      FIELD_U32(a1, 588) = v7;
      FIELD_U32(a1, 592) = v8;
      FIELD_F32(a1, 608) = v6;
      FIELD_U32(a1, 612) = v7;
      FIELD_U32(a1, 616) = v8;
    }
    return 1;
  }
  return result;
}
