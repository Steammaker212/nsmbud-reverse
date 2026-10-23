/* Actor_Battle_for_Item_build
 * address: 0x6045C3C0   size: 180   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_Battle_for_Item_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x18E8u);
  StateActor_ctor((StateActor *)v2, a1);
  *(_DWORD *)v2 = off_60BFB234;
  FIELD_U32(v2, 6100) = 0;
  FIELD_U32(v2, 6104) = 0;
  FIELD_U32(v2, 6108) = 0;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 6112));
  FIELD_U32(v2, 6112) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 6216));
  FIELD_U32(v2, 6216) = off_60BC1450;
  FIELD_U8(v2, 6320) = 0;
  FIELD_U8(v2, 6321) = 0;
  FIELD_U8(v2, 6323) = 0;
  FIELD_U32(v2, 6324) = 0;
  PlayerLookTarget_ctor((PlayerLookTarget *)(v2 + 6328), FIELD_U32(v2, 8));
  FIELD_U32(v2, 6356) = 0;
  return v2;
}
