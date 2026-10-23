/* sub_608B1310
 * address: 0x608B1310   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B1310(int a1)
{
  *(_DWORD *)a1 = off_60C5AF8C;
  sub_608B13C0(a1);
  FIELD_U32(a1, 16) = 0;
  FIELD_U8(a1, 20) = 0;
  return a1;
}
