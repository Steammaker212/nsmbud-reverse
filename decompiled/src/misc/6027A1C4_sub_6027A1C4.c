/* sub_6027A1C4
 * address: 0x6027A1C4   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6027A1C4(int a1)
{
  int v1; // r1
  int result; // r0

  v1 = FIELD_U32(a1, 80);
  FIELD_U32(a1, 120) = dword_60AF1FC0[v1];
  dword_60BDD57C[0] = 1072902963;
  dword_60BDD57C[1] = -1074580685;
  FIELD_U32(a1, 132) = dword_60BDD57C[v1];
  FIELD_U32(a1, 104) = 1013276738;
  FIELD_U32(a1, 8576) = FIELD_U32(a1, 108);
  FIELD_U32(a1, 8580) = FIELD_U32(a1, 112);
  FIELD_U32(a1, 8584) = FIELD_U32(a1, 116);
  FIELD_U8(a1, 8864) = 0;
  FIELD_U32(a1, 8548) = 10;
  FIELD_U8(a1, 8865) = 1;
  result = **(_DWORD **)(FIELD_U32(a1, 6300) + 12);
  FIELD_U32(result, 24) = 1061997773;
  return result;
}
