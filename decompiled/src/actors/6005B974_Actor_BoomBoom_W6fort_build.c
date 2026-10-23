/* Actor_BoomBoom_W6fort_build
 * address: 0x6005B974   size: 248   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

BossBase *__fastcall Actor_BoomBoom_W6fort_build(ActorBuildInfo *a1)
{
  BossBase *v2; // r0
  BossBase *result; // r0

  v2 = (BossBase *)operator_new(0x1F08u);
  result = BoomBoomBase__ctor(v2, a1);
  FIELD_U32(result, 0x0) = (int)off_60BC56B4;
  *(_DWORD *)&result[1]._._._.collisionMgr[96] = 0;
  result[1]._._._.collisionMgr[100] = 0;
  *(_DWORD *)&result[1]._._._.collisionMgr[116] = 0;
  *(_DWORD *)&result[1]._._._.collisionMgr[112] = 0;
  *(_DWORD *)&result[1]._._._.collisionMgr[104] = 0;
  *(_DWORD *)&result[1]._._._.collisionMgr[108] = 0;
  *(_DWORD *)&result[1]._._._.collisionMgr[120] = 1;
  *(_DWORD *)&result[1]._._._.collisionMgr[152] = 0;
  result[1]._._._.collisionMgr[156] = 0;
  *(_DWORD *)&result[1]._._._.collisionMgr[144] = 0;
  *(_DWORD *)&result[1]._._._.collisionMgr[140] = 0;
  *(_DWORD *)&result[1]._._._.collisionMgr[136] = 0;
  *(_DWORD *)&result[1]._._._.collisionMgr[132] = 0;
  *(_DWORD *)&result[1]._._._.collisionMgr[128] = 0;
  *(_DWORD *)&result[1]._._._.collisionMgr[124] = 0;
  *(_DWORD *)&result[1]._._._.collisionMgr[172] = 0;
  *(_DWORD *)&result[1]._._._.collisionMgr[168] = 0;
  *(_DWORD *)&result[1]._._._.collisionMgr[164] = 0;
  *(_DWORD *)&result[1]._._._.collisionMgr[160] = 0;
  *(_DWORD *)&result[1]._._._.collisionMgr[192] = 0;
  *(_DWORD *)&result[1]._._._.collisionMgr[188] = 0;
  *(_DWORD *)&result[1]._._._.collisionMgr[184] = 0;
  *(_DWORD *)&result[1]._._._.collisionMgr[180] = 0;
  result[1]._._._.collisionMgr[196] = 1;
  return result;
}
