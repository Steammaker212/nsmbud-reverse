/* Actor_gurupupukupukumanage_Tag_build
 * address: 0x60374458   size: 80   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall Actor_gurupupukupukumanage_Tag_build(ActorBuildInfo *a1)
{
  Actor *v2; // r0
  Actor *result; // r0

  v2 = (Actor *)operator_new(0x64u);
  result = Actor__ctor(v2, a1);
  FIELD_U32(result, 0x0) = (int)off_60BF0EC4;
  FIELD_U32(result + (1) * 80, 0x0) = 2139095039;
  FIELD_U32(result + (1) * 80, 0x4) = 2139095039;
  FIELD_U32(result + (1) * 80, 0x8) = -8388609;
  FIELD_U32(result + (1) * 80, 0xC) = (Profile *)-8388609;
  *(_WORD *)&FIELD_U8(result + (1) * 80, 0x10) = 0;
  return result;
}
