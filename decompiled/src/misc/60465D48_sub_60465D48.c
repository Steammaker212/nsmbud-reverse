/* sub_60465D48
 * address: 0x60465D48   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_60465D48()
{
  int v0; // r0

  v0 = sub_6078A030(PlayerMgr_instance);
  if ( v0 <= 1 )
    v0 = 1;
  return v0 - 1;
}
