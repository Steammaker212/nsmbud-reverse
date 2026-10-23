/* sub_60775CD8
 * address: 0x60775CD8   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_60775CD8()
{
  int result; // r0

  result = PlayerMgr_instance;
  FIELD_U32(PlayerMgr_instance, 144) = -1;
  return result;
}
