/* sub_60233444
 * address: 0x60233444   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60233444(int a1)
{
  int result; // r0

  result = FIELD_U32(a1, 436);
  if ( result )
  {
    if ( FIELD_S32(result, 124) >= 1 )
      return sub_602343CC();
  }
  return result;
}
