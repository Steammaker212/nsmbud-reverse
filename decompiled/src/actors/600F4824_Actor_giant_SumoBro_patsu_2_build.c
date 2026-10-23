/* Actor_giant_SumoBro_patsu_2_build
 * address: 0x600F4824   size: 164   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_giant_SumoBro_patsu_2_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1A30u);
  Enemy__ctor((Enemy *)v2, a1);
  *(_DWORD *)v2 = off_60BCED98;
  FIELD_U32(v2, 6300) = 0;
  FIELD_U8(v2, 6304) = 0;
  FIELD_U32(v2, 6308) = 0;
  FIELD_U32(v2, 6312) = 0;
  FIELD_U32(v2, 6316) = -1;
  memset(v2 + 6320, 0, 48);
  AnimationCtrl_ctor(v2 + 6368);
  ActiveCollider_ctor((ActiveCollider *)(v2 + 6396));
  FIELD_U32(v2, 6700) = off_60BCED68;
  return v2;
}
