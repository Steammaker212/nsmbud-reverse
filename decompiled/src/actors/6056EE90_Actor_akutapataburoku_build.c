/* Actor_akutapataburoku_build
 * address: 0x6056EE90   size: 324   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_akutapataburoku_build(int a1)
{
  int v2; // r4

  v2 = operator_new(0x1D60u);
  BlockBase__ctor(v2, a1);
  *(_DWORD *)v2 = &off_60C02C94;
  memset((void *)(v2 + 7396), 0, 36);
  FIELD_U32(v2, 7432) = 1;
  FIELD_U8(v2, 7436) = 0;
  FIELD_U32(v2, 7440) = &ActorScaler_vtable;
  FIELD_U32(v2, 7444) = 1065353216;
  FIELD_U32(v2, 7448) = 1065353216;
  FIELD_U32(v2, 7452) = 1065353216;
  FIELD_U32(v2, 7456) = 1065353216;
  FIELD_U32(v2, 7460) = 0;
  FIELD_U32(v2, 7464) = 0;
  FIELD_U32(v2, 7468) = v2;
  FIELD_U32(v2, 7472) = off_60C02E4C;
  FIELD_U32(v2, 7476) = &off_60BC0450;
  FIELD_U32(v2, 7480) = &off_60BC0460;
  FIELD_U32(v2, 7484) = &off_60BC0484;
  FIELD_U32(v2, 7488) = v2;
  FIELD_U32(v2, 7492) = 0;
  StateMgr_ctor((StateMgr *)(v2 + 7496), (StateExecuter *)(v2 + 7480), &NullState);
  FIELD_U32(v2, 7512) = 0;
  FIELD_U32(v2, 7476) = &off_60BC0440;
  return v2;
}
