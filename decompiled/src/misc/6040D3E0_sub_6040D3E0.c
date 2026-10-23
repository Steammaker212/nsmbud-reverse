/* sub_6040D3E0
 * address: 0x6040D3E0   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6040D3E0(int result, char a2)
{
  if ( FIELD_U8(result, 31) == FIELD_U8(result, 19) )
    FIELD_U8(result, 31) = a2;
  return result;
}
