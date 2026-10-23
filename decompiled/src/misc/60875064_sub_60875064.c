/* sub_60875064
 * address: 0x60875064   size: 460   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned __int8 *__fastcall sub_60875064(unsigned __int8 *result)
{
  int v1; // r9
  int v2; // r12
  int v3; // r1
  int v4; // r3
  int v5; // r2
  int v6; // lr
  int v7; // r3
  int v8; // r4
  unsigned __int16 *v9; // r5
  int v10; // r3
  int v11; // r7
  int v12; // r8
  int v13; // r5
  int v14; // r7
  int v15; // r2
  int v16; // r4
  int v17; // r6
  unsigned int v18; // r4
  int v19; // r5
  int v20; // r1
  int v21; // r2
  unsigned __int8 *v22; // r3
  unsigned __int8 *v23; // r7
  unsigned int v24; // r5
  unsigned int v25; // r6
  int v26; // r2
  int v27; // r2

  v1 = *(_DWORD *)result;
  v2 = result[13];
  v3 = 0;
  v4 = 0;
  v5 = *(unsigned __int8 *)(*(_DWORD *)result + 103);
  if ( *(_BYTE *)(*(_DWORD *)result + 103) )
  {
    v6 = FIELD_U32(v1, 32);
    if ( (v5 & 1) != 0 )
    {
      v7 = FIELD_U16(v6, 52);
      v8 = 1;
      if ( v5 == 1 )
      {
LABEL_8:
        v4 = 32 * v7;
        goto LABEL_9;
      }
    }
    else
    {
      v7 = 0;
      v8 = 0;
      if ( v5 == 1 )
        goto LABEL_8;
    }
    v9 = (unsigned __int16 *)(v6 + 56 * v8 + 108);
    do
    {
      v8 += 2;
      v10 = *(v9 - 28) + v7;
      v11 = *v9;
      v9 += 56;
      v7 = v11 + v10;
    }
    while ( v8 < v5 );
    goto LABEL_8;
  }
LABEL_9:
  v12 = *((_DWORD *)result + 4);
  v13 = *((_DWORD *)result + 1);
  v14 = *((_DWORD *)result + 2);
  v15 = result[12];
  v16 = FIELD_U8(v1, 104);
  *((_DWORD *)result + 10) = -1;
  *((_DWORD *)result + 12) = 8;
  *((_DWORD *)result + 13) = 0;
  *((_DWORD *)result + 14) = -1;
  *((_DWORD *)result + 18) = -1;
  *((_DWORD *)result + 22) = -1;
  *((_DWORD *)result + 23) = 0;
  *((_DWORD *)result + 26) = -1;
  *((_DWORD *)result + 27) = 0;
  *((_DWORD *)result + 28) = 8;
  *((_DWORD *)result + 29) = 0;
  *((_DWORD *)result + 30) = -1;
  v17 = 4 * v16;
  v18 = v16 + 31;
  if ( !v15 )
    v14 = 1;
  *((_DWORD *)result + 8) = 16;
  *((_DWORD *)result + 9) = 0;
  v19 = v13 * v14;
  if ( !v2 )
    v4 = 0;
  *((_DWORD *)result + 7) = v4;
  *((_DWORD *)result + 11) = 72 * v19;
  *((_DWORD *)result + 16) = 4;
  *((_DWORD *)result + 17) = 0;
  *((_DWORD *)result + 15) = v17;
  *((_DWORD *)result + 20) = 4;
  *((_DWORD *)result + 21) = 0;
  *((_DWORD *)result + 19) = (v18 >> 3) & 0x3C;
  *((_DWORD *)result + 24) = 16;
  *((_DWORD *)result + 25) = 0;
  if ( v2 )
    v3 = FIELD_U8(v1, 103) << 6;
  *((_DWORD *)result + 23) = v3;
  *((_DWORD *)result + 27) = (v12 + 7) & 0xFFFFFFF8;
  v20 = 0;
  v21 = 0;
  *((_DWORD *)result + 5) = 0;
  *((_DWORD *)result + 6) = 8;
  if ( v4 )
    goto LABEL_18;
  while ( v20 != 80 )
  {
    v22 = &result[v20];
    v20 += 16;
    v4 = *((_DWORD *)v22 + 11);
    if ( v4 )
    {
LABEL_18:
      v23 = &result[v20];
      v24 = *((_DWORD *)result + 6);
      v25 = *(_DWORD *)&result[v20 + 32];
      if ( v24 < v25 )
        v24 = *(_DWORD *)&result[v20 + 32];
      *((_DWORD *)result + 6) = v24;
      v26 = (v21 + *((_DWORD *)v23 + 9) + v25 - 1) & -v25;
      *((_DWORD *)result + 5) = v26;
      v27 = v26 - *((_DWORD *)v23 + 9);
      *((_DWORD *)v23 + 10) = v27;
      v21 = v4 + v27;
      *((_DWORD *)result + 5) = v21;
    }
  }
  return result;
}
