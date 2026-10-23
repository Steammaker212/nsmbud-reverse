/* sub_6054273C
 * address: 0x6054273C   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6054273C(int a1)
{
  int result; // r0

  *(_BYTE *)(FIELD_U32(a1, 20) + 64) |= 1u;
  result = sub_60473DE4((_DWORD *)(a1 + 60), 0, &dword_60CABE10, 0);
  FIELD_U8(a1, 3608) = 0;
  return result;
}
