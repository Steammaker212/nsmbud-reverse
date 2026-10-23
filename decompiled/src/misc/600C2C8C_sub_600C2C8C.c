/* sub_600C2C8C
 * address: 0x600C2C8C   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600C2C8C(int a1)
{
  FIELD_U32(a1, 7108) &= ~1u;
  return sub_60400BE4(AreaRumbleMgr_instance);
}
