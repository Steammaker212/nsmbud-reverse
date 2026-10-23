/* sub_6053C17C
 * address: 0x6053C17C   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6053C17C(int a1)
{
  int result; // r0

  FIELD_U8(a1, 52486) = 0;
  sub_60473DE4((_DWORD *)(a1 + 12092), 0, &dword_60CAB47C, 0);
  FIELD_U8(a1, 83565) = 1;
  *(_BYTE *)(FIELD_U32(a1, 52560) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 52564) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 52568) + 64) |= 1u;
  result = FIELD_U32(a1, 52572);
  FIELD_U8(result, 64) &= ~1u;
  return result;
}
