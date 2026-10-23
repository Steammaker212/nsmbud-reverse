/* Actor_castle_doa_build
 * address: 0x605F8F44   size: 72   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Enemy *__fastcall Actor_castle_doa_build(ActorBuildInfo *a1)
{
  Enemy *v2; // r0
  Enemy *result; // r0

  v2 = (Enemy *)operator_new(0x18C8u);
  result = sub_605F7FA4(v2, a1);
  FIELD_U32(result, 0x0)._._._.vtable = (int)off_60C0CD60;
  *(_DWORD *)&result[1]._._._._.field_10 = 1;
  result[1]._._._._.field_20.previous = (sead_ListNode *)93;
  return result;
}
