/* Actor_Kamek_build
 * address: 0x600A48AC   size: 60   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall Actor_Kamek_build(int a1)
{
  Actor *v2; // r0
  Actor *result; // r0
  int v4; // r2

  v2 = (Actor *)operator_new(0x58u);
  result = Actor__ctor(v2, (ActorBuildInfo *)a1);
  FIELD_U32(result, 0x0) = (int)off_60BC8CCC;
  v4 = FIELD_U32(a1, 20);
  FIELD_U32(result + (1) * 80, 0x0) = FIELD_U32(a1, 16);
  FIELD_U32(result + (1) * 80, 0x4) = v4;
  return result;
}
