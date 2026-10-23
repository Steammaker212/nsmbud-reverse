/* sub_60454C64
 * address: 0x60454C64   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60454C64(int result)
{
  if ( FIELD_U32(result, 1316) == 2 )
    FIELD_U32(result, 1316) = 0;
  return result;
}
