/* sub_60920064
 * address: 0x60920064   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60920064(int result, int a2, int a3)
{
  int v3; // r3

  LOBYTE(v3) = 1;
  if ( (unsigned int)FIELD_U16(result, 34) - 5 >= 2 )
  {
    v3 = FIELD_U8(result, 62);
    if ( v3 >= a2 )
      LOBYTE(v3) = a2;
    if ( a2 < 1 )
      LOBYTE(v3) = 1;
  }
  FIELD_U8(result, 33) = v3;
  if ( a3 )
    return sub_60972444(result + 24);
  return result;
}
