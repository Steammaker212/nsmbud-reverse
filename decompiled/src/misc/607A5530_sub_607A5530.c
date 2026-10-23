/* sub_607A5530
 * address: 0x607A5530   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_607A5530(int a1)
{
  return (FIELD_U8(a1, 1220) & 4) != 0 && (FIELD_U8(a1, 1226) & 0x10) != 0;
}
