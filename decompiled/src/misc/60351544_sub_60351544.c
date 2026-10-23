/* sub_60351544
 * address: 0x60351544   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60351544(int a1)
{
  _BOOL4 result; // r0

  sub_60352A88(a1, 1, 1, 1.0);
  FIELD_U32(a1, 120) = 0;
  result = FIELD_U32(a1, 80) != 1;
  FIELD_U32(a1, 80) = result;
  return result;
}
