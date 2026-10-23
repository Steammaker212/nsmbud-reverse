/* sub_609588B8
 * address: 0x609588B8   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609588B8(int a1)
{
  int result; // r0

  *(_BYTE *)a1 = 0;
  result = memset((void *)(a1 + 4), 0, 192);
  FIELD_U16(a1, 360) = 0;
  return result;
}
