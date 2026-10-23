/* Actor_Wendy_ringu_build
 * address: 0x6012D8B0   size: 188   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_Wendy_ringu_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x2EB8u);
  StateActor_ctor((StateActor *)v2, a1);
  *(_DWORD *)v2 = off_60BD1C1C;
  FIELD_U32(v2, 6100) = 0;
  FIELD_U8(v2, 6104) = 0;
  ActorCollisionMgr_ctor((_DWORD *)(v2 + 6112));
  FIELD_U32(v2, 11464) = 0;
  FIELD_U8(v2, 11468) = 0;
  FIELD_U32(v2, 11472) = 1;
  ActiveCollider_ctor((ActiveCollider *)(v2 + 11476));
  FIELD_U32(v2, 11780) = off_60BD1D10;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 11784));
  FIELD_U32(v2, 11784) = off_60BC1450;
  LightSource__ctor((LightSource *)(v2 + 11888));
  return v2;
}
