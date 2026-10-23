/* sub_6053AF04
 * address: 0x6053AF04   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6053AF04(int a1)
{
  FIELD_U16(a1, 16732) = 0;
  sub_6047EABC((_DWORD *)(a1 + 15720));
  *(_BYTE *)(FIELD_U32(a1, 52560) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 52564) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 52568) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 52572) + 64) &= ~1u;
  FIELD_U8(a1, 52491) = 1;
  FIELD_U8(a1, 83565) = 0;
  return 83565;
}
