/* sub_60514718
 * address: 0x60514718   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60514718(int result)
{
  int v1; // r1

  FIELD_U8(result, 4650) = 1;
  v1 = FIELD_U32(result, 12912);
  FIELD_U32(result, 4624) = v1;
  FIELD_U32(result, 4628) = v1;
  FIELD_U8(result, 4639) = 0;
  FIELD_U8(result, 4636) = 1;
  return result;
}
