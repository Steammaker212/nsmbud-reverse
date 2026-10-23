/* sub_60913814
 * address: 0x60913814   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60913814(int a1)
{
  int v2; // r1
  int v3; // r0
  int result; // r0

  sead__CriticalSection__lock(dword_60CCFC8C + 152);
  v2 = dword_60CCFC8C;
  v3 = dword_60CCFC8C + 240;
  FIELD_U32(a1, 240) = dword_60CCFC8C + 240;
  FIELD_U32(a1, 192) = a1 + 256;
  FIELD_U32(v2, 816) = a1 + 256;
  sub_60918EB8(v3);
  result = FIELD_U8(a1, 248) | 1;
  FIELD_U8(a1, 248) = result;
  return result;
}
