/* Actor_naname_build
 * address: 0x60270B04   size: 280   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_naname_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1D58u);
  MultiStateActor__ctor((MultiStateActor *)v2, a1);
  *(_DWORD *)v2 = off_60BDC824;
  RectCollider_ctor((RectCollider *)(v2 + 6112));
  FIELD_U32(v2, 6112) = off_60BC30D8;
  RectCollider_ctor((RectCollider *)(v2 + 6768));
  FIELD_U32(v2, 6768) = off_60BC30D8;
  FIELD_U32(v2, 7424) = 1065353216;
  FIELD_U32(v2, 7428) = 1065353216;
  FIELD_U32(v2, 7432) = 1065353216;
  FIELD_U32(v2, 7436) = 0;
  FIELD_U32(v2, 7440) = 0;
  FIELD_U32(v2, 7444) = 0;
  FIELD_U32(v2, 7448) = 1065353216;
  FIELD_U32(v2, 7452) = 1065353216;
  FIELD_U32(v2, 7500) = 0;
  FIELD_U32(v2, 7496) = 0;
  FIELD_U32(v2, 7492) = 0;
  FIELD_U32(v2, 7488) = 0;
  FIELD_U32(v2, 7484) = 0;
  FIELD_U32(v2, 7480) = 0;
  FIELD_U32(v2, 7472) = 0;
  FIELD_U32(v2, 7476) = 0;
  FIELD_U8(v2, 7504) = 1;
  FIELD_U32(v2, 7456) = 1065353216;
  FIELD_U32(v2, 7460) = 1065353216;
  FIELD_U32(v2, 7464) = 1065353216;
  FIELD_U32(v2, 7468) = 1065353216;
  return v2;
}
