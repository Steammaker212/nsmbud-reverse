/* BrosBase_ctor
 * address: 0x602632F0   size: 448   group: projectile
 * sym: BrosBase::BrosBase(ActorBuildInfo const*) as C2
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall BrosBase_ctor(int a1, ActorBuildInfo *a2)
{
  char v3; // r12
  int v4; // r0

  Enemy__ctor((Enemy *)a1, a2);
  *(_DWORD *)a1 = BrosBase_vtable;
  FIELD_U32(a1, 6300) = 0;
  FIELD_U32(a1, 6584) = 0;
  FIELD_U32(a1, 6588) = 0;
  FIELD_U32(a1, 6608) = 0;
  FIELD_U8(a1, 6612) = 0;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 6616));
  FIELD_U32(a1, 6616) = off_60BC1450;
  sub_6000BAC8((_DWORD *)(a1 + 6720), FIELD_U32(a1, 8));
  FIELD_U32(a1, 6756) = 0;
  sub_601531B4((CollisionMgr *)(a1 + 6760));
  FIELD_U32(a1, 12112) = 0;
  FIELD_U32(a1, 12116) = 0;
  ActiveCollider_ctor((ActiveCollider *)(a1 + 12124));
  FIELD_U32(a1, 12428) = off_60BDBBD8;
  if ( ((unsigned int)&dword_60C7B364 & ~(1613116340 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  v4 = (**(int (__fastcall ***)(int, int *))a1)(a1, &StageActor_RTTI);
  if ( v4 )
    v4 = a1;
  FIELD_U32(a1, 12432) = &ActorScaler_vtable;
  FIELD_U32(a1, 12436) = 1065353216;
  FIELD_U32(a1, 12440) = 1065353216;
  FIELD_U32(a1, 12444) = 1065353216;
  FIELD_U32(a1, 12448) = 1065353216;
  FIELD_U32(a1, 12452) = 0;
  FIELD_U32(a1, 12456) = 0;
  FIELD_U32(a1, 12460) = v4;
  FIELD_U16(a1, 12464) = 0;
  memset(a1 + 6544, 0, 40);
  FIELD_U8(a1, 6604) = 0;
  FIELD_U32(a1, 6600) = 0;
  FIELD_U32(a1, 6596) = 0;
  FIELD_U32(a1, 6592) = 0;
  FIELD_U16(a1, 12120) = 1;
  return a1;
}
