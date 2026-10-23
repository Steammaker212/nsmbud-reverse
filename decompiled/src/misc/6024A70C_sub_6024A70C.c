/* sub_6024A70C
 * address: 0x6024A70C   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6024A70C(int a1, _DWORD *a2)
{
  char v2; // r2
  int v3; // r2
  _DWORD *result; // r0
  int v5; // r2
  int v6; // r3

  v2 = FIELD_U8(a1, 3077) + 1;
  FIELD_U8(a1, 3077) = v2;
  v3 = 3 * (v2 & 0x7F);
  *(_DWORD *)(a1 + 8 * v3) = *a2;
  result = (_DWORD *)(a1 + 8 * v3);
  result[1] = a2[1];
  result[2] = a2[2];
  v5 = a2[3];
  v6 = a2[4];
  result[5] = a2[5];
  result[4] = v6;
  result[3] = v5;
  return result;
}
