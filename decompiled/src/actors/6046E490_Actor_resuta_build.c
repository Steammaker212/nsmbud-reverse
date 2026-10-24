/* Actor_resuta_build
 * address: 0x6046E490   size: 128   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall Actor_resuta_build(int a1)
{
  Actor *v2; // r0
  Actor *result; // r0
  int v4; // r2
  int v5; // r3

  v2 = (Actor *)operator_new(0x7Cu);
  result = Actor__ctor(v2, (ActorBuildInfo *)a1);
  FIELD_U32(result, 0x0) = (int)off_60BFC4E4;
  v4 = FIELD_U32(a1, 20);
  v5 = FIELD_U32(a1, 24);
  FIELD_U32(result + (1) * 80, 0x0) = FIELD_U32(a1, 16);
  result[1].heap = v4;
  result[1].id = v5;
  LOBYTE(FIELD_U32(result + (1) * 80, 0xC)) = FIELD_U8(a1, 32);
  *(_DWORD *)&FIELD_U8(result + (1) * 80, 0x10) = (unsigned int)FIELD_U32(result, 0x14) >> 28;
  LOBYTE(FIELD_U32(result + (1) * 80, 0x14)) = 0;
  BYTE1(FIELD_U32(result + (1) * 80, 0x14)) = 1;
  FIELD_U32(result + (1) * 80, 0x18) = 2139095039;
  *(_DWORD *)&FIELD_U8(result + (1) * 80, 0x1C) = 2139095039;
  FIELD_U32(result + (1) * 80, 0x20) = (sead_ListNode *)-8388609;
  FIELD_U32(result + (1) * 80, 0x24) = (sead_ListNode *)-8388609;
  FIELD_U32(result + (1) * 80, 0x28) = 0;
  return result;
}
