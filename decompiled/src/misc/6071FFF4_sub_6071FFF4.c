/* sub_6071FFF4
 * address: 0x6071FFF4   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6071FFF4(int a1)
{
  int result; // r0

  memset((void *)(a1 + 944), 0, 64);
  result = 1 - FIELD_U32(a1, 16);
  FIELD_U32(a1, 16) = result;
  return result;
}
