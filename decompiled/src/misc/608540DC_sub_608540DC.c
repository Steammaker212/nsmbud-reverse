/* sub_608540DC
 * address: 0x608540DC   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_QWORD *__fastcall sub_608540DC(_QWORD *result, _QWORD *a2)
{
  __int64 *v2; // r3
  __int64 *v3; // r2
  __int64 *v4; // r0
  __int64 v5; // d16
  __int64 v6; // d17
  __int64 v7; // d18
  __int64 v8; // d19
  __int64 v9; // d20
  __int64 v10; // d21
  _QWORD *v11; // r1

  if ( !*((_BYTE *)result + 211) )
  {
    v2 = result + 20;
    *((_BYTE *)result + 211) = 1;
    v3 = result + 18;
    v4 = result + 16;
    v5 = *v4;
    v6 = v4[1];
    v7 = *v2;
    v8 = v2[1];
    v9 = *v3;
    v10 = v3[1];
    result = a2 + 4;
    *a2 = v5;
    a2[1] = v6;
    v11 = a2 + 2;
    *v11 = v9;
    v11[1] = v10;
    *result = v7;
    result[1] = v8;
  }
  return result;
}
