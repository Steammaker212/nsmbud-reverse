/* sub_602C9CA0
 * address: 0x602C9CA0   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ColliderListNode *__fastcall sub_602C9CA0(int a1)
{
  FIELD_U32(a1, 112) = FIELD_U32(a1, 6604);
  return ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6120));
}
