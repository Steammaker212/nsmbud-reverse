/* sub_60971980
 * address: 0x60971980   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int *__fastcall sub_60971980(int a1, int *a2, int a3, int a4)
{
  _DWORD *v7; // r1
  int v8; // r2
  int v9; // r3
  int v10; // r4
  int v11; // r6
  int v12; // r7
  int v14; // r0
  int v15; // r2
  int v16; // r3
  int v17; // r4
  int v18; // r6
  int v19; // r7
  int v20; // r2
  int v21; // r3
  int v22; // r4
  int v23; // r6
  int v24; // r7
  unsigned int *result; // r0
  unsigned int v26; // r1
  unsigned int v27; // r2
  unsigned int v28; // r1

  v8 = *a2;
  v9 = a2[1];
  v10 = a2[2];
  v11 = a2[3];
  v12 = a2[4];
  v7 = a2 + 5;
  *(_DWORD *)a1 = v8;
  FIELD_U32(a1, 4) = v9;
  FIELD_U32(a1, 8) = v10;
  FIELD_U32(a1, 12) = v11;
  FIELD_U32(a1, 16) = v12;
  v14 = a1 + 20;
  v15 = *v7;
  v16 = v7[1];
  v17 = v7[2];
  v18 = v7[3];
  v19 = v7[4];
  v7 += 5;
  *(_DWORD *)v14 = v15;
  FIELD_U32(v14, 4) = v16;
  FIELD_U32(v14, 8) = v17;
  FIELD_U32(v14, 12) = v18;
  FIELD_U32(v14, 16) = v19;
  v14 += 20;
  v20 = *v7;
  v21 = v7[1];
  v22 = v7[2];
  v23 = v7[3];
  v24 = v7[4];
  v7 += 5;
  *(_DWORD *)v14 = v20;
  FIELD_U32(v14, 4) = v21;
  FIELD_U32(v14, 8) = v22;
  FIELD_U32(v14, 12) = v23;
  FIELD_U32(v14, 16) = v24;
  v14 += 20;
  LOWORD(v20) = *(_WORD *)v7;
  FIELD_U8(v14, 2) = *((_BYTE *)v7 + 2);
  *(_WORD *)v14 = v20;
  sub_60917754(a1 + 64, (int)(a2 + 16));
  FIELD_U32(a1, 264) = a2[66];
  result = (unsigned int *)(a1 + 272);
  do
    v26 = __ldrex(result);
  while ( __strex(v26 | 4, result) );
  if ( FIELD_U16(a1, 276) != a4 )
  {
    do
      v27 = __ldrex(result);
    while ( __strex(v27 | 2, result) );
    FIELD_U16(a1, 276) = a4;
  }
  if ( FIELD_U8(a1, 278) != a3 )
  {
    do
      v28 = __ldrex(result);
    while ( __strex(v28 | 1, result) );
    FIELD_U8(a1, 278) = a3;
  }
  return result;
}
