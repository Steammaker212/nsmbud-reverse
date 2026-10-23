/* sub_6029994C
 * address: 0x6029994C   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6029994C(CollisionActor *a1)
{
  int z; // r3
  ActiveColliderNode *next; // r0
  int v4; // r1

  CollisionActor__handleGravity(a1);
  CollisionActor__handleSpeed(a1);
  z = FIELD_U32(a1, 0x0).rotation.z;
  next = a1[1]._.aCollider.createNode.next;
  v4 = dword_60AF1FD0[(_DWORD)next];
  if ( (ActiveColliderNode *)FIELD_U32(a1, 0x0).direction == next )
    v4 = -v4;
  FIELD_U32(a1, 0x0).rotation.z = z + v4;
  return z + v4;
}
