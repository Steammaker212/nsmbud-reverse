/* sub_608B2128
 * address: 0x608B2128   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_608B2128(int *result, int *a2)
{
  int *v2; // r1
  int v3; // r2
  int v4; // r3
  int v5; // r12
  int v6; // lr
  _DWORD *v7; // r0
  int v8; // r2
  int v9; // r3
  int v10; // r4
  int v11; // r12
  int v12; // lr
  int v13; // r3
  int v14; // r4
  int v15; // r12
  int v16; // lr

  if ( *a2 == 1380012870 && *((unsigned __int16 *)a2 + 2) == 65279 && (unsigned int)(a2[2] - 0x10000) <= 0x10500 )
  {
    v3 = *a2;
    v4 = a2[1];
    v5 = a2[2];
    v6 = a2[3];
    v2 = a2 + 4;
    *result = v3;
    result[1] = v4;
    result[2] = v5;
    result[3] = v6;
    v7 = result + 4;
    v8 = *v2;
    v9 = v2[1];
    v10 = v2[2];
    v11 = v2[3];
    v12 = v2[4];
    v2 += 5;
    *v7 = v8;
    v7[1] = v9;
    v7[2] = v10;
    v7[3] = v11;
    v7[4] = v12;
    result = v7 + 5;
    v13 = v2[1];
    v14 = v2[2];
    v15 = v2[3];
    v16 = v2[4];
    *result = *v2;
    result[1] = v13;
    result[2] = v14;
    result[3] = v15;
    result[4] = v16;
  }
  return result;
}
