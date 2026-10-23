/* sub_60558700
 * address: 0x60558700   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60558700(int a1)
{
  int result; // r0

  result = FIELD_U8(a1, 3684);
  if ( result )
  {
    StateMgr__execute((StateMgr *)(a1 + 24));
    return sub_60558728(a1);
  }
  return result;
}
