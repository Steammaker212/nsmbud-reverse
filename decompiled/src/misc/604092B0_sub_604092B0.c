/* sub_604092B0
 * address: 0x604092B0   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_604092B0(int a1, int a2)
{
  int v2; // r2

  v2 = 0;
  if ( (unsigned __int8)(FIELD_U8(a1, 6559) - 1) <= 2u )
  {
    if ( !a2 )
      return 1;
    return FIELD_U8(a1, 6562) == a2;
  }
  return v2;
}
