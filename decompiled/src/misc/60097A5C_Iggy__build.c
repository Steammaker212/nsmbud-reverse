/* Iggy__build
 * address: 0x60097A5C   size: 436   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Iggy__build(ActorBuildInfo *a1)
{
  int v2; // r4
  _DWORD v4[19]; // [sp+4h] [bp-4Ch] BYREF

  v2 = operator_new(0x20F0u);
  KoopalingBase__ctor((Enemy *)v2, a1);
  *(_DWORD *)v2 = off_60BC7C48;
  FIELD_U32(v2, 8140) = 0;
  FIELD_U32(v2, 8144) = 0;
  FIELD_U32(v2, 8156) = 0;
  FIELD_U8(v2, 8160) = 0;
  FIELD_U8(v2, 8136) = 0;
  FIELD_U32(v2, 8132) = 0;
  FIELD_U32(v2, 8120) = 0;
  FIELD_U32(v2, 8124) = 0;
  FIELD_U32(v2, 8128) = 0;
  FIELD_U16(v2, 8204) = 1;
  FIELD_U8(v2, 8206) = 0;
  FIELD_U32(v2, 8220) = 0;
  FIELD_U32(v2, 8216) = 0;
  FIELD_U32(v2, 8212) = 0;
  FIELD_U32(v2, 8208) = 0;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 8224));
  FIELD_U32(v2, 8224) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 8328));
  FIELD_U32(v2, 8328) = off_60BC1450;
  FIELD_U32(v2, 8128) = 0;
  FIELD_U32(v2, 8124) = 0;
  FIELD_U32(v2, 8120) = 0;
  FIELD_U32(v2, 8148) = 0;
  FIELD_U32(v2, 8152) = 0;
  FIELD_U32(v2, 8164) = 0;
  FIELD_U32(v2, 8168) = 0;
  FIELD_U32(v2, 8172) = 0;
  FIELD_U32(v2, 8176) = 0;
  FIELD_U32(v2, 8180) = 0;
  FIELD_U32(v2, 8184) = 0;
  FIELD_U32(v2, 8188) = 0;
  FIELD_U32(v2, 0x2000) = 0;
  FIELD_U32(v2, 8196) = 3;
  FIELD_U32(v2, 8200) = 3;
  memset(&v4[1], 0, 40);
  v4[3] = Profile__get(0x319u);
  v4[0] = 3;
  sub_600080BC((_DWORD *)ActorMgr__instance, v4);
  return v2;
}
