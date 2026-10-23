/* Actor_kosufor_akutapataburoku_build
 * address: 0x60570550   size: 360   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_kosufor_akutapataburoku_build(int a1)
{
  int v2; // r4

  v2 = operator_new(0x1D58u);
  BlockBase__ctor(v2, a1);
  *(_DWORD *)v2 = &off_60C02E90;
  FIELD_U32(v2, 7424) = 0;
  FIELD_U32(v2, 7420) = 0;
  FIELD_U32(v2, 7416) = 0;
  FIELD_U32(v2, 7412) = 0;
  FIELD_U32(v2, 7408) = 0;
  FIELD_U32(v2, 7404) = 0;
  FIELD_U32(v2, 7396) = 0;
  FIELD_U32(v2, 7400) = 0;
  FIELD_U32(v2, 7428) = 1;
  FIELD_U32(v2, 7432) = &ActorScaler_vtable;
  FIELD_U32(v2, 7436) = 1065353216;
  FIELD_U32(v2, 7440) = 1065353216;
  FIELD_U32(v2, 7444) = 1065353216;
  FIELD_U32(v2, 7448) = 1065353216;
  FIELD_U32(v2, 7452) = 0;
  FIELD_U32(v2, 7456) = 0;
  FIELD_U32(v2, 7460) = v2;
  FIELD_U32(v2, 7464) = off_60C03048;
  FIELD_U32(v2, 7468) = &off_60BC0450;
  FIELD_U32(v2, 7472) = &off_60BC0460;
  FIELD_U32(v2, 7476) = &off_60BC0484;
  FIELD_U32(v2, 7480) = v2;
  FIELD_U32(v2, 7484) = 0;
  StateMgr_ctor((StateMgr *)(v2 + 7488), (StateExecuter *)(v2 + 7472), &NullState);
  FIELD_U32(v2, 7504) = 0;
  FIELD_U32(v2, 7468) = &off_60BC0440;
  return v2;
}
