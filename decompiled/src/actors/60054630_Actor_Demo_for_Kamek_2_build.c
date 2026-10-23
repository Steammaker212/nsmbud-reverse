/* Actor_Demo_for_Kamek_2_build
 * address: 0x60054630   size: 140   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_Demo_for_Kamek_2_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1948u);
  Enemy__ctor((Enemy *)v2, a1);
  *(_DWORD *)v2 = off_60BC3DE8;
  FIELD_U32(v2, 6316) = 0;
  FIELD_U32(v2, 6312) = 0;
  FIELD_U32(v2, 6308) = 0;
  FIELD_U32(v2, 6304) = 0;
  FIELD_U32(v2, 6300) = 0;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 6320));
  FIELD_U32(v2, 6320) = off_60BC1450;
  PlayerLookTarget_ctor((PlayerLookTarget *)(v2 + 6424), FIELD_U32(v2, 8));
  return v2;
}
