/* sub_600BB738
 * address: 0x600BB738   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateActor *__fastcall sub_600BB738(StateActor *a1, ActorBuildInfo *a2)
{
  StateActor_ctor(a1, a2);
  FIELD_U32(a1, 0x0)._._.vtable = (int)off_60BC9BC0;
  memset(&a1[1], 0, 120);
  LODWORD(a1[1]._._.speed.x) = &ActorScaler_vtable;
  a1[1]._._.speed.y = 1.0;
  a1[1]._._.speed.z = 1.0;
  a1[1]._._.maxSpeed.x = 1.0;
  a1[1]._._.maxSpeed.y = 1.0;
  a1[1]._._.maxSpeed.z = 0.0;
  a1[1]._._.scale.x = 0.0;
  LODWORD(a1[1]._._.scale.y) = a1;
  LOBYTE(a1[1]._._.scale.z) = 0;
  a1[1]._._.rotation.x = 0;
  a1[1]._._.rotation.y = 0;
  a1[1]._._.aCollider.createNode.owner = 0;
  a1[1]._._.aCollider.createNode.next = (ActiveColliderNode *)-1;
  EffectData_ctor((EffectData *)&a1[1]._._.rotation.z);
  return a1;
}
