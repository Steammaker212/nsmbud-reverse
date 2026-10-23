/* Actor_rotate_big_build_helper
 * address: 0x6026DA84   size: 148   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

MultiStateActor *__fastcall Actor_rotate_big_build_helper(MultiStateActor *a1, ActorBuildInfo *a2)
{
  MultiStateActor__ctor(a1, a2);
  FIELD_U32(a1, 0x0)._._.vtable = (int)off_60BDC634;
  RectCollider_ctor((RectCollider *)&a1[1]._._._.id);
  a1[1]._._._.id = (int)off_60BC30D8;
  RectCollider_ctor((RectCollider *)&a1[1]._.collisionMgr[16]);
  *(_DWORD *)&a1[1]._.collisionMgr[16] = off_60BC30D8;
  RectCollider_ctor((RectCollider *)&a1[1]._.collisionMgr[672]);
  *(_DWORD *)&a1[1]._.collisionMgr[672] = off_60BC30D8;
  RectCollider_ctor((RectCollider *)&a1[1]._.collisionMgr[1328]);
  *(_DWORD *)&a1[1]._.collisionMgr[1328] = off_60BC30D8;
  RectCollider_ctor((RectCollider *)&a1[1]._.collisionMgr[1984]);
  *(_DWORD *)&a1[1]._.collisionMgr[1984] = off_60BC30D8;
  memset(&a1[1]._.collisionMgr[2640], 0, 136);
  return a1;
}
