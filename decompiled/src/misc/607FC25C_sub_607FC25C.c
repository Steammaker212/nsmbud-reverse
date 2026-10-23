/* sub_607FC25C
 * address: 0x607FC25C   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_607FC25C(int a1, char *a2)
{
  _BYTE *result; // r0
  char v3; // lr
  char v4; // r4
  char v5; // r5
  char v6; // r6
  char v7; // r3
  _BYTE *v8; // r5
  _BYTE *v9; // r0
  _BYTE *v10; // r1
  char v11; // t1
  char v12; // r3

  result = *(_BYTE **)(a1 + 196);
  if ( result )
  {
    result[28] = 1;
    result[25] = a2[9];
    result[21] = a2[5];
    v3 = *a2;
    v4 = a2[2];
    v5 = a2[3];
    result[17] = a2[1];
    result[16] = v3;
    result[19] = v5;
    result[18] = v4;
    v6 = a2[10];
    v7 = a2[11];
    v8 = result + 24;
    v9 = result + 20;
    *v8 = a2[8];
    v8 += 2;
    v8[1] = v7;
    *v8 = v6;
    v11 = a2[4];
    v10 = a2 + 4;
    v12 = v10[2];
    LOBYTE(v10) = v10[3];
    *v9 = v11;
    result = v9 + 2;
    result[1] = (_BYTE)v10;
    *result = v12;
  }
  return result;
}
