/* sub_604096A8
 * address: 0x604096A8   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604096A8(int result)
{
  if ( FIELD_U8(result, 6559) == 1 )
    FIELD_U8(result, 6544) = 1;
  return result;
}
