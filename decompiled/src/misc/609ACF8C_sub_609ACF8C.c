/* sub_609ACF8C
 * address: 0x609ACF8C   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_609ACF8C()
{
  int result; // r0

  result = sub_609ACFA8();
  FIELD_U32(result, 572) = 4;
  FIELD_U8(result, 576) = 0;
  return result;
}
