/* sub_60775620
 * address: 0x60775620   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60775620(int result)
{
  FIELD_U32(result, 1220) &= ~0x10000u;
  FIELD_U32(result, 9952) = 0;
  return result;
}
