/* sub_605986B0
 * address: 0x605986B0   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

CollisionActor *__fastcall sub_605986B0(CollisionActor *a1, ActorBuildInfo *a2)
{
  int v3; // r0

  BabyYoshiBaseProbably_ctor(a1, a2, 1);
  FIELD_U32(a1, 0x0)._.vtable = (int)off_60C075E0;
  sub_6059B720((void ***)&a1[1].collisionMgr[1324], (void **)&a1[1]);
  ActorCollisionMgr_ctor((CollisionMgr *)&a1[1].collisionMgr[1368]);
  *(_DWORD *)&a1[2].collisionMgr[656] = &off_60C07814;
  *(_DWORD *)&a1[2].collisionMgr[660] = &off_60C07824;
  *(_DWORD *)&a1[2].collisionMgr[664] = &off_60C07848;
  *(_DWORD *)&a1[2].collisionMgr[668] = a1;
  *(_DWORD *)&a1[2].collisionMgr[672] = 0;
  StateMgr_ctor((StateMgr *)&a1[2].collisionMgr[676], (StateExecuter *)&a1[2].collisionMgr[660], &stru_60CAF9BC);
  *(_DWORD *)&a1[2].collisionMgr[656] = &off_60C07804;
  *(_DWORD *)&a1[2].collisionMgr[692] = 0;
  *(_DWORD *)&a1[2].collisionMgr[696] = 0;
  a1[2].collisionMgr[700] = 1;
  *(_DWORD *)&a1[2].collisionMgr[704] = 2139095039;
  *(_DWORD *)&a1[2].collisionMgr[708] = 0;
  sub_6015BD84((ColliderBase *)&a1[2].collisionMgr[712]);
  a1[2].collisionMgr[1112] = 0;
  *(_DWORD *)&a1[2].collisionMgr[1168] = 0;
  *(_DWORD *)&a1[2].collisionMgr[1172] = -1;
  EffectData_ctor((EffectData *)&a1[2].collisionMgr[1116]);
  CollisionMgr_init((CollisionMgr *)&a1[1].collisionMgr[1368], (StateActor *)a1, 0, 0, 0);
  *(_DWORD *)&a1[1].collisionMgr[3920] |= 0x18u;
  *(_DWORD *)&a1[1].collisionMgr[3912] |= 0x18u;
  v3 = *(_DWORD *)&a1[1].collisionMgr[3904] | 0x18;
  *(_DWORD *)&a1[1].collisionMgr[3896] |= 0x18u;
  *(_DWORD *)&a1[1].collisionMgr[3904] = v3;
  return a1;
}
