/* sub_6049ED50
 * address: 0x6049ED50   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6049ED50(int a1)
{
  _DWORD *v2; // r5
  int result; // r0

  v2 = (_DWORD *)(a1 + 44);
  sub_60473DE4((_DWORD *)(a1 + 44), 0, &dword_60CA0B84, 0);
  sub_604741D8(v2, 1u, &dword_60CA0B8C, 0);
  sub_604741D8(v2, 2u, &dword_60CA0B94, 0);
  FIELD_U8(a1, 20308) = 1;
  FIELD_U8(a1, 20309) = 1;
  FIELD_U8(a1, 22501) = 1;
  FIELD_U8(a1, 12982) = 1;
  result = FIELD_U32(a1, 5752) | 1;
  FIELD_U32(a1, 5752) = result;
  return result;
}
