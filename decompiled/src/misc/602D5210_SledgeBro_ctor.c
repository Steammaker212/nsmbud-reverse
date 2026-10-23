/* SledgeBro_ctor
 * address: 0x602D5210   size: 548   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Enemy *__fastcall SledgeBro_ctor(Enemy *a1, ActorBuildInfo *a2)
{
  char v3; // r12
  Enemy *v4; // r0

  Enemy__ctor(a1, a2);
  FIELD_U32(a1, 0x0)._._._.vtable = (int)SledgeBro_vtable;
  sub_6000BAC8(&a1[1]._._._._.vtable, FIELD_U32(a1, 0x0)._._._.id);
  ActiveCollider_ctor((ActiveCollider *)&a1[1]._._._._.field_3C);
  LOWORD(a1[1]._._._.aCollider.field_B8) = 0;
  a1[1]._._._.aCollider.field_B4 = 0;
  a1[1]._._._.aCollider.field_B0 = 0;
  a1[1]._._._.aCollider.lastCollisionOffsetX = NAN;
  a1[1]._._._.field_234 = 0;
  a1[1]._._._.field_230 = 0;
  a1[1]._._._.field_22C = 0;
  *(_DWORD *)&a1[1]._._._.field_228 = 0;
  EffectWrapper_ctor((EffectWrapper *)&a1[1]._._._.profileFlags);
  a1[1]._._._.profileFlags = (int)off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)&a1[1]._._.collisionMgr[24]);
  *(_DWORD *)&a1[1]._._.collisionMgr[24] = off_60BC1450;
  ActiveCollider_ctor((ActiveCollider *)&a1[1]._._.collisionMgr[128]);
  *(_DWORD *)&a1[1]._._.collisionMgr[432] = off_60BE6908;
  if ( ((unsigned int)&dword_60C7B364 & ~(1613583096 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  v4 = (Enemy *)(*(int (__fastcall **)(Enemy *, int *))FIELD_U32(a1, 0x0)._._._.vtable)(a1, &StageActor_RTTI);
  if ( v4 )
    v4 = a1;
  *(_DWORD *)&a1[1]._._.collisionMgr[436] = &ActorScaler_vtable;
  *(_DWORD *)&a1[1]._._.collisionMgr[440] = 1065353216;
  *(_DWORD *)&a1[1]._._.collisionMgr[444] = 1065353216;
  *(_DWORD *)&a1[1]._._.collisionMgr[448] = 1065353216;
  *(_DWORD *)&a1[1]._._.collisionMgr[452] = 1065353216;
  *(_DWORD *)&a1[1]._._.collisionMgr[456] = 0;
  *(_DWORD *)&a1[1]._._.collisionMgr[460] = 0;
  *(_DWORD *)&a1[1]._._.collisionMgr[464] = v4;
  memset(&a1[1]._._._.aCollider.field_C0, 0, 0x4Cu);
  *(_QWORD *)&a1[1]._._._.aCollider.field_10C = 0;
  *(_QWORD *)&a1[1]._._._.aCollider.field_114 = 0;
  *(_QWORD *)&a1[1]._._._.aCollider.field_11C = 0;
  *(_QWORD *)&a1[1]._._._.aCollider.field_124 = 0;
  *(_QWORD *)&a1[1]._._._.aCollider.field_12C = 0;
  *(_QWORD *)&a1[1]._._._.field_1F0 = 0;
  *(_QWORD *)&a1[1]._._._.field_1F8 = 0;
  *(_QWORD *)&a1[1]._._._.field_200 = 0;
  *(_QWORD *)&a1[1]._._._.field_208 = 0;
  *(_QWORD *)&a1[1]._._._.field_210 = 0;
  *(_QWORD *)&a1[1]._._._.field_218 = 0;
  *(_QWORD *)&a1[1]._._._.field_220 = 0;
  a1[1]._._.collisionMgr[468] = 0;
  return a1;
}
