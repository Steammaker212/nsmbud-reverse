/* Actor_pentaro_ice_build
 * address: 0x6036BFFC   size: 232   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_pentaro_ice_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1CA0u);
  CollisionActor__ctor((CollisionActor *)v2, a1);
  *(_DWORD *)v2 = &off_60BF0484;
  FIELD_U32(v2, 6064) = 0;
  RectCollider_ctor((RectCollider *)(v2 + 6072));
  FIELD_U32(v2, 6072) = off_60BC30D8;
  sub_602F2C84(v2 + 6728);
  FIELD_U32(v2, 7292) = 0;
  FIELD_U32(v2, 7296) = 0;
  FIELD_U32(v2, 7300) = 0;
  FIELD_U32(v2, 7304) = 390;
  FIELD_U8(v2, 7308) = 1;
  FIELD_U8(v2, 7310) = 0;
  FIELD_U8(v2, 7314) = 0;
  FIELD_U8(v2, 7313) = 0;
  FIELD_U8(v2, 7316) = 0;
  FIELD_U8(v2, 7315) = 0;
  FIELD_U8(v2, 7309) = 0;
  FIELD_U8(v2, 7312) = 0;
  FIELD_U8(v2, 7311) = 0;
  FIELD_U32(v2, 7320) = off_60BF054C;
  return v2;
}
