/* sub_600080BC
 * address: 0x600080BC   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_600080BC(_DWORD *result, _DWORD *a2)
{
  int v2; // r12
  int v3; // r3
  int v4; // r2
  int v5; // r0
  int v6; // r3
  int v7; // r4
  int v8; // r5
  int v9; // r6
  _DWORD *v10; // r0
  int v11; // r2
  int v12; // r3
  int v13; // r6

  v2 = result[7];
  v3 = result[9];
  if ( v3 < v2 )
  {
    result[9] = v3 + 1;
    v4 = result[6];
    v5 = result[8] + v3;
    v6 = v5 - v2;
    if ( v5 < v2 )
      v6 = v5;
    v7 = a2[1];
    v8 = a2[2];
    v9 = a2[3];
    *(_DWORD *)(v4 + 44 * v6) = *a2;
    v10 = (_DWORD *)(v4 + 44 * v6);
    v10[1] = v7;
    v10[2] = v8;
    v10[3] = v9;
    v10[4] = a2[4];
    v10[5] = a2[5];
    v10[6] = a2[6];
    v11 = a2[7];
    v12 = a2[8];
    v13 = a2[9];
    v10[10] = a2[10];
    result = v10 + 7;
    *result = v11;
    result[1] = v12;
    result[2] = v13;
  }
  return result;
}
