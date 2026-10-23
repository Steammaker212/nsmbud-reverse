/* sub_60274D2C
 * address: 0x60274D2C   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60274D2C(CollisionActor *a1)
{
  int v2; // r3
  ActiveColliderNode *next; // r0
  int result; // r0

  StageActor__accelerateX(&FIELD_U32(a1, 0x0));
  CollisionActor__handleGravity(a1);
  CollisionActor__handleSpeed(a1);
  v2 = -26214400;
  next = a1[1]._.aCollider.createNode.next;
  if ( (ActiveColliderNode *)FIELD_U32(a1, 0x50) == next )
    v2 = 26214400;
  FIELD_U32(a1, 0x9C) += v2;
  result = FIELD_U32(a1, 0xA0) + 1966080 * byte_60AFE3F4[(_DWORD)next];
  FIELD_U32(a1, 0xA0) = result;
  return result;
}
