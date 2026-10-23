/* sub_605A0D08
 * address: 0x605A0D08   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_605A0D08(int a1)
{
  float v1; // s0
  char v2; // r1
  char v3; // r2
  float result; // s0

  v1 = FIELD_F32(a1, 124);
  if ( v1 >= 1.5 )
  {
    v3 = 4;
LABEL_8:
    FIELD_U8(a1, 6358) = v3;
    goto LABEL_9;
  }
  if ( v1 >= 1.0 )
  {
    v3 = 3;
    goto LABEL_8;
  }
  v2 = 1;
  if ( v1 >= 0.8125 )
    v2 = 2;
  FIELD_U8(a1, 6358) = v2;
LABEL_9:
  result = v1 * 0.25;
  FIELD_F32(a1, 124) = result;
  FIELD_U32(a1, 6316) = 1035993088;
  return result;
}
