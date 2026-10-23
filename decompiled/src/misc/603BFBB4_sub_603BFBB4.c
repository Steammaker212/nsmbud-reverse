/* sub_603BFBB4
 * address: 0x603BFBB4   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_603BFBB4(CollisionActor *a1)
{
  char v1; // r12
  int v3; // r1

  if ( ((unsigned int)&dword_60C98534[1] & ~(1614543824 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C98534[1]) )
  {
    dword_60C9853C = 0x1000000;
    dword_60C98540 = -16777216;
    _cxa_guard_release(&dword_60C98534[1]);
  }
  v3 = -201326592;
  if ( (ActiveColliderNode *)FIELD_U32(a1, 0x50) == a1[1]._.aCollider.createNode.next )
    v3 = 201326592;
  FIELD_U32(a1, 0x9C) += sub_602A7BAC((int)a1, v3);
  CollisionActor__handleGravity(a1);
  return CollisionActor__handleSpeed(a1);
}
