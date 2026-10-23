/* sub_6026DEB0
 * address: 0x6026DEB0   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6026DEB0(StageActor *a1)
{
  StateMgr__execute((StateMgr *)&a1[9].aCollider.field_64);
  sub_6026DFA4(a1);
  a1[9].field_230 = a1[14].aCollider.field_118;
  (*(void (__fastcall **)(float *))(LODWORD(a1[9].aCollider.info.distToEdge.y) + 28))(&a1[9].aCollider.info.distToEdge.y);
  LODWORD(a1[10].effectOffset.x) = a1[14].aCollider.field_11C;
  (*(void (__fastcall **)(int *))(a1[10].aCollider.info.category + 28))(&a1[10].aCollider.info.category);
  LODWORD(a1[11].field_248.x) = a1[14].aCollider.field_120;
  (*(void (__fastcall **)(int *))(a1[11].aCollider.info.field_24 + 28))(&a1[11].aCollider.info.field_24);
  LODWORD(a1[12].field_254.x) = a1[14].aCollider.field_124;
  (*(void (__fastcall **)(float *))(LODWORD(a1[12].aCollider.trapezoidOffsetTopRight) + 28))(&a1[12].aCollider.trapezoidOffsetTopRight);
  LODWORD(a1[13].field_260.x) = a1[14].aCollider.field_128;
  (*(void (__fastcall **)(int *))(a1[13].aCollider.field_B0 + 28))(&a1[13].aCollider.field_B0);
  (*(void (__fastcall **)(StageActor *))(FIELD_U32(a1, 0x0) + 204))(a1);
  StageActor__cullCheck(a1, 0);
  return 1;
}
