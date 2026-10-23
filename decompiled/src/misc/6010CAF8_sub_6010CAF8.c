/* sub_6010CAF8
 * address: 0x6010CAF8   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6010CAF8(int a1)
{
  sub_60421AE4(FIELD_U32(a1, 7096), FIELD_U32(a1, 7120) + 32, 1);
  FIELD_U16(a1, 6276) = 60;
  return 6276;
}
