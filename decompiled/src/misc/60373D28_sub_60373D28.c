/* sub_60373D28
 * address: 0x60373D28   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60373D28(CollisionActor *a1)
{
  int v2; // r3
  ActiveColliderNode *next; // r0

  v2 = -83886080;
  next = a1[1]._.aCollider.createNode.next;
  if ( (ActiveColliderNode *)FIELD_U32(a1, 0x0).direction == next )
    v2 = 83886080;
  FIELD_U32(a1, 0x0).rotation.x += v2;
  FIELD_U32(a1, 0x0).rotation.y += (unsigned __int8)byte_60AFE3F4[(_DWORD)next] << 24;
  CollisionActor__handleGravity(a1);
  return CollisionActor__handleSpeed(a1);
}
