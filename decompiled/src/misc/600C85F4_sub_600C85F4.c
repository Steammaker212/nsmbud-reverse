/* sub_600C85F4
 * address: 0x600C85F4   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_600C85F4()
{
  return (FIELD_U8(EventMgr__instance, 16) >> 6) & 1;
}
