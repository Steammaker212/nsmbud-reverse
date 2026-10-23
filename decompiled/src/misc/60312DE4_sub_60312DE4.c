/* sub_60312DE4
 * address: 0x60312DE4   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60312DE4(int result)
{
  __int16 v1; // r1

  v1 = 192;
  if ( !FIELD_U8(result, 7661) )
  {
    v1 = 128;
    if ( FIELD_U8(result, 7668) )
      v1 = 80;
  }
  FIELD_U16(result, 7640) = v1;
  return result;
}
