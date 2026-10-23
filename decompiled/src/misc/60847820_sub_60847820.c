/* sub_60847820
 * address: 0x60847820   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60847820(int result, int a2)
{
  FIELD_U32(result, 8) = (a2 + FIELD_U32(result, 8) - 1) & -a2;
  return result;
}
