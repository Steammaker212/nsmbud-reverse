/* Actor_final_BowserJr_build_helper
 * address: 0x600FB6C8   size: 56   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

BossBase *__fastcall Actor_final_BowserJr_build_helper(BossBase *a1, ActorBuildInfo *a2)
{
  BossBase *result; // r0

  result = BowserJrBase__ctor(a1, a2);
  FIELD_U32(result, 0x0)._._._._.vtable = (int)off_60BCF214;
  result[1]._._._._.field_200 = 0;
  LOBYTE(result[1]._._._._.field_204) = 1;
  return result;
}
