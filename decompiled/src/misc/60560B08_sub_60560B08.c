/* sub_60560B08
 * address: 0x60560B08   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60560B08(int result)
{
  int v1; // r1

  v1 = 0;
  FIELD_U8(result, 52) = 0;
  FIELD_U8(result, 54) = 0;
  FIELD_U32(result, 32008) = 0;
  if ( FIELD_U32(result, 40) != 8 )
  {
    if ( FIELD_U32(result, 68) < 9u )
      v1 = FIELD_U32(result, 68);
    result = sub_60473B4C(result + 3548 * v1 + 76);
    FIELD_U32(result, 24) = 0;
    FIELD_U32(result, 28) = 0;
    FIELD_U32(result, 32) = 0;
    FIELD_U8(result, 64) |= 0x10u;
  }
  return result;
}
