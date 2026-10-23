/* sub_608D4040
 * address: 0x608D4040   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D4040(int result)
{
  if ( !FIELD_U8(result, 609) )
  {
    FIELD_U16(result, 608) = 256;
    return sub_608B2C20(result + 12, 0);
  }
  return result;
}
