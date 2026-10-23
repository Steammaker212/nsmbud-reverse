/* sub_606A24C8
 * address: 0x606A24C8   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606A24C8(StageActor *a1)
{
  StateMgr__execute((StateMgr *)&a1[9].aCollider.field_64);
  (*(void (__fastcall **)(StageActor *))(FIELD_U32(a1, 0x0) + 196))(a1);
  ((void (__fastcall *)(StageActor *))loc_606A22C0)(a1);
  ShapedCollider_execute((ColliderBase *)&a1[11].position.z);
  StageActor__cullCheck(a1, 0);
  return 1;
}
