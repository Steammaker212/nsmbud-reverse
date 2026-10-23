/* sub_6065306C
 * address: 0x6065306C   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6065306C(StageActor *a1)
{
  StateMgr__execute((StateMgr *)&a1[9].aCollider.field_64);
  (*(void (__fastcall **)(StageActor *))(FIELD_U32(a1, 0x0) + 200))(a1);
  (*(void (__fastcall **)(StageActor *))(FIELD_U32(a1, 0x0) + 208))(a1);
  StageActor__cullCheck(a1, 0);
  (*(void (__fastcall **)(StageActor *))(FIELD_U32(a1, 0x0) + 212))(a1);
  return 1;
}
