/* sub_6081F108
 * address: 0x6081F108   size: 12   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6081F108(int result, char a2, int a3)
{
  FIELD_U8(result, 513) = a2;
  FIELD_U32(result, 516) = a3;
  return result;
}
