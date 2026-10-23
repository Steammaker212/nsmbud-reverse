/* sub_60560E3C
 * address: 0x60560E3C   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60560E3C(int a1)
{
  int result; // r0

  result = FIELD_U8(a1, 52);
  if ( result )
  {
    StateMgr__execute((StateMgr *)(a1 + 24));
    sub_60560E80(a1 + 60);
    result = FIELD_U32(a1, 40);
    if ( result == 4 )
      return sub_60560E80(a1 + 32016);
  }
  return result;
}
