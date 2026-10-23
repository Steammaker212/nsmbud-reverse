/* Yoshi_ctor
 * address: 0x607CB7D0   size: 440   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateActor *__fastcall Yoshi_ctor(StateActor *a1, ActorBuildInfo *a2)
{
  sead_IDisposer *v3; // r0

  PlayerBase_ctor(a1, a2);
  FIELD_U32(a1, 0x0)._._.vtable = (int)&off_60C25AB0;
  *(_DWORD *)&a1[1]._.collisionMgr[4608] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[4612] = 0;
  Yoshi_ctor_helper_7D6354(&a1[1]._.collisionMgr[4616], FIELD_U32(a1, 0x0)._._.settings1 & 0xF, 0);
  v3 = (sead_IDisposer *)operator_new(0x1Cu);
  *(_DWORD *)&a1[1]._.collisionMgr[4632] = Yoshi_ctor_helper(v3);
  *(_DWORD *)&a1[1]._.collisionMgr[4636] = &off_60C26018;
  *(_DWORD *)&a1[1]._.collisionMgr[4640] = &off_60C26028;
  *(_DWORD *)&a1[1]._.collisionMgr[4644] = &off_60C2604C;
  *(_DWORD *)&a1[1]._.collisionMgr[4648] = a1;
  *(_DWORD *)&a1[1]._.collisionMgr[4652] = 0;
  StateMgr_ctor((StateMgr *)&a1[1]._.collisionMgr[4656], (StateExecuter *)&a1[1]._.collisionMgr[4640], &NullState);
  *(_DWORD *)&a1[1]._.collisionMgr[4636] = &off_60C26008;
  *(_DWORD *)&a1[1]._.collisionMgr[4672] = -1;
  *(_DWORD *)&a1[1]._.collisionMgr[4716] = 0;
  a1[1]._.collisionMgr[4720] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[4724] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[4728] = 0;
  a1[1]._.collisionMgr[4732] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[4736] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[4740] = 0;
  a1[1]._.collisionMgr[4744] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[4748] = 0;
  a1[1]._.collisionMgr[4752] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[4756] = 0;
  memset(&a1[1]._.collisionMgr[4676], 0, 39);
  EffectWrapper_ctor((EffectWrapper *)&a1[1]._.collisionMgr[4760]);
  *(_DWORD *)&a1[1]._.collisionMgr[4760] = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)&a1[1]._.collisionMgr[4864]);
  *(_DWORD *)&a1[1]._.collisionMgr[4864] = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)&a1[1]._.collisionMgr[4968]);
  *(_DWORD *)&a1[1]._.collisionMgr[4968] = off_60BC1450;
  FIELD_U32(a1, 0x0)._.type = 2;
  *(_DWORD *)FIELD_U32(a1, 0x0).collisionMgr = (char *)a1 + 11364;
  sub_6078B160((_DWORD *)PlayerMgr_instance, (int)a1);
  sub_6078B118((_DWORD *)PlayerMgr_instance);
  return a1;
}
