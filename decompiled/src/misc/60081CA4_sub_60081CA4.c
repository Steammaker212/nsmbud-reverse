/* sub_60081CA4
 * address: 0x60081CA4   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60081CA4(int a1)
{
  return PlayerLookTargetMgr_remove(PlayerLookTargetList_instance, a1 + 6644);
}
