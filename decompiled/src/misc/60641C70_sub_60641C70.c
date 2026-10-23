/* sub_60641C70
 * address: 0x60641C70   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60641C70(int a1)
{
  ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6360));
  return 1;
}
