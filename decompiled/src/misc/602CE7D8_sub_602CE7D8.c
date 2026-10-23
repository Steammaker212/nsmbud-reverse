/* sub_602CE7D8
 * address: 0x602CE7D8   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602CE7D8(int a1)
{
  int result; // r0

  result = **(_DWORD **)(FIELD_U32(a1, 4) + 20);
  FIELD_U32(result, 20) = 1065353216;
  FIELD_U32(result, 28) |= 2u;
  return result;
}
