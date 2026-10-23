/* sub_604EA064
 * address: 0x604EA064   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604EA064(int a1)
{
  FIELD_U8(a1, 20) = 0;
  FIELD_U8(a1, 296) = 0;
  *(_DWORD *)a1 = off_60BFEB5C;
  sub_60481980((_DWORD *)(a1 + 840));
  return a1;
}
