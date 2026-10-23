/* sub_6046EE44
 * address: 0x6046EE44   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6046EE44(int result)
{
  if ( FIELD_F32(result, 6984) == 0.0 )
    FIELD_U8(result, 19) = 1;
  return result;
}
