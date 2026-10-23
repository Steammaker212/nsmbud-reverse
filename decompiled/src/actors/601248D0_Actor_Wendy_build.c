/* Actor_Wendy_build
 * address: 0x601248D0   size: 244   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_Wendy_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x2168u);
  KoopalingBase__ctor((BossBase *)v2, a1);
  *(_DWORD *)v2 = off_60BD1120;
  FIELD_U32(v2, 8120) = 0;
  FIELD_U32(v2, 8124) = 2;
  FIELD_U8(v2, 8128) = 0;
  FIELD_U32(v2, 8132) = 0;
  FIELD_U8(v2, 8136) = 0;
  FIELD_U8(v2, 8137) = 0;
  FIELD_U32(v2, 8228) = 0;
  memset((void *)(v2 + 8140), 0, 36);
  FIELD_U32(v2, 8232) = -1;
  EffectData_ctor((EffectData *)(v2 + 8176));
  EffectWrapper_ctor((EffectWrapper *)(v2 + 8240));
  FIELD_U32(v2, 8240) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 8344));
  FIELD_U32(v2, 8344) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 8448));
  FIELD_U32(v2, 8448) = off_60BC1450;
  FIELD_U32(v2, 8148) = 0;
  FIELD_U32(v2, 8152) = 0;
  FIELD_U32(v2, 8156) = 0;
  return v2;
}
