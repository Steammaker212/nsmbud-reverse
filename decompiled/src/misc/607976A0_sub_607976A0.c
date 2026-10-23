/* sub_607976A0
 * address: 0x607976A0   size: 16   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607976A0(int result)
{
  FIELD_U32(result, 1228) &= ~0x1000u;
  return result;
}
