/* sub_60555748
 * address: 0x60555748   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60555748(int a1)
{
  int result; // r0

  *(_BYTE *)(FIELD_U32(a1, 3636) + 64) &= ~1u;
  result = FIELD_U32(a1, 3640);
  FIELD_U8(result, 64) &= ~1u;
  return result;
}
