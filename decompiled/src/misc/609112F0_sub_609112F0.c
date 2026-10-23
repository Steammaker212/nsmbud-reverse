/* sub_609112F0
 * address: 0x609112F0   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_609112F0(unsigned int a1)
{
  return a1 == 400 * (a1 / 0x190) || a1 != 100 * (a1 / 0x64) && (a1 & 3) == 0;
}
