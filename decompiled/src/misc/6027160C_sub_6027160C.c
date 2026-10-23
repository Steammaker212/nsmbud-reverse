/* sub_6027160C
 * address: 0x6027160C   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6027160C(int a1)
{
  ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6112));
  ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6768));
  return 1;
}
