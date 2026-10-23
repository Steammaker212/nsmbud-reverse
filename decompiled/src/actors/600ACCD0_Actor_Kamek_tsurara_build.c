/* Actor_Kamek_tsurara_build
 * address: 0x600ACCD0   size: 192   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_Kamek_tsurara_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1D90u);
  MultiStateActor__ctor((MultiStateActor *)v2, a1);
  *(_DWORD *)v2 = off_60BC8EBC;
  FIELD_U32(v2, 6104) = 0;
  FIELD_U8(v2, 6108) = 0;
  sub_600A4300(v2 + 6112);
  ActiveCollider_ctor((ActiveCollider *)(v2 + 6768));
  memset(v2 + 7080, 0, 33);
  ActiveCollider_ctor((ActiveCollider *)(v2 + 7116));
  FIELD_U32(v2, 7420) = off_60BC8FE4;
  FIELD_U32(v2, 7476) = 0;
  FIELD_U32(v2, 7480) = -1;
  EffectData_ctor((EffectData *)(v2 + 7424));
  LightSource__ctor((LightSource *)(v2 + 7488));
  FIELD_U32(v2, 7560) = 0;
  return v2;
}
