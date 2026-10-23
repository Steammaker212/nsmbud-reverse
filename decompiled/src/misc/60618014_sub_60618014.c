/* sub_60618014
 * address: 0x60618014   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ColliderListNode *__fastcall sub_60618014(int a1)
{
  FIELD_U16(a1, 7096) = 257;
  return ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6112));
}
