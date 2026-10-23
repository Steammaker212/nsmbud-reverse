/* Actor_seichin_build
 * address: 0x6038E2E8   size: 336   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_seichin_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1BB8u);
  Enemy__ctor((Enemy *)v2, a1);
  *(_DWORD *)v2 = off_60BF3D50;
  FIELD_U32(v2, 6300) = 0;
  FIELD_U32(v2, 6304) = 0;
  FIELD_U8(v2, 6308) = 0;
  memset(v2 + 6312, 0, 40);
  FIELD_U8(v2, 6352) = 1;
  FIELD_U8(v2, 6353) = 1;
  FIELD_U32(v2, 6372) = 0;
  FIELD_U8(v2, 6368) = 0;
  FIELD_U32(v2, 6364) = 0;
  FIELD_U32(v2, 6360) = 0;
  FIELD_U32(v2, 6356) = 0;
  sub_602A8564((_DWORD *)(v2 + 6376), FIELD_U32(v2, 8));
  sub_602A40A0((_DWORD *)(v2 + 6412), FIELD_U32(v2, 8));
  FIELD_U32(v2, 6412) = off_60BF4024;
  FIELD_U32(v2, 6448) = v2;
  ActiveCollider_ctor((ActiveCollider *)(v2 + 6452));
  ActiveCollider_ctor((ActiveCollider *)(v2 + 6756));
  FIELD_U32(v2, 7060) = off_60BF4048;
  FIELD_U32(v2, 7064) = &ActorScaler_vtable;
  FIELD_U32(v2, 7068) = 1065353216;
  FIELD_U32(v2, 7072) = 1065353216;
  FIELD_U32(v2, 7076) = 1065353216;
  FIELD_U32(v2, 7080) = 1065353216;
  FIELD_U32(v2, 7084) = 0;
  FIELD_U32(v2, 7088) = 0;
  FIELD_U32(v2, 7092) = v2;
  return v2;
}
