/* Actor_mameGoomba_build
 * address: 0x6025142C   size: 360   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_mameGoomba_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1AA0u);
  Enemy__ctor((Enemy *)v2, a1);
  *(_DWORD *)v2 = off_60BDA53C;
  FIELD_U32(v2, 6352) = 0;
  FIELD_U8(v2, 6356) = 0;
  FIELD_U32(v2, 6360) = 0;
  FIELD_U8(v2, 6364) = 0;
  memset((void *)(v2 + 6300), 0, 50);
  FIELD_U32(v2, 6368) = 1065353216;
  FIELD_U32(v2, 6372) = 1053609165;
  FIELD_U32(v2, 6376) = 1069547520;
  FIELD_U32(v2, 6380) = 1075838976;
  FIELD_U32(v2, 6384) = 1114636288;
  FIELD_U32(v2, 6388) = 1090519040;
  FIELD_U32(v2, 6392) = 1077936128;
  sub_602A8564(v2 + 6396, FIELD_U32(v2, 8));
  sub_602A40A0(v2 + 6432, FIELD_U32(v2, 8));
  ActiveCollider_ctor((ActiveCollider *)(v2 + 6468));
  FIELD_U8(v2, 6772) = 0;
  FIELD_U8(v2, 6773) = 0;
  FIELD_U32(v2, 6776) = &ActorScaler_vtable;
  FIELD_U32(v2, 6780) = 1065353216;
  FIELD_U32(v2, 6784) = 1065353216;
  FIELD_U32(v2, 6788) = 1065353216;
  FIELD_U32(v2, 6792) = 1065353216;
  FIELD_U32(v2, 6796) = 0;
  FIELD_U32(v2, 6800) = 0;
  FIELD_U32(v2, 6804) = v2;
  FIELD_U32(v2, 6808) = off_60BDA7E0;
  return v2;
}
