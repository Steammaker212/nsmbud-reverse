/* sub_60055BC8
 * address: 0x60055BC8   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60055BC8(BossBase *a1, int a2)
{
  (*(void (__fastcall **)(BossBase *))(FIELD_U32(a1, 0x0) + 1312))(a1);
  return BossBase__afterExecute(a1, a2);
}
