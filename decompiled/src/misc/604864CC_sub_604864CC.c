/* sub_604864CC
 * address: 0x604864CC   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604864CC(int a1)
{
  int result; // r0

  result = FIELD_U8(a1, 492);
  if ( !result )
  {
    if ( FIELD_U8(a1, 596) )
    {
      StateMgr__execute((StateMgr *)(a1 + 532));
      sub_60473B58(*(_DWORD **)(a1 + 4), 0xEu, 0);
    }
    return sub_604DE9B0(a1, 1, 0);
  }
  return result;
}
