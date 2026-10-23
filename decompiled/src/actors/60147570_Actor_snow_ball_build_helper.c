/* Actor_snow_ball_build_helper
 * address: 0x60147570   size: 216   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_snow_ball_build_helper(int a1, ActorBuildInfo *a2)
{
  Enemy__ctor((Enemy *)a1, a2);
  *(_DWORD *)a1 = off_60BD3EF8;
  FIELD_U32(a1, 6300) = 0;
  FIELD_U32(a1, 6304) = 0;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 6308));
  FIELD_U32(a1, 6308) = off_60BC1450;
  FIELD_U32(a1, 6412) = 0;
  FIELD_U32(a1, 6416) = 0;
  FIELD_U8(a1, 6420) = 0;
  FIELD_U32(a1, 6424) = 0;
  FIELD_U32(a1, 6428) = 0;
  FIELD_U32(a1, 6432) = 1;
  FIELD_U8(a1, 6436) = 0;
  FIELD_U8(a1, 6437) = 0;
  FIELD_U32(a1, 6440) = 0;
  ActiveCollider_ctor((ActiveCollider *)(a1 + 6444));
  FIELD_U32(a1, 6748) = off_60BD41B4;
  FIELD_U32(a1, 6752) = 1065353216;
  FIELD_U32(a1, 6756) = 1065353216;
  return a1;
}
