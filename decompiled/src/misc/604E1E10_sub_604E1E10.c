/* sub_604E1E10
 * address: 0x604E1E10   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604E1E10(int a1)
{
  int result; // r0

  result = FIELD_U8(a1, 5746);
  if ( result )
  {
    StateMgr__execute((StateMgr *)(a1 + 24));
    sub_604E1E4C(a1);
    return sub_60473B58((_DWORD *)(a1 + 40), 0xEu, 0);
  }
  return result;
}
