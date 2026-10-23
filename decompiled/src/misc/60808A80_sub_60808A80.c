/* sub_60808A80
 * address: 0x60808A80   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60808A80(int a1)
{
  int result; // r0
  int v2; // r2

  result = FIELD_U8(a1, 140);
  v2 = (unsigned __int8)byte_60CC6AFC;
  byte_60CC6AFC = result;
  if ( result == v2 )
    return 0;
  return result;
}
