/* sub_6053B824
 * address: 0x6053B824   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6053B824(int a1)
{
  int v2; // r0
  int v3; // r0
  int result; // r0

  v2 = FIELD_U32(a1, 83548);
  FIELD_U32(a1, 83556) = v2;
  v3 = dword_60B03A88[v2];
  FIELD_U32(a1, 16708) = v3;
  FIELD_U32(a1, 16712) = v3;
  FIELD_U8(a1, 83565) = 0;
  FIELD_U8(a1, 83569) = 0;
  sub_60502548(a1 + 15680);
  FIELD_U16(a1, 16732) = 0;
  sub_6047EABC((_DWORD *)(a1 + 15720));
  *(_BYTE *)(FIELD_U32(a1, 52560) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 52564) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 52568) + 64) &= ~1u;
  result = FIELD_U32(a1, 52572);
  FIELD_U8(result, 64) |= 1u;
  return result;
}
