/* BrosBase__executeState_DieFumi
 * address: 0x60266260   size: 52   group: projectile
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A7F8C
// 
// Overridden by: None
float __fastcall BrosBase__executeState_DieFumi(CollisionActor *a1)
{
  j_ModelWrapper_updateAnims(a1[1]._.aCollider.node3.prev);
  FIELD_U32(a1, 0x0).rotation.x += 0x8000000;
  CollisionActor__handleGravity(a1);
  return CollisionActor__handleSpeed(a1);
}
