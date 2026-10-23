/* sub_603752A4
 * address: 0x603752A4   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603752A4(int a1)
{
  if ( FIELD_U32(a1, 36) == a1 + 32 )
    return 0;
  StateMgr__execute((StateMgr *)(a1 + 6084));
  return 1;
}
