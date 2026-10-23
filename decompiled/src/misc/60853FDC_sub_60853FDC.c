/* sub_60853FDC
 * address: 0x60853FDC   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60853FDC(int result, int a2)
{
  FIELD_U8(result, 212) = 1;
  FIELD_U32(result, 216) = 0;
  FIELD_U8(result, 220) = 0;
  FIELD_U32(result, 188) = a2;
  return result;
}
