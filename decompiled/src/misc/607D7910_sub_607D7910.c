/* sub_607D7910
 * address: 0x607D7910   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607D7910(int a1)
{
  int result; // r0

  SE_PLY_QUAT_ref(a1);
  sub_60774778(a1);
  FIELD_U32(a1, 1216) |= 0x4000000u;
  result = FIELD_U32(a1, 1236) | 0x1000000;
  FIELD_U32(a1, 1236) = result;
  return result;
}
