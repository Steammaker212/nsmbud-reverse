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
  FIELD_F32(result, 0x78) = 0.0;
  FIELD_F32(result, 0x7C) = 3.45;
  FIELD_F32(result, 0x80) = 0.0;
  FIELD_F32(result, 0x64) = -0.1875;
  result[1]._._._._.field_20.previous = (sead_ListNode *)LODWORD(FIELD_F32(result, 0x6C));
  result[1]._._._._.field_20.next = (sead_ListNode *)LODWORD(FIELD_F32(result, 0x70));
  result[1]._._._._.childCount = LODWORD(FIELD_F32(result, 0x74));
  result[1]._._._._.field_3C = 0;
}
