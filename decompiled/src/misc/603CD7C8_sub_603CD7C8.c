/* sub_603CD7C8
 * address: 0x603CD7C8   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603CD7C8(int result)
{
  FIELD_U16(result, 6100) = 30 * (unsigned __int8)(FIELD_U32(result, 24) >> 4) + 30;
  return result;
}
