/* sub_602FFA84
 * address: 0x602FFA84   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_602FFA84(Actor *a1)
{
  return Actor__getProfileId(a1) == 497 || Actor__getProfileId(a1) == 498;
}
