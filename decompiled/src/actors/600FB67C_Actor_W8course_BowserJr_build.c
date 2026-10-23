/* Actor_W8course_BowserJr_build
 * address: 0x600FB67C   size: 72   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

BossBase *__fastcall Actor_W8course_BowserJr_build(ActorBuildInfo *a1)
{
  BossBase *v2; // r0
  BossBase *result; // r0

  v2 = (BossBase *)operator_new(0x1DC0u);
  result = BowserJrBase__ctor(v2, a1);
  FIELD_U32(result, 0x0) = (int)off_60BCF214;
  result[1]._._._._.field_200 = 0;
  LOBYTE(result[1]._._._._.field_204) = 1;
  return result;
}
