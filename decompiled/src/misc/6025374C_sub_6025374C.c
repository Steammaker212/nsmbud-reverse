/* sub_6025374C
 * address: 0x6025374C   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6025374C(CollisionActor *a1)
{
  int v2; // r3
  ActiveColliderNode *next; // r0
  int direction; // r1
  int v5; // r2

  v2 = -201326592;
  next = a1[1]._.aCollider.createNode.next;
  direction = FIELD_U32(a1, 0x50);
  if ( (ActiveColliderNode *)direction == next )
    v2 = 201326592;
  FIELD_U32(a1, 0x9C) += v2;
  v5 = dword_60AF1F70[(_DWORD)next];
  if ( (ActiveColliderNode *)direction == next )
    v5 = -v5;
  FIELD_U32(a1, 0xA0) += v5;
  CollisionActor__handleGravity(a1);
  return CollisionActor__handleSpeed(a1);
}
