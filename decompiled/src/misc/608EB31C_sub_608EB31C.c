/* sub_608EB31C
 * address: 0x608EB31C   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608EB31C(int result)
{
  if ( FIELD_U32(result, 40) == 2 )
    return sub_608F1B08(FIELD_U32(result, 216));
  return result;
}
