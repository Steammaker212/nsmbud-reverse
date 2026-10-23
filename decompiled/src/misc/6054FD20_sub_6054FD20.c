/* sub_6054FD20
 * address: 0x6054FD20   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6054FD20(int a1)
{
  *(_DWORD *)a1 = off_60C00AE0;
  FIELD_U16(a1, 3608) = 0;
  sub_60475AE8((_DWORD *)(a1 + 40));
  return a1;
}
