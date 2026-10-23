/* sub_607B8BC0
 * address: 0x607B8BC0   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607B8BC0(int result)
{
  if ( (FIELD_U8(result, 1219) & 2) != 0 )
  {
    FIELD_U32(result, 108) = FIELD_U32(result, 13016);
    FIELD_U32(result, 112) = FIELD_U32(result, 13032);
    FIELD_U32(result, 116) = FIELD_U32(result, 13048);
  }
  return result;
}
