/* Actor_totenPlayer_build
 * address: 0x607C807C   size: 104   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateActor *__fastcall Actor_totenPlayer_build(ActorBuildInfo *a1)
{
  StateActor *v2; // r0
  StateActor *result; // r0

  v2 = (StateActor *)operator_new(0x3B30u);
  result = Player_ctor(v2, a1);
  FIELD_U32(result, 0x0)._._.vtable = (int)off_60C253D4;
  *(_DWORD *)&result[2]._.collisionMgr[2248] = 0;
  *(_DWORD *)&result[2]._.collisionMgr[2252] = (char *)result + 15116;
  *(_DWORD *)&result[2]._.collisionMgr[2264] = 0;
  *(_DWORD *)&result[2]._.collisionMgr[2260] = 0;
  *(_DWORD *)&result[2]._.collisionMgr[2256] = 8;
  return result;
}
