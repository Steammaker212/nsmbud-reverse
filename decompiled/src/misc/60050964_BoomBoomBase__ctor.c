/* BoomBoomBase__ctor
 * address: 0x60050964   size: 544   group: misc
 * sym: BoomBoomBase::BoomBoomBase(ActorBuildInfo const*) as C2
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

BossBase *__fastcall BoomBoomBase__ctor(BossBase *a1, ActorBuildInfo *a2)
{
  BossBase__ctor(a1, a2);
  FIELD_U32(a1, 0x0) = (int)BoomBoomBase_vtable;
  a1[1]._._._._._.vtable = 0x3FB33333;
  a1[1]._._._._._.heap = dword_60C807F0;
  a1[1]._._._._._.id = dword_60C807F4;
  FIELD_U32(a1 + (1) * 7092, 0xC) = (Profile *)40;
  *(_DWORD *)&a1[1]._._._._._.field_10 = -1021313024;
  a1[1]._._._._._.settings1 = 1126170624;
  a1[1]._._._._._.settigns2 = -1088841318;
  *(_DWORD *)&a1[1]._._._._._.movementId = 1089470464;
  a1[1]._._._._._.field_20.previous = (sead_ListNode *)1089470464;
  a1[1]._._._._._.field_20.next = (sead_ListNode *)1089470464;
  a1[1]._._._._._.childCount = 0;
  a1[1]._._._._._.field_2C = 1086324736;
  a1[1]._._._._._.field_30 = 1065353216;
  a1[1]._._._._._.field_34 = 1082130432;
  a1[1]._._._._._.parent = (Actor *)1071057470;
  a1[1]._._._._._.field_3C = 1062668862;
  a1[1]._._._._._.field_40 = 1071057470;
  a1[1]._._._._._.field_44 = 30;
  a1[1]._._._._._.field_48 = 4;
  FIELD_U32(a1 + (1) * 7092, 0x4C) = 40;
  a1[1]._._._._.direction = 1118699520;
  *(_DWORD *)&a1[1]._._._._.playerId = 1121714176;
  a1[1]._._._._.field_58 = 1102577664;
  a1[1]._._._._.field_5C = 1102577664;
  a1[1]._._._._.field_60 = 1107296256;
  LODWORD(a1[1]._._._._.field_64) = dword_60C807F8;
  LODWORD(a1[1]._._._._.xAcceleration) = dword_60C807FC;
  LODWORD(a1[1]._._._._.position.x) = 30;
  memset(&a1[1]._._._._.position.y, 0, 48);
  EffectWrapper_ctor((EffectWrapper *)&a1[1]._._._._.rotation.y);
  a1[1]._._._._.rotation.y = (int)off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)&a1[1]._._._._.aCollider.field_4C);
  a1[1]._._._._.aCollider.field_4C = (int)off_60BC1450;
  a1[1]._._._._.aCollider.field_E8 = 0;
  a1[1]._._._._.aCollider.field_EC = -1;
  EffectData_ctor((EffectData *)&a1[1]._._._._.aCollider.field_B4);
  LOBYTE(a1[1]._._._._.aCollider.field_F4) = 0;
  MovingSoundActor_ctor((MovingSoundActor *)&a1[1]._._._._.aCollider.field_F8, 0, 1);
  a1[1]._._._._.aCollider.field_F8 = (int)off_60BC19B4;
  return a1;
}
