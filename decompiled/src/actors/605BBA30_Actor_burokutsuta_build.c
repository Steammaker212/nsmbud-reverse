/* Actor_burokutsuta_build
 * address: 0x605BBA30   size: 292   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_burokutsuta_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1C10u);
  MultiStateActor__ctor((MultiStateActor *)v2, a1);
  *(_DWORD *)v2 = off_60C09818;
  RectCollider_ctor((RectCollider *)(v2 + 6104));
  FIELD_U32(v2, 6104) = off_60BC30D8;
  FIELD_U32(v2, 6784) = 0;
  FIELD_U32(v2, 6772) = 0;
  FIELD_U32(v2, 6768) = 0;
  FIELD_U32(v2, 6760) = 0;
  FIELD_U32(v2, 6764) = 0;
  FIELD_U32(v2, 6788) = 1;
  FIELD_U32(v2, 6828) = 0;
  FIELD_U16(v2, 6832) = 0;
  memset(v2 + 6792, 0, 33);
  ActiveCollider_ctor((ActiveCollider *)(v2 + 6836));
  FIELD_U32(v2, 7144) = 1065353216;
  FIELD_U32(v2, 7148) = 1065353216;
  FIELD_U32(v2, 7152) = 1065353216;
  FIELD_U32(v2, 7156) = 1065353216;
  FIELD_U32(v2, 7160) = 0;
  FIELD_U32(v2, 7164) = 0;
  FIELD_U32(v2, 7168) = v2;
  FIELD_U32(v2, 7140) = &off_60C09914;
  FIELD_U32(v2, 7172) = 0;
  FIELD_U32(v2, 7176) = off_60C098E4;
  return v2;
}
