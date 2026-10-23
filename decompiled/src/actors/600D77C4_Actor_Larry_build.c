/* Actor_Larry_build
 * address: 0x600D77C4   size: 300   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_Larry_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x2078u);
  KoopalingBase__ctor((BossBase *)v2, a1);
  *(_DWORD *)v2 = off_60BCBC50;
  FIELD_U8(v2, 8144) = 0;
  FIELD_U8(v2, 8145) = 0;
  FIELD_U32(v2, 8148) = 0;
  FIELD_U8(v2, 8152) = 0;
  FIELD_U8(v2, 8153) = 0;
  FIELD_U32(v2, 8156) = 0;
  FIELD_U8(v2, 8160) = 0;
  FIELD_U32(v2, 8164) = 0;
  FIELD_U8(v2, 8168) = 1;
  FIELD_U8(v2, 8169) = 0;
  FIELD_U32(v2, 8188) = 0;
  FIELD_U32(v2, 0x2000) = 0;
  FIELD_U16(v2, 8184) = 0;
  FIELD_U32(v2, 8180) = 0;
  FIELD_U32(v2, 8172) = 0;
  FIELD_U32(v2, 8176) = 0;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 8196));
  FIELD_U32(v2, 8196) = off_60BC1450;
  FIELD_U32(v2, 8300) = 0;
  FIELD_U32(v2, 8304) = 0;
  FIELD_U8(v2, 8308) = 0;
  FIELD_U32(v2, 8156) = 0;
  FIELD_U32(v2, 8140) = 0;
  FIELD_U32(v2, 8136) = 0;
  FIELD_U32(v2, 8132) = 0;
  FIELD_U32(v2, 8128) = 0;
  FIELD_U32(v2, 8124) = 0;
  FIELD_U32(v2, 8120) = 0;
  return v2;
}
