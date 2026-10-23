/* sub_60198DC0
 * address: 0x60198DC0   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60198DC0(int a1, int a2)
{
  return (unsigned int)(a2 - 156) <= 9 && ((1 << (a2 + 100)) & 0x20F) != 0 || a2 == 48 || a2 == 168;
}
