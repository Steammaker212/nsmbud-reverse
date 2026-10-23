/* sub_6085402C
 * address: 0x6085402C   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_6085402C(int a1, int *a2)
{
  int *v2; // r1
  int v3; // r2
  int v4; // r3
  int v5; // r4
  int v6; // r12
  int v7; // lr
  _DWORD *v8; // r0
  int v9; // r2
  int v10; // r3
  int v11; // r4
  int v12; // r12
  int v13; // lr
  int *result; // r0
  int v15; // r3
  int v16; // r4
  int v17; // r5
  int v18; // r12
  int v19; // lr

  v3 = *a2;
  v4 = a2[1];
  v5 = a2[2];
  v6 = a2[3];
  v7 = a2[4];
  v2 = a2 + 5;
  v8 = (_DWORD *)(a1 + 16);
  *v8 = v3;
  v8[1] = v4;
  v8[2] = v5;
  v8[3] = v6;
  v8[4] = v7;
  v8 += 5;
  v9 = *v2;
  v10 = v2[1];
  v11 = v2[2];
  v12 = v2[3];
  v13 = v2[4];
  v2 += 5;
  *v8 = v9;
  v8[1] = v10;
  v8[2] = v11;
  v8[3] = v12;
  v8[4] = v13;
  result = v8 + 5;
  v15 = v2[1];
  v16 = v2[2];
  v17 = v2[3];
  v18 = v2[4];
  v19 = v2[5];
  *result = *v2;
  result[1] = v15;
  result[2] = v16;
  result[3] = v17;
  result[4] = v18;
  result[5] = v19;
  return result;
}
