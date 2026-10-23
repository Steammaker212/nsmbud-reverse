/* Actor_kirifuki_RDash_build
 * address: 0x6032DC8C   size: 284   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_kirifuki_RDash_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1BC8u);
  Enemy__ctor((Enemy *)v2, a1);
  *(_DWORD *)v2 = off_60BEC2D0;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 6368));
  FIELD_U32(v2, 6368) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 6472));
  FIELD_U32(v2, 6472) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 6576));
  FIELD_U32(v2, 6576) = off_60BC1450;
  FIELD_U8(v2, 6680) = 0;
  sub_6000BAC8((_DWORD *)(v2 + 6688), FIELD_U32(v2, 8));
  sub_602A40A0((_DWORD *)(v2 + 6724), FIELD_U32(v2, 8));
  ActiveCollider_ctor((ActiveCollider *)(v2 + 6760));
  FIELD_U32(v2, 7064) = off_60BEC2A0;
  FIELD_U32(v2, 7068) = &ActorScaler_vtable;
  FIELD_U32(v2, 7072) = 1065353216;
  FIELD_U32(v2, 7076) = 1065353216;
  FIELD_U32(v2, 7080) = 1065353216;
  FIELD_U32(v2, 7084) = 1065353216;
  FIELD_U32(v2, 7088) = 0;
  FIELD_U32(v2, 7092) = 0;
  FIELD_U32(v2, 7096) = v2;
  FIELD_U32(v2, 7104) = 0;
  FIELD_U32(v2, 7108) = 0;
  return v2;
}
