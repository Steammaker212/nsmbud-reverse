/* sub_606463EC
 * address: 0x606463EC   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ColliderListNode *__fastcall sub_606463EC(int a1)
{
  FIELD_U8(a1, 7108) = 1;
  FIELD_U32(a1, 7068) = 0;
  FIELD_U32(a1, 7080) = 0;
  FIELD_U32(a1, 80) = FIELD_U32(a1, 7112);
  return ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6360));
}
