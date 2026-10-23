/* sub_60336578
 * address: 0x60336578   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60336578(int result)
{
  int v1; // r2

  v1 = FIELD_U32(result, 6308);
  FIELD_U32(result, 6308) = v1 - 1;
  if ( v1 <= 1 )
  {
    FIELD_U32(result, 6308) = 1;
    FIELD_U8(result, 6312) = FIELD_U8(result, 6312) == 0;
  }
  FIELD_U32(result, 6304) = 100;
  FIELD_U32(result, 120) = 0;
  FIELD_U32(result, 124) = 0;
  return result;
}
