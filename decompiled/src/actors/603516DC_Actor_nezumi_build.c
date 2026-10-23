/* Actor_nezumi_build
 * address: 0x603516DC   size: 316   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_nezumi_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1938u);
  Enemy__ctor((Enemy *)v2, a1);
  *(_DWORD *)v2 = off_60BEE930;
  FIELD_U16(v2, 6328) = 0;
  FIELD_U8(v2, 6330) = 0;
  FIELD_U32(v2, 6300) = 0;
  FIELD_U32(v2, 6304) = 0;
  FIELD_U32(v2, 6308) = 0;
  FIELD_U32(v2, 6312) = 0;
  FIELD_U32(v2, 6316) = 0;
  sub_602A8564((_DWORD *)(v2 + 6332), FIELD_U32(v2, 8));
  sub_602A40A0((_DWORD *)(v2 + 6368), FIELD_U32(v2, 8));
  FIELD_U8(v2, 6404) = 0;
  FIELD_U32(v2, 6408) = 0;
  FIELD_U8(v2, 6416) = 0;
  FIELD_U32(v2, 6420) = &ActorScaler_vtable;
  FIELD_U32(v2, 6424) = 1065353216;
  FIELD_U32(v2, 6428) = 1065353216;
  FIELD_U32(v2, 6432) = 1065353216;
  FIELD_U32(v2, 6436) = 1065353216;
  FIELD_U32(v2, 6440) = 0;
  FIELD_U32(v2, 6444) = 0;
  FIELD_U32(v2, 6448) = v2;
  FIELD_U32(v2, 6452) = off_60BEEBDC;
  FIELD_U32(v2, 6324) = 0;
  FIELD_U32(v2, 6320) = 0;
  FIELD_U32(v2, 6316) = 0;
  FIELD_U32(v2, 6312) = 0;
  FIELD_U32(v2, 6308) = 0;
  FIELD_U32(v2, 6304) = 0;
  return v2;
}
