/* sub_6081EE98
 * address: 0x6081EE98   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6081EE98(int a1, _BYTE *a2)
{
  _BYTE *v2; // r0
  char v3; // t1
  char v4; // r3
  char v5; // t1
  char v6; // lr
  char v7; // t1
  char v8; // t1
  char v9; // r2
  char v10; // r6
  char v11; // r4
  char v12; // r5
  char v13; // r3
  char v14; // r4
  char v15; // r2
  char v16; // r3
  char v17; // r2
  int result; // r0
  _BYTE *v19; // r1

  v3 = FIELD_U8(a1, 100);
  v2 = (_BYTE *)(a1 + 100);
  *a2 = v3;
  v5 = v2[12];
  v2 += 12;
  v4 = v5;
  v7 = *(v2 - 4);
  v2 -= 4;
  v6 = v7;
  v8 = *(v2 - 4);
  v2 -= 4;
  a2[13] = v2[9];
  v9 = v4;
  v10 = *(v2 - 1);
  v11 = *(v2 - 3);
  v12 = *(v2 - 2);
  a2[5] = v2[1];
  a2[3] = v10;
  a2[9] = v2[5];
  a2[2] = v12;
  a2[1] = v11;
  v13 = v2[11];
  v14 = v2[10];
  a2[12] = v9;
  a2[15] = v13;
  a2[14] = v14;
  v15 = v2[7];
  v16 = v2[6];
  a2[8] = v6;
  a2[11] = v15;
  a2[10] = v16;
  v17 = v2[3];
  result = (unsigned __int8)v2[2];
  a2[4] = v8;
  v19 = a2 + 4;
  v19[3] = v17;
  v19[2] = result;
  return result;
}
