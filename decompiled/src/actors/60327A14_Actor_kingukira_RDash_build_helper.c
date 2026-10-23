/* Actor_kingukira_RDash_build_helper
 * address: 0x60327A14   size: 320   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_kingukira_RDash_build_helper(int a1, ActorBuildInfo *a2)
{
  Enemy__ctor((Enemy *)a1, a2);
  *(_DWORD *)a1 = off_60BEB48C;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 6304));
  FIELD_U32(a1, 6304) = off_60BC1450;
  sub_60327B64(a1 + 6408);
  memset((void *)(a1 + 86880), 0, 82);
  ActiveCollider_ctor((ActiveCollider *)(a1 + 86964));
  FIELD_U32(a1, 87300) = 0;
  FIELD_U32(a1, 87304) = 0;
  FIELD_U32(a1, 87308) = 0;
  LightSource__ctor((LightSource *)(a1 + 87312));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 87384));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 87688));
  FIELD_U32(a1, 87992) = &ActorScaler_vtable;
  FIELD_U32(a1, 87996) = 1065353216;
  FIELD_U32(a1, 88000) = 1065353216;
  FIELD_U32(a1, 88004) = 1065353216;
  FIELD_U32(a1, 88008) = 1065353216;
  FIELD_U32(a1, 88012) = 0;
  FIELD_U32(a1, 88016) = 0;
  FIELD_U32(a1, 88020) = a1;
  FIELD_U32(a1, 88024) = off_60BEB740;
  return a1;
}
