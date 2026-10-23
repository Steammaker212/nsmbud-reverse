/* Actor_pipe_water_build
 * address: 0x607041F4   size: 232   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_pipe_water_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1BC8u);
  Enemy__ctor((Enemy *)v2, a1);
  *(_DWORD *)v2 = off_60C20CB0;
  FIELD_U32(v2, 6316) = 0;
  FIELD_U8(v2, 6320) = 0;
  FIELD_U8(v2, 6312) = 0;
  FIELD_U32(v2, 6308) = 0;
  FIELD_U32(v2, 6304) = 0;
  FIELD_U32(v2, 6300) = 0;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 6324));
  FIELD_U32(v2, 6324) = off_60BC1450;
  FIELD_U8(v2, 6444) = 0;
  RectCollider_ctor((RectCollider *)(v2 + 6448));
  FIELD_U32(v2, 6448) = off_60BC30D8;
  FIELD_U32(v2, 6440) = 0;
  FIELD_U32(v2, 6436) = 0;
  FIELD_U32(v2, 6432) = 0;
  FIELD_U32(v2, 6428) = 0;
  FIELD_U8(v2, 7105) = 0;
  FIELD_U8(v2, 7104) = 0;
  FIELD_U8(v2, 7107) = 0;
  FIELD_U8(v2, 7106) = 0;
  return v2;
}
