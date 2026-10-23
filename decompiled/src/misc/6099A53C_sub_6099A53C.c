/* sub_6099A53C
 * address: 0x6099A53C   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6099A53C(int a1, int a2, unsigned int a3)
{
  int v3; // r6
  unsigned __int8 *v4; // r3
  unsigned int v5; // r12
  int v6; // r5
  int v7; // r6
  int v8; // lr
  int v9; // r5
  int v10; // r4
  unsigned int v11; // r5
  int v12; // r6
  char *v13; // r6
  int v14; // r5
  int v15; // r0
  unsigned int v16; // r7
  __int16 v17; // r6
  unsigned int v18; // r0
  int result; // r0

  v3 = FIELD_U32(a1, 12);
  v4 = (unsigned __int8 *)(v3 + *(_DWORD *)(FIELD_U32(a1, 16) + 12));
  v5 = a3 / (*((unsigned __int16 *)v4 + 7) * (unsigned int)*((unsigned __int16 *)v4 + 6));
  v6 = *((_DWORD *)v4 + 5);
  if ( v6 )
    v7 = v3 + v6 + *((_DWORD *)v4 + 1) * v5;
  else
    v7 = 0;
  *(_DWORD *)a2 = v7;
  v8 = FIELD_U32(a1, 16);
  v9 = FIELD_U32(v8, 16);
  if ( v9 )
  {
    v10 = FIELD_U32(a1, 12);
    while ( 1 )
    {
      v12 = v10 + v9;
      v11 = *(unsigned __int16 *)(v10 + v9);
      if ( v11 <= a3 && FIELD_U16(v12, 2) >= a3 )
        break;
      v9 = FIELD_U32(v12, 4);
      if ( !v9 )
        goto LABEL_9;
    }
    v13 = (char *)(v12 + 3 * (a3 - v11) + 8);
  }
  else
  {
LABEL_9:
    v13 = (char *)(v8 + 8);
  }
  FIELD_U16(a2, 4) = *v13;
  FIELD_U16(a2, 6) = (unsigned __int8)v13[1];
  FIELD_U16(a2, 8) = (unsigned __int8)v13[2];
  FIELD_U16(a2, 10) = (unsigned __int8)v13[1];
  FIELD_U32(a2, 28) = a1 + 24;
  FIELD_U8(a2, 27) = v5;
  FIELD_U8(a2, 26) = 0;
  FIELD_U16(a2, 32) = 0;
  v14 = v4[1];
  v15 = *((unsigned __int16 *)v4 + 7);
  v16 = *((unsigned __int16 *)v4 + 6);
  v17 = *v4;
  FIELD_U16(a2, 12) = v14;
  FIELD_U16(a2, 14) = v4[1];
  FIELD_U16(a2, 24) = *((_WORD *)v4 + 5) & 0x3FFF;
  FIELD_U16(a2, 16) = *((_WORD *)v4 + 8);
  FIELD_U16(a2, 18) = *((_WORD *)v4 + 9);
  v18 = a3 % (v15 * v16);
  FIELD_U16(a2, 20) = (v17 + 1) * (v18 % v16) + 1;
  result = (v14 + 1) * (v18 / v16) + 1;
  FIELD_U16(a2, 22) = result;
  return result;
}
