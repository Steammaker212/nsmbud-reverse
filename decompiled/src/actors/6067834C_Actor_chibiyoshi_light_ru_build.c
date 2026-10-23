/* Actor_chibiyoshi_light_ru_build
 * address: 0x6067834C   size: 284   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_chibiyoshi_light_ru_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x2160u);
  BabyYoshiBaseProbably_ctor((CollisionActor *)v2, a1, 2);
  *(_DWORD *)v2 = off_60C1632C;
  FIELD_U32(v2, 8036) = 0;
  FIELD_U32(v2, 8048) = 1065353216;
  FIELD_U32(v2, 8040) = 1065353216;
  FIELD_U32(v2, 8044) = 1065353216;
  FIELD_U32(v2, 8052) = 0;
  LightSource__ctor((LightSource *)(v2 + 8056));
  FIELD_U32(v2, 8140) = 0;
  FIELD_U32(v2, 8136) = 0;
  FIELD_U32(v2, 8132) = 0;
  FIELD_U32(v2, 8128) = 0;
  ActiveCollider_ctor((ActiveCollider *)(v2 + 8144));
  FIELD_U32(v2, 8456) = 0;
  FIELD_U32(v2, 8452) = 0;
  FIELD_U32(v2, 8448) = 0;
  FIELD_U8(v2, 8460) = 0;
  FIELD_U32(v2, 8516) = 0;
  FIELD_U32(v2, 8520) = -1;
  EffectData_ctor((EffectData *)(v2 + 8464));
  FIELD_U8(v2, 8528) = 0;
  FIELD_U32(v2, 8532) = 1065353216;
  FIELD_U32(v2, 8536) = 0;
  return v2;
}
