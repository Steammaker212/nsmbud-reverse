/* sub_606CF464
 * address: 0x606CF464   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606CF464(int result)
{
  if ( (FIELD_U8(result, 21) & 1) == 0 )
    FIELD_U32(result, 6956) = FIELD_U32(result, 116);
  return result;
}
