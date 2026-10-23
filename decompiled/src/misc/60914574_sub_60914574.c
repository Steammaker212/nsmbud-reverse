/* sub_60914574
 * address: 0x60914574   size: 936   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60914574(int a1, int a2)
{
  _DWORD *v2; // lr
  int v3; // r10
  int v4; // r2
  int v5; // r12
  int v6; // r4
  int v7; // r9
  int v8; // r0
  int i; // r6
  int v10; // r4
  int v11; // r5
  int v12; // r6
  char *v13; // r4
  char *v14; // r7
  int v15; // r2
  int v16; // r4
  int v17; // r0
  int j; // r5
  int v19; // r2
  int v20; // r4
  int v21; // r5
  char *v22; // r2
  char *v23; // r3
  _DWORD *v24; // r3
  _DWORD *v25; // r0
  int v26; // r4
  int v27; // r5
  int v28; // r2
  int v29; // r6
  int v30; // r5
  _DWORD *v31; // r4
  int v32; // r2
  int v33; // r4
  int v34; // r0
  int v35; // r5
  int v36; // r4
  _DWORD *v37; // r2
  _DWORD *v38; // r3
  _DWORD *v39; // r0
  int v40; // r4
  int v41; // r5
  int v42; // r2
  int v43; // r6
  int v44; // r5
  _DWORD *v45; // r4
  _DWORD *result; // r0
  int v47; // r2
  int v48; // r7
  int v49; // r2

  v2 = *(_DWORD **)a1;
  v3 = 0;
  v4 = 0;
  v5 = *(_DWORD *)a1 + 16;
  v2[7] = v5 + *(_DWORD *)(*(_DWORD *)a1 + 28);
  v6 = v2[10];
  if ( v6 )
  {
    v7 = v2[9];
    v8 = a2;
    v4 = v5 + v6;
    if ( !a2 )
      v8 = v5;
    if ( v7 >= 1 )
    {
      for ( i = 0; (v7 & 3) != i; *(_DWORD *)(v4 + 16 * i++) += v8 )
        ;
      if ( (unsigned int)(v7 - 1) >= 3 )
      {
        v10 = v6 + 16 * i;
        v11 = v7 - i;
        v12 = 0;
        v13 = (char *)v2 + v10;
        do
        {
          v14 = &v13[16 * v12];
          v12 += 4;
          *((_DWORD *)v14 + 4) += v8;
          *((_DWORD *)v14 + 8) += v8;
          *((_DWORD *)v14 + 12) += v8;
          *((_DWORD *)v14 + 16) += v8;
        }
        while ( v11 != v12 );
      }
    }
  }
  v2[10] = v4;
  v15 = v2[13];
  if ( v15 )
  {
    v16 = v2[12];
    v17 = a2;
    v3 = v5 + v15;
    if ( !a2 )
      v17 = v5;
    if ( v16 >= 1 )
    {
      for ( j = 0; (v16 & 3) != j; *(_DWORD *)(v3 + 16 * j++) += v17 )
        ;
      if ( (unsigned int)(v16 - 1) >= 3 )
      {
        v19 = v15 + 16 * j;
        v20 = v16 - j;
        v21 = 0;
        v22 = (char *)v2 + v19;
        do
        {
          v23 = &v22[16 * v21];
          v21 += 4;
          *((_DWORD *)v23 + 4) += v17;
          *((_DWORD *)v23 + 8) += v17;
          *((_DWORD *)v23 + 12) += v17;
          *((_DWORD *)v23 + 16) += v17;
        }
        while ( v20 != v21 );
      }
    }
  }
  v2[13] = v3;
  v24 = 0;
  v25 = 0;
  v26 = v2[16];
  if ( v26 )
  {
    v27 = v2[15];
    v28 = a2;
    v25 = (_DWORD *)(v5 + v26);
    if ( !a2 )
      v28 = v5;
    if ( v27 >= 1 )
    {
      v29 = 0;
      if ( (v27 & 1) != 0 )
      {
        *v25 += v28;
        v29 = 1;
      }
      if ( v27 != 1 )
      {
        v30 = v27 - v29;
        v31 = (_DWORD *)((char *)&v2[3 * v29 + 7] + v26);
        do
        {
          v30 -= 2;
          *(v31 - 3) += v28;
          *v31 += v28;
          v31 += 6;
        }
        while ( v30 );
      }
    }
  }
  v2[16] = v25;
  v32 = v2[19];
  if ( v32 )
  {
    v33 = v2[18];
    v34 = a2;
    v24 = (_DWORD *)(v5 + v32);
    if ( !a2 )
      v34 = v5;
    if ( v33 >= 1 )
    {
      v35 = 0;
      if ( (v33 & 1) != 0 )
      {
        *v24 += v34;
        v35 = 1;
      }
      if ( v33 != 1 )
      {
        v36 = v33 - v35;
        v37 = (_DWORD *)((char *)&v2[3 * v35 + 7] + v32);
        do
        {
          v36 -= 2;
          *(v37 - 3) += v34;
          *v37 += v34;
          v37 += 6;
        }
        while ( v36 );
      }
    }
  }
  v2[19] = v24;
  v38 = 0;
  v39 = 0;
  v40 = v2[22];
  if ( v40 )
  {
    v41 = v2[21];
    v42 = a2;
    v39 = (_DWORD *)(v5 + v40);
    if ( !a2 )
      v42 = v5;
    if ( v41 >= 1 )
    {
      v43 = 0;
      if ( (v41 & 1) != 0 )
      {
        *v39 += v42;
        v43 = 1;
      }
      if ( v41 != 1 )
      {
        v44 = v41 - v43;
        v45 = (_DWORD *)((char *)&v2[3 * v43 + 7] + v40);
        do
        {
          v44 -= 2;
          *(v45 - 3) += v42;
          *v45 += v42;
          v45 += 6;
        }
        while ( v44 );
      }
    }
  }
  v2[22] = v39;
  result = (_DWORD *)v2[25];
  if ( result )
  {
    v47 = v2[24];
    v38 = (_DWORD *)((char *)result + v5);
    if ( !a2 )
      a2 = v5;
    if ( v47 >= 1 )
    {
      v48 = 0;
      if ( (v47 & 1) != 0 )
      {
        *v38 += a2;
        v48 = 1;
      }
      if ( v47 != 1 )
      {
        v49 = v47 - v48;
        result = (_DWORD *)((char *)&result[3 * v48 + 7] + (_DWORD)v2);
        do
        {
          v49 -= 2;
          *(result - 3) += a2;
          *result += a2;
          result += 6;
        }
        while ( v49 );
      }
    }
  }
  v2[25] = v38;
  return result;
}
