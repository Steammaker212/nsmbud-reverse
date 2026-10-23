/* BillBlaster_onDelete
 * address: 0x60326298   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall BillBlaster_onDelete(StageActor *a1)
{
  ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)&a1[9].aCollider.field_C0);
  return 1;
}
