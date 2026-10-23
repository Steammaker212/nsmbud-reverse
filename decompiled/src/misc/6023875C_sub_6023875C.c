/* sub_6023875C
 * address: 0x6023875C   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6023875C(int *a1, int a2)
{
  int v3; // r0

  v3 = sub_60916308(dword_60CCFC8C, FIELD_U32(a2, 8), 0);
  *a1 = v3;
  a1[1] = 0;
  return v3 != 0;
}
