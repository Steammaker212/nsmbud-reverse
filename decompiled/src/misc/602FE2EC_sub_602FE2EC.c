/* sub_602FE2EC
 * address: 0x602FE2EC   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602FE2EC(CollisionActor *a1)
{
  float v2; // s0
  float v3; // s0
  ActiveColliderNode *prev; // r0
  ActiveCollider *owner; // r1
  ActiveColliderNode *v6; // r2
  ActiveColliderNode *v7; // r0
  int result; // r0

  CollisionActor__handleGravity(a1);
  v2 = CollisionActor__handleSpeed(a1);
  v3 = CollisionMgr_process(FIELD_U8(a1, 0x288), v2);
  prev = a1[1]._.aCollider.node3.prev;
  owner = prev[1].owner;
  v6 = FIELD_U32(prev, 0x8);
  v7 = prev[5].prev;
  if ( v6 > v7 )
    owner = (ActiveCollider *)((char *)owner + 4 * (_DWORD)v7);
  result = *(unsigned __int8 *)(FIELD_U32(owner, 0x0) + 28);
  if ( (result & 0x20) != 0 )
    return (*(int (__fastcall **)(CollisionActor *, int *, float))(FIELD_U32(a1, 0x0) + 192))(a1, &dword_60C92C1C, v3);
  return result;
}
