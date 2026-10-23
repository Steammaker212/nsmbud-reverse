/* Actor_kingukira_build
 * address: 0x60327860   size: 240   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_kingukira_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x157E0u);
  Enemy__ctor((Enemy *)v2, a1);
  *(_DWORD *)v2 = off_60BEB48C;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 6304));
  FIELD_U32(v2, 6304) = off_60BC1450;
  sub_60327B64(v2 + 6408);
  memset((void *)(v2 + 86880), 0, 82);
  ActiveCollider_ctor((ActiveCollider *)(v2 + 86964));
  FIELD_U32(v2, 87300) = 0;
  FIELD_U32(v2, 87304) = 0;
  FIELD_U32(v2, 87308) = 0;
  LightSource__ctor((LightSource *)(v2 + 87312));
  ActiveCollider_ctor((ActiveCollider *)(v2 + 87384));
  ActiveCollider_ctor((ActiveCollider *)(v2 + 87688));
  FIELD_U32(v2, 87992) = &ActorScaler_vtable;
  FIELD_U32(v2, 87996) = 1065353216;
  FIELD_U32(v2, 88000) = 1065353216;
  FIELD_U32(v2, 88004) = 1065353216;
  FIELD_U32(v2, 88008) = 1065353216;
  FIELD_U32(v2, 88012) = 0;
  FIELD_U32(v2, 88016) = 0;
  FIELD_U32(v2, 88020) = v2;
  FIELD_U32(v2, 88024) = off_60BEB740;
  return v2;
}
