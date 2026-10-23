/* Actor_ShortPlay_result_Demo_Tag_2_build
 * address: 0x60830B74   size: 144   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_ShortPlay_result_Demo_Tag_2_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1828u);
  StateActor_ctor((StateActor *)v2, a1);
  *(_DWORD *)v2 = off_60C2AFAC;
  FIELD_U32(v2, 6112) = 0;
  FIELD_U32(v2, 6108) = 0;
  FIELD_U32(v2, 6104) = 0;
  FIELD_U32(v2, 6100) = 0;
  PlayerLookTarget_ctor((PlayerLookTarget *)(v2 + 6116), FIELD_U32(v2, 8));
  FIELD_U8(v2, 6160) = 0;
  FIELD_U32(v2, 6176) = 0;
  FIELD_U32(v2, 6172) = 0;
  FIELD_U32(v2, 6168) = 0;
  FIELD_U32(v2, 6164) = 0;
  return v2;
}
