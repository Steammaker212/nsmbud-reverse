/* sub_60679DCC
 * address: 0x60679DCC   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60679DCC(int a1)
{
  int result; // r0

  StateMgr__execute((StateMgr *)(a1 + 6780));
  FIELD_U32(a1, 108) = FIELD_U32(a1, 6860);
  result = FIELD_U32(a1, 6864);
  FIELD_U32(a1, 112) = result;
  return result;
}
