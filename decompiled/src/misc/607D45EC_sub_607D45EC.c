/* sub_607D45EC
 * address: 0x607D45EC   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607D45EC(_DWORD *a1)
{
  int result; // r0

  sub_6077520C(a1);
  a1[309] &= ~0x1000000u;
  result = sub_607D6C28(a1);
  if ( result )
    return sub_607957D4(result, 0);
  return result;
}
