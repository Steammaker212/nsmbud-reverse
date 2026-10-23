/* Actor_ice_build
 * address: 0x602E70A0   size: 636   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_ice_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1D78u);
  StateActor_ctor((StateActor *)v2, a1);
  *(_DWORD *)v2 = off_60BE711C;
  RectCollider_ctor((RectCollider *)(v2 + 6104));
  FIELD_U32(v2, 6104) = off_60BC30D8;
  FIELD_U32(v2, 6760) = off_60BE7590;
  FIELD_U8(v2, 6780) = 0;
  FIELD_U32(v2, 6776) = 0;
  FIELD_U32(v2, 6772) = 0;
  FIELD_U32(v2, 6764) = 0;
  FIELD_U32(v2, 6768) = 0;
  sub_602F2C84(v2 + 6784);
  FIELD_U32(v2, 7348) = 0;
  FIELD_U32(v2, 7352) = 1065353216;
  FIELD_U32(v2, 7356) = 1065353216;
  FIELD_U32(v2, 7360) = 1065353216;
  FIELD_U8(v2, 7364) = -1;
  FIELD_U32(v2, 7396) = 0;
  FIELD_U32(v2, 7392) = 0;
  FIELD_U32(v2, 7388) = 0;
  FIELD_U32(v2, 7384) = 0;
  FIELD_U32(v2, 7380) = 0;
  FIELD_U32(v2, 7376) = 0;
  FIELD_U32(v2, 7372) = 0;
  FIELD_U32(v2, 7368) = 0;
  FIELD_U32(v2, 7400) = 1101004800;
  FIELD_U32(v2, 7404) = 1101004800;
  FIELD_U32(v2, 7408) = 1101004800;
  FIELD_U32(v2, 7412) = 1094713344;
  FIELD_U32(v2, 7416) = 1094713344;
  FIELD_U32(v2, 7448) = 0;
  FIELD_U32(v2, 7444) = 0;
  FIELD_U32(v2, 7440) = 0;
  FIELD_U32(v2, 7436) = 0;
  FIELD_U32(v2, 7432) = 0;
  FIELD_U32(v2, 7428) = 0;
  FIELD_U32(v2, 7424) = 0;
  FIELD_U32(v2, 7420) = 0;
  FIELD_U32(v2, 7452) = 100663296;
  FIELD_U32(v2, 7456) = &off_60BE7210;
  FIELD_U32(v2, 7460) = &off_60BE721C;
  FIELD_U32(v2, 7464) = 0;
  FIELD_U32(v2, 7480) = 0;
  FIELD_U32(v2, 7496) = v2 + 7456;
  FIELD_U32(v2, 7500) = &dword_60C923A4;
  FIELD_U8(v2, 7530) = 0;
  FIELD_U16(v2, 7528) = 0;
  FIELD_U32(v2, 7524) = 0;
  FIELD_U32(v2, 7520) = 0;
  FIELD_U8(v2, 7531) = 2;
  FIELD_U16(v2, 7536) = 0;
  FIELD_U32(v2, 7532) = 0;
  FIELD_U8(v2, 7538) = 32;
  FIELD_U32(v2, 7468) = 0;
  FIELD_U32(v2, 7472) = 0;
  FIELD_U32(v2, 7476) = 0;
  FIELD_U32(v2, 7484) = 0;
  FIELD_U32(v2, 7488) = 0;
  FIELD_U32(v2, 7492) = 0;
  FIELD_U8(v2, 7504) = 0;
  FIELD_U32(v2, 7508) = 0;
  FIELD_U32(v2, 7512) = 0;
  FIELD_U32(v2, 7516) = 0;
  return v2;
}
