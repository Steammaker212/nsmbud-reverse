/* sub_6052E8BC
 * address: 0x6052E8BC   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6052E8BC(int result)
{
  if ( (FIELD_U32(result, 11392) | 2) == 2 )
  {
    FIELD_U32(result, 3796) = FIELD_U32(result, 3796) & 0xFFFFFFEB | 4;
    FIELD_U8(result, 10981) = 1;
  }
  return result;
}
