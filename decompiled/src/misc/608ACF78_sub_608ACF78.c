/* sub_608ACF78
 * address: 0x608ACF78   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608ACF78(int a1, int a2)
{
  _DWORD *result; // r0
  int v3; // r2
  int v4; // t1
  _DWORD *v5; // r1
  int v6; // t1

  FIELD_U32(a2, 4) = a1;
  v4 = FIELD_U32(a1, 16);
  result = (_DWORD *)(a1 + 16);
  v3 = v4;
  v6 = FIELD_U32(a2, 24);
  v5 = (_DWORD *)(a2 + 24);
  *v5 = v3;
  FIELD_U32(v6, 4) = result;
  *(_DWORD *)(*result + 4) = v5;
  *result = v6;
  ++result[6];
  return result;
}
