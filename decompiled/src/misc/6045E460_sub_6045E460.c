/* sub_6045E460
 * address: 0x6045E460   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6045E460(int a1)
{
  float result; // s0

  if ( FIELD_U8(a1, 6257) )
  {
    FIELD_F32(a1, 120) = flt_60AF1EA0[FIELD_U32(a1, 548)];
    FIELD_U8(a1, 6257) = 0;
  }
  FIELD_U32(a1, 124) = 1075838976;
  if ( FIELD_U8(a1, 6054) )
  {
    FIELD_F32(a1, 124) = 2.5 * 0.5;
    return 2.5 * 0.5;
  }
  return result;
}
