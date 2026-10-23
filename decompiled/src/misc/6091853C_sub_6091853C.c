/* sub_6091853C
 * address: 0x6091853C   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6091853C(_DWORD *a1, const char *a2, int a3)
{
  int v6; // r9
  size_t v7; // r6
  int v8; // r0
  int v9; // r3
  int *v10; // r5
  int v11; // r2
  int v12; // r5
  int v13; // r4
  unsigned __int16 *v14; // r0
  size_t v15; // r4
  size_t v16; // r2
  int v17; // r0
  int v18; // r1
  int result; // r0
  int v20; // r0
  _DWORD *v21; // r0
  int v22; // r1
  int v23; // r3

  v6 = FIELD_U32(a3, 56);
  if ( a2 )
    v7 = strlen(a2);
  else
    v7 = 0;
  v8 = FIELD_U16(v6, 12);
  v10 = (int *)(v6 + 8 + 16 * v8);
  v9 = *v10;
  if ( FIELD_U32(v6, 8) < *v10 )
  {
    v11 = v6 + 8;
    do
    {
      v12 = 0;
      if ( v7 > v9 >> 3 )
        v12 = ((unsigned __int8)a2[v7 + ~(v9 >> 3)] >> (v9 & 7)) & 1;
      v13 = *(_DWORD *)(v11 + 16 * v8);
      v8 = *(unsigned __int16 *)(v11 + 16 * v8 + 2 * v12 + 4);
      v10 = (int *)(v11 + 16 * v8);
      v9 = *v10;
    }
    while ( v13 < *v10 );
  }
  v14 = (unsigned __int16 *)v10[2];
  v15 = *v14;
  v16 = v15;
  if ( v7 < v15 )
    v16 = v7;
  if ( !v16 )
  {
    if ( v7 < v15 )
    {
LABEL_21:
      *a1 = 0;
      a1[2] = -1;
      a1[3] = -1;
      return -1;
    }
    goto LABEL_18;
  }
  v17 = memcmp(v14 + 1, a2, v16);
  v18 = v17;
  if ( !v17 )
    v18 = 1;
  if ( v7 >= v15 && !v17 )
  {
LABEL_18:
    v18 = 0;
    if ( v15 < v7 )
      v18 = -1;
  }
  if ( v18 )
    goto LABEL_21;
  v20 = (int)v10 - v6 - 24;
  if ( v20 >> 4 == -1 )
    goto LABEL_21;
  v21 = *(_DWORD **)(FIELD_U32(a3, 40) + 8 * (v20 >> 4));
  v22 = v21[34];
  v23 = v21[37];
  result = v21[36];
  *a1 = v22;
  a1[2] = result;
  a1[3] = v23;
  return result;
}
