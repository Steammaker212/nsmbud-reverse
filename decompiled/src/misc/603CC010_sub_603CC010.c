/* sub_603CC010
 * address: 0x603CC010   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_603CC010(CollisionActor *a1)
{
  int v2; // r1
  _DWORD *p_next; // r5

  v2 = -83886080;
  p_next = &a1[1]._.aCollider.createNode.next;
  if ( (ActiveColliderNode *)FIELD_U32(a1, 0x0).direction == a1[1]._.aCollider.createNode.next )
    v2 = 83886080;
  FIELD_U32(a1, 0x0).rotation.x += sub_602A7BAC((int)a1, v2);
  FIELD_U32(a1, 0x0).rotation.y += (unsigned __int8)byte_60AFE3F4[*p_next] << 24;
  CollisionActor__handleGravity(a1);
  return CollisionActor__handleSpeed(a1);
}
