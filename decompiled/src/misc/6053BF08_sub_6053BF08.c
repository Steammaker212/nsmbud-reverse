/* sub_6053BF08
 * address: 0x6053BF08   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6053BF08(int a1)
{
  int result; // r0

  FIELD_U16(a1, 16732) = 0;
  sub_6047EABC((_DWORD *)(a1 + 15720));
  FIELD_U8(a1, 83565) = 0;
  FIELD_U32(a1, 16708) = 6;
  FIELD_U32(a1, 16712) = 6;
  *(_BYTE *)(FIELD_U32(a1, 52560) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 52564) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 52568) + 64) |= 1u;
  result = FIELD_U32(a1, 52572);
  FIELD_U8(result, 64) &= ~1u;
  return result;
}
