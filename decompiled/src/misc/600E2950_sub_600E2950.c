/* sub_600E2950
 * address: 0x600E2950   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateActor *__fastcall sub_600E2950(StateActor *a1, ActorBuildInfo *a2)
{
  StateActor_ctor(a1, a2);
  FIELD_U32(a1, 0x0)._._.vtable = (int)off_60BCCBE4;
  a1[1]._._._.vtable = 0;
  CircularCollider_ctor((ColliderBase *)&a1[1]._._._.heap);
  AnimationCtrl_ctor((int)&a1[1]._._.aCollider.field_D8);
  LOBYTE(a1[1]._._.aCollider.field_F4) = 1;
  a1[1]._._.aCollider.field_F8 = 1065353216;
  LOBYTE(a1[1]._._.aCollider.field_FC) = 1;
  a1[1]._._.aCollider.field_100 = 0;
  a1[1]._._.aCollider.field_104 = 0;
  return a1;
}
