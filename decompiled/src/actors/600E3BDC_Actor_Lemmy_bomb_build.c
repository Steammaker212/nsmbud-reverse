/* Actor_Lemmy_bomb_build
 * address: 0x600E3BDC   size: 220   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_Lemmy_bomb_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1BE8u);
  sub_600E2950((StateActor *)v2, a1);
  *(_DWORD *)v2 = off_60BCCCEC;
  FIELD_U8(v2, 6552) = 0;
  FIELD_U32(v2, 6556) = 0;
  FIELD_U32(v2, 6560) = 0;
  FIELD_U8(v2, 6564) = 1;
  FIELD_U32(v2, 6568) = 0;
  FIELD_U8(v2, 6572) = 0;
  FIELD_U32(v2, 6576) = 0;
  ActiveCollider_ctor((ActiveCollider *)(v2 + 6592));
  FIELD_U32(v2, 6896) = off_60BCCE14;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 6900));
  FIELD_U32(v2, 6900) = off_60BC1450;
  FIELD_U32(v2, 7056) = 0;
  FIELD_U32(v2, 7060) = -1;
  EffectData_ctor((EffectData *)(v2 + 7004));
  LightSource__ctor((LightSource *)(v2 + 7068));
  return v2;
}
