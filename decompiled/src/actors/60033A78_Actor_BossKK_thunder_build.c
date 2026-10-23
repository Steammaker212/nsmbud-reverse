/* Actor_BossKK_thunder_build
 * address: 0x60033A78   size: 188   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_BossKK_thunder_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1B00u);
  MultiStateActor__ctor((MultiStateActor *)v2, a1);
  *(_DWORD *)v2 = off_60BC2648;
  FIELD_U32(v2, 6104) = off_60BC278C;
  MovingSoundActor_ctor((MovingSoundActor *)(v2 + 6108), 0, 1);
  FIELD_U32(v2, 6108) = off_60BC19B4;
  LightSource__ctor((LightSource *)(v2 + 6416));
  EffectWrapper_ctor((EffectWrapper *)(v2 + 6488));
  FIELD_U32(v2, 6488) = off_60BC1450;
  ActiveCollider_ctor((ActiveCollider *)(v2 + 6592));
  FIELD_U16(v2, 6904) = 0;
  FIELD_U32(v2, 6896) = 0;
  FIELD_U32(v2, 6900) = 0;
  return v2;
}
