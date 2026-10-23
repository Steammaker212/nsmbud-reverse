/* sub_607B6C7C
 * address: 0x607B6C7C   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_607B6C7C(int a1)
{
  _BOOL4 result; // r0

  result = 0;
  if ( (FIELD_U8(a1, 1205) & 0x20) == 0 )
    return FIELD_F32(a1, 15060) == 0.0;
  return result;
}
