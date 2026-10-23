/* Kanibo__beginState_Jump
 * address: 0x6030E970   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall Kanibo__beginState_Jump(Enemy *result)
{
  FIELD_U32(result, 0x0)._._.speed.x = 0.0;
  FIELD_U32(result, 0x0)._._.speed.y = 3.45;
  FIELD_U32(result, 0x0)._._.speed.z = 0.0;
  FIELD_U32(result, 0x0)._._.field_64 = -0.1875;
  result[1]._._._._.field_20.previous = (sead_ListNode *)LODWORD(FIELD_U32(result, 0x0)._._.position.x);
  result[1]._._._._.field_20.next = (sead_ListNode *)LODWORD(FIELD_U32(result, 0x0)._._.position.y);
  result[1]._._._._.childCount = LODWORD(FIELD_U32(result, 0x0)._._.position.z);
  result[1]._._._._.field_3C = 0;
}
