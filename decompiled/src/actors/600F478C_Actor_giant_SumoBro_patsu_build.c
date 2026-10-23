/* Actor_giant_SumoBro_patsu_build
 * address: 0x600F478C   size: 148   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Enemy *__fastcall Actor_giant_SumoBro_patsu_build(ActorBuildInfo *a1)
{
  Enemy *v2; // r0
  Enemy *result; // r0

  v2 = (Enemy *)operator_new(0x18D0u);
  result = Enemy__ctor(v2, a1);
  FIELD_U32(result, 0x0) = (int)off_60BCEAC4;
  result[1]._._._._.movementId = 0;
  result[1]._._._._.settigns2 = 0;
  result[1]._._._._.settings1 = 0;
  *(_DWORD *)&result[1]._._._._.field_10 = 0;
  result[1]._._._._.profile = 0;
  result[1]._._._._.id = 0;
  result[1]._._._._.vtable = 0;
  result[1]._._._._.heap = 0;
  result[1]._._._._.field_2C = 0;
  result[1]._._._._.childCount = 0;
  result[1]._._._._.field_20.next = 0;
  result[1]._._._._.field_20.previous = 0;
  return result;
}
