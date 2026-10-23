/* Actor_chibiyoshi_build
 * address: 0x605C5AAC   size: 196   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

CollisionActor *__fastcall Actor_chibiyoshi_build(ActorBuildInfo *a1)
{
  CollisionActor *v2; // r0
  CollisionActor *result; // r0

  v2 = (CollisionActor *)operator_new(0x1FD8u);
  result = BabyYoshiBaseProbably_ctor(v2, a1, 0);
  FIELD_U32(result, 0x0)._.vtable = (int)off_60C0A140;
  *(_DWORD *)&result[1].collisionMgr[1384] = 0;
  *(_DWORD *)&result[1].collisionMgr[1400] = 0;
  *(_DWORD *)&result[1].collisionMgr[1416] = 0;
  *(_DWORD *)&result[1].collisionMgr[1432] = 0;
  *(_DWORD *)&result[1].collisionMgr[1352] = 0;
  *(_DWORD *)&result[1].collisionMgr[1348] = 0;
  *(_DWORD *)&result[1].collisionMgr[1344] = 0;
  *(_DWORD *)&result[1].collisionMgr[1340] = 0;
  *(_DWORD *)&result[1].collisionMgr[1336] = 0;
  *(_DWORD *)&result[1].collisionMgr[1332] = 0;
  *(_DWORD *)&result[1].collisionMgr[1324] = 0;
  *(_DWORD *)&result[1].collisionMgr[1328] = 0;
  *(_DWORD *)&result[1].collisionMgr[1356] = (char *)result + 8084;
  *(_DWORD *)&result[1].collisionMgr[1360] = 4;
  *(_DWORD *)&result[1].collisionMgr[1368] = 0;
  *(_DWORD *)&result[1].collisionMgr[1364] = 0;
  return result;
}
