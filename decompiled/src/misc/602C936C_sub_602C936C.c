/* sub_602C936C
 * address: 0x602C936C   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_602C936C(CollisionActor *a1)
{
  ActiveColliderNode *next; // r1
  int direction; // r2
  bool v4; // zf
  int v5; // r0
  int v6; // r1

  next = a1[1]._.aCollider.createNode.next;
  direction = FIELD_U32(a1, 0x50);
  v4 = direction == (_DWORD)next;
  v5 = (int)(float)((float)(2147500000.0 * 1.4062) / 180.0);
  if ( (ActiveColliderNode *)direction != next )
    v4 = next == 0;
  if ( v4 )
  {
    v5 = -v5;
    v6 = 201326592;
  }
  else
  {
    v4 = next == (ActiveColliderNode *)1;
    v6 = -201326592;
    if ( v4 )
      v5 = -v5;
  }
  FIELD_U32(a1, 0x9C) += v6;
  FIELD_U32(a1, 0xA0) += v5;
  CollisionActor__handleGravity(a1);
  return CollisionActor__handleSpeed(a1);
}
