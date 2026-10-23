/* Actor_Morton_build
 * address: 0x600EEECC   size: 192   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_Morton_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x21D8u);
  KoopalingBase__ctor((BossBase *)v2, a1);
  *(_DWORD *)v2 = off_60BCE3A4;
  ActiveCollider_ctor((ActiveCollider *)(v2 + 8120));
  FIELD_U32(v2, 8424) = 0;
  FIELD_U32(v2, 8432) = 0;
  FIELD_U32(v2, 8436) = 0;
  FIELD_U32(v2, 8440) = 0;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 8444));
  FIELD_U32(v2, 8444) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 8548));
  FIELD_U32(v2, 8548) = off_60BC1450;
  FIELD_U32(v2, 8652) = 0;
  FIELD_U8(v2, 8656) = 0;
  FIELD_U8(v2, 8429) = 0;
  FIELD_U8(v2, 8428) = 0;
  FIELD_U8(v2, 8431) = 0;
  FIELD_U8(v2, 8430) = 0;
  return v2;
}
