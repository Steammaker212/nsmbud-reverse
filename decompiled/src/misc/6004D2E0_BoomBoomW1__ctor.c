/* BoomBoomW1__ctor
 * address: 0x6004D2E0   size: 556   group: misc
 * sym: BoomBoomW1::BoomBoomW1(ActorBuildInfo const*) as C1
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall BoomBoomW1__ctor(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x20C8u);
  BoomBoomBase__ctor((BossBase *)v2, a1);
  *(_DWORD *)v2 = off_60BC3258;
  FIELD_U32(v2, 0x1E9C) = 40;
  FIELD_U32(v2, 7840) = 0;
  FIELD_U32(v2, 7844) = 0;
  FIELD_U32(v2, 7848) = 1071644672;
  FIELD_U32(v2, 7852) = 0;
  FIELD_U32(v2, 7856) = 1020054733;
  FIELD_U32(v2, 7860) = 0x40000000;
  FIELD_U32(v2, 7864) = 1077936128;
  FIELD_U32(v2, 7868) = 1074790400;
  FIELD_U32(v2, 7872) = 1076887552;
  FIELD_U32(v2, 7876) = 0x40000000;
  FIELD_U32(v2, 7880) = 1077936128;
  FIELD_U32(v2, 7884) = 1074790400;
  FIELD_U32(v2, 7888) = 1076887552;
  FIELD_U32(v2, 7892) = 1075838976;
  FIELD_U32(v2, 7896) = 1082130432;
  FIELD_U32(v2, 7900) = 1075838976;
  FIELD_U32(v2, 7904) = 1077936128;
  FIELD_U32(v2, 7908) = 1017370378;
  FIELD_U32(v2, 7912) = 1008981770;
  FIELD_U32(v2, 7916) = 40;
  FIELD_U32(v2, 7920) = 1126170624;
  FIELD_U32(v2, 7924) = 1109393408;
  FIELD_U32(v2, 7928) = 1040746633;
  FIELD_U32(v2, 7932) = 1084227584;
  FIELD_U32(v2, 7936) = 0;
  FIELD_U32(v2, 7940) = 1103626240;
  FIELD_U8(v2, 7944) = 0;
  FIELD_U32(v2, 7968) = 0;
  FIELD_U32(v2, 7964) = 0;
  FIELD_U32(v2, 7960) = 0;
  FIELD_U32(v2, 7956) = 0;
  FIELD_U32(v2, 7948) = 0;
  FIELD_U32(v2, 7952) = 0;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 7972));
  FIELD_U32(v2, 7972) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 8076));
  FIELD_U32(v2, 8076) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 8180));
  FIELD_U32(v2, 8180) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 8284));
  FIELD_U32(v2, 8284) = off_60BC1450;
  FIELD_U16(v2, 8388) = 256;
  (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 1284))(v2);
  return v2;
}
