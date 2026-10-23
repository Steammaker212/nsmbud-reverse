/* sub_6076E594
 * address: 0x6076E594   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6076E594(int a1)
{
  int result; // r0

  FIELD_U32(a1, 11348) = 10;
  sub_607689EC(a1, 1);
  sub_60768AE8(a1);
  result = FIELD_U32(a1, 1236) | 0x10000;
  FIELD_U32(a1, 1236) = result;
  return result;
}
