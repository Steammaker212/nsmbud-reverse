/* sub_608CAF54
 * address: 0x608CAF54   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CAF54(int a1, int a2, int a3)
{
  int v4; // r0
  int v5; // r1

  v4 = sub_608B0CEC(a3);
  v5 = v4 + 580;
  if ( !v4 )
    v5 = 568;
  return v5 * a2;
}
