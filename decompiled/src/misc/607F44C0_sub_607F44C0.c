/* sub_607F44C0
 * address: 0x607F44C0   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607F44C0(int a1)
{
  if ( FIELD_U8(a1, 48) )
  {
    FIELD_U8(a1, 48) = 0;
    return FIELD_U32(a1, 52);
  }
  else
  {
    StateMgr__execute((StateMgr *)(a1 + 24));
    return 0;
  }
}
