/* sub_60870C94
 * address: 0x60870C94   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60870C94(int a1, _DWORD *a2)
{
  int *v2; // r0
  _DWORD *result; // r0
  int v4; // r2
  int v5; // r3
  int v6; // r4
  int v7; // r12
  int v8; // lr
  _DWORD *v9; // r1
  int v10; // r3
  int v11; // r4
  int v12; // r5
  int v13; // r12
  int v14; // lr

  v2 = *(int **)(a1 + 32);
  v4 = *v2;
  v5 = v2[1];
  v6 = v2[2];
  v7 = v2[3];
  v8 = v2[4];
  result = v2 + 5;
  *a2 = v4;
  a2[1] = v5;
  a2[2] = v6;
  a2[3] = v7;
  a2[4] = v8;
  v9 = a2 + 5;
  v10 = result[1];
  v11 = result[2];
  v12 = result[3];
  v13 = result[4];
  v14 = result[5];
  *v9 = *result;
  v9[1] = v10;
  v9[2] = v11;
  v9[3] = v12;
  v9[4] = v13;
  v9[5] = v14;
  return result;
}
