/* sub_601DB46C
 * address: 0x601DB46C   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *sub_601DB46C()
{
  int v0; // r1
  _DWORD *result; // r0

  v0 = FIELD_S8(dword_60CC6D78, 109037);
  result = &dword_60AFD0D4[2 * v0];
  if ( v0 < 0 )
    return &unk_60AFD10C;
  return result;
}
