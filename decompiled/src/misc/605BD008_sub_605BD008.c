/* sub_605BD008
 * address: 0x605BD008   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ColliderListNode *__fastcall sub_605BD008(ColliderBase *a1)
{
  return ColliderMgr_removeRelated1(ColliderMgr_instance, a1 + 18);
}
