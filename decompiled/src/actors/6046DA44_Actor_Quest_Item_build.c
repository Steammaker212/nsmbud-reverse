/* Actor_Quest_Item_build
 * address: 0x6046DA44   size: 108   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_Quest_Item_build(ActorBuildInfo *a1)
{
  int v2; // r5

  v2 = operator_new(0x18A0u);
  StateActor_ctor((StateActor *)v2, a1);
  *(_DWORD *)v2 = off_60BFC3FC;
  FIELD_U32(v2, 6124) = 0;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 6144));
  FIELD_U32(v2, 6144) = off_60BC1450;
  PlayerLookTarget_ctor((PlayerLookTarget *)(v2 + 6248), FIELD_U32(v2, 8));
  return v2;
}
