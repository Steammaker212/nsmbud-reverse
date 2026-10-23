/* sub_604E8710
 * address: 0x604E8710   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604E8710(int a1, _DWORD *a2)
{
  int result; // r0

  result = FIELD_U8(a1, 20);
  if ( result )
  {
    sub_60473B88(*(_DWORD **)(a1 + 4), a2, 0);
    return sub_60481E84(a1 + 840, a2);
  }
  return result;
}
