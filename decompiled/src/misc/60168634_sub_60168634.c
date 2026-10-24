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
  FIELD_U32(result + (1) * 80, 0x0) = FIELD_U32(a2, 16);
  result[1].heap = v4;
  result[1].id = v5;
  v6 = FIELD_U32(a2, 20);
  v7 = FIELD_U32(a2, 24);
  FIELD_U32(result + (1) * 80, 0xC) = *(Profile **)(a2 + 16);
  *(_DWORD *)&result[1].field_10 = v6;
  result[1].settings1 = v7;
  FIELD_U32(result + (1) * 80, 0x2C) = 0;
  FIELD_U32(result + (1) * 80, 0x28) = 0;
  FIELD_U32(result + (1) * 80, 0x24) = 0;
  FIELD_U32(result + (1) * 80, 0x20) = 0;
  *(_DWORD *)&FIELD_U8(result + (1) * 80, 0x1C) = 0;
  FIELD_U32(result + (1) * 80, 0x18) = 0;
  FIELD_U32(result + (1) * 80, 0x30) = 1065353216;
  FIELD_U32(result + (1) * 80, 0x34) = 1065353216;
  FIELD_U32(result + (1) * 80, 0x38) = (Actor *)1065353216;
  *(_DWORD *)&FIELD_U8(result + (2) * 80, 0x10) = 0;
  FIELD_U32(result + (2) * 80, 0x14) = FIELD_U32(a2, 28);
  FIELD_U32(result + (2) * 80, 0x18) = 0;
  *(_DWORD *)&FIELD_U8(result + (2) * 80, 0x1C) = 0;
  FIELD_U32(result + (2) * 80, 0x20) = *(sead_ListNode **)(a2 + 28);
  FIELD_U32(result + (2) * 80, 0x24) = 0;
  FIELD_U32(result + (2) * 80, 0x28) = 0;
  result[2].field_2C = -1059061760;
  result[2].field_30 = -1038090240;
  FIELD_U32(result + (2) * 80, 0x34) = 0;
  LOBYTE(FIELD_U32(result + (2) * 80, 0x38)) = 0;
  return result;
}
