/* Actor_grass_flower_Tag_build
 * address: 0x6082E5AC   size: 96   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall Actor_grass_flower_Tag_build(ActorBuildInfo *a1)
{
  Actor *v2; // r0
  Actor *result; // r0

  v2 = (Actor *)operator_new(0x50u);
  result = Actor__ctor(v2, a1);
  FIELD_U32(result, 0x0) = (int)off_60C2AAD4;
  FIELD_U32(result, 0x4C) |= 2u;
  FIELD_U8(TileMgr_instance, 16272) = (FIELD_U32(result, 0x14) & 0xF) + 1;
  FIELD_U8(result, 0x13) = 1;
  return result;
}
