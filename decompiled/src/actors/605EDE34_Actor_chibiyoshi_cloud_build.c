/* Actor_chibiyoshi_cloud_build
 * address: 0x605EDE34   size: 132   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

CollisionActor *__fastcall Actor_chibiyoshi_cloud_build(ActorBuildInfo *a1)
{
  CollisionActor *v2; // r0
  CollisionActor *result; // r0

  v2 = (CollisionActor *)operator_new(0x1F88u);
  result = BabyYoshiBaseProbably_ctor(v2, a1, 0);
  FIELD_U32(result, 0x0)._.vtable = (int)off_60C0BA80;
  *(_DWORD *)&result[1].collisionMgr[1324] = 0;
  *(_DWORD *)&result[1].collisionMgr[1328] = 0;
  result[1].collisionMgr[1332] = 0;
  *(_DWORD *)&result[1].collisionMgr[1336] = 5;
  result[1].collisionMgr[1340] = 0;
  *(_DWORD *)&result[1].collisionMgr[1344] = 1098907648;
  *(_DWORD *)&result[1].collisionMgr[1348] = 1098907648;
  *(_DWORD *)&result[1].collisionMgr[1352] = 0;
  return result;
}
