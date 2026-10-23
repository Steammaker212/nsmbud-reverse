/* sub_607C8118
 * address: 0x607C8118   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_607C8118(int a1)
{
  int v1; // r2
  int v2; // r2

  v1 = FIELD_U32(a1, 15096);
  if ( !v1 || (v2 = v1 - 1, (FIELD_U32(a1, 15096) = v2) == 0) )
  {
    FIELD_U32(a1, 256) = 0;
    FIELD_U32(a1, 7204) = 0;
  }
  return Player__vf84(a1);
}
