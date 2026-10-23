/* sub_604097B4
 * address: 0x604097B4   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604097B4(int result)
{
  if ( FIELD_U8(result, 6559) == 1 )
    FIELD_U8(result, 6541) = 1;
  return result;
}
