/* sub_6004D884
 * address: 0x6004D884   size: 540   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6004D884(int a1, ActorBuildInfo *a2)
{
  BoomBoomBase__ctor((BossBase *)a1, a2);
  *(_DWORD *)a1 = off_60BC3258;
  FIELD_U32(a1, 7836) = 40;
  FIELD_U32(a1, 7840) = 0;
  FIELD_U32(a1, 7844) = 0;
  FIELD_U32(a1, 7848) = 1071644672;
  FIELD_U32(a1, 7852) = 0;
  FIELD_U32(a1, 7856) = 1020054733;
  FIELD_U32(a1, 7860) = 0x40000000;
  FIELD_U32(a1, 7864) = 1077936128;
  FIELD_U32(a1, 7868) = 1074790400;
  FIELD_U32(a1, 7872) = 1076887552;
  FIELD_U32(a1, 7876) = 0x40000000;
  FIELD_U32(a1, 7880) = 1077936128;
  FIELD_U32(a1, 7884) = 1074790400;
  FIELD_U32(a1, 7888) = 1076887552;
  FIELD_U32(a1, 7892) = 1075838976;
  FIELD_U32(a1, 7896) = 1082130432;
  FIELD_U32(a1, 7900) = 1075838976;
  FIELD_U32(a1, 7904) = 1077936128;
  FIELD_U32(a1, 7908) = 1017370378;
  FIELD_U32(a1, 7912) = 1008981770;
  FIELD_U32(a1, 7916) = 40;
  FIELD_U32(a1, 7920) = 1126170624;
  FIELD_U32(a1, 7924) = 1109393408;
  FIELD_U32(a1, 7928) = 1040746633;
  FIELD_U32(a1, 7932) = 1084227584;
  FIELD_U32(a1, 7936) = 0;
  FIELD_U32(a1, 7940) = 1103626240;
  FIELD_U8(a1, 7944) = 0;
  FIELD_U32(a1, 7968) = 0;
  FIELD_U32(a1, 7964) = 0;
  FIELD_U32(a1, 7960) = 0;
  FIELD_U32(a1, 7956) = 0;
  FIELD_U32(a1, 7948) = 0;
  FIELD_U32(a1, 7952) = 0;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 7972));
  FIELD_U32(a1, 7972) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 8076));
  FIELD_U32(a1, 8076) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 8180));
  FIELD_U32(a1, 8180) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 8284));
  FIELD_U32(a1, 8284) = off_60BC1450;
  FIELD_U16(a1, 8388) = 256;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1284))(a1);
  return a1;
}
