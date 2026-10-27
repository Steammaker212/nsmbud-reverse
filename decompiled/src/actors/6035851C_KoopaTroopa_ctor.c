/* KoopaTroopa_ctor
 * address: 0x6035851C   size: 380   group: actors
 * sym: # KoopaTroopa_ctor as UNKNOWN
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Enemy *__fastcall KoopaTroopa_ctor(ActorBuildInfo *a1)
{
  Enemy *v2; // r4
  float x; // r0
  float y; // r1
  _BOOL4 v5; // r0

  v2 = (Enemy *)operator_new(0x1D50u);
  ShellEnemy__ctor(
    (CarryableEnemy *)v2,
    (int)a1,
    (((unsigned int)FIELD_U32(a1, 0x0) >> 4) & 1) == 0,
    0,
    FIELD_U32(a1, 0x14) == 514);
  FIELD_U32(v2, 0x0) = (int)&KoopaTroopa_vtable;
  v2[1]._._._.field_208 = 0.0;
  v2[1]._._._.field_20C = 0.0;
  v2[1]._._._.field_210 = NAN;
  x = FIELD_F32(a1, 0x10);
  y = FIELD_F32(a1, 0x14);
  *(float *)&v2[1]._._._.eventId2 = FIELD_F32(a1, 0x18);
  *(float *)&v2[1]._._._.field_218 = y;
  *(float *)&v2[1]._._._.zoneId = x;
  v2[1]._._._.field_220 = 0;
  FIELD_U32(v2 + (1) * 6300, 0x224) = FIELD_U32(v2, 0x14) & 1;
  v2[1]._._._.field_234 = 0;
  v2[1]._._._.field_230 = 0;
  v2[1]._._._.field_22C = 0;
  *(_DWORD *)&v2[1]._._._.field_228 = 0;
  ActiveCollider_ctor((ActiveCollider *)&v2[1]._._._.profileFlags);
  ActiveCollider_ctor((ActiveCollider *)&v2[1]._._.collisionMgr[224]);
  v5 = FIELD_U32(a1, 0x14) == 514;
  *(_DWORD *)&v2[1]._._.collisionMgr[528] = v5;
  *(_DWORD *)&v2[1]._._.collisionMgr[532] = dword_60AF20D8[v5];
  *(_DWORD *)&v2[1]._._.collisionMgr[536] = (240
                                           * (unsigned __int64)sead__Random__getU32((void *)(dword_60C9CF0C + 1340))) >> 32;
  *(_DWORD *)&v2[1]._._.collisionMgr[540] = 0;
  *(_DWORD *)&v2[1]._._.collisionMgr[544] = 0;
  v2[1]._._.collisionMgr[548] = 0;
  *(_DWORD *)&v2[1]._._.collisionMgr[552] = 0;
  return v2;
}
