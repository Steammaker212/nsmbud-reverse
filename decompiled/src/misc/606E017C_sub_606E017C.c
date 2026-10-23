/* sub_606E017C
 * address: 0x606E017C   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ColliderListNode *__fastcall sub_606E017C(int a1)
{
  return ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6176));
}
