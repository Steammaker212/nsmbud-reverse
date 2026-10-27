/* BowserJrBase__ctor
 * address: 0x600CE2DC   size: 240   group: misc
 * sym: BowserJrBase::BowserJrBase(ActorBuildInfo const*) as C2
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

BossBase *__fastcall BowserJrBase__ctor(BossBase *a1, ActorBuildInfo *a2)
{
  BossBase__ctor(a1, a2);
  FIELD_U32(a1, 0x0) = (int)off_60BCB08C;
  a1[1]._._._._.scale.y = 0.0;
  a1[1]._._._._.scale.z = 0.0;
  LOBYTE(a1[1]._._._._.rotation.x) = 0;
  memset(&a1[1], 0, 100);
  BYTE2(a1[1]._._._._.field_AC) = 0;
  LOWORD(a1[1]._._._._.field_AC) = 0;
  a1[1]._._._._.field_A8 = 0;
  a1[1]._._._._.rotation.y = 0;
  a1[1]._._._._.rotation.z = 0;
  EffectWrapper_ctor((EffectWrapper *)&a1[1]._._._._.field_B0);
  a1[1]._._._._.field_B0 = (int)off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)&a1[1]._._._._.aCollider.field_5C);
  a1[1]._._._._.aCollider.field_5C = (int)off_60BC1450;
  a1[1]._._._._.aCollider.field_F8 = 0;
  a1[1]._._._._.aCollider.field_FC = -1;
  EffectData_ctor((EffectData *)&a1[1]._._._._.aCollider.field_C4);
  a1[1]._._._._.field_1F4 = 0.0;
  a1[1]._._._._.field_1F8 = NAN;
  EffectData_ctor((EffectData *)&a1[1]._._._._.aCollider.field_104);
  FIELD_U32(a1, 0x1A10) = 2;
  return a1;
}
