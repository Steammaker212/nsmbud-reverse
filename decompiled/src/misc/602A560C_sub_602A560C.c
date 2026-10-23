/* sub_602A560C
 * address: 0x602A560C   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_602A560C(int a1)
{
  signed int v2; // r1
  _BOOL4 result; // r0

  v2 = StageActor__befreDraw((Actor *)a1);
  result = 0;
  if ( v2 == 1 )
    return FIELD_U8(a1, 6120) == 0;
  return result;
}
