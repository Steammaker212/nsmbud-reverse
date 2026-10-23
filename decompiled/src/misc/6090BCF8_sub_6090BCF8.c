/* sub_6090BCF8
 * address: 0x6090BCF8   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

char *__fastcall sub_6090BCF8(_QWORD *a1, int a2)
{
  __int64 *v2; // r2
  _QWORD *v3; // r3
  __int64 *v4; // r1
  __int64 v5; // d16
  __int64 v6; // d17
  _QWORD *v7; // r2
  __int64 v8; // d17
  __int64 v9; // d16
  __int64 v10; // d17
  _QWORD *v11; // r1
  char *result; // r0

  v2 = (__int64 *)(a2 + 4);
  v3 = (_QWORD *)(a2 + 20);
  v4 = (__int64 *)(a2 + 36);
  v5 = *v2;
  v6 = v2[1];
  v7 = a1 + 5;
  a1[5] = v5;
  a1[6] = v6;
  v8 = v3[1];
  a1[7] = *v3;
  a1[8] = v8;
  v9 = *v4;
  v10 = v4[1];
  v11 = a1 + 9;
  result = (char *)a1 + 20;
  *v11 = v9;
  v11[1] = v10;
  *((_DWORD *)result + 2) = v7;
  return result;
}
