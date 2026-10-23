/* sub_6027BEF8
 * address: 0x6027BEF8   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6027BEF8(Actor *a1)
{
  signed int v2; // r1
  _BOOL4 result; // r0

  v2 = StageActor__befreDraw(a1);
  result = 0;
  if ( v2 == 1 )
    return a1[106].field_40 == 0;
  return result;
}
