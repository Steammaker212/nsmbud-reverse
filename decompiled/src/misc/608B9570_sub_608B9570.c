/* sub_608B9570
 * address: 0x608B9570   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B9570(int a1)
{
  int v2; // r1
  int result; // r0

  v2 = nn__os__TryWaitEvent(a1 + 12);
  result = 1;
  if ( v2 == 1 )
    return nn__os__TryWaitEvent(a1 + 164) ^ 1;
  return result;
}
