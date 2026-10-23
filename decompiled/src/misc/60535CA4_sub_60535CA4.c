/* sub_60535CA4
 * address: 0x60535CA4   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60535CA4(int a1)
{
  int result; // r0

  FIELD_U8(a1, 52506) = 0;
  sub_60473DE4((_DWORD *)(a1 + 12092), 0, &dword_60CAADEC, 0);
  FIELD_U8(a1, 83625) = 1;
  *(_BYTE *)(FIELD_U32(a1, 52600) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 52604) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 52608) + 64) |= 1u;
  result = FIELD_U32(a1, 52612);
  FIELD_U8(result, 64) &= ~1u;
  return result;
}
