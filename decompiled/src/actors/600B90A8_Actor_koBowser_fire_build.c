/* Actor_koBowser_fire_build
 * address: 0x600B90A8   size: 216   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_koBowser_fire_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1A68u);
  MultiStateActor__ctor((MultiStateActor *)v2, a1);
  *(_DWORD *)v2 = off_60BC99D0;
  FIELD_U32(v2, 6104) = off_60BC9B70;
  LightSource__ctor((LightSource *)(v2 + 6112));
  memset(v2 + 6184, 0, 40);
  EffectWrapper_ctor((EffectWrapper *)(v2 + 6224));
  FIELD_U32(v2, 6224) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 6328));
  FIELD_U32(v2, 6328) = off_60BC1450;
  FIELD_U32(v2, 6444) = 0;
  FIELD_U32(v2, 6440) = 0;
  FIELD_U32(v2, 6432) = 0;
  FIELD_U32(v2, 6436) = 0;
  FIELD_U32(v2, 6448) = -1;
  FIELD_U32(v2, 6452) = -1;
  ActiveCollider_ctor((ActiveCollider *)(v2 + 6456));
  return v2;
}
