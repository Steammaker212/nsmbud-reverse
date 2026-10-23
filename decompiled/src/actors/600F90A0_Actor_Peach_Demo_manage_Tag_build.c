/* Actor_Peach_Demo_manage_Tag_build
 * address: 0x600F90A0   size: 308   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateActor *__fastcall Actor_Peach_Demo_manage_Tag_build(ActorBuildInfo *a1)
{
  StateActor *v2; // r0
  StateActor *result; // r0

  v2 = (StateActor *)operator_new(0x1840u);
  result = StateActor_ctor(v2, a1);
  FIELD_U32(result, 0x0)._._.vtable = (int)off_60BCF12C;
  result[1]._._._.vtable = 0;
  LOBYTE(result[1]._._._.heap) = 0;
  result[1]._._._.id = 0;
  result[1]._._._.profile = (Profile *)-1;
  *(_DWORD *)&result[1]._._._.movementId = 0;
  result[1]._._._.settigns2 = 0;
  result[1]._._._.settings1 = 0;
  *(_DWORD *)&result[1]._._._.field_10 = 0;
  result[1]._._._.field_20.previous = (sead_ListNode *)1069547520;
  result[1]._._._.field_20.next = (sead_ListNode *)1056964608;
  result[1]._._._.field_34 = 0;
  result[1]._._._.field_30 = 0;
  result[1]._._._.field_2C = 0;
  result[1]._._._.childCount = 0;
  BYTE2(result[1]._._.field_64) = 0;
  LOWORD(result[1]._._.field_64) = 0;
  result[1]._._.field_60 = 0;
  result[1]._._.field_5C = 0;
  result[1]._._.field_58 = 0;
  result[1]._._._.parent = (Actor *)-1;
  result[1]._._._.field_3C = -1;
  result[1]._._._.field_40 = -1;
  result[1]._._._.field_4C = 0;
  result[1]._._.direction = 0;
  *(_DWORD *)&result[1]._._.playerId = 0;
  LOBYTE(result[1]._._._.field_48) = 0;
  BYTE1(result[1]._._._.field_44) = 0;
  BYTE1(result[1]._._._.field_48) = 0;
  LOBYTE(result[1]._._._.field_44) = 0;
  HIBYTE(result[1]._._._.field_44) = 0;
  BYTE2(result[1]._._._.field_44) = 0;
  return result;
}
