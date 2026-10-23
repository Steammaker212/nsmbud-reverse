/* Actor_parabomu_RDash_build
 * address: 0x60261428   size: 200   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

CarryableEnemy *__fastcall Actor_parabomu_RDash_build(int a1)
{
  CarryableEnemy *v2; // r0
  CarryableEnemy *result; // r0
  int v4; // r2
  int v5; // lr

  v2 = (CarryableEnemy *)operator_new(0x1BD8u);
  result = BobOmb_ctor(v2, (ActorBuildInfo *)a1);
  FIELD_U32(result, 0x0)._._._._.vtable = (int)&off_60BDB280;
  *(_DWORD *)&result[1]._._._.collisionMgr[70] = 0;
  v4 = FIELD_U32(a1, 16);
  v5 = FIELD_U32(a1, 20);
  *(_DWORD *)&result[1]._._._.collisionMgr[82] = FIELD_U32(a1, 24);
  *(_DWORD *)&result[1]._._._.collisionMgr[74] = v4;
  *(_DWORD *)&result[1]._._._.collisionMgr[78] = v5;
  *(_DWORD *)&result[1]._._._.collisionMgr[94] = 1065353216;
  *(_DWORD *)&result[1]._._._.collisionMgr[90] = 1065353216;
  *(_DWORD *)&result[1]._._._.collisionMgr[86] = 1065353216;
  *(_DWORD *)&result[1]._._._.collisionMgr[98] = 0;
  *(_DWORD *)&result[1]._._._.collisionMgr[102] = 0;
  *(_DWORD *)&result[1]._._._.collisionMgr[106] = 0;
  result[1]._._._.collisionMgr[110] = 1;
  *(_DWORD *)&result[1]._._._.collisionMgr[114] = 17825792;
  *(_DWORD *)&result[1]._._._.collisionMgr[118] = 0;
  *(_DWORD *)&result[1]._._._.collisionMgr[122] = 0;
  return result;
}
