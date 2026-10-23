/* Actor_keronpa_fire_build
 * address: 0x60137ECC   size: 240   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_keronpa_fire_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1A00u);
  StateActor_ctor((StateActor *)v2, a1);
  *(_DWORD *)v2 = off_60BD2620;
  sub_6000BAC8((_DWORD *)(v2 + 6100), FIELD_U32(v2, 8));
  FIELD_U32(v2, 6100) = off_60BD25EC;
  FIELD_U32(v2, 6144) = 0;
  FIELD_U8(v2, 6148) = 0;
  FIELD_U8(v2, 6142) = 0;
  FIELD_U16(v2, 6140) = 0;
  FIELD_U32(v2, 6136) = 0;
  FIELD_U8(v2, 6168) = 0;
  FIELD_U32(v2, 6164) = 0;
  FIELD_U32(v2, 6160) = 0;
  FIELD_U32(v2, 6156) = 0;
  FIELD_U32(v2, 6152) = 0;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 6172));
  FIELD_U32(v2, 6172) = off_60BC1450;
  LightSource__ctor((LightSource *)(v2 + 6276));
  ActiveCollider_ctor((ActiveCollider *)(v2 + 6348));
  FIELD_U32(v2, 6652) = off_60BD2740;
  return v2;
}
