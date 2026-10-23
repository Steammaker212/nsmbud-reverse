/* Actor_keronpa_fire_RDashfor_build_helper
 * address: 0x60138350   size: 224   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_keronpa_fire_RDashfor_build_helper(int a1, ActorBuildInfo *a2)
{
  StateActor_ctor((StateActor *)a1, a2);
  *(_DWORD *)a1 = off_60BD2620;
  sub_6000BAC8((_DWORD *)(a1 + 6100), FIELD_U32(a1, 8));
  FIELD_U32(a1, 6100) = off_60BD25EC;
  FIELD_U32(a1, 6144) = 0;
  FIELD_U8(a1, 6148) = 0;
  FIELD_U8(a1, 6142) = 0;
  FIELD_U16(a1, 6140) = 0;
  FIELD_U32(a1, 6136) = 0;
  FIELD_U8(a1, 6168) = 0;
  FIELD_U32(a1, 6164) = 0;
  FIELD_U32(a1, 6160) = 0;
  FIELD_U32(a1, 6156) = 0;
  FIELD_U32(a1, 6152) = 0;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 6172));
  FIELD_U32(a1, 6172) = off_60BC1450;
  LightSource__ctor((LightSource *)(a1 + 6276));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 6348));
  FIELD_U32(a1, 6652) = off_60BD2740;
  return a1;
}
