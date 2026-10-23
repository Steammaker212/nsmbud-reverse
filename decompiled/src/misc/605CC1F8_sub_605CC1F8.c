/* sub_605CC1F8
 * address: 0x605CC1F8   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateActor *__fastcall sub_605CC1F8(StateActor *a1, ActorBuildInfo *a2, void **a3)
{
  StateActor *result; // r0
  void *v5; // r1

  result = StateActor_ctor(a1, a2);
  FIELD_U32(result, 0x0) = (int)off_60C0A8A4;
  result[1]._._._.vtable = (int)*a3;
  v5 = a3[1];
  result[1]._._._.id = (int)a3[2];
  result[1]._._._.heap = (int)v5;
  LOBYTE(result[1]._._._.profile) = 0;
  FIELD_U8(result, 0x215) = 0;
  result[1]._._._.field_20.previous = 0;
  *(_DWORD *)&result[1]._._._.movementId = 0;
  result[1]._._._.settigns2 = 0;
  result[1]._._._.settings1 = 0;
  *(_DWORD *)&result[1]._._._.field_10 = 0;
  result[1]._._._.childCount = 1092616192;
  result[1]._._._.field_20.next = (sead_ListNode *)1077936128;
  return result;
}
