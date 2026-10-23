/* sub_60803A08
 * address: 0x60803A08   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60803A08(int result)
{
  if ( FIELD_U32(result, 48) == 24 )
  {
    if ( FIELD_U32(result, 40) > 1u )
    {
      FIELD_U8(result, 31) = 1;
    }
    else
    {
      FIELD_U8(result, 30) = 0;
      FIELD_U8(result, 32) = 1;
      FIELD_U32(result, 44) = 0;
      FIELD_U32(result, 48) = 0;
    }
  }
  return result;
}
