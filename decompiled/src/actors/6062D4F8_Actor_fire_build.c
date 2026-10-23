/* Actor_fire_build
 * address: 0x6062D4F8   size: 256   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_fire_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1900u);
  StateActor_ctor((StateActor *)v2, a1);
  *(_DWORD *)v2 = off_60C123E4;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 6100));
  FIELD_U32(v2, 6100) = off_60BC1450;
  FIELD_U32(v2, 6240) = 2;
  FIELD_U16(v2, 6264) = 0;
  FIELD_U32(v2, 6260) = 0;
  FIELD_U32(v2, 6256) = 0;
  FIELD_U32(v2, 6252) = 0;
  FIELD_U32(v2, 6248) = 0;
  FIELD_U32(v2, 6244) = 0;
  FIELD_U32(v2, 6268) = 1103101952;
  FIELD_U32(v2, 6272) = 1103101952;
  sub_60285434((_DWORD *)(v2 + 6276));
  FIELD_U16(v2, 6280) = 0;
  FIELD_U32(v2, 6284) = 1065353216;
  FIELD_U32(v2, 6288) = 1065353216;
  LightSource__ctor((LightSource *)(v2 + 6292));
  FIELD_U32(v2, 6364) = off_60C124D8;
  sub_605D5CA0((_DWORD *)(v2 + 6368), FIELD_U32(v2, 8));
  return v2;
}
