/* sub_6064750C
 * address: 0x6064750C   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ColliderListNode *__fastcall sub_6064750C(int a1)
{
  FIELD_U8(a1, 7092) = 1;
  FIELD_U32(a1, 108) = FIELD_U32(a1, 7028);
  FIELD_U32(a1, 112) = FIELD_U32(a1, 7032);
  FIELD_U32(a1, 116) = FIELD_U32(a1, 7036);
  FIELD_U8(a1, 7100) = FIELD_U32(a1, 7096);
  return ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6360));
}
