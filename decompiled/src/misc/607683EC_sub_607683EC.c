/* sub_607683EC
 * address: 0x607683EC   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_607683EC(int a1)
{
  unsigned int result; // r0
  float v3; // r1
  int v4; // r0
  int v5; // r2
  TileCheck_Result v6; // [sp+0h] [bp-38h] BYREF

  result = FIELD_U8(a1, 6902);
  if ( (result & 4) == 0 )
  {
    v6.field_C = 0;
    v6.field_10 = 0;
    result = sub_601559B8(a1 + 1328, (float *)(a1 + 108), &v6, 8.0);
    if ( result == 1 )
    {
      v3 = v6.field_8;
      v4 = FIELD_U32(a1, 108);
      FIELD_F32(a1, 112) = v6.field_8;
      v5 = FIELD_U32(a1, 116);
      FIELD_U32(a1, 584) = v4;
      FIELD_F32(a1, 588) = v3;
      FIELD_U32(a1, 592) = v5;
      FIELD_U32(a1, 608) = v4;
      FIELD_F32(a1, 612) = v3;
      FIELD_U32(a1, 616) = v5;
      result = sub_60762EC0(a1, &v6.field_18);
      if ( result == 1 )
      {
        result = FIELD_U32(a1, 6904) | 0x4000;
        FIELD_U32(a1, 6904) = result;
      }
    }
  }
  return result;
}
