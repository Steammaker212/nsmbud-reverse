/* sub_60952160
 * address: 0x60952160   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60952160(int result)
{
  FIELD_U8(result, 26) = 0;
  if ( !FIELD_U8(result, 24) && !FIELD_U8(result, 25) )
  {
    if ( FIELD_U32(result, 1708) )
      FIELD_U32(result, 1708) = 0;
  }
  return result;
}
