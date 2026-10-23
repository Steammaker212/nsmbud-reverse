/* sub_603FBCF0
 * address: 0x603FBCF0   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603FBCF0(int a1)
{
  int result; // r0

  result = FIELD_U32(a1, 252);
  FIELD_U8(result, 12838) = 1;
  return result;
}
