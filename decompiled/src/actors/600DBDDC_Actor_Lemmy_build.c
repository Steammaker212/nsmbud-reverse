/* Actor_Lemmy_build
 * address: 0x600DBDDC   size: 112   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

BossBase *__fastcall Actor_Lemmy_build(ActorBuildInfo *a1)
{
  BossBase *v2; // r0
  BossBase *result; // r0

  v2 = (BossBase *)operator_new(0x1FD0u);
  result = KoopalingBase__ctor(v2, a1);
  FIELD_U32(result, 0x0) = (int)off_60BCC370;
  *(_DWORD *)&result[1]._._._.collisionMgr[380] = 0;
  *(_DWORD *)&result[1]._._._.collisionMgr[384] = 0;
  *(_DWORD *)&result[1]._._._.collisionMgr[388] = 1065353216;
  result[1]._._._.collisionMgr[392] = 0;
  result[1]._._._.collisionMgr[393] = 0;
  *(_DWORD *)&result[1]._._._.collisionMgr[396] = 0;
  *(_DWORD *)&result[1]._._._.collisionMgr[400] = 0;
  return result;
}
