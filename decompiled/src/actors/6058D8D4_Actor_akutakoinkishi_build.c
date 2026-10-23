/* Actor_akutakoinkishi_build
 * address: 0x6058D8D4   size: 76   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

MultiStateActor *__fastcall Actor_akutakoinkishi_build(ActorBuildInfo *a1)
{
  MultiStateActor *v2; // r0
  MultiStateActor *result; // r0

  v2 = (MultiStateActor *)operator_new(0x17E8u);
  result = MultiStateActor__ctor(v2, a1);
  FIELD_U32(result, 0x0) = (int)off_60C06E14;
  LOWORD(result[1]._._._.id) = 0;
  result[1]._._._.vtable = 0;
  result[1]._._._.heap = 0;
  return result;
}
