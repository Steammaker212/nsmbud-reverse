/* sub_604BBB5C
 * address: 0x604BBB5C   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604BBB5C(int a1)
{
  int result; // r0

  result = FIELD_U8(a1, 3640);
  if ( !result )
  {
    StateMgr__execute((StateMgr *)(a1 + 68));
    result = FIELD_U8(a1, 3633);
    if ( FIELD_U8(a1, 3633) )
    {
      FIELD_U8(a1, 3633) = 0;
      return sub_60473B58((_DWORD *)(a1 + 84), 0xEu, 0);
    }
  }
  return result;
}
