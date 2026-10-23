/* sub_600073F4
 * address: 0x600073F4   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_600073F4(int a1, int a2)
{
  return (FIELD_U32(a2, 8) & 0x3FFFFF) == FIELD_U32(a1, 4);
}
