/* sub_607C7258
 * address: 0x607C7258   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_607C7258(int a1)
{
  return ((FIELD_U8(a1, 6900) & 1) == 0 || (FIELD_U8(a1, 6904) & 0x18) != 0) && !FIELD_U32(a1, 13052);
}
