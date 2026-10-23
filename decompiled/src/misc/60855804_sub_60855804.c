/* sub_60855804
 * address: 0x60855804   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60855804(int a1, int a2, int a3, int a4, int a5)
{
  return FIELD_U32(a1, 540) + 8 * (4 * a3 + 12 * a2 + a4 + 2 * a5);
}
