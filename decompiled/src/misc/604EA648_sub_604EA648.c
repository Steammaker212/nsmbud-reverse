/* sub_604EA648
 * address: 0x604EA648   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604EA648(int a1)
{
  sub_604EA67C();
  sub_60473B58(*(_DWORD **)(a1 + 4), 0xEu, 0);
  sub_604E8B68((_DWORD *)a1);
  FIELD_U8(a1, 20) = 1;
  FIELD_U8(a1, 296) = 1;
  return 1;
}
