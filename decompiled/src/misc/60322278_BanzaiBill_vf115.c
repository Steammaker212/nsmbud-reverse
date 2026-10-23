/* BanzaiBill_vf115
 * address: 0x60322278   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall BanzaiBill_vf115(CollisionActor *a1)
{
  int v2; // r1
  ActiveColliderNode *next; // r5
  int direction; // r6
  int v5; // r0

  v2 = -201326592;
  next = a1[1]._.aCollider.createNode.next;
  direction = FIELD_U32(a1, 0x50);
  if ( (ActiveColliderNode *)direction == next )
    v2 = 201326592;
  FIELD_U32(a1, 0x9C) += sub_602A7BAC((int)a1, v2);
  v5 = dword_60AF1F70[(_DWORD)next];
  if ( (ActiveColliderNode *)direction == next )
    v5 = -v5;
  FIELD_U32(a1, 0xA0) += v5;
  CollisionActor__handleGravity(a1);
  return CollisionActor__handleSpeed(a1);
}
