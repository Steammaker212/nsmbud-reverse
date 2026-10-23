/* sub_60168634
 * address: 0x60168634   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_60168634(Actor *a1, int a2)
{
  Actor *result; // r0
  int v4; // r2
  int v5; // r3
  int v6; // r2
  int v7; // r3

  result = Actor__ctor(a1, (ActorBuildInfo *)a2);
  FIELD_U32(result, 0x0) = (int)off_60BD4B40;
  v4 = FIELD_U32(a2, 20);
  v5 = FIELD_U32(a2, 24);
  result[1].vtable = FIELD_U32(a2, 16);
  result[1].heap = v4;
  result[1].id = v5;
  v6 = FIELD_U32(a2, 20);
  v7 = FIELD_U32(a2, 24);
  result[1].profile = *(Profile **)(a2 + 16);
  *(_DWORD *)&result[1].field_10 = v6;
  result[1].settings1 = v7;
  result[1].field_2C = 0;
  result[1].childCount = 0;
  result[1].field_20.next = 0;
  result[1].field_20.previous = 0;
  *(_DWORD *)&result[1].movementId = 0;
  result[1].settigns2 = 0;
  result[1].field_30 = 1065353216;
  result[1].field_34 = 1065353216;
  result[1].parent = (Actor *)1065353216;
  *(_DWORD *)&result[2].field_10 = 0;
  result[2].settings1 = FIELD_U32(a2, 28);
  result[2].settigns2 = 0;
  *(_DWORD *)&result[2].movementId = 0;
  result[2].field_20.previous = *(sead_ListNode **)(a2 + 28);
  result[2].field_20.next = 0;
  result[2].childCount = 0;
  result[2].field_2C = -1059061760;
  result[2].field_30 = -1038090240;
  result[2].field_34 = 0;
  LOBYTE(result[2].parent) = 0;
  return result;
}
