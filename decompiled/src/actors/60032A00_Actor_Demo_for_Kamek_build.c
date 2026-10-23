/* Actor_Demo_for_Kamek_build
 * address: 0x60032A00   size: 84   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall Actor_Demo_for_Kamek_build(int a1)
{
  Enemy *v2; // r0
  sead_IDisposer *result; // r0
  int v4; // r12
  int v5; // r2

  v2 = (Enemy *)operator_new(0x1950u);
  result = Actor_Demo_for_Kamek_build_helper(v2, (ActorBuildInfo *)a1);
  FIELD_U32(result, 0x0) = (int)off_60BC212C;
  v4 = FIELD_U32(a1, 16);
  v5 = FIELD_U32(a1, 20);
  result[404].field_C = FIELD_U32(a1, 24);
  result[404].containingHeap = v4;
  result[404].field_8 = v5;
  return result;
}
