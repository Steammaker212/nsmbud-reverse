/* sub_6061CD78
 * address: 0x6061CD78   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6061CD78(int result)
{
  if ( !FIELD_U8(result, 6868) )
    FIELD_U8(result, 19) = 1;
  return result;
}
