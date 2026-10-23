/* sub_600AAF54
 * address: 0x600AAF54   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600AAF54(StateActor *a1)
{
  int v2; // r1

  KoopalingBase__vf5C8();
  FIELD_U32(a1, 0x0)._.direction = StageActor__directionToPlayerX(a1, &FIELD_U32(a1, 0x0)._.position);
  v2 = (*(int (__fastcall **)(StateActor *))(FIELD_U32(a1, 0x0)._._.vtable + 1108))(a1);
  return sub_600B33DC(a1, v2);
}
