/* sub_60802808
 * address: 0x60802808   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60802808(int a1, int a2)
{
  return FIELD_U8(a2, 30) == 0 && FIELD_U32(a1, 36) > 1;
}
