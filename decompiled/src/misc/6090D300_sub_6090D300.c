/* sub_6090D300
 * address: 0x6090D300   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_QWORD *__fastcall sub_6090D300(int a1, _QWORD *a2)
{
  __int64 v2; // d17
  __int64 v3; // d17
  _QWORD *v4; // r2
  __int64 *v5; // r0
  __int64 v6; // d17
  __int64 v7; // d16
  __int64 v8; // d17

  v2 = FIELD_U64(a1, 156);
  *a2 = FIELD_U64(a1, 148);
  a2[1] = v2;
  v3 = FIELD_U64(a1, 172);
  a2[2] = FIELD_U64(a1, 164);
  a2[3] = v3;
  v4 = (_QWORD *)(a1 + 180);
  v5 = (__int64 *)(a1 + 196);
  v6 = v4[1];
  a2[4] = *v4;
  a2[5] = v6;
  v7 = *v5;
  v8 = v5[1];
  a2[6] = v7;
  a2[7] = v8;
  return a2 + 6;
}
