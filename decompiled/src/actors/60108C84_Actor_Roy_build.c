/* Actor_Roy_build
 * address: 0x60108C84   size: 368   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_Roy_build(Enemy *a1)
{
  int v2; // r4

  v2 = operator_new(0x2180u);
  KoopalingBase__ctor((BossBase *)v2, (ActorBuildInfo *)a1);
  *(_DWORD *)v2 = off_60BCFED0;
  FIELD_U32(v2, 8128) = 0;
  FIELD_U32(v2, 8124) = 0;
  FIELD_U32(v2, 8120) = 0;
  FIELD_U32(v2, 8132) = -971228160;
  FIELD_U32(v2, 8156) = 0;
  FIELD_U32(v2, 8152) = 0;
  FIELD_U32(v2, 8148) = 0;
  FIELD_U32(v2, 8140) = 0;
  FIELD_U32(v2, 8144) = 0;
  FIELD_U32(v2, 8160) = 1067030938;
  FIELD_U32(v2, 8164) = 1065353216;
  FIELD_U8(v2, 8168) = 0;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 8172));
  FIELD_U32(v2, 8172) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 8276));
  FIELD_U32(v2, 8276) = off_60BC1450;
  FIELD_U32(v2, 8432) = 0;
  FIELD_U32(v2, 8436) = -1;
  EffectData_ctor((EffectData *)(v2 + 8380));
  FIELD_U32(v2, 8496) = 0;
  FIELD_U32(v2, 8500) = -1;
  EffectData_ctor((EffectData *)(v2 + 8444));
  FIELD_U32(v2, 8560) = 0;
  FIELD_U32(v2, 8564) = -1;
  EffectData_ctor((EffectData *)(v2 + 8508));
  FIELD_U8(v2, 8572) = 1;
  FIELD_U32(v2, 8120) = 0;
  FIELD_U32(v2, 8124) = 0;
  FIELD_U32(v2, 8128) = 0;
  FIELD_U8(v2, 8136) = 0;
  FIELD_U8(v2, 8137) = 0;
  FIELD_U8(v2, 8138) = 0;
  return v2;
}
