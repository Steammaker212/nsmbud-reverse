/* PowBlock_vf32
 * address: 0x605CC8C4   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall PowBlock_vf32(int result)
{
  if ( (FIELD_U8(result, 6124) & 1) != 0 && FIELD_F32(result, 124) <= 0.0 )
    FIELD_U32(result, 124) = 0x40000000;
  return result;
}
