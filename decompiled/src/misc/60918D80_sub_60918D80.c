/* sub_60918D80
 * address: 0x60918D80   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60918D80(int result)
{
  FIELD_U32(result, 16) = 0;
  FIELD_U32(result, 12) = 0;
  FIELD_U32(result, 8) = 0;
  FIELD_U32(result, 4) = 0;
  FIELD_U8(result, 20) = (FIELD_U32(result, 572) != 0) | FIELD_U8(result, 20) & 0xFC;
  FIELD_U32(result, 24) = 0;
  return result;
}
