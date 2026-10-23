/* BanzaiBill_vf114
 * address: 0x60322240   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall BanzaiBill_vf114(Enemy *a1)
{
  int *v2; // r5

  v2 = &a1[2]._._._.aCollider.field_E4;
  (*(void (__fastcall **)(Enemy *))(FIELD_U32(a1, 0x0)._._._.vtable + 72))(a1);
  Enemy__beginState_DieFall(a1);
  *(_BYTE *)v2 = 1;
  return 1;
}
