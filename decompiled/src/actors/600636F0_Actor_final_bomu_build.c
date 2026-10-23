/* Actor_final_bomu_build
 * address: 0x600636F0   size: 76   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Enemy *__fastcall Actor_final_bomu_build(ActorBuildInfo *a1)
{
  Enemy *v2; // r0
  Enemy *result; // r0

  v2 = (Enemy *)operator_new(0x1BA8u);
  result = BobOmb_ctor(v2, a1);
  FIELD_U32(result, 0x0) = (int)&off_60BC6404;
  result[1]._._.collisionMgr[120] = 0;
  *(_DWORD *)&result[1]._._.collisionMgr[124] = 0;
  *(_DWORD *)&result[1]._._.collisionMgr[128] = 0;
  return result;
}
