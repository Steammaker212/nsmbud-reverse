/* sub_6081EE54
 * address: 0x6081EE54   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6081EE54(int a1)
{
  int result; // r0

  memset((void *)(a1 + 760), 0, 36);
  result = FIELD_U8(a1, 120) ^ 1;
  FIELD_U32(a1, 780) = result;
  return result;
}
