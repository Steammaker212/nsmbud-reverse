/* sub_60250A7C
 * address: 0x60250A7C   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60250A7C(CollisionActor *a1)
{
  int v2; // r0
  int *v3; // r1
  int v4; // r2
  ActiveColliderNode **p_next; // r5
  int v6; // r2
  int v7; // r1
  int result; // r0

  v3 = &a1[1]._.aCollider.field_4C;
  v2 = a1[1]._.aCollider.field_4C;
  *v3 = v2 - 1;
  if ( v2 <= 1 )
  {
    p_next = &a1[1]._.aCollider.createNode.next;
  }
  else
  {
    v4 = -67108864;
    p_next = &a1[1]._.aCollider.createNode.next;
    if ( (ActiveColliderNode *)FIELD_U32(a1, 0x0).direction == a1[1]._.aCollider.createNode.next )
      v4 = 0x4000000;
    FIELD_U32(a1, 0x0).rotation.x -= v4;
  }
  CollisionActor__handleGravity(a1);
  CollisionActor__handleSpeed(a1);
  v6 = -322437120;
  v7 = -23068672;
  if ( !*p_next )
  {
    v6 = 322437120;
    v7 = 23068672;
  }
  if ( FIELD_U8(a1, 0x17A6) )
    v7 = v6;
  result = v7 + FIELD_U32(a1, 0x0).rotation.z;
  FIELD_U32(a1, 0x0).rotation.z = result;
  return result;
}
