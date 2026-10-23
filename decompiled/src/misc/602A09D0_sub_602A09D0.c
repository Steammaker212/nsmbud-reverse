/* sub_602A09D0
 * address: 0x602A09D0   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602A09D0(int a1)
{
  ((void (*)(void))loc_60618BFC)();
  if ( FIELD_U8(a1, 6112) )
    StateMgr__execute((StateMgr *)(a1 + 6084));
  return 1;
}
