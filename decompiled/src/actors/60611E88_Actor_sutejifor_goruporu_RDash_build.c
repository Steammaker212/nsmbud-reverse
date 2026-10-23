/* Actor_sutejifor_goruporu_RDash_build
 * address: 0x60611E88   size: 308   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_sutejifor_goruporu_RDash_build(ActorBuildInfo *a1)
{
  int v2; // r4
  char v3; // r0

  v2 = operator_new(0x1FA0u);
  MultiStateActor__ctor((MultiStateActor *)v2, a1);
  *(_DWORD *)v2 = off_60C0FF5C;
  RectCollider_ctor((RectCollider *)(v2 + 6104));
  FIELD_U32(v2, 6104) = off_60BC30D8;
  ActiveCollider_ctor((ActiveCollider *)(v2 + 6804));
  ActiveCollider_ctor((ActiveCollider *)(v2 + 7108));
  FIELD_U32(v2, 7536) = 0;
  FIELD_U16(v2, 7540) = 0;
  memset((void *)(v2 + 7412), 0, 60);
  FIELD_U32(v2, 7556) = 0;
  FIELD_U32(v2, 7552) = 0;
  FIELD_U32(v2, 7548) = 0;
  FIELD_U32(v2, 7544) = 0;
  FIELD_U32(v2, 7560) = 1121189888;
  FIELD_U8(v2, 7580) = 0;
  FIELD_U32(v2, 7576) = 0;
  FIELD_U32(v2, 7572) = 0;
  FIELD_U32(v2, 7568) = 0;
  FIELD_U32(v2, 7564) = 0;
  memset((void *)(v2 + 7584), 0, 44);
  FIELD_U32(v2, 7628) = -1;
  FIELD_U32(v2, 7632) = 0;
  sub_60959B54(v2 + 7640);
  v3 = FIELD_U8(v2, 86);
  FIELD_U8(v2, 6913) = v3;
  FIELD_U8(v2, 7217) = v3;
  FIELD_U32(v2, 76) |= 4u;
  return v2;
}
