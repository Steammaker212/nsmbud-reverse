/* sub_608AF034
 * address: 0x608AF034   size: 12   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608AF034(int result, char a2, int a3)
{
  FIELD_U8(result, 196) = a2;
  FIELD_U32(result, 72) = a3;
  return result;
}
