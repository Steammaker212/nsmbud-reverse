/* sub_600D20E8
 * address: 0x600D20E8   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_600D20E8(CollisionActor *a1)
{
  FIELD_U32(a1, 0x0).rotation.z += dword_60AF1EC8[(int)a1[1]._.aCollider.createNode.next];
  CollisionActor__handleGravity(a1);
  return CollisionActor__handleSpeed(a1);
}
