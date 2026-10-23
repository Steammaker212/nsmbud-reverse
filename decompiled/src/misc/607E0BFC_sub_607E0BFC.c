/* sub_607E0BFC
 * address: 0x607E0BFC   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_607E0BFC()
{
  int *result; // r0
  int v1; // r4

  result = &dword_60C99DD0;
  v1 = dword_60C99DD0;
  if ( dword_60C99DD0 )
  {
    sub_6081699C(dword_60CC6B68);
    return sub_604B63E0((_DWORD *)(v1 + 16), 38, 0);
  }
  return result;
}
