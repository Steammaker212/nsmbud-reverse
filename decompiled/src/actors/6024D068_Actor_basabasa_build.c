/* Actor_basabasa_build
 * address: 0x6024D068   size: 376   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_basabasa_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x2F90u);
  Enemy__ctor((Enemy *)v2, a1);
  *(_DWORD *)v2 = off_60BDA23C;
  FIELD_U32(v2, 6356) = 0;
  FIELD_U8(v2, 6360) = 0;
  memset((void *)(v2 + 6300), 0, 33);
  FIELD_U8(v2, 6352) = 0;
  FIELD_U32(v2, 6348) = 0;
  FIELD_U32(v2, 6344) = 0;
  FIELD_U32(v2, 6340) = 0;
  FIELD_U32(v2, 6336) = 0;
  FIELD_U32(v2, 6380) = 0;
  FIELD_U32(v2, 6376) = 0;
  FIELD_U32(v2, 6372) = 0;
  FIELD_U32(v2, 6368) = 0;
  FIELD_U32(v2, 6364) = 0;
  sub_602A8564(v2 + 6384, FIELD_U32(v2, 8));
  sub_602A40A0(v2 + 6420, FIELD_U32(v2, 8));
  FIELD_U16(v2, 6456) = 0;
  FIELD_U8(v2, 6458) = 0;
  sub_601531B4((CollisionMgr *)(v2 + 6464));
  FIELD_U32(v2, 11816) = 0;
  ActiveCollider_ctor((ActiveCollider *)(v2 + 11820));
  FIELD_U8(v2, 12124) = 0;
  FIELD_U32(v2, 12128) = 0;
  FIELD_U32(v2, 12132) = 0;
  FIELD_U32(v2, 12136) = 0;
  FIELD_U32(v2, 12140) = &ActorScaler_vtable;
  FIELD_U32(v2, 12144) = 1065353216;
  FIELD_U32(v2, 12148) = 1065353216;
  FIELD_U32(v2, 12152) = 1065353216;
  FIELD_U32(v2, 12156) = 1065353216;
  FIELD_U32(v2, 12160) = 0;
  FIELD_U32(v2, 12164) = 0;
  FIELD_U32(v2, 12168) = v2;
  FIELD_U32(v2, 12172) = off_60BDA4E4;
  return v2;
}
