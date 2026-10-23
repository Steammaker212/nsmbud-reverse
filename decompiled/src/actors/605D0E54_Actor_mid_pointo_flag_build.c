/* Actor_mid_pointo_flag_build
 * address: 0x605D0E54   size: 148   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_mid_pointo_flag_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1B48u);
  StateActor_ctor((StateActor *)v2, a1);
  *(_DWORD *)v2 = off_60C0AF80;
  FIELD_U32(v2, 6100) = 0;
  ActiveCollider_ctor((ActiveCollider *)(v2 + 6104));
  FIELD_U8(v2, 6408) = 0;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 6412));
  FIELD_U32(v2, 6412) = off_60BC1450;
  FIELD_U32(v2, 6516) = 0;
  sub_60959B54(v2 + 6520);
  FIELD_U8(v2, 6976) = -1;
  return v2;
}
