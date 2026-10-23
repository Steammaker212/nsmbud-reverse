/* sub_601A5930
 * address: 0x601A5930   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601A5930(int a1)
{
  FIELD_U8(a1, 309) = (FIELD_U8(a1, 216) & 8) != 0;
  StateMgr__execute((StateMgr *)(a1 + 284));
  return 1;
}
