/* Actor_mid_guruguru_RDash_build
 * address: 0x6037EBF8   size: 256   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_mid_guruguru_RDash_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x30C0u);
  sub_602A8C84((Enemy *)v2, a1);
  *(_DWORD *)v2 = off_60BF303C;
  FIELD_U32(v2, 6324) = v2;
  FIELD_U32(v2, 6328) = 0;
  FIELD_U32(v2, 6332) = &ActorScaler_vtable;
  FIELD_U32(v2, 6336) = 1065353216;
  FIELD_U32(v2, 6340) = 1065353216;
  FIELD_U32(v2, 6344) = 1065353216;
  FIELD_U32(v2, 6348) = 1065353216;
  FIELD_U32(v2, 6352) = 0;
  FIELD_U32(v2, 6356) = 0;
  FIELD_U32(v2, 6360) = v2;
  FIELD_U8(v2, 6364) = 0;
  sub_602CAE24((ActiveCollider *)(v2 + 6368));
  sub_602CB994((_DWORD *)(v2 + 12448), v2 + 6324);
  FIELD_U32(v2, 12456) = 0;
  FIELD_U32(v2, 12460) = 0;
  FIELD_U32(v2, 12464) = off_60BF32D4;
  FIELD_U32(v2, 12468) = off_60BF3304;
  FIELD_U32(v2, 12472) = 0;
  FIELD_U32(v2, 640) = 0;
  return v2;
}
