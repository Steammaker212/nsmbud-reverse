/* sub_6026E2C4
 * address: 0x6026E2C4   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6026E2C4(int a1)
{
  ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6112));
  ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6768));
  ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 7424));
  ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 8080));
  ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 8736));
  return 1;
}
