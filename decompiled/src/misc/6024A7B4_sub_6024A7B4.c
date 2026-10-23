/* sub_6024A7B4
 * address: 0x6024A7B4   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6024A7B4(_DWORD *result, int a2, unsigned int a3)
{
  int v3; // r3
  _DWORD *v4; // r1
  int v5; // r3
  int v6; // r4
  int v7; // r5
  int v8; // r12
  int v9; // lr

  v3 = a2;
  if ( a3 < 5 )
    v3 = a2 + a3;
  v4 = (_DWORD *)(a2 + 24 * ((FIELD_U8(a2, 3077) - FIELD_U8(v3, 3072)) & 0x7F));
  v5 = v4[1];
  v6 = v4[2];
  v7 = v4[3];
  v8 = v4[4];
  v9 = v4[5];
  *result = *v4;
  result[1] = v5;
  result[2] = v6;
  result[3] = v7;
  result[4] = v8;
  result[5] = v9;
  return result;
}
