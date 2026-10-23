/* Actor_seichin_snow_ball_build
 * address: 0x601468D0   size: 232   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_seichin_snow_ball_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1A68u);
  Enemy__ctor((Enemy *)v2, a1);
  *(_DWORD *)v2 = off_60BD3EF8;
  FIELD_U32(v2, 6300) = 0;
  FIELD_U32(v2, 6304) = 0;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 6308));
  FIELD_U32(v2, 6308) = off_60BC1450;
  FIELD_U32(v2, 6412) = 0;
  FIELD_U32(v2, 6416) = 0;
  FIELD_U8(v2, 6420) = 0;
  FIELD_U32(v2, 6424) = 0;
  FIELD_U32(v2, 6428) = 0;
  FIELD_U32(v2, 6432) = 1;
  FIELD_U8(v2, 6436) = 0;
  FIELD_U8(v2, 6437) = 0;
  FIELD_U32(v2, 6440) = 0;
  ActiveCollider_ctor((ActiveCollider *)(v2 + 6444));
  FIELD_U32(v2, 6748) = off_60BD41B4;
  FIELD_U32(v2, 6752) = 1065353216;
  FIELD_U32(v2, 6756) = 1065353216;
  return v2;
}
