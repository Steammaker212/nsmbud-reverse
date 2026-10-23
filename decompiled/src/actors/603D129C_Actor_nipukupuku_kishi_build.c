/* Actor_nipukupuku_kishi_build
 * address: 0x603D129C   size: 220   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateActor *__fastcall Actor_nipukupuku_kishi_build(ActorBuildInfo *a1)
{
  StateActor *v2; // r0
  StateActor *result; // r0
  unsigned int settings1; // r1
  int id; // r2
  int v6; // r3

  v2 = (StateActor *)operator_new(0x1800u);
  result = StateActor_ctor(v2, a1);
  FIELD_U32(result, 0x0) = (int)off_60BF7B70;
  settings1 = FIELD_U32(result, 0x14);
  result[1]._._._.vtable = settings1 & 1;
  result[1]._._._.heap = (settings1 >> 8) & 1;
  result[1]._._._.id = 8;
  id = FIELD_U32(a1, 0x14);
  v6 = 1;
  if ( id != 543 )
  {
    v6 = 0;
    if ( id == 544 )
      v6 = 8;
  }
  result[1]._._._.profile = (Profile *)v6;
  *(_DWORD *)&result[1]._._._.field_10 = 2139095039;
  result[1]._._._.settings1 = 2139095039;
  result[1]._._._.settigns2 = -8388609;
  *(_DWORD *)&result[1]._._._.movementId = -8388609;
  result[1]._._._.field_20.previous = (sead_ListNode *)-1;
  result[1]._._._.field_20.next = (sead_ListNode *)256;
  return result;
}
