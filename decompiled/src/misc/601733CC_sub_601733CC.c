/* sub_601733CC
 * address: 0x601733CC   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_601733CC()
{
  unsigned int v0; // r0

  v0 = *(_DWORD *)(sub_601CF9C0(dword_60C8AEF0) + 1100);
  if ( v0 <= 5 )
    return dword_60AF7A10[v0];
  else
    return 6;
}
