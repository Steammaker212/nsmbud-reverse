/* sub_604AEEC0
 * address: 0x604AEEC0   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604AEEC0(int result, int a2)
{
  _DWORD *v2; // r0
  int *v3; // r2

  if ( FIELD_U8(result, 3667) != a2 )
  {
    FIELD_U8(result, 3667) = a2;
    v2 = (_DWORD *)(result + 36);
    v3 = &dword_60CA1878;
    if ( a2 )
      v3 = &dword_60CA1880;
    return sub_60473DE4(v2, 3u, v3, 0);
  }
  return result;
}
