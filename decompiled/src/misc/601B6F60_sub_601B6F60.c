/* sub_601B6F60
 * address: 0x601B6F60   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601B6F60(int result)
{
  FIELD_U32(result, 1108) &= ~0x1000u;
  FIELD_U8(result, 664) = 0;
  FIELD_U8(result, 776) = 0;
  return result;
}
