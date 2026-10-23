/* sub_60602A80
 * address: 0x60602A80   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60602A80(int a1)
{
  ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6160));
  return 1;
}
