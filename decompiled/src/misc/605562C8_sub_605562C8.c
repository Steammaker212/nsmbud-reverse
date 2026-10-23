/* sub_605562C8
 * address: 0x605562C8   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605562C8(int a1)
{
  int result; // r0

  FIELD_U32(a1, 6848) = 1;
  FIELD_U32(a1, 6852) = 1;
  FIELD_U8(a1, 6863) = 0;
  FIELD_U8(a1, 6860) = 1;
  FIELD_U8(a1, 18828) = 1;
  *(_BYTE *)(FIELD_U32(a1, 3636) + 64) |= 1u;
  result = FIELD_U32(a1, 3640);
  FIELD_U8(result, 64) |= 1u;
  return result;
}
