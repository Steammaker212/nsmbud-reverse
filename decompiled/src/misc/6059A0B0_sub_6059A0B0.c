/* sub_6059A0B0
 * address: 0x6059A0B0   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6059A0B0(_DWORD *result)
{
  unsigned int v1; // r1
  unsigned int *v2; // r4

  v2 = result + 1565;
  v1 = result[1565];
  if ( (v1 & 0x80000) != 0 )
  {
    result[36] = 1067869798;
    result[37] = 1067869798;
    result[38] = 1067869798;
    result = (_DWORD *)sub_605D8994();
    v1 = *v2;
  }
  *v2 = v1 & 0xFFF7FFFF;
  return result;
}
