/* sub_60407384
 * address: 0x60407384   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60407384(int a1)
{
  int result; // r0
  int v3; // r2

  result = 0;
  while ( 1 )
  {
    v3 = a1 + 16 * result;
    if ( (FIELD_U8(v3, 20) & 4) != 0 )
      break;
    if ( (FIELD_U8(v3, 36) & 4) != 0 )
      return ++result;
    result += 2;
    if ( result >= 32 )
      return -1;
  }
  return result;
}
