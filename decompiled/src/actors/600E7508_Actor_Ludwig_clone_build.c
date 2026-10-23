/* Actor_Ludwig_clone_build
 * address: 0x600E7508   size: 468   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_Ludwig_clone_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x20A8u);
  KoopalingBase__ctor((BossBase *)v2, a1);
  *(_DWORD *)v2 = off_60BCCE64;
  FIELD_U8(v2, 8120) = 0;
  FIELD_U8(v2, 8121) = 0;
  FIELD_U32(v2, 8124) = 0;
  FIELD_U32(v2, 8128) = 0;
  FIELD_U8(v2, 8132) = 0;
  FIELD_U32(v2, 8168) = 0;
  FIELD_U8(v2, 8184) = 0;
  FIELD_U8(v2, 8185) = 0;
  FIELD_U32(v2, 8188) = 0;
  FIELD_U32(v2, 0x2000) = 0;
  FIELD_U32(v2, 8196) = 0;
  FIELD_U32(v2, 8236) = 0;
  FIELD_U32(v2, 8160) = 0;
  FIELD_U32(v2, 8156) = 0;
  FIELD_U32(v2, 8152) = 0;
  FIELD_U32(v2, 8148) = 0;
  FIELD_U32(v2, 8144) = 0;
  FIELD_U32(v2, 8140) = 0;
  FIELD_U32(v2, 8136) = 0;
  FIELD_U8(v2, 8232) = 0;
  FIELD_U32(v2, 8228) = 0;
  FIELD_U32(v2, 8224) = 0;
  FIELD_U32(v2, 8220) = 0;
  FIELD_U32(v2, 8216) = 0;
  FIELD_U32(v2, 8212) = 0;
  FIELD_U32(v2, 8208) = 0;
  FIELD_U32(v2, 8204) = 0;
  LightSource__ctor((LightSource *)(v2 + 8264));
  FIELD_U32(v2, 8172) = 0;
  FIELD_U32(v2, 8176) = 0;
  FIELD_U32(v2, 8180) = 0;
  FIELD_U8(v2, 8201) = 0;
  FIELD_U8(v2, 8200) = 0;
  FIELD_U8(v2, 8203) = 0;
  FIELD_U8(v2, 8202) = 0;
  FIELD_U32(v2, 8260) = 0;
  FIELD_U32(v2, 8256) = 0;
  FIELD_U32(v2, 8252) = 0;
  FIELD_U32(v2, 8248) = 0;
  FIELD_U32(v2, 8244) = 0;
  FIELD_U32(v2, 8240) = 0;
  *(_DWORD *)v2 = off_60BCDBD4;
  FIELD_U32(v2, 8344) = 0;
  FIELD_U8(v2, 8348) = 0;
  FIELD_U8(v2, 8349) = 1;
  FIELD_U32(v2, 8352) = 0;
  FIELD_U8(v2, 8356) = 0;
  FIELD_U32(v2, 8336) = 0;
  FIELD_U32(v2, 8340) = 0;
  return v2;
}
