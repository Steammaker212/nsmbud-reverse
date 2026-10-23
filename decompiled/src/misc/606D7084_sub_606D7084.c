/* sub_606D7084
 * address: 0x606D7084   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606D7084(int a1)
{
  int result; // r0

  sub_605C9CA0(a1);
  FIELD_F32(a1, 312) = FIELD_F32(a1, 312) + 1.0;
  FIELD_U32(a1, 328) = 9;
  result = FIELD_U32(a1, 336) | 0x200;
  FIELD_U32(a1, 336) = result;
  return result;
}
