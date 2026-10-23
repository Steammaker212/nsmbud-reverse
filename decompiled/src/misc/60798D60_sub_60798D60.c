/* sub_60798D60
 * address: 0x60798D60   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60798D60(int result)
{
  FIELD_U32(result, 1216) |= 0x80000000;
  FIELD_U32(result, 12208) = 120;
  return result;
}
