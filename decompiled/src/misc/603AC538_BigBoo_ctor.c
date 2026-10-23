/* BigBoo_ctor
 * address: 0x603AC538   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall BigBoo_ctor(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1BE0u);
  Enemy__ctor((Enemy *)v2, a1);
  *(_DWORD *)v2 = BigBoo_vtable;
  FIELD_U32(v2, 6300) = 0;
  FIELD_U32(v2, 6304) = 0;
  FIELD_U32(v2, 6308) = 0;
  ActiveCollider_ctor((ActiveCollider *)(v2 + 6312));
  memset((void *)(v2 + 6616), 0, 68);
  FIELD_U8(v2, 6684) = 1;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 6688));
  FIELD_U32(v2, 6688) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 6792));
  FIELD_U32(v2, 6792) = off_60BC1450;
  FIELD_U32(v2, 6924) = 0;
  FIELD_U32(v2, 6920) = 0;
  FIELD_U32(v2, 6916) = 0;
  FIELD_U32(v2, 6912) = 0;
  FIELD_U32(v2, 6908) = 0;
  FIELD_U32(v2, 6904) = 0;
  FIELD_U32(v2, 6900) = 0;
  FIELD_U32(v2, 6896) = 0;
  sub_602A40A0((_DWORD *)(v2 + 6928), FIELD_U32(v2, 8));
  PlayerLookTarget_ctor((PlayerLookTarget *)(v2 + 6964), FIELD_U32(v2, 8));
  LightSource__ctor((LightSource *)(v2 + 7008));
  FIELD_U8(v2, 7080) = 0;
  FIELD_U8(v2, 7081) = 0;
  FIELD_U8(v2, 7082) = 1;
  FIELD_U32(v2, 7084) = 0;
  FIELD_U32(v2, 7088) = 0;
  FIELD_U32(v2, 7092) = 0;
  FIELD_U32(v2, 7096) = &ActorScaler_vtable;
  FIELD_U32(v2, 7100) = 1065353216;
  FIELD_U32(v2, 7104) = 1065353216;
  FIELD_U32(v2, 7108) = 1065353216;
  FIELD_U32(v2, 7112) = 1065353216;
  FIELD_U32(v2, 7116) = 0;
  FIELD_U32(v2, 7120) = 0;
  FIELD_U32(v2, 7124) = v2;
  FIELD_U32(v2, 7128) = off_60BF5114;
  return v2;
}
