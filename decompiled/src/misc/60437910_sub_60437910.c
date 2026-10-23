/* sub_60437910
 * address: 0x60437910   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_QWORD *__fastcall sub_60437910(_QWORD *a1, __int64 *a2)
{
  _QWORD *v2; // r2
  __int64 *v3; // r1
  __int64 v4; // d16
  __int64 v5; // d17
  __int64 v6; // d16
  __int64 v7; // d17
  _QWORD *v8; // r1
  _QWORD *result; // r0
  __int64 v10; // d17

  v2 = a2 + 4;
  v4 = *a2;
  v5 = a2[1];
  v3 = a2 + 2;
  a1[112] = v4;
  a1[113] = v5;
  v6 = *v3;
  v7 = v3[1];
  v8 = a1 + 114;
  result = a1 + 116;
  *v8 = v6;
  v8[1] = v7;
  v10 = v2[1];
  *result = *v2;
  result[1] = v10;
  return result;
}
