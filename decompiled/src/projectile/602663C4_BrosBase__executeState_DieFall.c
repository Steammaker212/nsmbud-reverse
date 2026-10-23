/* BrosBase__executeState_DieFall
 * address: 0x602663C4   size: 76   group: projectile
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A7FF8
// 
// Overridden by: None
float __fastcall BrosBase__executeState_DieFall(CollisionActor *a1)
{
  int v2; // r3

  j_ModelWrapper_updateAnims(a1[1]._.aCollider.node3.prev);
  v2 = -134217728;
  if ( (ActiveColliderNode *)FIELD_U32(a1, 0x50) == a1[1]._.aCollider.createNode.next )
    v2 = 0x8000000;
  FIELD_U32(a1, 0x9C) += v2;
  CollisionActor__handleGravity(a1);
  return CollisionActor__handleSpeed(a1);
}
