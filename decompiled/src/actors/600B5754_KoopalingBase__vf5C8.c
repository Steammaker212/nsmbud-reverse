/* KoopalingBase__vf5C8
 * address: 0x600B5754   size: 188   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall KoopalingBase__vf5C8(CollisionActor *a1)
{
  float v2; // s0
  int result; // r0

  j_ModelWrapper_updateAnims(*(_DWORD *)&a1[1].collisionMgr[384]);
  (*(void (__fastcall **)(CollisionActor *))(FIELD_U32(a1, 0x0)._.vtable + 1040))(a1);
  CollisionActor__handleGravity(a1);
  v2 = CollisionActor__handleSpeed(a1);
  result = *(_DWORD *)&a1[1].collisionMgr[380];
  if ( result == 2 )
  {
    result = LOWORD(a1[1]._.aCollider.activeNode.prev);
    if ( !LOWORD(a1[1]._.aCollider.activeNode.prev) )
      return (*(int (__fastcall **)(CollisionActor *, float))(FIELD_U32(a1, 0x0)._.vtable + 1060))(a1, v2);
  }
  else if ( result == 1 )
  {
    result = LOWORD(a1[1]._.aCollider.activeNode.prev);
    if ( !LOWORD(a1[1]._.aCollider.activeNode.prev) )
    {
      LOWORD(a1[1]._.aCollider.activeNode.prev) = (*(int (__fastcall **)(CollisionActor *, float))(FIELD_U32(a1, 0x0)._.vtable + 1072))(
                                                    a1,
                                                    v2);
      *(_DWORD *)&a1[1].collisionMgr[460] = 0;
      result = 2;
      *(_DWORD *)&a1[1].collisionMgr[380] = 2;
    }
  }
  return result;
}
