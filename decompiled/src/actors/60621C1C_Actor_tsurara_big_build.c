/* Actor_tsurara_big_build
 * address: 0x60621C1C   size: 260   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_tsurara_big_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1D00u);
  sub_60620F98(v2, a1);
  *(_DWORD *)v2 = off_60C116C4;
  FIELD_U32(v2, 6652) = 0;
  FIELD_U32(v2, 6648) = 0;
  FIELD_U32(v2, 6640) = 0;
  FIELD_U32(v2, 6644) = 0;
  FIELD_U32(v2, 6656) = 2;
  sub_600A4300(v2 + 6664);
  FIELD_U32(v2, 7360) = 0;
  FIELD_U16(v2, 7364) = 0;
  FIELD_U8(v2, 7388) = 0;
  FIELD_U32(v2, 7384) = 0;
  FIELD_U32(v2, 7380) = 0;
  FIELD_U32(v2, 7376) = 0;
  FIELD_U32(v2, 7372) = 0;
  FIELD_U32(v2, 7368) = 0;
  FIELD_U32(v2, 7392) = &ActorScaler_vtable;
  FIELD_U32(v2, 7396) = 1065353216;
  FIELD_U32(v2, 7400) = 1065353216;
  FIELD_U32(v2, 7404) = 1065353216;
  FIELD_U32(v2, 7408) = 1065353216;
  FIELD_U32(v2, 7412) = 0;
  FIELD_U32(v2, 7416) = 0;
  FIELD_U32(v2, 7420) = v2;
  return v2;
}
