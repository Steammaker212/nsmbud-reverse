/* sub_602A55C8
 * address: 0x602A55C8   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602A55C8(int a1)
{
  StateMgr__execute((StateMgr *)(a1 + 6084));
  sub_602A546C((int **)a1);
  FIELD_U32(a1, 6144) = FIELD_U32(a1, 6168);
  FIELD_U32(a1, 6148) = FIELD_U32(a1, 6172);
  return 1;
}
