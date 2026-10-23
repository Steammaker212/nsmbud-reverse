/* Actor_kosuDemo_for_shadou_build
 * address: 0x602A4A68   size: 144   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_kosuDemo_for_shadou_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1868u);
  StateActor_ctor((StateActor *)v2, a1);
  *(_DWORD *)v2 = off_60BE2AC8;
  FIELD_U32(v2, 6100) = 0;
  FIELD_U32(v2, 6104) = 0;
  FIELD_U32(v2, 6108) = 0;
  FIELD_U32(v2, 6112) = -1;
  FIELD_U32(v2, 6116) = 0;
  FIELD_U8(v2, 6120) = 1;
  PlayerLookTarget_ctor((PlayerLookTarget *)(v2 + 6124), FIELD_U32(v2, 8));
  Actor_kosuDemo_for_shadou_build_helper(v2 + 6176, v2);
  return v2;
}
