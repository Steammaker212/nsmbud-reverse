/* sub_60650FCC
 * address: 0x60650FCC   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ColliderListNode *__fastcall sub_60650FCC(int a1)
{
  return ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6360));
}
