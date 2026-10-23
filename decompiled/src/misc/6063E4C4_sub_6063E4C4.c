/* sub_6063E4C4
 * address: 0x6063E4C4   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6063E4C4(int result)
{
  *(_DWORD *)(**(_DWORD **)(FIELD_U32(result, 6108) + 12) + 24) = 1065353216;
  FIELD_U8(result, 6160) = 1;
  return result;
}
