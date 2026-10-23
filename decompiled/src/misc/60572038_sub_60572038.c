/* sub_60572038
 * address: 0x60572038   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60572038(Actor *a1)
{
  return FIELD_U8(dword_60CC6D8C, 17) && Actor__getProfileId(a1) == 292 && a1[91].settings1 && a1[91].settigns2 != 0;
}
