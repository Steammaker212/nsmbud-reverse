/* sub_60345CAC
 * address: 0x60345CAC   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60345CAC(Enemy *a1, int a2, int a3)
{
  a1[2]._._._.aCollider.field_68 = (int)StateMgr__getCurrentState(&FIELD_U32(a1, 0x17C4));
  Enemy__collisionIceball(a1, a2, a3);
  return 1;
}
