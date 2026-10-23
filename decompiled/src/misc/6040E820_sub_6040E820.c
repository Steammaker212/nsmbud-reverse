/* sub_6040E820
 * address: 0x6040E820   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6040E820(int result)
{
  if ( FIELD_U8(result, 28) == FIELD_U8(result, 16) )
    FIELD_U8(result, 28) = 0;
  if ( FIELD_U8(result, 29) == FIELD_U8(result, 17) )
    FIELD_U8(result, 29) = 38;
  if ( FIELD_U8(result, 30) == FIELD_U8(result, 18) )
    FIELD_U8(result, 30) = 0;
  if ( FIELD_U8(result, 31) == FIELD_U8(result, 19) )
    FIELD_U8(result, 31) = -1;
  FIELD_U32(result, 32) = 1;
  return result;
}
