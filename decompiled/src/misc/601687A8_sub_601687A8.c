/* sub_601687A8
 * address: 0x601687A8   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_601687A8(int a1)
{
  int v2; // r1
  _BOOL4 result; // r0
  bool v4; // zf

  v2 = Actor__befreDraw();
  result = 0;
  v4 = v2 == 1;
  if ( v2 == 1 )
  {
    LOBYTE(v2) = FIELD_U8(a1, 216);
    v4 = (v2 & 2) == 0;
  }
  if ( v4 )
    return (v2 & 4) == 0;
  return result;
}
