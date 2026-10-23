/* sub_6081EF4C
 * address: 0x6081EF4C   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

char *__fastcall sub_6081EF4C(int a1, char *a2)
{
  char *result; // r0
  char v3; // r2
  char v4; // r4
  char v5; // r5
  char v6; // r4
  char v7; // r2
  char v8; // r6
  char v9; // r2
  _BYTE *v10; // r1
  char v11; // t1
  char v12; // r3

  result = (char *)(a1 + 100);
  if ( result != a2 )
  {
    result[13] = a2[13];
    result[9] = a2[9];
    result[5] = a2[5];
    v3 = *a2;
    v4 = a2[1];
    v5 = a2[2];
    result[3] = a2[3];
    result[2] = v5;
    result[1] = v4;
    *result = v3;
    v6 = a2[14];
    v7 = a2[15];
    result[12] = a2[12];
    result[15] = v7;
    result[14] = v6;
    v8 = a2[10];
    v9 = a2[11];
    result[8] = a2[8];
    result[11] = v9;
    result[10] = v8;
    v11 = a2[4];
    v10 = a2 + 4;
    v12 = v10[2];
    LOBYTE(v10) = v10[3];
    result[4] = v11;
    result += 4;
    result[3] = (char)v10;
    result[2] = v12;
  }
  return result;
}
