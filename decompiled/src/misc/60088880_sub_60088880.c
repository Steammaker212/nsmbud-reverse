/* sub_60088880
 * address: 0x60088880   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60088880(BossBase *a1, int a2)
{
  if ( a2 == 2 )
  {
    (*(void (__fastcall **)(BossBase *))(FIELD_U32(a1, 0x0) + 1008))(a1);
    sub_600CE78C(a1);
    if ( (LOBYTE(a1[1]._._._._.field_20C) & 2) != 0 )
      sub_600888D4(a1);
  }
  return BossBase__afterExecute(a1, a2);
}
