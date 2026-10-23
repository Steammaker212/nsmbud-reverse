/* Actor_parashutokoin_kishi_build
 * address: 0x606EE858   size: 148   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

MultiStateActor *__fastcall Actor_parashutokoin_kishi_build(ActorBuildInfo *a1)
{
  MultiStateActor *v2; // r0
  MultiStateActor *result; // r0

  v2 = (MultiStateActor *)operator_new(0x1808u);
  result = MultiStateActor__ctor(v2, a1);
  FIELD_U32(result, 0x0) = (int)off_60C1FF10;
  result[1]._._._.vtable = 0;
  result[1]._._._.heap = 0;
  result[1]._._._.id = 0;
  result[1]._._._.profile = (Profile *)-1082130432;
  *(_DWORD *)&result[1]._._._.field_10 = -1082130432;
  result[1]._._._.settings1 = -1082130432;
  result[1]._._._.settigns2 = -1082130432;
  *(_DWORD *)&result[1]._._._.movementId = -1082130432;
  result[1]._._._.field_20.previous = (sead_ListNode *)-1082130432;
  result[1]._._._.field_20.next = (sead_ListNode *)-1082130432;
  result[1]._._._.childCount = -1082130432;
  return result;
}
