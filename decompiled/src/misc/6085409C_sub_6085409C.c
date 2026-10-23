/* sub_6085409C
 * address: 0x6085409C   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_QWORD *__fastcall sub_6085409C(_QWORD *a1, _QWORD *a2)
{
  __int64 *v2; // r12
  __int64 *v3; // r3
  __int64 *v4; // r2
  _QWORD *v5; // r0
  __int64 v6; // d17
  __int64 v7; // d22
  __int64 v8; // d23
  __int64 v9; // d20
  __int64 v10; // d21
  __int64 v11; // d18
  __int64 v12; // d19

  v2 = a1 + 4;
  v3 = a1 + 6;
  v4 = a1 + 8;
  v5 = a1 + 2;
  v6 = v5[1];
  v7 = *v2;
  v8 = v2[1];
  v9 = *v3;
  v10 = v3[1];
  v11 = *v4;
  v12 = v4[1];
  *a2 = *v5;
  a2[1] = v6;
  a2[2] = v7;
  a2[3] = v8;
  a2[4] = v9;
  a2[5] = v10;
  a2[6] = v11;
  a2[7] = v12;
  return a2 + 6;
}
