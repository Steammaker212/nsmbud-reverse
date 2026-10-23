/* sub_6063E3C4
 * address: 0x6063E3C4   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6063E3C4(int result)
{
  FIELD_U32(result, 6164) = 10 * (unsigned __int8)(FIELD_U32(result, 24) >> 20);
  FIELD_U8(result, 6160) = 0;
  return result;
}
