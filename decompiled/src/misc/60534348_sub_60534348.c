/* sub_60534348
 * address: 0x60534348   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60534348(int result)
{
  if ( !FIELD_U32(result, 83580) )
  {
    FIELD_U8(result, 83624) = 0;
    FIELD_U8(result, 83631) = 1;
  }
  return result;
}
