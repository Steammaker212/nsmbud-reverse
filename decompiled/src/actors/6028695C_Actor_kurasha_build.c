/* Actor_kurasha_build
 * address: 0x6028695C   size: 316   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_kurasha_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x19D8u);
  Enemy__ctor((Enemy *)v2, a1);
  *(_DWORD *)v2 = off_60BDE058;
  FIELD_U32(v2, 6312) = 0;
  FIELD_U32(v2, 6308) = 0;
  FIELD_U32(v2, 6304) = 0;
  FIELD_U32(v2, 6300) = 0;
  sub_6000BAC8((_DWORD *)(v2 + 6316), FIELD_U32(v2, 8));
  FIELD_U32(v2, 6352) = &ActorScaler_vtable;
  FIELD_U32(v2, 6356) = 1065353216;
  FIELD_U32(v2, 6360) = 1065353216;
  FIELD_U32(v2, 6364) = 1065353216;
  FIELD_U32(v2, 6368) = 1065353216;
  FIELD_U32(v2, 6372) = 0;
  FIELD_U32(v2, 6376) = 0;
  FIELD_U32(v2, 6380) = v2;
  FIELD_U32(v2, 6384) = off_60BDE308;
  FIELD_U32(v2, 6440) = 0;
  FIELD_U32(v2, 6444) = -1;
  EffectData_ctor((EffectData *)(v2 + 6388));
  EffectWrapper_ctor((EffectWrapper *)(v2 + 6452));
  FIELD_U32(v2, 6452) = off_60BC1450;
  memset((void *)(v2 + 6556), 0, 50);
  FIELD_U8(v2, 6606) = -1;
  FIELD_U8(v2, 6607) = 0;
  FIELD_U8(v2, 6608) = 0;
  FIELD_U8(v2, 6609) = 0;
  return v2;
}
