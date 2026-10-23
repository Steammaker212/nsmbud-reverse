/* Actor_Unga_build
 * address: 0x6012F1E8   size: 308   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_Unga_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1A10u);
  MultiStateActor__ctor((MultiStateActor *)v2, a1);
  *(_DWORD *)v2 = off_60BD1D60;
  FIELD_U32(v2, 6104) = 0;
  FIELD_U32(v2, 6108) = 0;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 6112));
  FIELD_U32(v2, 6112) = off_60BC1450;
  FIELD_U32(v2, 6236) = 0;
  FIELD_U32(v2, 6240) = 0;
  FIELD_U8(v2, 6244) = 0;
  FIELD_U8(v2, 6232) = 0;
  FIELD_U32(v2, 6228) = 0;
  FIELD_U32(v2, 6224) = 0;
  FIELD_U32(v2, 6216) = 0;
  FIELD_U32(v2, 6220) = 0;
  FIELD_U32(v2, 6248) = &ActorScaler_vtable;
  FIELD_U32(v2, 6252) = 1065353216;
  FIELD_U32(v2, 6256) = 1065353216;
  FIELD_U32(v2, 6260) = 1065353216;
  FIELD_U32(v2, 6264) = 1065353216;
  FIELD_U32(v2, 6268) = 0;
  FIELD_U32(v2, 6272) = 0;
  FIELD_U32(v2, 6276) = v2;
  FIELD_U32(v2, 6280) = 1065353216;
  ActiveCollider_ctor((ActiveCollider *)(v2 + 6284));
  FIELD_U32(v2, 6588) = off_60BD1E58;
  FIELD_U32(v2, 6592) = 0;
  LightSource__ctor((LightSource *)(v2 + 6596));
  return v2;
}
