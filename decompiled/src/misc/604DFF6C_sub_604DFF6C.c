/* sub_604DFF6C
 * address: 0x604DFF6C   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604DFF6C(int a1)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 4 * FIELD_U8(a1, 4075) + 4060);
  FIELD_U32(result, 36) = FIELD_U32(result, 36) & 0xFFFFFFEB | 4;
  return result;
}
