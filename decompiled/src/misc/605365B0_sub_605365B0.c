/* sub_605365B0
 * address: 0x605365B0   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605365B0(int a1)
{
  _DWORD *v2; // r5
  int result; // r0

  v2 = (_DWORD *)(a1 + 12092);
  sub_604741D8((_DWORD *)(a1 + 12092), 0, &dword_60CAADAC, 0);
  sub_604741D8(v2, 1u, &dword_60CAADCC, 0);
  FIELD_U8(a1, 83625) = 1;
  result = FIELD_U32(a1, 16728);
  FIELD_U32(a1, 83576) = result;
  return result;
}
