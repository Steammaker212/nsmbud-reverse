/* Actor_korekushonkoinhebi_build
 * address: 0x605F6E84   size: 44   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StarCoinBase *__fastcall Actor_korekushonkoinhebi_build(ActorBuildInfo *a1)
{
  StarCoinBase *v2; // r0
  StarCoinBase *result; // r0

  v2 = (StarCoinBase *)operator_new(0x1838u);
  result = StarCoinBase_ctor(v2, a1);
  FIELD_U32(result, 0x0)._._._.vtable = (int)off_60C0C7F4;
  return result;
}
