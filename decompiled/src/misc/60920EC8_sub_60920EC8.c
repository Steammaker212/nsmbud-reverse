/* sub_60920EC8
 * address: 0x60920EC8   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int *__fastcall sub_60920EC8(int a1, int *a2)
{
  _DWORD *v3; // r1
  int v4; // r2
  int v5; // r3
  int v6; // r4
  int v7; // r6
  int v8; // r7
  int v10; // r0
  int v11; // r2
  int v12; // r3
  int v13; // r4
  int v14; // r6
  int v15; // r7
  int v16; // r2
  int v17; // r3
  int v18; // r4
  int v19; // r6
  int v20; // r7
  unsigned int *result; // r0
  unsigned int v22; // r1

  v4 = *a2;
  v5 = a2[1];
  v6 = a2[2];
  v7 = a2[3];
  v8 = a2[4];
  v3 = a2 + 5;
  v10 = a1 + 16;
  *(_DWORD *)v10 = v4;
  FIELD_U32(v10, 4) = v5;
  FIELD_U32(v10, 8) = v6;
  FIELD_U32(v10, 12) = v7;
  FIELD_U32(v10, 16) = v8;
  v10 += 20;
  v11 = *v3;
  v12 = v3[1];
  v13 = v3[2];
  v14 = v3[3];
  v15 = v3[4];
  v3 += 5;
  *(_DWORD *)v10 = v11;
  FIELD_U32(v10, 4) = v12;
  FIELD_U32(v10, 8) = v13;
  FIELD_U32(v10, 12) = v14;
  FIELD_U32(v10, 16) = v15;
  v10 += 20;
  v16 = *v3;
  v17 = v3[1];
  v18 = v3[2];
  v19 = v3[3];
  v20 = v3[4];
  v3 += 5;
  *(_DWORD *)v10 = v16;
  FIELD_U32(v10, 4) = v17;
  FIELD_U32(v10, 8) = v18;
  FIELD_U32(v10, 12) = v19;
  FIELD_U32(v10, 16) = v20;
  v10 += 20;
  LOWORD(v16) = *(_WORD *)v3;
  FIELD_U8(v10, 2) = *((_BYTE *)v3 + 2);
  *(_WORD *)v10 = v16;
  sub_60917754(a1 + 80, (int)(a2 + 16));
  FIELD_U32(a1, 280) = a2[66];
  result = (unsigned int *)(a1 + 328);
  do
    v22 = __ldrex(result);
  while ( __strex(v22 | 1, result) );
  return result;
}
