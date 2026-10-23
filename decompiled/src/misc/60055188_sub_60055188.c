/* sub_60055188
 * address: 0x60055188   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60055188(int a1)
{
  int v2; // r0

  StateMgr__execute((StateMgr *)(a1 + 6084));
  sub_60054F68((int **)a1);
  v2 = FIELD_U32(a1, 6308);
  FIELD_U32(a1, 6444) = FIELD_U32(a1, 6304);
  FIELD_U32(a1, 6448) = v2;
  return 1;
}
