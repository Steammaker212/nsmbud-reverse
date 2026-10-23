/* sub_6075B220
 * address: 0x6075B220   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6075B220(int a1)
{
  float result; // s0

  result = 0.0;
  if ( FIELD_U32(a1, 164) == 1 && (FIELD_U8(a1, 196) & 1) != 0 )
    return flt_60B0A81C[FIELD_U32(a1, 300)];
  return result;
}
