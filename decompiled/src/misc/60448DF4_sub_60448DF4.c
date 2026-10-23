/* sub_60448DF4
 * address: 0x60448DF4   size: 752   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60448DF4(_DWORD *a1, signed int a2)
{
  int v4; // r0
  unsigned int v5; // r6
  int v6; // r0
  int v7; // r0
  int v8; // r7
  __int64 v9; // r0
  int v10; // r0
  int v11; // r0
  unsigned int v12; // r6
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  _DWORD *v19; // r0
  unsigned int v20; // r1
  bool v21; // zf
  unsigned int v22; // r2
  _DWORD *v23; // r1
  _DWORD *result; // r0
  unsigned int v25; // r1
  unsigned int v26; // r2
  _DWORD *v27; // r1
  int v28; // r1
  int v29; // r2
  int v30; // r3
  unsigned int v31; // r7
  _DWORD *v32; // r4
  _DWORD *v33; // r4
  _DWORD *v34; // r4
  _DWORD *v35; // r4
  _DWORD *v36; // r4
  _DWORD *v37; // r4
  _DWORD *v38; // r4
  _DWORD *v39; // r4
  _DWORD *v40; // r4
  _DWORD *v41; // r4
  _DWORD *v42; // r4

  v4 = (12 * (unsigned __int64)(unsigned int)a2) >> 32;
  v5 = 12 * a2;
  if ( !is_mul_ok(0xCu, a2) )
    v4 = 1;
  if ( v4 )
    v5 = -1;
  v6 = operator_new_8DE09C(v5);
  if ( a2 < 1 )
  {
    v8 = 0;
  }
  else
  {
    a1[17] = a2;
    a1[18] = v6;
    v7 = operator_new_8DE09C(v5);
    v8 = 1;
    a1[19] = a2;
    a1[20] = v7;
  }
  v9 = 8LL * (unsigned int)a2;
  if ( !is_mul_ok(8u, a2) )
    HIDWORD(v9) = 1;
  if ( HIDWORD(v9) )
    LODWORD(v9) = -1;
  v10 = operator_new_8DE09C(v9);
  if ( v8 == 1 )
  {
    a1[21] = a2;
    a1[22] = v10;
  }
  v11 = (unsigned __int64)(unsigned int)a2 >> 30;
  v12 = 4 * a2;
  if ( !is_mul_ok(4u, a2) )
    v11 = 1;
  if ( v11 )
    v12 = -1;
  v13 = operator_new_8DE09C(v12);
  if ( v8 == 1 )
  {
    a1[23] = a2;
    a1[24] = v13;
    v14 = operator_new_8DE09C(v12);
    a1[25] = a2;
    a1[26] = v14;
    v15 = operator_new_8DE09C(v12);
    a1[27] = a2;
    a1[28] = v15;
    v16 = operator_new_8DE09C(v12);
    a1[29] = a2;
    a1[30] = v16;
    v17 = operator_new_8DE09C(v12);
    a1[31] = a2;
    a1[32] = v17;
    v18 = operator_new_8DE09C(v12);
    a1[33] = a2;
    a1[34] = v18;
  }
  v19 = (_DWORD *)operator_new_8DE09C(v12);
  if ( a2 )
  {
    v20 = 4 * a2 - 4;
    v21 = ((v20 >> 2) & 1) == 0;
    v22 = v20 >> 2;
    v23 = v19;
    if ( v21 )
    {
      *v19 = 255;
      v23 = v19 + 1;
    }
    if ( v22 )
    {
      do
      {
        *v23 = 255;
        v23[1] = 255;
        v23 += 2;
      }
      while ( v23 != &v19[a2] );
    }
  }
  if ( v8 == 1 )
  {
    a1[35] = a2;
    a1[36] = v19;
  }
  result = (_DWORD *)operator_new_8DE09C(v12);
  if ( a2 )
  {
    v25 = 4 * a2 - 4;
    v21 = ((v25 >> 2) & 1) == 0;
    v26 = v25 >> 2;
    v27 = result;
    if ( v21 )
    {
      *result = 255;
      v27 = result + 1;
    }
    if ( v26 )
    {
      do
      {
        *v27 = 255;
        v27[1] = 255;
        v27 += 2;
      }
      while ( v27 != &result[a2] );
    }
  }
  if ( v8 == 1 )
  {
    a1[37] = a2;
    a1[38] = result;
  }
  if ( a2 >= 1 )
  {
    result = 0;
    v28 = 0;
    v29 = 0;
    v30 = 0;
    v31 = 0;
    do
    {
      v32 = (_DWORD *)a1[18];
      if ( a1[17] > v31 )
        v32 = (_DWORD *)((char *)v32 + v28);
      *v32 = 0;
      v32[1] = 0;
      v32[2] = 0;
      v33 = (_DWORD *)a1[20];
      if ( a1[19] > v31 )
        v33 = (_DWORD *)((char *)v33 + v28);
      v28 += 12;
      *v33 = 0;
      v33[1] = 0;
      v33[2] = 0;
      v34 = (_DWORD *)a1[22];
      if ( a1[21] > v31 )
        v34 = (_DWORD *)((char *)v34 + v29);
      v29 += 8;
      *v34 = 0;
      v34[1] = 0;
      v35 = (_DWORD *)a1[24];
      if ( a1[23] > v31 )
        v35 = (_DWORD *)((char *)v35 + v30);
      *v35 = 0;
      v36 = (_DWORD *)a1[26];
      if ( a1[25] > v31 )
        v36 = (_DWORD *)((char *)v36 + v30);
      *v36 = 0;
      v37 = (_DWORD *)a1[28];
      if ( a1[27] > v31 )
        v37 = (_DWORD *)((char *)v37 + v30);
      *v37 = 0;
      v38 = (_DWORD *)a1[30];
      if ( a1[29] > v31 )
        v38 = (_DWORD *)((char *)v38 + v30);
      *v38 = 0;
      v39 = (_DWORD *)a1[32];
      if ( a1[31] > v31 )
        v39 = (_DWORD *)((char *)v39 + v30);
      *v39 = 0;
      v40 = (_DWORD *)a1[34];
      if ( a1[33] > v31 )
        v40 = (_DWORD *)((char *)v40 + v30);
      *v40 = 0;
      v41 = (_DWORD *)a1[36];
      if ( a1[35] > v31 )
        v41 = (_DWORD *)((char *)v41 + v30);
      *v41 = 0;
      v42 = (_DWORD *)a1[38];
      if ( a1[37] > v31++ )
        v42 = (_DWORD *)((char *)v42 + v30);
      v30 += 4;
      *v42 = 0;
    }
    while ( a2 != v31 );
  }
  return result;
}
