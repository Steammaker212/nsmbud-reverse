/* SumoBrosBoss__build
 * address: 0x60028FBC   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SumoBrosBoss__build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1D18u);
  BossBase__ctor((BossBase *)v2, a1);
  *(_DWORD *)v2 = off_60BC1B58;
  FIELD_U32(v2, 7092) = 5;
  FIELD_U32(v2, 7096) = 0;
  FIELD_U32(v2, 7100) = 0;
  FIELD_U32(v2, 7104) = 0;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 7108));
  FIELD_U32(v2, 7108) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 7212));
  FIELD_U32(v2, 7212) = off_60BC1450;
  memset((void *)(v2 + 7316), 0, 64);
  FIELD_U32(v2, 7380) = 1065353216;
  memset(v2 + 7384, 0, 42);
  FIELD_U8(v2, 7426) = -1;
  FIELD_U8(v2, 7440) = 0;
  FIELD_U8(v2, 7441) = 0;
  FIELD_U8(v2, 7442) = 0;
  FIELD_U8(v2, 7432) = 0;
  FIELD_U8(v2, 7435) = 0;
  FIELD_U8(v2, 7428) = 0;
  FIELD_U8(v2, 7431) = 0;
  FIELD_U8(v2, 7434) = 0;
  FIELD_U8(v2, 7433) = 0;
  FIELD_U8(v2, 7427) = 0;
  FIELD_U8(v2, 7430) = 0;
  FIELD_U8(v2, 7429) = 0;
  FIELD_U32(v2, 6672) = 2;
  FIELD_U8(v2, 7437) = 0;
  FIELD_U8(v2, 7436) = 0;
  FIELD_U8(v2, 7439) = 0;
  FIELD_U8(v2, 7438) = 0;
  return v2;
}
