/* Actor_Lemmy_boru_build
 * address: 0x600E1740   size: 176   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_Lemmy_boru_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1BE0u);
  sub_600E2950((StateActor *)v2, a1);
  *(_DWORD *)v2 = off_60BCCA78;
  FIELD_U8(v2, 6552) = 0;
  ActiveCollider_ctor((ActiveCollider *)(v2 + 6556));
  FIELD_U32(v2, 6860) = off_60BCCBA0;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 6864));
  FIELD_U32(v2, 6864) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 6968));
  FIELD_U32(v2, 6968) = off_60BC1450;
  FIELD_U32(v2, 7124) = 0;
  FIELD_U32(v2, 7128) = -1;
  EffectData_ctor((EffectData *)(v2 + 7072));
  return v2;
}
