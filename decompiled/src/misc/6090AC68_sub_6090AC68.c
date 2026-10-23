/* sub_6090AC68
 * address: 0x6090AC68   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_QWORD *__fastcall sub_6090AC68(int a1, _QWORD *a2)
{
  __int64 *v2; // r2
  _QWORD *v3; // r3
  _QWORD *result; // r0
  __int64 v5; // d16
  __int64 v6; // d17
  _QWORD *v7; // r2
  _QWORD *v8; // r1
  __int64 v9; // d17
  __int64 v10; // d17

  v2 = (__int64 *)(a1 + 52);
  v3 = (_QWORD *)(a1 + 68);
  result = (_QWORD *)(a1 + 84);
  v5 = *v2;
  v6 = v2[1];
  v7 = a2 + 4;
  *a2 = v5;
  a2[1] = v6;
  v8 = a2 + 2;
  v9 = v3[1];
  *v8 = *v3;
  v8[1] = v9;
  v10 = result[1];
  *v7 = *result;
  v7[1] = v10;
  return result;
}
